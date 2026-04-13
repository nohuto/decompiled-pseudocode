/*
 * XREFs of ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH2@Z @ 0x1800090B8
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18000BE58 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x180008F2C (-wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_QueryFeatureState(__int64 a1, unsigned int a2, int a3, int a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int v10; // edi
  int (__high *ProcAddress)(unsigned int, enum _RTL_FEATURE_CONFIGURATION_TYPE, unsigned __int64 *, struct _RTL_FEATURE_CONFIGURATION *); // rax
  HMODULE ModuleHandleW; // rax
  int v13; // r8d
  unsigned int v14; // edx
  unsigned int v15; // ecx
  _BYTE v17[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h] BYREF
  int v19; // [rsp+40h] [rbp-48h]

  if ( a5 )
    *a5 = 0;
  *a6 = 1;
  v10 = 0;
  v18 = 0LL;
  v19 = 0;
  ProcAddress = g_wil_details_pfnRtlQueryFeatureConfiguration;
  if ( g_wil_details_pfnRtlQueryFeatureConfiguration )
    goto LABEL_8;
  ModuleHandleW = g_wil_details_ntdllModuleHandle;
  if ( !g_wil_details_ntdllModuleHandle )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    g_wil_details_ntdllModuleHandle = ModuleHandleW;
  }
  ProcAddress = (int (__high *)(unsigned int, enum _RTL_FEATURE_CONFIGURATION_TYPE, unsigned __int64 *, struct _RTL_FEATURE_CONFIGURATION *))GetProcAddress(ModuleHandleW, "RtlQueryFeatureConfiguration");
  g_wil_details_pfnRtlQueryFeatureConfiguration = ProcAddress;
  if ( ProcAddress )
LABEL_8:
    v13 = ((__int64 (__fastcall *)(_QWORD, bool, _BYTE *, __int64 *))ProcAddress)(a2, a3 == 0, v17, &v18);
  else
    v13 = -1073741511;
  if ( v13 )
  {
    if ( v13 == 279 )
      *(_DWORD *)(a1 + 16) = (HIDWORD(v18) >> 7) & 1;
  }
  else
  {
    v14 = HIDWORD(v18);
    v10 = 1;
    v15 = HIDWORD(v18);
    *(_DWORD *)(a1 + 12) = v19;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v15 >> 14;
    *(_DWORD *)a1 = (v15 >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v14) & 0x3F;
    *(_DWORD *)(a1 + 16) = (v14 >> 7) & 1;
    *(_DWORD *)(a1 + 20) = (v14 >> 6) & 1;
  }
  if ( a5 )
    *a5 = v13 != -2147483614;
  if ( !v10 )
    return (unsigned int)wil_StagingConfig_QueryFeatureState(a4, (struct wil_FeatureState *)a1, a2, a3, a5);
  return v10;
}
