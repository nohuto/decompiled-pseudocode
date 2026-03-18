/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x1402CC8CC
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1402CC124 (MmOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1402CC874 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiGetKernelStackSwapSupport @ 0x1402CCDE0 (MiGetKernelStackSwapSupport.c)
 *     MmOutSwapVirtualAddresses @ 0x1402D10EC (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
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
