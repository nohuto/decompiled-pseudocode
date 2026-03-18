/*
 * XREFs of KiCreateKernelShadowStack @ 0x140961464
 * Callers:
 *     KeInitThread @ 0x140A48020 (KeInitThread.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     MmCreateKernelShadowStack @ 0x1405A5990 (MmCreateKernelShadowStack.c)
 */

__int64 __fastcall KiCreateKernelShadowStack(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 *a6)
{
  return MmCreateKernelShadowStack(a1, a2, a3, a4, a5, a6);
}
