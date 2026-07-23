/*
 * XREFs of MiFlushAllHintedStorePages @ 0x1402A0AE0
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x1406BD774 (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x14025F284 (MiStoreUpdateMemoryConditions.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     MiCanFlushMakeProgress @ 0x1402A0A20 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x1402A0A84 (MiWakeModifiedPageWriter.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 MiFlushAllHintedStorePages()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v1; // ebx
  unsigned int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rsi

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  if ( !dword_140C51248 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v2 = KeSetActualBasePriorityThread(CurrentThread, 18LL);
  v3 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_140C51240, 2u);
  v4 = 5LL * (unsigned int)dword_140C51244;
  while ( *(&MiSystemPartition + v4 + 352) )
  {
    if ( (unsigned int)MiCanFlushMakeProgress((__int64)&MiSystemPartition, 1) )
    {
      MiWakeModifiedPageWriter((__int64)&MiSystemPartition, -1LL);
      MiStoreUpdateMemoryConditions((__int64)&MiSystemPartition);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v3) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v1 = 1;
LABEL_8:
  _InterlockedOr(&dword_140C51240, 1u);
  _InterlockedExchangeAdd(&dword_140C51240, 0xFFFFFFFE);
  KeSetEvent(&stru_140C51130, 0, 0);
  KeSetActualBasePriorityThread(CurrentThread, v2);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  return v1;
}
