/*
 * XREFs of IopAllocateBootResources @ 0x14079DAC0
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x140A5FAAC (IopAllocateLegacyBootResources.c)
 *     IopReportBootResources @ 0x140A5FB90 (IopReportBootResources.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1402EE560 (KeReleaseSemaphore.c)
 *     IopAllocateBootResourcesInternal @ 0x14079DB50 (IopAllocateBootResourcesInternal.c)
 */

__int64 __fastcall IopAllocateBootResources(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int BootResourcesInternal; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  BootResourcesInternal = IopAllocateBootResourcesInternal(a1, a2);
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
  return BootResourcesInternal;
}
