/*
 * XREFs of MonitorAreSpecializedDisplaysSupported @ 0x1C00E093C
 * Callers:
 *     ?_GetPseudoSpecializedState@DXGMONITOR@@QEAAJPEA_N0@Z @ 0x1C00E08F4 (-_GetPseudoSpecializedState@DXGMONITOR@@QEAAJPEA_N0@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02AC4F4 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0008898 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 */

_BOOL8 MonitorAreSpecializedDisplaysSupported()
{
  _BOOL8 result; // rax
  int v1; // edx
  int v2; // [rsp+30h] [rbp-158h]
  ULONG ReturnedProductType[4]; // [rsp+40h] [rbp-148h] BYREF
  _DWORD VersionInformation[72]; // [rsp+50h] [rbp-138h] BYREF

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_ProductizeSpecializedDisplays__private_reporting,
    0x15F8BC4u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ProductizeSpecializedDisplays_logged_traits,
    1,
    v2);
  memset(&VersionInformation[1], 0, 0x118uLL);
  VersionInformation[0] = 284;
  result = 0;
  if ( RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation) >= 0 )
  {
    ReturnedProductType[0] = 0;
    if ( RtlGetProductInfo(
           VersionInformation[1],
           VersionInformation[2],
           LOWORD(VersionInformation[69]),
           HIWORD(VersionInformation[69]),
           ReturnedProductType) )
    {
      if ( ReturnedProductType[0] == 4 )
        return 1;
      if ( ReturnedProductType[0] - 161 <= 0x1B )
      {
        v1 = 134217737;
        if ( _bittest(&v1, ReturnedProductType[0] - 161) )
          return 1;
      }
    }
  }
  return result;
}
