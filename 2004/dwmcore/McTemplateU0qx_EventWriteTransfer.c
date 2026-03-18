/*
 * XREFs of McTemplateU0qx_EventWriteTransfer @ 0x18018662C
 * Callers:
 *     ?RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801861E8 (-RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800D600C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

ULONG McTemplateU0qx_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  int *v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  int v11; // [rsp+90h] [rbp+18h] BYREF
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, a3);
  v11 = a3;
  v5 = &v11;
  v7 = 0;
  v6 = 4;
  va_copy(v8, va);
  v10 = 0;
  v9 = 8;
  return McGenEventWrite_EventWriteTransfer(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_DEBUG_FRAME_COUNTER_EVENT,
           a3,
           3u,
           &v4);
}
