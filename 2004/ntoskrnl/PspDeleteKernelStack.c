/*
 * XREFs of PspDeleteKernelStack @ 0x140350B00
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x140239560 (MmDeleteKernelStack.c)
 */

signed __int64 __fastcall PspDeleteKernelStack(__int64 a1, unsigned __int64 *a2)
{
  return MmDeleteKernelStack(*a2, 2u);
}
