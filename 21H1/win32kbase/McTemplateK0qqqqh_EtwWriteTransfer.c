/*
 * XREFs of McTemplateK0qqqqh_EtwWriteTransfer @ 0x1C0131894
 * Callers:
 *     EtwTraceIdleActionExpiration @ 0x1C0050110 (EtwTraceIdleActionExpiration.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00A2A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqqh_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  int v9; // [rsp+30h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-39h] BYREF
  int *v11; // [rsp+50h] [rbp-29h]
  __int64 v12; // [rsp+58h] [rbp-21h]
  char *v13; // [rsp+60h] [rbp-19h]
  __int64 v14; // [rsp+68h] [rbp-11h]
  char *v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  char *v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  char *v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]

  v9 = gSessionId;
  v12 = 4LL;
  v11 = &v9;
  v14 = 4LL;
  v13 = &a5;
  v15 = &a6;
  v17 = &a7;
  v19 = &a8;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 2LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &IdleActionExpireEvent, &W32kControlGuid, 6u, &v10);
}
