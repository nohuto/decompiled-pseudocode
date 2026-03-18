/*
 * XREFs of McTemplateK0pqXR1qqqXR5_EtwWriteTransfer @ 0x1C002D54C
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004640 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0023D10 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pqXR1qqqXR5_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-69h] BYREF
  va_list v5; // [rsp+40h] [rbp-59h]
  __int64 v6; // [rsp+48h] [rbp-51h]
  va_list v7; // [rsp+50h] [rbp-49h]
  __int64 v8; // [rsp+58h] [rbp-41h]
  __int64 v9; // [rsp+60h] [rbp-39h]
  int v10; // [rsp+68h] [rbp-31h]
  int v11; // [rsp+6Ch] [rbp-2Dh]
  va_list v12; // [rsp+70h] [rbp-29h]
  __int64 v13; // [rsp+78h] [rbp-21h]
  va_list v14; // [rsp+80h] [rbp-19h]
  __int64 v15; // [rsp+88h] [rbp-11h]
  va_list v16; // [rsp+90h] [rbp-9h]
  __int64 v17; // [rsp+98h] [rbp-1h]
  __int64 v18; // [rsp+A0h] [rbp+7h]
  int v19; // [rsp+A8h] [rbp+Fh]
  int v20; // [rsp+ACh] [rbp+13h]
  __int64 v21; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+4Fh]
  __int64 v23; // [rsp+F0h] [rbp+57h] BYREF
  va_list va1; // [rsp+F0h] [rbp+57h]
  __int64 v25; // [rsp+F8h] [rbp+5Fh]
  __int64 v26; // [rsp+100h] [rbp+67h] BYREF
  va_list va2; // [rsp+100h] [rbp+67h]
  __int64 v28; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+108h] [rbp+6Fh]
  __int64 v30; // [rsp+110h] [rbp+77h] BYREF
  va_list va4; // [rsp+110h] [rbp+77h]
  __int64 v32; // [rsp+118h] [rbp+7Fh]
  va_list va5; // [rsp+120h] [rbp+87h] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  v25 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v28 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v30 = va_arg(va5, _QWORD);
  v32 = va_arg(va5, _QWORD);
  v8 = 4LL;
  v11 = 0;
  va_copy(v5, va);
  v20 = 0;
  va_copy(v7, va1);
  v9 = v25;
  v10 = 8 * v23;
  va_copy(v12, va2);
  va_copy(v14, va3);
  va_copy(v16, va4);
  v18 = v32;
  v19 = 8 * v30;
  v6 = 8LL;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventHSyncDPCMultiPlane, a3, 8u, &v4);
}
