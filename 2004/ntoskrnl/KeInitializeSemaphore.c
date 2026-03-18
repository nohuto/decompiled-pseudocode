/*
 * XREFs of KeInitializeSemaphore @ 0x1402F9530
 * Callers:
 *     AlpcpInitializePort @ 0x14062C108 (AlpcpInitializePort.c)
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x1406B04A0 (NtCreateSemaphore.c)
 *     MiInitializeSections @ 0x140781420 (MiInitializeSections.c)
 *     PopFxInitializeWorkPool @ 0x1407B88F4 (PopFxInitializeWorkPool.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
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
