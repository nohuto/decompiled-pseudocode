/*
 * XREFs of MiLockVadCore @ 0x14033C8DC
 * Callers:
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14024B47C (MiCaptureWriteWatchDirtyBit.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 */

unsigned __int8 __fastcall MiLockVadCore(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // di
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v6 = *(_DWORD *)(a1 + 48);
  do
  {
    while ( (v6 & 1) != 0 )
    {
      if ( (v6 & 2) != 0 )
      {
        v9 = 0;
        do
        {
          KeYieldProcessorEx(&v9, a2, a3, (__int64)SchedulerAssist);
          v6 = *(_DWORD *)(a1 + 48);
        }
        while ( (v6 & 1) != 0 );
      }
      else
      {
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v6 | 2, v6);
      }
    }
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v6 & 0xFFFFFFFC | 1, v6);
  }
  while ( v7 != v6 );
  return CurrentIrql;
}
