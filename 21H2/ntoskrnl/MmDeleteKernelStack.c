/*
 * XREFs of MmDeleteKernelStack @ 0x1403A0B28
 * Callers:
 *     KeAllocateCalloutStackEx @ 0x1406EE1C0 (KeAllocateCalloutStackEx.c)
 *     KeFreeCalloutStack @ 0x14080BB20 (KeFreeCalloutStack.c)
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 * Callees:
 *     MmDeleteKernelStackEx @ 0x1402C1900 (MmDeleteKernelStackEx.c)
 */

signed __int64 __fastcall MmDeleteKernelStack(unsigned __int64 a1, unsigned int a2)
{
  return MmDeleteKernelStackEx(a1, a2, 0LL);
}
