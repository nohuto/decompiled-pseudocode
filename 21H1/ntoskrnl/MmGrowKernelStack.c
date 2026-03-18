/*
 * XREFs of MmGrowKernelStack @ 0x140530B90
 * Callers:
 *     <none>
 * Callees:
 *     MmGrowKernelStackEx @ 0x14031B660 (MmGrowKernelStackEx.c)
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return MmGrowKernelStackEx(a1, 24576LL, a3, a4);
}
