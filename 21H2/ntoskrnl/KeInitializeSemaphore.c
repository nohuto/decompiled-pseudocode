/*
 * XREFs of KeInitializeSemaphore @ 0x140361350
 * Callers:
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     AlpcpInitializePort @ 0x1406D04F8 (AlpcpInitializePort.c)
 *     NtCreateSemaphore @ 0x14071C3F0 (NtCreateSemaphore.c)
 *     MiInitializeSections @ 0x14079CD94 (MiInitializeSections.c)
 *     PopFxInitializeWorkPool @ 0x1407CB5E4 (PopFxInitializeWorkPool.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
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
