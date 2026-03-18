/*
 * XREFs of MmGrowKernelStack @ 0x140534BB0
 * Callers:
 *     <none>
 * Callees:
 *     MmGrowKernelStackEx @ 0x1403299E0 (MmGrowKernelStackEx.c)
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1)
{
  return MmGrowKernelStackEx(a1, 24576LL);
}
