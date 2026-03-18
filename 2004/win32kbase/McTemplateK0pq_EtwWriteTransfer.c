/*
 * XREFs of McTemplateK0pq_EtwWriteTransfer @ 0x1C012AF50
 * Callers:
 *     EtwTraceKillTimer @ 0x1C00303C0 (EtwTraceKillTimer.c)
 *     EtwUpdateEvent @ 0x1C003C280 (EtwUpdateEvent.c)
 *     EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C004E720 (EtwTraceCompositionSurfaceObjectUpdateEvent.c)
 *     EtwLogicalSurfCreateEvent @ 0x1C0050E30 (EtwLogicalSurfCreateEvent.c)
 *     EtwLogicalSurfDestroyEvent @ 0x1C0052340 (EtwLogicalSurfDestroyEvent.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0063DF4 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C00645F0 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     EtwTraceCompletePowerRequest @ 0x1C00646A0 (EtwTraceCompletePowerRequest.c)
 *     NtDCompositionBeginFrame @ 0x1C00A8F70 (NtDCompositionBeginFrame.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C011F2E0 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     EtwTraceDCompBeginFrameEvent @ 0x1C0127D20 (EtwTraceDCompBeginFrameEvent.c)
 *     EtwTraceFlipManagerStopTokenReleaseToFrame @ 0x1C0128390 (EtwTraceFlipManagerStopTokenReleaseToFrame.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001B2C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 3u, &v4);
}
