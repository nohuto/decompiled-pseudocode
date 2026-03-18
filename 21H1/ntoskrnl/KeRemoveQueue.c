/*
 * XREFs of KeRemoveQueue @ 0x14030A540
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x1403B27A0 (ExpWorkerFactoryManagerThread.c)
 *     FsRtlWorkerThread @ 0x1403CA420 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x1403CAC30 (IopPassiveInterruptRealtimeWorker.c)
 *     KiBlockAndActivateUmsThread @ 0x1405201C8 (KiBlockAndActivateUmsThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406CCEC8 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x140268450 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  EntryArray = 0LL;
  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
