/*
 * XREFs of KeInitializeQueue @ 0x140315F10
 * Callers:
 *     EtwpCreateUmReplyObject @ 0x1406C01A8 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406C0380 (NtCreateIoCompletion.c)
 *     KeInitializeUmsThread @ 0x1408BFD14 (KeInitializeUmsThread.c)
 *     FsRtlInitializeWorkerThread @ 0x140A6EC8C (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x140A704E0 (IopInitializePassiveInterruptServices.c)
 *     ExpWorkerFactoryInitialization @ 0x140A74AA0 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140219190 (KeQueryActiveProcessorCountEx.c)
 */

void __stdcall KeInitializeQueue(PRKQUEUE Queue, ULONG Count)
{
  Queue->Header.Type = 4;
  *(_WORD *)((char *)&Queue->Header.Lock + 1) = 4096;
  Queue->Header.WaitListHead.Blink = &Queue->Header.WaitListHead;
  Queue->Header.WaitListHead.Flink = &Queue->Header.WaitListHead;
  Queue->EntryListHead.Blink = &Queue->EntryListHead;
  Queue->EntryListHead.Flink = &Queue->EntryListHead;
  Queue->ThreadListHead.Blink = &Queue->ThreadListHead;
  Queue->ThreadListHead.Flink = &Queue->ThreadListHead;
  Queue->Header.SignalState = 0;
  Queue->CurrentCount = 0;
  if ( !Count )
    Count = KeQueryActiveProcessorCountEx(0xFFFFu);
  Queue->MaximumCount = Count;
}
