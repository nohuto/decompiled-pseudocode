/*
 * XREFs of McTemplateK0pppnnn_EtwWriteTransfer @ 0x1C0048B8C
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x1C0001A30 (Endpoint_EvtEndpointCleanupCallback.c)
 *     Etw_EndpointCreate @ 0x1C0001F54 (Etw_EndpointCreate.c)
 *     Etw_EndpointListRundown @ 0x1C000DA50 (Etw_EndpointListRundown.c)
 *     Endpoint_EvaluateContextCompletion @ 0x1C0018940 (Endpoint_EvaluateContextCompletion.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00351EC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0pppnnn_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-69h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-59h]
  __int64 v15; // [rsp+48h] [rbp-51h]
  char *v16; // [rsp+50h] [rbp-49h]
  __int64 v17; // [rsp+58h] [rbp-41h]
  char *v18; // [rsp+60h] [rbp-39h]
  __int64 v19; // [rsp+68h] [rbp-31h]
  __int64 v20; // [rsp+70h] [rbp-29h]
  __int64 v21; // [rsp+78h] [rbp-21h]
  __int64 v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  __int64 v24; // [rsp+90h] [rbp-9h]
  __int64 v25; // [rsp+98h] [rbp-1h]
  __int64 v26; // [rsp+D8h] [rbp+3Fh] BYREF

  v26 = a4;
  v15 = 8LL;
  v14 = &v26;
  v17 = 8LL;
  v16 = &a5;
  v18 = &a6;
  v20 = a8;
  v22 = a10;
  v24 = a12;
  v19 = 8LL;
  v21 = 7LL;
  v23 = 6LL;
  v25 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 7u, &v13);
}
