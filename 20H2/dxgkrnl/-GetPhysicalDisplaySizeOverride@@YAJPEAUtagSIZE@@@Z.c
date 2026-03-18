/*
 * XREFs of ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1C02A7E38
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0140C40 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 */

__int64 __fastcall GetPhysicalDisplaySizeOverride(struct tagSIZE *a1, __int64 a2)
{
  __int64 v3; // rax
  LONG v5; // [rsp+30h] [rbp-79h] BYREF
  LONG v6; // [rsp+34h] [rbp-75h] BYREF
  __int64 v7; // [rsp+40h] [rbp-69h] BYREF
  int v8; // [rsp+48h] [rbp-61h]
  const wchar_t *v9; // [rsp+50h] [rbp-59h]
  LONG *v10; // [rsp+58h] [rbp-51h]
  int v11; // [rsp+60h] [rbp-49h]
  __int64 v12; // [rsp+68h] [rbp-41h]
  int v13; // [rsp+70h] [rbp-39h]
  __int64 v14; // [rsp+78h] [rbp-31h]
  int v15; // [rsp+80h] [rbp-29h]
  const wchar_t *v16; // [rsp+88h] [rbp-21h]
  LONG *v17; // [rsp+90h] [rbp-19h]
  int v18; // [rsp+98h] [rbp-11h]
  __int64 v19; // [rsp+A0h] [rbp-9h]
  int v20; // [rsp+A8h] [rbp-1h]
  __int64 v21; // [rsp+B0h] [rbp+7h]
  int v22; // [rsp+B8h] [rbp+Fh]
  __int128 v23; // [rsp+C0h] [rbp+17h]
  __int128 v24; // [rsp+D0h] [rbp+27h]
  __int64 v25; // [rsp+E0h] [rbp+37h]

  if ( !a1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v3 + 24) = 1219LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = 0;
  v9 = L"Width";
  v10 = &v5;
  v16 = L"Height";
  v17 = &v6;
  v8 = 292;
  v11 = 67108868;
  v15 = 292;
  v18 = 67108868;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(1LL, L"PhysicalDisplaySizeOverride", &v7, 0LL, 0LL) < 0 )
    return 3221226021LL;
  a1->cx = v5;
  a1->cy = v6;
  return 0LL;
}
