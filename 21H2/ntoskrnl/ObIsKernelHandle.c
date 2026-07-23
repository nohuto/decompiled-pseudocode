/*
 * XREFs of ObIsKernelHandle @ 0x1402A06B0
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x1406BEF48 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x140353610 (ObpIsKernelHandle.c)
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ObpIsKernelHandle(Handle, 0LL);
}
