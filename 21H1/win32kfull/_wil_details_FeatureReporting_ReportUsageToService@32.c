/*
 * XREFs of _wil_details_FeatureReporting_ReportUsageToService@32 @ 0xEF6BC
 * Callers:
 *     ?Feature_PerProcessSystemDpi__private_IsEnabledPreCheck@@YGHXZ @ 0x91B54 (-Feature_PerProcessSystemDpi__private_IsEnabledPreCheck@@YGHXZ.c)
 *     ?Feature_InkProcessor__private_IsEnabledPreCheck@@YGHXZ @ 0xE8CD6 (-Feature_InkProcessor__private_IsEnabledPreCheck@@YGHXZ.c)
 *     ?Feature_DesktopDisplayBroker__private_IsEnabledPreCheck@@YGHXZ @ 0xEA758 (-Feature_DesktopDisplayBroker__private_IsEnabledPreCheck@@YGHXZ.c)
 *     ?Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck@@YGHXZ @ 0xEA77A (-Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck@@YGHXZ.c)
 *     ?Feature_AtomicCheckFailure__private_IsEnabledPreCheck@@YGHXZ @ 0xEAA9A (-Feature_AtomicCheckFailure__private_IsEnabledPreCheck@@YGHXZ.c)
 *     ?Feature_BrokeredDisplays_RotMgr__private_IsEnabledPreCheck@@YGHXZ @ 0xEC254 (-Feature_BrokeredDisplays_RotMgr__private_IsEnabledPreCheck@@YGHXZ.c)
 *     ?Feature_DWMTouchTargeting__private_IsEnabledPreCheck@@YGHXZ @ 0xEC5E6 (-Feature_DWMTouchTargeting__private_IsEnabledPreCheck@@YGHXZ.c)
 *     ?Feature_PenTailDockEvents__private_IsEnabledPreCheck@@YGHXZ @ 0xF049E (-Feature_PenTailDockEvents__private_IsEnabledPreCheck@@YGHXZ.c)
 *     ?Feature_DeliverViaSendMessage__private_IsEnabledPreCheck@@YGHXZ @ 0xF0F32 (-Feature_DeliverViaSendMessage__private_IsEnabledPreCheck@@YGHXZ.c)
 *     ?Feature_ReadClipboardEvent__private_IsEnabled@@YGHXZ @ 0xF20F0 (-Feature_ReadClipboardEvent__private_IsEnabled@@YGHXZ.c)
 *     ?Feature_QuickLaunchInvocation__private_IsEnabledPreCheck@@YGHXZ @ 0x155D05 (-Feature_QuickLaunchInvocation__private_IsEnabledPreCheck@@YGHXZ.c)
 * Callees:
 *     _wil_details_MapReportingKind@8 @ 0xA68C2 (_wil_details_MapReportingKind@8.c)
 *     _wil_details_FeatureReporting_ReportUsageToServiceDirect@28 @ 0xEF710 (_wil_details_FeatureReporting_ReportUsageToServiceDirect@28.c)
 */

int (__stdcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8))(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD)
{
  int v9; // eax
  int (__stdcall *result)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // eax
  int v11; // [esp+Ch] [ebp-4h] BYREF

  v11 = 3;
  v9 = wil_details_MapReportingKind(3, a6);
  result = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                a3,
                                                                                                a4,
                                                                                                v9,
                                                                                                3,
                                                                                                3);
  if ( result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))g_wil_details_pfnFeatureLoggingHook(
                                                                                                  a2,
                                                                                                  a5,
                                                                                                  0,
                                                                                                  a6,
                                                                                                  &v11,
                                                                                                  0,
                                                                                                  0,
                                                                                                  1);
  }
  return result;
}
