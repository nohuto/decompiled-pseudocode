/*
 * XREFs of McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C0065310
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012CDE8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C012DC7C (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0131D4C (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013747C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C005D34C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0juqjzzz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10)
{
  const wchar_t *v10; // rdx
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r8d
  const wchar_t *v16; // rcx
  __int64 v17; // rdx
  int v18; // r8d
  const wchar_t *v19; // rcx
  bool v20; // zf
  _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-69h] BYREF
  __int64 v23; // [rsp+40h] [rbp-59h]
  __int64 v24; // [rsp+48h] [rbp-51h]
  char *v25; // [rsp+50h] [rbp-49h]
  __int64 v26; // [rsp+58h] [rbp-41h]
  char *v27; // [rsp+60h] [rbp-39h]
  __int64 v28; // [rsp+68h] [rbp-31h]
  __int64 v29; // [rsp+70h] [rbp-29h]
  __int64 v30; // [rsp+78h] [rbp-21h]
  const wchar_t *v31; // [rsp+80h] [rbp-19h]
  int v32; // [rsp+88h] [rbp-11h]
  int v33; // [rsp+8Ch] [rbp-Dh]
  const wchar_t *v34; // [rsp+90h] [rbp-9h]
  int v35; // [rsp+98h] [rbp-1h]
  int v36; // [rsp+9Ch] [rbp+3h]
  const wchar_t *v37; // [rsp+A0h] [rbp+7h]
  int v38; // [rsp+A8h] [rbp+Fh]
  int v39; // [rsp+ACh] [rbp+13h]

  v10 = a8;
  v25 = &a5;
  v23 = a4;
  v27 = &a6;
  v29 = a7;
  v12 = 10;
  v13 = -1LL;
  v24 = 16LL;
  v26 = 1LL;
  v28 = 4LL;
  v30 = 16LL;
  if ( a8 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a8[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v16 = a9;
  v32 = v15;
  v33 = 0;
  if ( !a8 )
    v10 = L"NULL";
  v31 = v10;
  if ( a9 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a9[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v35 = v18;
  v36 = 0;
  if ( !a9 )
    v16 = L"NULL";
  v34 = v16;
  v19 = a10;
  v20 = a10 == 0LL;
  if ( a10 )
  {
    do
      ++v13;
    while ( a10[v13] );
    v12 = 2 * v13 + 2;
    v20 = a10 == 0LL;
  }
  if ( v20 )
    v19 = L"NULL";
  v38 = v12;
  v37 = v19;
  v39 = 0;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &FilterStateChangeEx, a3, 8u, &v22);
}
