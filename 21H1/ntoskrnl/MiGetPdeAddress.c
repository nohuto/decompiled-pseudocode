/*
 * XREFs of MiGetPdeAddress @ 0x1402AC8AC
 * Callers:
 *     MiEliminateZeroPages @ 0x14063C5F0 (MiEliminateZeroPages.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407838B0 (MiProtectLargeKernelHalRange.c)
 *     MiUnmapLargeDriver @ 0x1408D5DF4 (MiUnmapLargeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
