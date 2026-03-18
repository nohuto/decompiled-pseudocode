/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x140339C9C
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1403394F4 (MmOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x140339C44 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiGetKernelStackSwapSupport @ 0x140339F3C (MiGetKernelStackSwapSupport.c)
 *     MmOutSwapVirtualAddresses @ 0x14033AC68 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
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
