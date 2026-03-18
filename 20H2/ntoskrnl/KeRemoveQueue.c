/*
 * XREFs of KeRemoveQueue @ 0x140206110
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x1403B5F60 (ExpWorkerFactoryManagerThread.c)
 *     FsRtlWorkerThread @ 0x1403CDE20 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x1403CE630 (IopPassiveInterruptRealtimeWorker.c)
 *     KiBlockAndActivateUmsThread @ 0x1405241E8 (KiBlockAndActivateUmsThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x14071BC7C (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x140207B10 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  EntryArray = 0LL;
  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
