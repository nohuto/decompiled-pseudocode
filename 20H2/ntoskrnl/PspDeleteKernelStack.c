/*
 * XREFs of PspDeleteKernelStack @ 0x1403213F0
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x1402ADF80 (MmDeleteKernelStack.c)
 */

void __fastcall PspDeleteKernelStack(__int64 a1, unsigned __int64 *a2)
{
  MmDeleteKernelStack(*a2, 2);
}
