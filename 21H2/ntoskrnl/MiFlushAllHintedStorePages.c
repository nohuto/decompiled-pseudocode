/*
 * XREFs of MiFlushAllHintedStorePages @ 0x1403773D8
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x1407F8CD8 (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     MiWakeModifiedPageWriter @ 0x14025C460 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402664E8 (MiStoreUpdateMemoryConditions.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiCanFlushMakeProgress @ 0x140388F60 (MiCanFlushMakeProgress.c)
 */

__int64 MiFlushAllHintedStorePages()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v1; // edi
  unsigned int v2; // r14d
  __int64 v3; // r15
  __int64 v4; // rbp

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  if ( !dword_140C55418 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v2 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 0x12u);
  v3 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_140C55410, 2u);
  v4 = 88LL * (unsigned int)dword_140C55414;
  while ( *(ULONG_PTR *)((char *)&MiSystemPartition + v4 + 3712) )
  {
    if ( (unsigned int)MiCanFlushMakeProgress(&MiSystemPartition, 1LL) )
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
  _InterlockedOr(&dword_140C55410, 1u);
  _InterlockedExchangeAdd(&dword_140C55410, 0xFFFFFFFE);
  KeSetEvent(&stru_140C55308, 0, 0);
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v2);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  return v1;
}
