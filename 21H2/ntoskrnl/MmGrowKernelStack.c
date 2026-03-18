/*
 * XREFs of MmGrowKernelStack @ 0x140591080
 * Callers:
 *     <none>
 * Callees:
 *     MmGrowKernelStackEx @ 0x14024E3F0 (MmGrowKernelStackEx.c)
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1)
{
  return MmGrowKernelStackEx(a1, 24576LL);
}
