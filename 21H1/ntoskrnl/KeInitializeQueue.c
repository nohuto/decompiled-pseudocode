/*
 * XREFs of KeInitializeQueue @ 0x140328320
 * Callers:
 *     EtwpCreateUmReplyObject @ 0x1406EC0EC (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406F0D20 (NtCreateIoCompletion.c)
 *     KeInitializeUmsThread @ 0x1408B8C94 (KeInitializeUmsThread.c)
 *     FsRtlInitializeWorkerThread @ 0x140A67FDC (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x140A69754 (IopInitializePassiveInterruptServices.c)
 *     ExpWorkerFactoryInitialization @ 0x140A6DBC8 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
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
