/*
 * XREFs of ?ReadEdidFromRegistry@EDIDCACHE@@QEAAJIPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0275688
 * Callers:
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0275240 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?OpenEdidRegistryForTarget@EDIDCACHE@@AEAAJIKAEAPEAXPEAK@Z @ 0x1C0275504 (-OpenEdidRegistryForTarget@EDIDCACHE@@AEAAJIKAEAPEAXPEAK@Z.c)
 */

__int64 __fastcall EDIDCACHE::ReadEdidFromRegistry(
        EDIDCACHE *this,
        unsigned int a2,
        unsigned __int8 *a3,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *a4)
{
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  HANDLE v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v21; // [rsp+30h] [rbp-99h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-91h] BYREF
  __int64 v23; // [rsp+40h] [rbp-89h] BYREF
  int v24; // [rsp+48h] [rbp-81h]
  const WCHAR *v25; // [rsp+50h] [rbp-79h]
  unsigned __int8 *v26; // [rsp+58h] [rbp-71h]
  int v27; // [rsp+60h] [rbp-69h]
  unsigned __int8 *v28; // [rsp+68h] [rbp-61h]
  int v29; // [rsp+70h] [rbp-59h]
  __int64 v30; // [rsp+78h] [rbp-51h]
  int v31; // [rsp+80h] [rbp-49h]
  const WCHAR *v32; // [rsp+88h] [rbp-41h]
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *v33; // [rsp+90h] [rbp-39h]
  int v34; // [rsp+98h] [rbp-31h]
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *v35; // [rsp+A0h] [rbp-29h]
  int v36; // [rsp+A8h] [rbp-21h]
  __int64 v37; // [rsp+B0h] [rbp-19h]
  int v38; // [rsp+B8h] [rbp-11h]
  __int128 v39; // [rsp+C0h] [rbp-9h]
  __int128 v40; // [rsp+D0h] [rbp+7h]
  __int64 v41; // [rsp+E0h] [rbp+17h]

  Handle = 0LL;
  v6 = a2;
  v7 = EDIDCACHE::OpenEdidRegistryForTarget(this, a2, 0x20019u, &Handle, 0LL);
  v11 = v7;
  if ( v7 >= 0 )
  {
    v13 = Handle;
    if ( !Handle )
    {
      v14 = WdLogNewEntry5_WdAssertion(v9, 0LL);
      *(_QWORD *)(v14 + 24) = 315LL;
      WdLogEvent5_WdAssertion(v14);
      v13 = Handle;
    }
    v23 = 0LL;
    v30 = 0LL;
    v37 = 0LL;
    v38 = 0;
    v25 = L"EDID";
    v24 = 292;
    v32 = L"Origin";
    v31 = 292;
    v33 = &v21;
    v21 = -1;
    v35 = &v21;
    v41 = 0LL;
    *(_DWORD *)a3 = -128;
    v26 = a3;
    v27 = 50331651;
    v28 = a3;
    v29 = 128;
    v34 = 67108868;
    v36 = 4;
    v39 = 0LL;
    v40 = 0LL;
    v15 = RtlQueryRegistryValuesEx(0x40000000LL, v13, &v23, 0LL, 0LL);
    v11 = v15;
    if ( v15 >= 0 )
    {
      if ( v21 != -1 && *(_DWORD *)a3 != -128 )
      {
        *a4 = v21;
LABEL_11:
        ZwClose(Handle);
        return (unsigned int)v11;
      }
      v11 = -1073741823LL;
    }
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v19[3] = v11;
    v19[4] = Handle;
    v19[5] = &v23;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_11;
  }
  v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
  *(_QWORD *)(v12 + 24) = v11;
  *(_QWORD *)(v12 + 32) = v6;
  WdLogEvent5_WdWarning(v12);
  return (unsigned int)v11;
}
