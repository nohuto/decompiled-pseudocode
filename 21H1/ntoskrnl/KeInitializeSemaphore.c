/*
 * XREFs of KeInitializeSemaphore @ 0x140355510
 * Callers:
 *     AlpcpInitializePort @ 0x140649CB8 (AlpcpInitializePort.c)
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x140706360 (NtCreateSemaphore.c)
 *     MiInitializeSections @ 0x140784488 (MiInitializeSections.c)
 *     PopFxInitializeWorkPool @ 0x1407B5784 (PopFxInitializeWorkPool.c)
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
