/*
 * XREFs of ExQueueWorkItemToPartition @ 0x1402EF060
 * Callers:
 *     CcReEngageWorkerThreads @ 0x14025A794 (CcReEngageWorkerThreads.c)
 *     MmInSwapWorkingSet @ 0x14025F4D4 (MmInSwapWorkingSet.c)
 *     MiWorkingSetManager @ 0x140267320 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x140268BEC (MiScanPagefiles.c)
 *     CcPostWorkQueueCachemapUninit @ 0x140274E94 (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehind @ 0x140275FC0 (CcWriteBehind.c)
 *     CcPostWorkQueueRegular @ 0x1402EEC18 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402F5AEC (CcPostWorkQueueAsyncRead.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     CcWorkerThread @ 0x14035D970 (CcWorkerThread.c)
 *     CcIncrementWriteBehindPriority @ 0x140376BFC (CcIncrementWriteBehindPriority.c)
 *     MiWakeLargePageRebuild @ 0x140397C78 (MiWakeLargePageRebuild.c)
 *     CcAsyncReadWorker @ 0x1403C4AE0 (CcAsyncReadWorker.c)
 *     CcPostWorkQueueSpecial @ 0x140539A1C (CcPostWorkQueueSpecial.c)
 *     MiInSwapStore @ 0x1406EBCCC (MiInSwapStore.c)
 *     MiContractWsSwapPageFile @ 0x1406EC1C4 (MiContractWsSwapPageFile.c)
 *     MmScrubMemory @ 0x140983C8C (MmScrubMemory.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402EF0CC (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1402EF304 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x140346210 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemToPartition(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR BugCheckParameter4; // rbp
  int v8; // eax
  __int64 result; // rax

  v4 = a2;
  BugCheckParameter4 = a3;
  ExpValidateWorkItem(BugCheckParameter2);
  v8 = ExpTypeToPriority((unsigned int)v4);
  result = ExpQueueWorkItem(*(_QWORD *)(a4 + 16), BugCheckParameter2, v8, BugCheckParameter4, 0);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, BugCheckParameter2, v4, BugCheckParameter4);
  return result;
}
