/*
 * XREFs of ObIsKernelHandle @ 0x1403232C0
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x140655D68 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x140264120 (ObpIsKernelHandle.c)
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ObpIsKernelHandle((unsigned __int64)Handle, 0);
}
