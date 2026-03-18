/*
 * XREFs of MiFlushAllHintedStorePages @ 0x14031056C
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x1406D29EC (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402F1DF8 (MiStoreUpdateMemoryConditions.c)
 *     MiWakeModifiedPageWriter @ 0x140310698 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x1403106F4 (MiCanFlushMakeProgress.c)
 */

__int64 __fastcall MiFlushAllHintedStorePages(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r8
  _DWORD *v10; // r9

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  if ( !dword_140C51008 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v6 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18LL, a3, a4);
  v7 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_140C51000, 2u);
  v8 = 5LL * (unsigned int)dword_140C51004;
  while ( *(&MiSystemPartition + v8 + 352) )
  {
    if ( (unsigned int)MiCanFlushMakeProgress(&MiSystemPartition, 1LL) )
    {
      MiWakeModifiedPageWriter(&MiSystemPartition, -1LL);
      MiStoreUpdateMemoryConditions((__int64)&MiSystemPartition);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v7) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v5 = 1;
LABEL_8:
  _InterlockedOr(&dword_140C51000, 1u);
  _InterlockedExchangeAdd(&dword_140C51000, 0xFFFFFFFE);
  KeSetEvent(&stru_140C50EF0, 0, 0);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v6, v9, v10);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v5;
}
