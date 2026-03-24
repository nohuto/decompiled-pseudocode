/*
 * XREFs of MiGetPdeAddress @ 0x14026DF3C
 * Callers:
 *     MiEliminateZeroPages @ 0x140646580 (MiEliminateZeroPages.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1470 (MiProtectLargeKernelHalRange.c)
 *     MiUnmapLargeDriver @ 0x1408DA744 (MiUnmapLargeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
