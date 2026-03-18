/*
 * XREFs of KiDeleteKernelShadowStack @ 0x140961490
 * Callers:
 *     PspDeleteKernelStack @ 0x140246B70 (PspDeleteKernelStack.c)
 *     KeInitThread @ 0x140A48020 (KeInitThread.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     MmDeleteKernelShadowStack @ 0x1405A5DF0 (MmDeleteKernelShadowStack.c)
 */

char __fastcall KiDeleteKernelShadowStack(unsigned __int64 a1, int a2, char a3)
{
  return MmDeleteKernelShadowStack(a1, a2, a3);
}
