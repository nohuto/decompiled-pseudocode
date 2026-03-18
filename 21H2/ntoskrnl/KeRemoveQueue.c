/*
 * XREFs of KeRemoveQueue @ 0x14023FFE0
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x1403C6970 (ExpWorkerFactoryManagerThread.c)
 *     FsRtlWorkerThread @ 0x1403DD920 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x1403DE2B0 (IopPassiveInterruptRealtimeWorker.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406B9918 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  EntryArray = 0LL;
  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
