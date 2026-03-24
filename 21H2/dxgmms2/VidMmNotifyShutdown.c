/*
 * XREFs of VidMmNotifyShutdown @ 0x1C0022EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B1E84 (-NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VidMmNotifyShutdown(VIDMM_GLOBAL *a1)
{
  VIDMM_GLOBAL::NotifyShutdown(a1);
}
