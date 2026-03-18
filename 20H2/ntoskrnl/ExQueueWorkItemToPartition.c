/*
 * XREFs of ExQueueWorkItemToPartition @ 0x1402D4564
 * Callers:
 *     MiCheckZeroFreeRebalance @ 0x1402310F0 (MiCheckZeroFreeRebalance.c)
 *     CcPostWorkQueueAsyncRead @ 0x140248F44 (CcPostWorkQueueAsyncRead.c)
 *     CcWorkerThread @ 0x140249690 (CcWorkerThread.c)
 *     CcWriteBehind @ 0x14024A910 (CcWriteBehind.c)
 *     CcPostWorkQueueRegular @ 0x14024B058 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x14024B210 (CcPostWorkQueueCachemapUninit.c)
 *     MiScanPagefiles @ 0x140265F58 (MiScanPagefiles.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x140266014 (MiCheckTrimUnusedPageFileRegions.c)
 *     MmInSwapWorkingSet @ 0x140339228 (MmInSwapWorkingSet.c)
 *     CcReEngageWorkerThreads @ 0x14037FC40 (CcReEngageWorkerThreads.c)
 *     MiWakeLargePageRebuild @ 0x14038CEE0 (MiWakeLargePageRebuild.c)
 *     CcAsyncReadWorker @ 0x1403B6310 (CcAsyncReadWorker.c)
 *     CcIncrementWriteBehindPriority @ 0x1404E7F9C (CcIncrementWriteBehindPriority.c)
 *     MiContractWsSwapPageFile @ 0x1406F0C78 (MiContractWsSwapPageFile.c)
 *     MiInSwapStore @ 0x1406F0CBC (MiInSwapStore.c)
 *     MmScrubMemory @ 0x1408DE95C (MmScrubMemory.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x14028DAE0 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1402D49F8 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1402D4A18 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemToPartition(_QWORD *BugCheckParameter2, int a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR BugCheckParameter4; // rbp
  int v8; // eax
  __int64 result; // rax

  v4 = a2;
  BugCheckParameter4 = a3;
  ExpValidateWorkItem((ULONG_PTR)BugCheckParameter2);
  v8 = ExpTypeToPriority((unsigned int)v4);
  result = ExpQueueWorkItem(*(_QWORD *)(a4 + 16), BugCheckParameter2, v8, BugCheckParameter4, 0);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v4, BugCheckParameter4);
  return result;
}
