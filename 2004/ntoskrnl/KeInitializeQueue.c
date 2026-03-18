/*
 * XREFs of KeInitializeQueue @ 0x1402DE500
 * Callers:
 *     NtCreateIoCompletion @ 0x1406A7090 (NtCreateIoCompletion.c)
 *     EtwpCreateUmReplyObject @ 0x14070FC0C (EtwpCreateUmReplyObject.c)
 *     KeInitializeUmsThread @ 0x1408B9FB4 (KeInitializeUmsThread.c)
 *     FsRtlInitializeWorkerThread @ 0x140A6845C (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x140A69BD4 (IopInitializePassiveInterruptServices.c)
 *     ExpWorkerFactoryInitialization @ 0x140A6E2C0 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402DE560 (KeQueryActiveProcessorCountEx.c)
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
