/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039A64
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_MobilityExperience@@@wil@@SA_NXZ @ 0x180034060 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_MobilityExperience@@@wil@@SA_NXZ.c)
 *     ?Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x18004CDC0 (-Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_I.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180039920 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@det.c)
 */

__int64 (__fastcall *wil::details::FeatureImpl<__WilFeatureTraits_Feature_MobilityExperience>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  int v3; // edi
  volatile unsigned __int32 v5; // r8d
  unsigned int v6; // esi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v8 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MobilityExperience>::GetCachedFeatureEnabledState(
                      (wil::details *)a1,
                      (signed __int32 *)&v8);
    v5 = v8;
  }
  result = 0LL;
  BYTE4(v9) = 3;
  LODWORD(v9) = 0;
  if ( (_BYTE)v3 )
    return wil::details::ReportUsageToService(a1 + 2, 0xB46EBCu, (v5 >> 10) & 1, (v5 >> 11) & 1, (__int64)va, v6, v3);
  return result;
}
