/*
 * XREFs of BmlGetNextBestTargetMode @ 0x1C01B55A0
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlPinNextBestTargetMode @ 0x1C01BDB08 (BmlPinNextBestTargetMode.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0FC (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0013010 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1C01A965C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C01B5890 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModes @ 0x1C01B5A18 (BmlCompareTargetModes.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C01B5CB4 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x1C03ABA68 (_BmlBuildVirtualRefreshRateListFromTargetModeSet.c)
 */

__int64 __fastcall BmlGetNextBestTargetMode(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        DMMVIDPNSOURCEMODESET *a4,
        _QWORD *a5,
        unsigned int a6,
        _DWORD *a7,
        struct _D3DDDI_RATIONAL *a8,
        int *a9)
{
  __int64 v10; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // r12
  _QWORD *v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rbx
  _QWORD *v20; // rbp
  struct DMMVIDPNSOURCEMODE *NextMode; // rbp
  _QWORD *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _D3DDDI_RATIONAL v29; // rax
  int Numerator; // ecx
  __int64 v31; // rdi
  __int64 v32; // rax
  unsigned int v34; // ebx
  struct _D3DDDI_RATIONAL v35; // rax
  bool refreshed; // al
  const struct _D3DDDI_RATIONAL *v37; // rcx
  const struct _D3DDDI_RATIONAL *v38; // rdx
  struct _D3DDDI_RATIONAL v39; // rax
  struct _D3DDDI_RATIONAL v40; // [rsp+40h] [rbp-48h]
  void *v43; // [rsp+B0h] [rbp+28h]
  void *v44; // [rsp+B0h] [rbp+28h]
  void *v45; // [rsp+B0h] [rbp+28h]

  v10 = a3;
  v13 = WdLogNewEntry5_WdTrace(a1, a2);
  v15 = 0;
  *(_QWORD *)(v13 + 24) = a4;
  *(_QWORD *)(v13 + 32) = a6;
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v16 = a5;
  if ( !a5[18] )
  {
    WdLogSingleEntry2(1LL, a5, v10);
    return 3223192328LL;
  }
  v17 = 0LL;
  *a7 = -1;
  if ( a6 != -1 )
  {
    v17 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)a4 + 24, a6);
    if ( !v17 )
    {
      v34 = -1071774959;
      goto LABEL_31;
    }
  }
  v18 = 120 * v10;
  v19 = 0LL;
  *(_QWORD *)(v18 + a1 + 100) = 0LL;
  if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
  {
    WdLogNewEntry5_WdTrace(v14, v16);
    v15 = 1;
  }
  v20 = (_QWORD *)*((_QWORD *)a4 + 6);
  if ( v20 == (_QWORD *)((char *)a4 + 48) )
    goto LABEL_30;
  NextMode = (struct DMMVIDPNSOURCEMODE *)(v20 - 1);
  if ( !NextMode )
    goto LABEL_30;
  do
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v16);
    v22[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
    v22[4] = *((unsigned int *)NextMode + 21);
    v22[5] = *((unsigned int *)NextMode + 22);
    v24 = *((unsigned int *)NextMode + 23);
    v22[6] = v24;
    v22[7] = *((unsigned int *)NextMode + 24);
    ++*(_DWORD *)(v18 + a1 + 100);
    if ( NextMode == (struct DMMVIDPNSOURCEMODE *)v17
      || (LOBYTE(v23) = v15, !(unsigned __int8)BmlDoesTargetModeObeyConstraint(a1, a3, NextMode, v23)) )
    {
      WdLogNewEntry5_WdTrace(v24, v22);
    }
    else
    {
      ++*(_DWORD *)(v18 + a1 + 104);
      if ( (unsigned int)BmlCompareTargetModes(a1, a2, a3, (_DWORD)NextMode, v19, v15) == 1
        && (!v17 || (unsigned int)BmlCompareTargetModes(a1, a2, a3, (_DWORD)NextMode, v17, v15) == -1) )
      {
        WdLogNewEntry5_WdTrace(v26, v25);
        v19 = (__int64)NextMode;
      }
    }
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(a4, NextMode);
  }
  while ( NextMode );
  if ( !v19 )
  {
LABEL_30:
    v34 = -1071774970;
LABEL_31:
    WdLogNewEntry5_WdTrace(v14, v16);
    return v34;
  }
  *a7 = *(_DWORD *)(v19 + 24);
  if ( (**(_DWORD **)(v18 + a1 + 16) & 0x1000000) == 0 )
  {
    if ( (*(_DWORD *)(v18 + a1 + 128) & 1) != 0 )
    {
      BmlBuildVirtualRefreshRateListFromTargetModeSet(a4);
      v39 = *(struct _D3DDDI_RATIONAL *)(v19 + 92);
      if ( ((*(_DWORD *)(v19 + 120) >> 3) & 0x3F) != 0 )
      {
        v40.Numerator = *(_QWORD *)(v19 + 92);
        v40.Denominator = ((*(_DWORD *)(v19 + 120) >> 3) & 0x3F) * v39.Denominator;
        v39 = v40;
      }
      *a8 = v39;
      *a9 = 1;
      operator delete(0LL);
    }
    else
    {
      v35 = *(struct _D3DDDI_RATIONAL *)(v19 + 92);
      if ( ((*(_DWORD *)(v19 + 120) >> 3) & 0x3F) != 0 )
      {
        LODWORD(v45) = *(_QWORD *)(v19 + 92);
        HIDWORD(v45) = ((*(_DWORD *)(v19 + 120) >> 3) & 0x3F) * v35.Denominator;
        v35 = (struct _D3DDDI_RATIONAL)v45;
      }
      *a8 = v35;
      *a9 = 1;
    }
    goto LABEL_26;
  }
  if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v19) )
  {
    refreshed = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
                  (DMMVIDPNTARGETMODE *)v19,
                  (const struct _D3DDDI_RATIONAL *)(*(_QWORD *)(v18 + a1 + 16) + 224LL),
                  *(_DWORD *)(*(_QWORD *)(v18 + a1 + 16) + 240LL));
    v37 = *(const struct _D3DDDI_RATIONAL **)(v18 + a1 + 16);
    v38 = v37 + 28;
    if ( refreshed )
    {
      Numerator = v37[30].Numerator;
      v29 = *v38;
      goto LABEL_25;
    }
    if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v19, v38, 1u) )
    {
      v29 = *(struct _D3DDDI_RATIONAL *)(*(_QWORD *)(v18 + a1 + 16) + 224LL);
    }
    else
    {
      v29 = *(struct _D3DDDI_RATIONAL *)(v19 + 92);
      if ( ((*(_DWORD *)(v19 + 120) >> 3) & 0x3F) != 0 )
      {
        LODWORD(v44) = *(_QWORD *)(v19 + 92);
        HIDWORD(v44) = ((*(_DWORD *)(v19 + 120) >> 3) & 0x3F) * v29.Denominator;
        v29 = (struct _D3DDDI_RATIONAL)v44;
      }
    }
  }
  else
  {
    if ( g_OSTestSigningEnabled )
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_VirtualRefreshRateTest__private_reporting,
        0x1A59657u,
        v27,
        v28,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
        0);
    v29 = *(struct _D3DDDI_RATIONAL *)(v19 + 92);
    if ( ((*(_DWORD *)(v19 + 120) >> 3) & 0x3F) != 0 )
    {
      LODWORD(v43) = *(_QWORD *)(v19 + 92);
      HIDWORD(v43) = ((*(_DWORD *)(v19 + 120) >> 3) & 0x3F) * v29.Denominator;
      v29 = (struct _D3DDDI_RATIONAL)v43;
    }
  }
  Numerator = 1;
LABEL_25:
  *a8 = v29;
  *a9 = Numerator;
LABEL_26:
  v31 = *(_QWORD *)(a2 + 48);
  v32 = *(_QWORD *)(v31 + 8);
  if ( !v32 )
  {
    WdLogSingleEntry0(1LL);
    v32 = *(_QWORD *)(v31 + 8);
  }
  DxgkLogCodePointPacket(
    0x21u,
    a3,
    *(_DWORD *)(v19 + 84),
    *(_DWORD *)(v19 + 88),
    *(_QWORD *)(*(_QWORD *)(v32 + 16) + 404LL));
  return 0LL;
}
