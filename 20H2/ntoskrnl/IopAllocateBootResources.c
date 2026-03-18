/*
 * XREFs of IopAllocateBootResources @ 0x1407B0DD0
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x140A69F6C (IopAllocateLegacyBootResources.c)
 *     IopReportBootResources @ 0x140A6A050 (IopReportBootResources.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseSemaphore @ 0x1402FAEB0 (KeReleaseSemaphore.c)
 *     IopAllocateBootResourcesInternal @ 0x1407B0E60 (IopAllocateBootResourcesInternal.c)
 */

__int64 __fastcall IopAllocateBootResources(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int BootResourcesInternal; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  BootResourcesInternal = IopAllocateBootResourcesInternal(a1, a2);
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return BootResourcesInternal;
}
