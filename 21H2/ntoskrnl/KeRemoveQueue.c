/*
 * XREFs of KeRemoveQueue @ 0x1402A7710
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x1403B7710 (ExpWorkerFactoryManagerThread.c)
 *     FsRtlWorkerThread @ 0x1403CE980 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x1403CF190 (IopPassiveInterruptRealtimeWorker.c)
 *     KiBlockAndActivateUmsThread @ 0x140525F08 (KiBlockAndActivateUmsThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406BCA6C (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x1402A9110 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  EntryArray = 0LL;
  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
