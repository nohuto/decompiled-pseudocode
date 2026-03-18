/*
 * XREFs of VidMmInvalidateAllVirtualAddresses @ 0x1C0022500
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B178C (-InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VidMmInvalidateAllVirtualAddresses(VIDMM_GLOBAL *a1)
{
  VIDMM_GLOBAL::InvalidateAllVirtualAddresses(a1);
}
