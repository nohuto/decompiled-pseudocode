/*
 * XREFs of ?NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B2D64
 * Callers:
 *     VidMmNotifyShutdown @ 0x1C00225B0 (VidMmNotifyShutdown.c)
 * Callees:
 *     ?LogData@VIDMM_PURGE_TELEMETRY@@QEAAXXZ @ 0x1C00C09EC (-LogData@VIDMM_PURGE_TELEMETRY@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyShutdown(VIDMM_GLOBAL *this)
{
  VIDMM_PURGE_TELEMETRY::LogData((VIDMM_GLOBAL *)((char *)this + 41208));
}
