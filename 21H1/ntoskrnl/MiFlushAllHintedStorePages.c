/*
 * XREFs of MiFlushAllHintedStorePages @ 0x1402D0518
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x1406564DC (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     MiWakeModifiedPageWriter @ 0x1402D0644 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x1402D06A0 (MiCanFlushMakeProgress.c)
 *     MiStoreUpdateMemoryConditions @ 0x140336F38 (MiStoreUpdateMemoryConditions.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  if ( !dword_140C51108 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v6 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18LL, a3, a4);
  v7 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_140C51100, 2u);
  v8 = 5LL * (unsigned int)dword_140C51104;
  while ( *(&MiSystemPartition + v8 + 352) )
  {
    if ( (unsigned int)MiCanFlushMakeProgress(&MiSystemPartition, 1LL) )
    {
      MiWakeModifiedPageWriter(&MiSystemPartition, -1LL);
      MiStoreUpdateMemoryConditions(&MiSystemPartition);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v7) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v5 = 1;
LABEL_8:
  _InterlockedOr(&dword_140C51100, 1u);
  _InterlockedExchangeAdd(&dword_140C51100, 0xFFFFFFFE);
  KeSetEvent(&stru_140C50FF0, 0, 0);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v6, v9, v10);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v11, v12, v13);
  return v5;
}
