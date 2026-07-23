/*
 * XREFs of MiGetPdeAddress @ 0x14025BEDC
 * Callers:
 *     MiEliminateZeroPages @ 0x14063B370 (MiEliminateZeroPages.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1670 (MiProtectLargeKernelHalRange.c)
 *     MiUnmapLargeDriver @ 0x1408DA8A4 (MiUnmapLargeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
