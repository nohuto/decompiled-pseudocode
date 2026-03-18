/*
 * XREFs of ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B9F30
 * Callers:
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B9088 (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009738 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B8FB4 (-AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1C02B914C (-AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 *     ?AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1C02B9328 (-AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 *     ?AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B93F0 (-AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B94E0 (-AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::CollectDisplayAdapterDiagData(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  ADAPTER_DISPLAY **v5; // rdx
  __int64 v6; // rdx
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+30h] [rbp-18h]

  if ( !a2 )
    return 3221225485LL;
  *((_QWORD *)this + 1) = *(_QWORD *)((char *)a2 + 316);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 81);
  *((_BYTE *)this + 20) = DXGADAPTER::IsBddFallbackDriver(a2);
  DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnSourceInfo(this, v5);
  DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnTargetInfo(this, a2);
  if ( DISPLAYDIAGNOSTICADAPTERDATA::AddDMMSegmentBuffer(this, a2) < 0 )
    *((_BYTE *)this + 56) = 0;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_DriverWhiteboxData__private_reporting,
    0x13CC011u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1,
    v7);
  if ( (int)DISPLAYDIAGNOSTICADAPTERDATA::AddDriverWhiteboxInfo((struct DXGADAPTER **)this) < 0 )
    *((_BYTE *)this + 3248) = 0;
  if ( *((_BYTE *)this + 21) )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_DriverBlackboxData__private_reporting,
      0x13CBFF3u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1,
      v8);
    if ( (int)DISPLAYDIAGNOSTICADAPTERDATA::AddDriverBlackboxInfo(this, v6) < 0 )
      *((_BYTE *)this + 3488) = 0;
  }
  return 0LL;
}
