/*
 * XREFs of McTemplateK0ppqqq_EtwWriteTransfer @ 0x1C0128914
 * Callers:
 *     EtwTraceGdiTransformHandle @ 0x1C001F1BC (EtwTraceGdiTransformHandle.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003B020 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00287C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0ppqqq_EtwWriteTransfer(__int64 a1, _DWORD a2, _DWORD a3, __int64 a4, char a5, ...)
{
  int v6; // [rsp+30h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-39h] BYREF
  __int64 *v8; // [rsp+50h] [rbp-29h]
  __int64 v9; // [rsp+58h] [rbp-21h]
  char *v10; // [rsp+60h] [rbp-19h]
  __int64 v11; // [rsp+68h] [rbp-11h]
  va_list v12; // [rsp+70h] [rbp-9h]
  __int64 v13; // [rsp+78h] [rbp-1h]
  int *v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  va_list v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  __int64 v18; // [rsp+D8h] [rbp+5Fh] BYREF
  __int64 v19; // [rsp+E8h] [rbp+6Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+6Fh]
  __int64 v21; // [rsp+F0h] [rbp+77h]
  va_list va1; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v19 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, _QWORD);
  v18 = a4;
  v6 = gSessionId;
  v9 = 8LL;
  v8 = &v18;
  v11 = 8LL;
  v10 = &a5;
  va_copy(v12, va);
  v14 = &v6;
  va_copy(v16, va1);
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &GdiTransformHandle, &W32kControlGuid, 6u, &v7);
}
