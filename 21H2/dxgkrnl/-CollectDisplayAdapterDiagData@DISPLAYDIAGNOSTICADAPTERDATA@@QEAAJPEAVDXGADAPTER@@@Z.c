/*
 * XREFs of ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02EE034
 * Callers:
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02ECFA0 (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000F8B8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiIsLastLidStateOpen @ 0x1C005F6A4 (DpiIsLastLidStateOpen.c)
 *     ?AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02ECE74 (-AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1C02ED064 (-AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 *     ?AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1C02ED2D0 (-AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 *     ?AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02ED3F4 (-AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02ED538 (-AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::CollectDisplayAdapterDiagData(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  NTSTATUS v5; // esi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE OutputBuffer[80]; // [rsp+40h] [rbp-68h] BYREF

  if ( !a2 )
    return 3221225485LL;
  *((_QWORD *)this + 1) = *(_QWORD *)((char *)a2 + 404);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 103);
  *((_BYTE *)this + 20) = DXGADAPTER::IsBddFallbackDriver(a2);
  memset(OutputBuffer, 0, 0x4CuLL);
  v5 = ZwPowerInformation(SystemPowerCapabilities, 0LL, 0, OutputBuffer, 0x4Cu);
  if ( v5 >= 0 )
  {
    *((_BYTE *)this + 3504) = OutputBuffer[2] != 0;
    *((_BYTE *)this + 3505) = *((_BYTE *)DXGGLOBAL_GetGlobal() + 304792);
    *((_BYTE *)this + 3506) = DpiIsLastLidStateOpen() != 0;
  }
  DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnSourceInfo(this, (ADAPTER_DISPLAY **)a2);
  DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnTargetInfo(this, a2);
  if ( DISPLAYDIAGNOSTICADAPTERDATA::AddDMMSegmentBuffer(this, a2) < 0 )
    *((_BYTE *)this + 56) = 0;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_DriverWhiteboxData__private_reporting,
    0x13CC011u,
    v6,
    v7,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1);
  if ( (int)DISPLAYDIAGNOSTICADAPTERDATA::AddDriverWhiteboxInfo((struct DXGADAPTER **)this) < 0 )
    *((_BYTE *)this + 3248) = 0;
  if ( *((_BYTE *)this + 21) )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_DriverBlackboxData__private_reporting,
      0x13CBFF3u,
      v8,
      v9,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1);
    if ( (int)DISPLAYDIAGNOSTICADAPTERDATA::AddDriverBlackboxInfo(this) < 0 )
      *((_BYTE *)this + 3488) = 0;
  }
  return (unsigned int)v5;
}
