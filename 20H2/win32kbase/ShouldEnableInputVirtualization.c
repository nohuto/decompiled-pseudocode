/*
 * XREFs of ShouldEnableInputVirtualization @ 0x1C009BFCC
 * Callers:
 *     InputInitialize @ 0x1C009C054 (InputInitialize.c)
 * Callees:
 *     RIMRegQueryDWord @ 0x1C0009458 (RIMRegQueryDWord.c)
 *     RIMRegOpenKey @ 0x1C00094D0 (RIMRegOpenKey.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     RIMIsRunningOnDesktop @ 0x1C00369D0 (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ccccc @ 0x1C01B4F08 (WPP_RECORDER_SF_ccccc.c)
 */

char ShouldEnableInputVirtualization()
{
  int v0; // edx
  int v1; // r9d
  void *v3; // rax
  int v4; // edx
  int v5; // eax
  int v6; // [rsp+50h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-28h] BYREF
  __int128 v8; // [rsp+68h] [rbp-18h] BYREF

  if ( RIMIsRunningOnDesktop() )
  {
    if ( gSessionId != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v1 = 14;
      goto LABEL_5;
    }
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_InputVirtualizationDesktopSpecific__private_reporting,
      0x1244BCEu,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_TestMode_logged_traits,
      0,
      3);
    DestinationString = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
    v6 = 0;
    v5 = RIMRegQueryDWord((__int64)&DestinationString, (__int64)L"IsVailContainer", 0, &v6);
    if ( (v6 & 0x1F) == 0 )
    {
      if ( v5 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0;
        v1 = 16;
        LOBYTE(v0) = 3;
        goto LABEL_6;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v1 = 17;
LABEL_5:
      LOBYTE(v0) = 4;
LABEL_6:
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v0,
        12,
        v1,
        (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
      return 0;
    }
    byte_1C0252543 = v6 & 1;
    byte_1C0252544 = (v6 & 2) != 0;
    byte_1C0252541 = (v6 & 4) != 0;
    byte_1C0252542 = (v6 & 8) != 0;
    byte_1C0252540 = (v6 & 0x10) != 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ccccc();
  }
  else
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_InputVirtualization__private_reporting,
      0xF89686u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_InputVirtualization_logged_traits,
      1,
      3);
    v8 = 0LL;
    HviGetHypervisorFeatures(&v8);
    if ( (v8 & 0x100000000000LL) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v1 = 11;
      goto LABEL_5;
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\CmService");
    v3 = RIMRegOpenKey(&DestinationString);
    if ( !v3 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v1 = 12;
      goto LABEL_5;
    }
    ZwClose(v3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v4,
        12,
        13,
        (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
    }
  }
  return 1;
}
