/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000BC94
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAA_NXZ @ 0x18000BB1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAA_NX.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000B088 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000BB58 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *wil::details::FeatureImpl<__WilFeatureTraits_Feature_2431961401>::ReportUsage(
        volatile signed __int32 *a1,
        __int64 a2,
        char a3,
        ...))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  __int64 v3; // r8
  unsigned int v5; // edi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  __int64 v7; // [rsp+28h] [rbp-40h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp-38h]
  int v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  LOBYTE(v11) = a3;
  LODWORD(v3) = *a1;
  v5 = (unsigned __int8)a2;
  if ( (*a1 & 4) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2431961401>::GetCachedFeatureEnabledState(
                      (wil::details *)a1,
                      (signed __int32 *)&v10);
    v10 = v3;
  }
  BYTE4(v12) = 2;
  LODWORD(v12) = 0;
  v11 = 3;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil::details::ReportUsageToServiceDirect(
                                                                                                     a1 + 2,
                                                                                                     a2,
                                                                                                     ((unsigned int)v3 >> 10) & 1,
                                                                                                     ((unsigned int)v3 >> 11) & 1,
                                                                                                     4 * (v5 ^ 1) + 2,
                                                                                                     v7,
                                                                                                     v8);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      LOBYTE(v9) = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(57566010LL, (__int64 *)va, 0LL, v5, &v11, 0LL, v9, 1LL);
    }
  }
  return result;
}
