/*
 * XREFs of WPP_SF_qqq @ 0x1800CC170
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800C9148 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FD420 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qqq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
