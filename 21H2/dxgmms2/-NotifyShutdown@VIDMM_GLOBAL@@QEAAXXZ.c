/*
 * XREFs of ?NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D8A18
 * Callers:
 *     VidMmNotifyShutdown @ 0x1C002D3B0 (VidMmNotifyShutdown.c)
 * Callees:
 *     ?LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D8284 (-LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyShutdown(struct DXGADAPTER **this)
{
  VIDMM_GLOBAL::LogTeardownTelemetry(this);
}
