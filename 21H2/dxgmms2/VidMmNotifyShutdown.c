/*
 * XREFs of VidMmNotifyShutdown @ 0x1C002D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D8A18 (-NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VidMmNotifyShutdown(VIDMM_GLOBAL *a1)
{
  VIDMM_GLOBAL::NotifyShutdown(a1);
}
