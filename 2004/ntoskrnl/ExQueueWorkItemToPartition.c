/*
 * XREFs of ExQueueWorkItemToPartition @ 0x1402C7E8C
 * Callers:
 *     CcWriteBehind @ 0x1402C5514 (CcWriteBehind.c)
 *     CcWorkerThread @ 0x1402C6C30 (CcWorkerThread.c)
 *     CcPostWorkQueueRegular @ 0x1402C75E4 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1402C779C (CcPostWorkQueueCachemapUninit.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402C8154 (CcPostWorkQueueAsyncRead.c)
 *     MiScanPagefiles @ 0x1402F35B8 (MiScanPagefiles.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x1402F3674 (MiCheckTrimUnusedPageFileRegions.c)
 *     MmInSwapWorkingSet @ 0x14030DA98 (MmInSwapWorkingSet.c)
 *     MiCheckZeroFreeRebalance @ 0x14031E250 (MiCheckZeroFreeRebalance.c)
 *     CcReEngageWorkerThreads @ 0x14037DF10 (CcReEngageWorkerThreads.c)
 *     MiWakeLargePageRebuild @ 0x14038ABE0 (MiWakeLargePageRebuild.c)
 *     CcAsyncReadWorker @ 0x1403B4950 (CcAsyncReadWorker.c)
 *     CcIncrementWriteBehindPriority @ 0x1404E4A0C (CcIncrementWriteBehindPriority.c)
 *     MiContractWsSwapPageFile @ 0x1406D05B8 (MiContractWsSwapPageFile.c)
 *     MiInSwapStore @ 0x1406D0668 (MiInSwapStore.c)
 *     MmScrubMemory @ 0x1408D8B1C (MmScrubMemory.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402B7B10 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1402B9C18 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1402B9C38 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
