/*
 * XREFs of McTemplateK0qqm_EtwWriteTransfer @ 0x1C012B6C8
 * Callers:
 *     EtwTraceUserIsActive @ 0x1C0061A40 (EtwTraceUserIsActive.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001B2C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqm_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  int v7; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-9h] BYREF
  int *v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  char *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  __int64 v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]

  v7 = gSessionId;
  v14 = 8LL;
  v10 = 4LL;
  v9 = &v7;
  v11 = &a5;
  v13 = a6;
  v12 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &UserActiveEvent, &W32kControlGuid, 4u, &v8);
}
