/*
 * XREFs of MiLockVadCore @ 0x14022DD18
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x14027C6CC (MiCaptureWriteWatchDirtyBit.c)
 *     NtGetWriteWatch @ 0x1403373A0 (NtGetWriteWatch.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 */

unsigned __int8 __fastcall MiLockVadCore(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  _DWORD *SchedulerAssist; // r9
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v3 = *(_DWORD *)(a1 + 48);
  do
  {
    while ( (v3 & 1) != 0 )
    {
      if ( (v3 & 2) != 0 )
      {
        v7 = 0;
        do
        {
          KeYieldProcessorEx(&v7);
          v3 = *(_DWORD *)(a1 + 48);
        }
        while ( (v3 & 1) != 0 );
      }
      else
      {
        v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v3 | 2, v3);
      }
    }
    v4 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v3 & 0xFFFFFFFC | 1, v3);
  }
  while ( v4 != v3 );
  return CurrentIrql;
}
