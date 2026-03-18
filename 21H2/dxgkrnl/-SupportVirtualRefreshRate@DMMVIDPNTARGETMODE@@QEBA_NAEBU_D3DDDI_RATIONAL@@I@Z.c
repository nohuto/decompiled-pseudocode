/*
 * XREFs of ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C01B5CB4
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1C01B55A0 (BmlGetNextBestTargetMode.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C01B5890 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C01B5B6C (BmlCompareTargetModesWithConstraint.c)
 *     ?VirtualRefreshRateSupport@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IPEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C03A3450 (-VirtualRefreshRateSupport@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTAR.c)
 *     _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x1C03ABA68 (_BmlBuildVirtualRefreshRateListFromTargetModeSet.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03AC0EC (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0010CA8 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1C01A965C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 */

char __fastcall DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
        DMMVIDPNTARGETMODE *this,
        const struct _D3DDDI_RATIONAL *a2,
        int a3)
{
  int v6; // ecx
  struct _D3DDDI_RATIONAL v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 Denominator; // rdx
  __int64 Numerator; // r8
  struct _D3DDDI_RATIONAL v13; // [rsp+60h] [rbp+8h]
  struct _D3DDDI_RATIONAL v14; // [rsp+78h] [rbp+20h] BYREF

  v6 = (*((_DWORD *)this + 30) >> 3) & 0x3F;
  if ( v6 )
  {
    v13.Numerator = *(_QWORD *)((char *)this + 92);
    v13.Denominator = v6 * HIDWORD(*(_QWORD *)((char *)this + 92));
    v7 = v13;
  }
  else
  {
    v7 = *(struct _D3DDDI_RATIONAL *)((char *)this + 92);
  }
  v14 = v7;
  if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(this) )
  {
    Denominator = a2->Denominator;
    Numerator = a2->Numerator;
    if ( Numerator * (unsigned __int64)(a3 * v7.Denominator) > Denominator * (unsigned __int64)v7.Numerator
      || Numerator * (unsigned __int64)*((unsigned int *)this + 37) < Denominator
                                                                    * (unsigned __int64)*((unsigned int *)this + 36) )
    {
      return 0;
    }
  }
  else
  {
    if ( g_OSTestSigningEnabled )
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_VirtualRefreshRateTest__private_reporting,
        0x1A59657u,
        v8,
        v9,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
        0);
    if ( a3 != 1 || !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(a2, &v14, 0) )
      return 0;
  }
  return 1;
}
