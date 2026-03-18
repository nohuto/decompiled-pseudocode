/*
 * XREFs of MiGetPdeAddress @ 0x140236A3C
 * Callers:
 *     MiEliminateZeroPages @ 0x14062A9D0 (MiEliminateZeroPages.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MiProtectLargeKernelHalRange @ 0x140796F50 (MiProtectLargeKernelHalRange.c)
 *     MiUnmapLargeDriver @ 0x1408DCF84 (MiUnmapLargeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
