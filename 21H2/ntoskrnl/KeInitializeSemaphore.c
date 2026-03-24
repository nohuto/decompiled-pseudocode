/*
 * XREFs of KeInitializeSemaphore @ 0x140356600
 * Callers:
 *     AlpcpInitializePort @ 0x1405E0D98 (AlpcpInitializePort.c)
 *     PspAllocateThread @ 0x14064B048 (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x140705010 (NtCreateSemaphore.c)
 *     MiInitializeSections @ 0x14079CB94 (MiInitializeSections.c)
 *     PopFxInitializeWorkPool @ 0x1407CB474 (PopFxInitializeWorkPool.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
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
