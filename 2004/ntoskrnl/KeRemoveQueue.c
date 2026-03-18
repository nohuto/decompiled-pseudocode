/*
 * XREFs of KeRemoveQueue @ 0x140346E40
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x1403B45A0 (ExpWorkerFactoryManagerThread.c)
 *     FsRtlWorkerThread @ 0x1403CB200 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x1403CBA10 (IopPassiveInterruptRealtimeWorker.c)
 *     KiBlockAndActivateUmsThread @ 0x140520818 (KiBlockAndActivateUmsThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406EE1C8 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x14020F400 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  EntryArray = 0LL;
  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
