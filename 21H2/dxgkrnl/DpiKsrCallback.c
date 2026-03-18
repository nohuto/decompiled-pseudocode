/*
 * XREFs of DpiKsrCallback @ 0x1C0393E40
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     DxgkStopAdapters @ 0x1C030D840 (DxgkStopAdapters.c)
 *     ?DpiKsrCancel@@YAXPEAX@Z @ 0x1C0393784 (-DpiKsrCancel@@YAXPEAX@Z.c)
 *     ?DpiKsrComplete@@YAXPEAX@Z @ 0x1C039382C (-DpiKsrComplete@@YAXPEAX@Z.c)
 */

void __fastcall DpiKsrCallback(_BYTE *CallbackContext, PVOID Argument1, __int64 Argument2, __int64 a4)
{
  int v4; // edx
  int v5; // edx

  if ( (_DWORD)Argument1 )
  {
    v4 = (_DWORD)Argument1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 13 )
        {
          if ( CallbackContext[1305] )
          {
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_KsrDisplay__private_reporting,
              0xB841E8u,
              Argument2,
              a4,
              (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
              1);
            DxgkStopAdapters();
          }
        }
      }
      else
      {
        DpiKsrComplete(CallbackContext);
      }
    }
    else
    {
      DpiKsrCancel(CallbackContext);
    }
  }
  else
  {
    CallbackContext[1305] = 1;
    DxgkLogInternalTriageEvent(
      0LL,
      65537,
      -1,
      (__int64)L"KSR Prepare was called - will defer save until all VMs have quiesced",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
