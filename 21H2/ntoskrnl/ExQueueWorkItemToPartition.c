/*
 * XREFs of ExQueueWorkItemToPartition @ 0x1403025FC
 * Callers:
 *     MiCheckTrimUnusedPageFileRegions @ 0x14026112C (MiCheckTrimUnusedPageFileRegions.c)
 *     MiScanPagefiles @ 0x14026128C (MiScanPagefiles.c)
 *     MmInSwapWorkingSet @ 0x1402A1434 (MmInSwapWorkingSet.c)
 *     CcWorkerThread @ 0x1402FDF40 (CcWorkerThread.c)
 *     CcWriteBehind @ 0x140300EB0 (CcWriteBehind.c)
 *     CcPostWorkQueueRegular @ 0x140301D58 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x140301F10 (CcPostWorkQueueCachemapUninit.c)
 *     CcPostWorkQueueAsyncRead @ 0x1403033B4 (CcPostWorkQueueAsyncRead.c)
 *     MiCheckZeroFreeRebalance @ 0x140323AA0 (MiCheckZeroFreeRebalance.c)
 *     CcReEngageWorkerThreads @ 0x14037FFD0 (CcReEngageWorkerThreads.c)
 *     MiWakeLargePageRebuild @ 0x14038D750 (MiWakeLargePageRebuild.c)
 *     CcAsyncReadWorker @ 0x1403B7AC0 (CcAsyncReadWorker.c)
 *     CcIncrementWriteBehindPriority @ 0x1404E9D6C (CcIncrementWriteBehindPriority.c)
 *     MiInSwapStore @ 0x1406BEA2C (MiInSwapStore.c)
 *     MiContractWsSwapPageFile @ 0x1406BECDC (MiContractWsSwapPageFile.c)
 *     MmScrubMemory @ 0x1408DC27C (MmScrubMemory.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x1402E2F38 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x1402E2F80 (ExpTypeToPriority.c)
 *     ExpQueueWorkItem @ 0x1402E5CF0 (ExpQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemToPartition(_QWORD *BugCheckParameter2, int a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR BugCheckParameter4; // rbp
  int v8; // eax
  __int64 result; // rax

  v4 = a2;
  BugCheckParameter4 = a3;
  ExpValidateWorkItem(BugCheckParameter2, a2);
  v8 = ExpTypeToPriority(v4);
  result = ExpQueueWorkItem(*(_QWORD *)(a4 + 16), BugCheckParameter2, v8, BugCheckParameter4, 0);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v4, BugCheckParameter4);
  return result;
}
