/*
 * XREFs of PnpTrackQueryRemoveDevices @ 0x140734690
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140736AD4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessCompletedEject @ 0x1408A2610 (PnpProcessCompletedEject.c)
 * Callees:
 *     IopEnumerateRelations @ 0x1407386B0 (IopEnumerateRelations.c)
 *     PipClearDevNodeUserFlags @ 0x140749D74 (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeUserFlags @ 0x14074C4EC (PipSetDevNodeUserFlags.c)
 */

__int64 __fastcall PnpTrackQueryRemoveDevices(int a1, char a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // [rsp+50h] [rbp+18h] BYREF
  int v7; // [rsp+54h] [rbp+1Ch]
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    result = IopEnumerateRelations(a1, (unsigned int)&v6, (unsigned int)&v8, 0, 0LL);
    if ( !(_BYTE)result )
      break;
    if ( v8 )
      v5 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
    else
      v5 = 0LL;
    if ( a2 )
      PipSetDevNodeUserFlags(v5, 256LL);
    else
      PipClearDevNodeUserFlags(v5, 256LL);
  }
  return result;
}
