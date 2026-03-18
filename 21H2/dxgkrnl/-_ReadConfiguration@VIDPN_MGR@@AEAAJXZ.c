/*
 * XREFs of ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C0212F94
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0211BD0 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C01DCD70 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadConfiguration(VIDPN_MGR *this)
{
  int RegistryValues; // eax
  int v3; // edi
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  bool v9; // al
  _DWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v16; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h]
  const wchar_t *v20; // [rsp+68h] [rbp-A0h]
  unsigned int *v21; // [rsp+70h] [rbp-98h]
  __int64 v22; // [rsp+78h] [rbp-90h]
  unsigned int *v23; // [rsp+80h] [rbp-88h]
  int v24; // [rsp+88h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-78h]
  int v26; // [rsp+98h] [rbp-70h]
  const wchar_t *v27; // [rsp+A0h] [rbp-68h]
  char *v28; // [rsp+A8h] [rbp-60h]
  int v29; // [rsp+B0h] [rbp-58h]
  char *v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+C0h] [rbp-48h]
  __int64 v32; // [rsp+C8h] [rbp-40h]
  int v33; // [rsp+D0h] [rbp-38h]
  const wchar_t *v34; // [rsp+D8h] [rbp-30h]
  __int64 *v35; // [rsp+E0h] [rbp-28h]
  int v36; // [rsp+E8h] [rbp-20h]
  __int64 *v37; // [rsp+F0h] [rbp-18h]
  int v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  int v40; // [rsp+108h] [rbp+0h]
  __int128 v41; // [rsp+110h] [rbp+8h]
  __int128 v42; // [rsp+120h] [rbp+18h]
  __int64 v43; // [rsp+130h] [rbp+28h]
  _QWORD v44[22]; // [rsp+138h] [rbp+30h] BYREF

  if ( !VIDPN_MGR::_BadMonitorSourceModeDiagnosibility )
  {
    v15 = 2;
    memset(v44, 0, 0xA8uLL);
    LODWORD(v44[1]) = 288;
    LODWORD(v44[4]) = 0x4000000;
    v44[2] = L"BadMonitorModeDiag";
    LODWORD(v44[11]) = 0x4000000;
    v44[3] = &v15;
    v44[5] = 0LL;
    v44[9] = L"AssertOnDdiViolation";
    LODWORD(v44[6]) = 0;
    v44[10] = &g_DmmAssertOnDdiViolation;
    v44[7] = 0LL;
    LODWORD(v44[8]) = 288;
    v44[12] = 0LL;
    LODWORD(v44[13]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v44, 0LL, 0LL);
    v3 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      v4 = v15;
    }
    else
    {
      WdLogSingleEntry1(7LL, RegistryValues);
      if ( v3 != -1073741772 )
        WdLogSingleEntry0(1LL);
      v4 = 2;
      v15 = 2;
    }
    if ( v4 - 1 > 1 )
      WdLogSingleEntry1(2LL, v4);
    else
      VIDPN_MGR::_BadMonitorSourceModeDiagnosibility = v4;
  }
  v5 = *((_QWORD *)this + 1);
  v15 = 0;
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *((_QWORD *)this + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v5 + 16) + 216LL),
              L"AllowUnspecifiedVSync",
              (char *)&v15,
              4u,
              2u) >= 0 )
    VIDPN_MGR::_bAllowUnspecifiedVSync = v15 != 0;
  else
    WdLogSingleEntry0(7LL);
  v6 = *((_QWORD *)this + 1);
  v15 = 0;
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    v6 = *((_QWORD *)this + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v6 + 16) + 216LL),
              L"AllowUnspecifiedHSync",
              (char *)&v15,
              4u,
              2u) >= 0 )
    VIDPN_MGR::_bAllowUnspecifiedHSync = v15 != 0;
  else
    WdLogSingleEntry0(7LL);
  v7 = *((_QWORD *)this + 1);
  v15 = 0;
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    v7 = *((_QWORD *)this + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v7 + 16) + 216LL),
              L"AllowUnspecifiedPixelRate",
              (char *)&v15,
              4u,
              2u) >= 0 )
    VIDPN_MGR::_bAllowUnspecifiedPixelRate = v15 != 0;
  else
    WdLogSingleEntry0(7LL);
  v8 = *((_QWORD *)this + 1);
  v15 = 0;
  if ( !v8 )
  {
    WdLogSingleEntry0(1LL);
    v8 = *((_QWORD *)this + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v8 + 16) + 216LL),
              L"ForceDualViewBehavior",
              (char *)&v15,
              4u,
              2u) >= 0 )
  {
    v9 = v15 != 0;
  }
  else
  {
    WdLogSingleEntry0(7LL);
    v9 = 0;
  }
  *((_BYTE *)this + 520) = v9;
  v10 = (_DWORD *)((char *)this + 544);
  v16 = 1000;
  LODWORD(v22) = 67108868;
  LODWORD(v19) = 288;
  v26 = 288;
  v20 = L"RapidHPDTime";
  v29 = 67108868;
  v21 = &v16;
  v33 = 288;
  v23 = &v16;
  v36 = 67108868;
  v27 = L"RapidHPDThresholdCount";
  *((_DWORD *)this + 136) = 5;
  v34 = L"EnableExperimentalRefreshRates";
  v35 = &v17;
  v37 = &v17;
  v43 = 0LL;
  LODWORD(v17) = 0;
  v18 = 0LL;
  v24 = 4;
  v25 = 0LL;
  v28 = (char *)this + 544;
  v30 = (char *)this + 544;
  v31 = 4;
  v32 = 0LL;
  v38 = 4;
  v39 = 0LL;
  v40 = 0;
  v41 = 0LL;
  v42 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v18, 0LL, 0LL);
  v11 = v16;
  if ( v16 > 0xEA60 )
    v11 = 60000;
  v16 = v11;
  *((_DWORD *)this + 135) = 10000 * v11 / KeQueryTimeIncrement();
  if ( *v10 == 1 )
  {
    *((_DWORD *)this + 136) = 0;
  }
  else if ( *v10 > 0x20u )
  {
    *v10 = 32;
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_ExperimentalRefreshRates__private_reporting,
    0x14551FCu,
    v12,
    v13,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
    0);
  return 0LL;
}
