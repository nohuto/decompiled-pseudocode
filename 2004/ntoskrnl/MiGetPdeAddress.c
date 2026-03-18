/*
 * XREFs of MiGetPdeAddress @ 0x14025387C
 * Callers:
 *     MiEliminateZeroPages @ 0x1406074A0 (MiEliminateZeroPages.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiProtectLargeKernelHalRange @ 0x140789240 (MiProtectLargeKernelHalRange.c)
 *     MiUnmapLargeDriver @ 0x1408D7144 (MiUnmapLargeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
