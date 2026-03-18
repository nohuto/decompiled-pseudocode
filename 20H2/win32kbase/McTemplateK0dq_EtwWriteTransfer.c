/*
 * XREFs of McTemplateK0dq_EtwWriteTransfer @ 0x1C012810C
 * Callers:
 *     EtwTraceStartInputDeviceRead @ 0x1C0020E40 (EtwTraceStartInputDeviceRead.c)
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     EtwTraceFocusChange @ 0x1C00B23C0 (EtwTraceFocusChange.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C00BF490 (EtwTraceCompleteInputDeviceRead.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C78B0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C0125AF0 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C0125B20 (EtwTraceDwmManipulationFrameStart.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00287C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0dq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  int *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  v10 = &a5;
  v12 = 0;
  v11 = 4;
  return McGenEventWrite_EtwWriteTransfer(4LL, a2, &W32kControlGuid, 3u, &v6);
}
