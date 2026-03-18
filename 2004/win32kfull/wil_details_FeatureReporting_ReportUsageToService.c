/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C006165C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0054B90 (xxxDoHotKeyStuff.c)
 *     InitProcessSystemDpi @ 0x1C0061490 (InitProcessSystemDpi.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C00C824C (-SetPenHotKeys@@YAXXZ.c)
 *     DispBrokerGetCurrentModeImpl @ 0x1C01257F0 (DispBrokerGetCurrentModeImpl.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C0127AA4 (--0InkProcessor@@AEAA@XZ.c)
 *     InitModuleAllocations @ 0x1C0127E80 (InitModuleAllocations.c)
 *     InitRotationManager @ 0x1C012A110 (InitRotationManager.c)
 *     Feature_Servicing_2108c_32183379__private_IsEnabled @ 0x1C0158138 (Feature_Servicing_2108c_32183379__private_IsEnabled.c)
 *     ?Feature_ReadClipboardEvent__private_IsEnabled@@YAHXZ @ 0x1C0158FE8 (-Feature_ReadClipboardEvent__private_IsEnabled@@YAHXZ.c)
 *     Feature_Servicing_2110c_35205399__private_IsEnabled @ 0x1C0159068 (Feature_Servicing_2110c_35205399__private_IsEnabled.c)
 *     Feature_Servicing_2109c_34956946__private_IsEnabled @ 0x1C0159424 (Feature_Servicing_2109c_34956946__private_IsEnabled.c)
 *     Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled @ 0x1C015948C (Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled.c)
 *     Feature_Servicing_2108c_33766748__private_IsEnabled @ 0x1C0159848 (Feature_Servicing_2108c_33766748__private_IsEnabled.c)
 *     DCompSessionInitialize @ 0x1C0395EA0 (DCompSessionInitialize.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C00616B0 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        int a7))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v9; // [rsp+30h] [rbp-28h]

  a7 = 3;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     a3,
                                                                                                     a4,
                                                                                                     a6 != 0 ? 2 : 6);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v9 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, &a7, 0LL, v9, 1LL);
    }
  }
  return result;
}
