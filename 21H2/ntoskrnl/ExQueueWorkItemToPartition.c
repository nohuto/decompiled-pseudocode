/*
 * XREFs of ExQueueWorkItemToPartition @ 0x1402F78AC
 * Callers:
 *     MiCheckTrimUnusedPageFileRegions @ 0x14027318C (MiCheckTrimUnusedPageFileRegions.c)
 *     MiScanPagefiles @ 0x1402732EC (MiScanPagefiles.c)
 *     CcWorkerThread @ 0x1402F31F0 (CcWorkerThread.c)
 *     CcWriteBehind @ 0x1402F6160 (CcWriteBehind.c)
 *     CcPostWorkQueueRegular @ 0x1402F7008 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1402F71C0 (CcPostWorkQueueCachemapUninit.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402F8664 (CcPostWorkQueueAsyncRead.c)
 *     MiCheckZeroFreeRebalance @ 0x140318D50 (MiCheckZeroFreeRebalance.c)
 *     MmInSwapWorkingSet @ 0x14035C504 (MmInSwapWorkingSet.c)
 *     CcReEngageWorkerThreads @ 0x140380480 (CcReEngageWorkerThreads.c)
 *     MiWakeLargePageRebuild @ 0x14038D600 (MiWakeLargePageRebuild.c)
 *     CcAsyncReadWorker @ 0x1403B7950 (CcAsyncReadWorker.c)
 *     CcIncrementWriteBehindPriority @ 0x1404E9B2C (CcIncrementWriteBehindPriority.c)
 *     MiInSwapStore @ 0x1407103DC (MiInSwapStore.c)
 *     MiContractWsSwapPageFile @ 0x14071068C (MiContractWsSwapPageFile.c)
 *     MmScrubMemory @ 0x1408DC11C (MmScrubMemory.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14023E6E8 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x14023E730 (ExpTypeToPriority.c)
 *     ExpQueueWorkItem @ 0x1402414A0 (ExpQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
