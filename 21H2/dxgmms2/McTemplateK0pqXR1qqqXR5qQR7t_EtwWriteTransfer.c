/*
 * XREFs of McTemplateK0pqXR1qqqXR5qQR7t_EtwWriteTransfer @ 0x1C0036CB8
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0003BC0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C002E360 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pqXR1qqqXR5qQR7t_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-B1h] BYREF
  va_list v5; // [rsp+40h] [rbp-A1h]
  __int64 v6; // [rsp+48h] [rbp-99h]
  va_list v7; // [rsp+50h] [rbp-91h]
  __int64 v8; // [rsp+58h] [rbp-89h]
  __int64 v9; // [rsp+60h] [rbp-81h]
  int v10; // [rsp+68h] [rbp-79h]
  int v11; // [rsp+6Ch] [rbp-75h]
  va_list v12; // [rsp+70h] [rbp-71h]
  __int64 v13; // [rsp+78h] [rbp-69h]
  va_list v14; // [rsp+80h] [rbp-61h]
  __int64 v15; // [rsp+88h] [rbp-59h]
  va_list v16; // [rsp+90h] [rbp-51h]
  __int64 v17; // [rsp+98h] [rbp-49h]
  __int64 v18; // [rsp+A0h] [rbp-41h]
  int v19; // [rsp+A8h] [rbp-39h]
  int v20; // [rsp+ACh] [rbp-35h]
  va_list v21; // [rsp+B0h] [rbp-31h]
  __int64 v22; // [rsp+B8h] [rbp-29h]
  __int64 v23; // [rsp+C0h] [rbp-21h]
  int v24; // [rsp+C8h] [rbp-19h]
  int v25; // [rsp+CCh] [rbp-15h]
  va_list v26; // [rsp+D0h] [rbp-11h]
  __int64 v27; // [rsp+D8h] [rbp-9h]
  __int64 v28; // [rsp+118h] [rbp+37h] BYREF
  va_list va; // [rsp+118h] [rbp+37h]
  __int64 v30; // [rsp+120h] [rbp+3Fh] BYREF
  va_list va1; // [rsp+120h] [rbp+3Fh]
  __int64 v32; // [rsp+128h] [rbp+47h]
  __int64 v33; // [rsp+130h] [rbp+4Fh] BYREF
  va_list va2; // [rsp+130h] [rbp+4Fh]
  __int64 v35; // [rsp+138h] [rbp+57h] BYREF
  va_list va3; // [rsp+138h] [rbp+57h]
  __int64 v37; // [rsp+140h] [rbp+5Fh] BYREF
  va_list va4; // [rsp+140h] [rbp+5Fh]
  __int64 v39; // [rsp+148h] [rbp+67h]
  __int64 v40; // [rsp+150h] [rbp+6Fh] BYREF
  va_list va5; // [rsp+150h] [rbp+6Fh]
  __int64 v42; // [rsp+158h] [rbp+77h]
  va_list va6; // [rsp+160h] [rbp+7Fh] BYREF

  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v28 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v30 = va_arg(va2, _QWORD);
  v32 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v33 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v35 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v37 = va_arg(va5, _QWORD);
  v39 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v40 = va_arg(va6, _QWORD);
  v42 = va_arg(va6, _QWORD);
  v6 = 8LL;
  v11 = 0;
  va_copy(v5, va);
  v20 = 0;
  va_copy(v7, va1);
  v9 = v32;
  v10 = 8 * v30;
  va_copy(v12, va2);
  va_copy(v14, va3);
  va_copy(v16, va4);
  v18 = v39;
  v19 = 8 * v37;
  va_copy(v21, va5);
  v23 = v42;
  v24 = 4 * v40;
  va_copy(v26, va6);
  v25 = 0;
  v8 = 4LL;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  v22 = 4LL;
  v27 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventVSyncDPCMultiPlane, a3, 0xBu, &v4);
}
