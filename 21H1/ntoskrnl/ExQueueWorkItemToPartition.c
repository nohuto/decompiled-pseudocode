/*
 * XREFs of ExQueueWorkItemToPartition @ 0x14023505C
 * Callers:
 *     CcWriteBehind @ 0x1402326E4 (CcWriteBehind.c)
 *     CcWorkerThread @ 0x140233E00 (CcWorkerThread.c)
 *     CcPostWorkQueueRegular @ 0x1402347B4 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x14023496C (CcPostWorkQueueCachemapUninit.c)
 *     CcPostWorkQueueAsyncRead @ 0x140235324 (CcPostWorkQueueAsyncRead.c)
 *     MiScanPagefiles @ 0x1402402B8 (MiScanPagefiles.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x140240374 (MiCheckTrimUnusedPageFileRegions.c)
 *     MmInSwapWorkingSet @ 0x1402CBE58 (MmInSwapWorkingSet.c)
 *     MiCheckZeroFreeRebalance @ 0x1402EAA00 (MiCheckZeroFreeRebalance.c)
 *     CcReEngageWorkerThreads @ 0x14037D450 (CcReEngageWorkerThreads.c)
 *     MiWakeLargePageRebuild @ 0x140389B70 (MiWakeLargePageRebuild.c)
 *     CcAsyncReadWorker @ 0x1403B2B50 (CcAsyncReadWorker.c)
 *     CcIncrementWriteBehindPriority @ 0x1404E445C (CcIncrementWriteBehindPriority.c)
 *     MiContractWsSwapPageFile @ 0x140655F58 (MiContractWsSwapPageFile.c)
 *     MiInSwapStore @ 0x140656008 (MiInSwapStore.c)
 *     MmScrubMemory @ 0x1408D77CC (MmScrubMemory.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x140224E90 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x140226F98 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x140226FB8 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
