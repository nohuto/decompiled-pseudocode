/*
 * XREFs of KeInitializeSemaphore @ 0x1402D6A20
 * Callers:
 *     AlpcpInitializePort @ 0x1405E8338 (AlpcpInitializePort.c)
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x140684EE0 (NtCreateSemaphore.c)
 *     MiInitializeSections @ 0x14078E938 (MiInitializeSections.c)
 *     PopFxInitializeWorkPool @ 0x1407C7184 (PopFxInitializeWorkPool.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
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
