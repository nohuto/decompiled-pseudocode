/*
 * XREFs of ZombieCursor @ 0x1C01EAD50
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C0113C30 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

__int64 __fastcall ZombieCursor(__int64 a1)
{
  int v1; // eax
  int v3; // edi
  __int64 v4; // rsi

  v1 = *(_DWORD *)(a1 + 80);
  if ( (v1 & 0x100) != 0 )
  {
    UnlinkCursor((struct tagCURSOR *)a1);
    v1 = *(_DWORD *)(a1 + 80);
  }
  if ( (v1 & 8) != 0 )
  {
    v3 = 0;
    if ( *(int *)(a1 + 88) > 0 )
    {
      v4 = 0LL;
      do
      {
        HMChangeOwnerProcessWorker(*(_QWORD *)(*(_QWORD *)(a1 + 96) + v4), gptiRit);
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *(_DWORD *)(a1 + 88) );
    }
  }
  return HMChangeOwnerProcessWorker(a1, gptiRit);
}
