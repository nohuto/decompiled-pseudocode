/*
 * XREFs of MiLockVadCore @ 0x1403106E0
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x1402358D4 (MiCaptureWriteWatchDirtyBit.c)
 *     MiRemoveSecureEntry @ 0x140281480 (MiRemoveSecureEntry.c)
 *     MiMoveDirtyBitsToPfns @ 0x14028E8E0 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     MiSetVadFlags @ 0x14030B950 (MiSetVadFlags.c)
 *     MiSetVadDeleted @ 0x14030FC20 (MiSetVadDeleted.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockVadCore(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
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
