/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1406D2830
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     RtlpLookupLowBox @ 0x140233798 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlpLockAtomTable @ 0x140628BC4 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140628C10 (RtlpAtomMapAtomToHandleEntry.c)
 */

__int64 __fastcall RtlPinAtomInAtomTable(__int64 a1, unsigned __int16 a2)
{
  int v4; // eax
  unsigned __int64 v5; // rax
  __int64 *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-28h]

  if ( !RtlpLockAtomTable((_DWORD *)a1) )
    return 3221225485LL;
  v4 = -1073741816;
  v8 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v4 = 0;
    v8 = v4;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == a2 )
      {
        v6 = RtlpLookupLowBox(a1, v5, 0);
        if ( v6 )
        {
          v8 = 0;
          *((_WORD *)v6 + 11) |= 1u;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegion();
  return v8;
}
