/*
 * XREFs of KeInitializeQueue @ 0x14023E540
 * Callers:
 *     EtwpCreateUmReplyObject @ 0x1406B8E18 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406B8FE0 (NtCreateIoCompletion.c)
 *     FsRtlInitializeWorkerThread @ 0x140B25E30 (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x140B27838 (IopInitializePassiveInterruptServices.c)
 *     ExpWorkerFactoryInitialization @ 0x140B2DEA8 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
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
