/*
 * XREFs of McTemplateK0cd_EtwWriteTransfer @ 0x1C0127350
 * Callers:
 *     EtwTraceEndAppMessageProcessing @ 0x1C0090660 (EtwTraceEndAppMessageProcessing.c)
 *     EtwTraceBeginDispatchMessage @ 0x1C00A32B0 (EtwTraceBeginDispatchMessage.c)
 *     EtwTraceEndDispatchMessage @ 0x1C00A32D0 (EtwTraceEndDispatchMessage.c)
 *     EtwTraceWakeDIT @ 0x1C00A6A70 (EtwTraceWakeDIT.c)
 *     EtwTraceEndTranslateMessage @ 0x1C00B3AC0 (EtwTraceEndTranslateMessage.c)
 *     EtwTraceBeginTranslateMessage @ 0x1C00B3AE0 (EtwTraceBeginTranslateMessage.c)
 *     EtwTraceWakeRIT @ 0x1C00B8A10 (EtwTraceWakeRIT.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00287C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0cd_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  char *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  char v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = &v13;
  v9 = 0;
  v8 = 1;
  v10 = &a5;
  v12 = 0;
  v11 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 3u, &v6);
}
