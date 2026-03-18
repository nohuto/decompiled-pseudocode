/*
 * XREFs of McTemplateK0pzzzq_EtwWriteTransfer @ 0x1C003E6A0
 * Callers:
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0220EA8 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000BADC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pzzzq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // r9d
  const wchar_t *v9; // rcx
  __int64 v10; // rdx
  int v11; // r9d
  const wchar_t *v12; // rcx
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-39h] BYREF
  va_list v16; // [rsp+40h] [rbp-29h]
  __int64 v17; // [rsp+48h] [rbp-21h]
  const wchar_t *v18; // [rsp+50h] [rbp-19h]
  int v19; // [rsp+58h] [rbp-11h]
  int v20; // [rsp+5Ch] [rbp-Dh]
  const wchar_t *v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+6Ch] [rbp+3h]
  const wchar_t *v24; // [rsp+70h] [rbp+7h]
  int v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+7Ch] [rbp+13h]
  va_list v27; // [rsp+80h] [rbp+17h]
  __int64 v28; // [rsp+88h] [rbp+1Fh]
  __int64 v29; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  const wchar_t *v31; // [rsp+D0h] [rbp+67h]
  const wchar_t *v32; // [rsp+D8h] [rbp+6Fh]
  const wchar_t *v33; // [rsp+E0h] [rbp+77h]
  va_list va1; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v29 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, const wchar_t *);
  v32 = va_arg(va1, const wchar_t *);
  v33 = va_arg(va1, const wchar_t *);
  v3 = v31;
  va_copy(v16, va);
  v4 = -1LL;
  v17 = 8LL;
  v6 = 10LL;
  if ( v31 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v31[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v19 = v8;
  v20 = 0;
  if ( !v31 )
    v3 = L"NULL";
  v18 = v3;
  v9 = v32;
  if ( v32 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v32[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v22 = v11;
  v23 = 0;
  if ( !v32 )
    v9 = L"NULL";
  v21 = v9;
  v12 = v33;
  v13 = v33 == 0LL;
  if ( v33 )
  {
    do
      ++v4;
    while ( v33[v4] );
    v6 = (unsigned int)(2 * v4 + 2);
    v13 = v33 == 0LL;
  }
  if ( v13 )
    v12 = L"NULL";
  v25 = v6;
  v24 = v12;
  va_copy(v27, va1);
  v26 = 0;
  v28 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, v6, 6u, &v15);
}
