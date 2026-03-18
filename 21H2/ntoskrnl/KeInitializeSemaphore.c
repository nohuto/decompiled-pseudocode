/*
 * XREFs of KeInitializeSemaphore @ 0x1402A4940
 * Callers:
 *     AlpcpInitializePort @ 0x140667864 (AlpcpInitializePort.c)
 *     NtCreateSemaphore @ 0x14072A4C0 (NtCreateSemaphore.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 *     MiInitializeSections @ 0x14081D9C8 (MiInitializeSections.c)
 *     PopFxInitializeWorkPool @ 0x14085B454 (PopFxInitializeWorkPool.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeSemaphore(PRKSEMAPHORE Semaphore, LONG Count, LONG Limit)
{
  Semaphore->Header.Type = 5;
  Semaphore->Header.WaitListHead.Blink = &Semaphore->Header.WaitListHead;
  Semaphore->Header.WaitListHead.Flink = &Semaphore->Header.WaitListHead;
  Semaphore->Header.Size = 8;
  Semaphore->Header.SignalState = Count;
  Semaphore->Limit = Limit;
}
