/*
 * XREFs of ObIsKernelHandle @ 0x14025E6E0
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x1406EC048 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x1402F3558 (ObpIsKernelHandle.c)
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ObpIsKernelHandle(Handle, 0LL);
}
