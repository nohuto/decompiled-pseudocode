/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x14030E50C
 * Callers:
 *     MmOutSwapWorkingSet @ 0x14030DD64 (MmOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14030E4B4 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiGetKernelStackSwapSupport @ 0x14030E7AC (MiGetKernelStackSwapSupport.c)
 *     MmOutSwapVirtualAddresses @ 0x1403100C0 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 */

_QWORD *__fastcall MiAllocateWorkingSetSwapSupport(__int64 a1)
{
  _QWORD *result; // rax

  result = MiAllocatePool(64, 16 * a1 + 40, 0x53576D4Du);
  if ( result )
  {
    result[1] = a1;
    *result = ((unsigned __int64)result + 47) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  return result;
}
