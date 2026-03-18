/*
 * XREFs of _BmlGetPathModeListForPathTargetModes @ 0x1C03AC0EC
 * Callers:
 *     _BmlGetPathModeListForPath @ 0x1C03ABDDC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0010CA8 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0011B4C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0013010 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C01A6D08 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1C01A965C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C01B5890 (BmlDoesTargetModeObeyConstraint.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C01B5CB4 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     BmlPinPathContentScaling @ 0x1C01BDD7C (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x1C01BDE20 (BmlPinPathContentRotation.c)
 *     ?AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C03A8E64 (-AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C03AB628 (BmlUnPinPartialPathModalityOnPath.c)
 *     _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x1C03ABA68 (_BmlBuildVirtualRefreshRateListFromTargetModeSet.c)
 */

__int64 __fastcall BmlGetPathModeListForPathTargetModes(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        CCD_MODE_RESULT_SET *a5)
{
  _QWORD *v5; // rbx
  __int64 v6; // r14
  __int64 v8; // r12
  int refreshed; // esi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // r13
  _QWORD *v17; // rcx
  _QWORD *v18; // r12
  DMMVIDPNSOURCEMODE *v19; // rdx
  struct DMMVIDPNSOURCEMODE *v20; // rax
  struct DMMVIDPNSOURCEMODE *NextMode; // r14
  _QWORD *v22; // rcx
  bool v23; // zf
  __int64 v24; // rdi
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  unsigned __int16 v27; // r12
  __int64 v28; // rdi
  DMMVIDPNSOURCEMODE *v29; // rdi
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // r8
  _QWORD *v39; // rax
  struct _D3DDDI_RATIONAL v40; // rcx
  int v41; // edx
  unsigned int v42; // r12d
  __int64 v43; // rdi
  int v44; // edi
  void *v45; // rcx
  unsigned __int64 v47; // [rsp+40h] [rbp-A1h] BYREF
  struct _D3DDDI_RATIONAL v48; // [rsp+48h] [rbp-99h] BYREF
  struct DMMVIDPNSOURCEMODE *v49; // [rsp+50h] [rbp-91h]
  DMMVIDPNSOURCEMODE *v50; // [rsp+58h] [rbp-89h]
  __int64 v51; // [rsp+60h] [rbp-81h]
  __int64 v52; // [rsp+68h] [rbp-79h] BYREF
  VIDPN_MGR *v53; // [rsp+70h] [rbp-71h]
  _QWORD *v54; // [rsp+78h] [rbp-69h] BYREF
  _OWORD v55[3]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-31h]
  __int128 v57; // [rsp+B8h] [rbp-29h]
  __int128 v58; // [rsp+C8h] [rbp-19h]
  __int64 v59; // [rsp+D8h] [rbp-9h]
  __int64 v60; // [rsp+E0h] [rbp-1h]
  bool v61; // [rsp+E8h] [rbp+7h]
  __int16 v62; // [rsp+E9h] [rbp+8h]
  char v63; // [rsp+EBh] [rbp+Ah]
  int v64; // [rsp+ECh] [rbp+Bh]
  _QWORD *v67; // [rsp+158h] [rbp+77h] BYREF

  v5 = 0LL;
  v6 = a3;
  v8 = 120LL * a3;
  v53 = *(VIDPN_MGR **)(a2 + 48);
  v51 = v8;
  refreshed = 0;
  if ( !v53 )
    WdLogSingleEntry0(1LL);
  v11 = *(_QWORD *)(a4 + 88);
  v12 = *(_QWORD *)(v11 + 104);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
    v13 = *(_QWORD *)(v11 + 104);
    v52 = v13;
    if ( !v13 )
      goto LABEL_6;
    v14 = *(_QWORD *)(a4 + 96);
    v15 = *(_QWORD *)(v14 + 104);
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 96));
      v16 = *(_QWORD **)(v14 + 104);
    }
    else
    {
      v16 = 0LL;
    }
    v54 = v16;
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2);
    v17[3] = v16;
    v17[4] = *(unsigned __int16 *)(v8 + a1 + 68);
    v17[5] = *(unsigned __int16 *)(v8 + a1 + 70);
    if ( !v16 )
    {
      refreshed = -1071774967;
      goto LABEL_56;
    }
    v18 = v16 + 6;
    if ( (_QWORD *)*v18 == v18 )
    {
LABEL_56:
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v54, 0LL);
      goto LABEL_57;
    }
    v19 = *(DMMVIDPNSOURCEMODE **)(v13 + 144);
    v50 = v19;
    if ( !v19 )
    {
      WdLogSingleEntry2(1LL, v13, v6);
      refreshed = -1071774968;
      goto LABEL_56;
    }
    if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
    {
      WdLogNewEntry5_WdTrace(v17, v19);
      v50 = *(DMMVIDPNSOURCEMODE **)(v13 + 144);
    }
    v20 = (struct DMMVIDPNSOURCEMODE *)v16[18];
    NextMode = 0LL;
    v47 = 0LL;
    v67 = 0LL;
    v22 = (_QWORD *)*v18;
    v23 = *v18 == (_QWORD)v18;
    v49 = v20;
    if ( !v23 )
      NextMode = (struct DMMVIDPNSOURCEMODE *)(v22 - 1);
    if ( !NextMode )
    {
LABEL_54:
      v45 = v5;
      goto LABEL_55;
    }
    v24 = v51;
    while ( 1 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v19);
      v25[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
      v25[4] = *((unsigned int *)NextMode + 21);
      v25[5] = *((unsigned int *)NextMode + 22);
      v25[6] = *((unsigned int *)NextMode + 23);
      v25[7] = *((unsigned int *)NextMode + 24);
      ++*(_DWORD *)(v24 + a1 + 100);
      if ( v49 && v49 != NextMode || (v27 = a3, !BmlDoesTargetModeObeyConstraint(a1, a3, (__int64)NextMode)) )
      {
        WdLogNewEntry5_WdTrace(v26, v25);
        goto LABEL_52;
      }
      ++*(_DWORD *)(v24 + a1 + 104);
      v28 = *((unsigned int *)NextMode + 6);
      if ( v49 )
        break;
      refreshed = VIDPN_MGR::PinVidPnTargetMode(v53, (struct DMMVIDPNTARGETMODESET *const)v16, v28, 1);
      if ( refreshed >= 0 )
        goto LABEL_29;
      refreshed = 0;
LABEL_49:
      v44 = BmlUnPinPartialPathModalityOnPath(a1, a2, v27);
      if ( v44 < 0 )
      {
        WdLogSingleEntry3(3LL, a1, v27, a2);
        refreshed = v44;
        goto LABEL_60;
      }
      if ( v49 )
        goto LABEL_53;
      v24 = v51;
LABEL_52:
      NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v16, NextMode);
      if ( !NextMode )
      {
LABEL_53:
        v5 = v67;
        goto LABEL_54;
      }
    }
    refreshed = 0;
LABEL_29:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v26, v25) + 24) = v28;
    if ( (int)BmlPinPathContentScaling(a1, a2, a3) >= 0 && (int)BmlPinPathContentRotation(a1, a2, a3) >= 0 )
    {
      v29 = v50;
      v62 = 0;
      v63 = 0;
      GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v50);
      v31 = *(_OWORD *)&GraphicsInfo->PrimSurfSize.cx;
      v32 = *(_OWORD *)&GraphicsInfo->Stride;
      v59 = *((_QWORD *)NextMode + 19);
      v60 = *((_QWORD *)NextMode + 18);
      LODWORD(GraphicsInfo) = *((_DWORD *)NextMode + 32);
      v57 = v31;
      v64 = (int)GraphicsInfo;
      v33 = *(_OWORD *)((char *)NextMode + 72);
      LODWORD(GraphicsInfo) = *((_DWORD *)v29 + 18);
      v58 = v32;
      v34 = *(_OWORD *)((char *)NextMode + 88);
      v55[0] = v33;
      v35 = *(_OWORD *)((char *)NextMode + 104);
      v55[1] = v34;
      v61 = (unsigned int)((_DWORD)GraphicsInfo - 3) <= 1;
      *(_QWORD *)&v34 = *((_QWORD *)NextMode + 15);
      v55[2] = v35;
      v56 = v34;
      refreshed = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v55);
      if ( refreshed < 0 )
        goto LABEL_58;
      if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(NextMode) )
      {
        v38 = v47;
        if ( !v47 )
        {
          refreshed = BmlBuildVirtualRefreshRateListFromTargetModeSet(
                        (DMMVIDPNSOURCEMODESET *)v16,
                        &v47,
                        (void **)&v67,
                        v37);
          if ( refreshed < 0 )
            goto LABEL_58;
          v38 = v47;
        }
        v39 = v67;
        if ( v67 )
        {
          v40 = *(struct _D3DDDI_RATIONAL *)((char *)NextMode + 92);
          v41 = (*((_DWORD *)NextMode + 30) >> 3) & 0x3F;
          if ( v41 )
          {
            v48.Numerator = *(_QWORD *)((char *)NextMode + 92);
            v48.Denominator = v41 * v40.Denominator;
            v40 = v48;
          }
          v48 = v40;
          v42 = 0;
          if ( v38 )
          {
            v43 = 0LL;
            while ( 1 )
            {
              if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(&v48, (const struct _D3DDDI_RATIONAL *)&v39[v43], 0) )
              {
                if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
                       NextMode,
                       (const struct _D3DDDI_RATIONAL *)&v67[v43],
                       1) )
                {
                  v59 = v67[v43];
                  refreshed = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v55);
                  if ( refreshed < 0 )
                    break;
                }
              }
              v43 = ++v42;
              if ( v42 >= v47 )
                goto LABEL_48;
              v39 = v67;
            }
LABEL_58:
            WdLogSingleEntry0(2LL);
LABEL_60:
            v45 = v67;
LABEL_55:
            operator delete(v45);
            goto LABEL_56;
          }
LABEL_48:
          v27 = a3;
        }
      }
      else if ( g_OSTestSigningEnabled )
      {
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_VirtualRefreshRateTest__private_reporting,
          0x1A59657u,
          v36,
          v37,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
          0);
      }
    }
    goto LABEL_49;
  }
  v52 = 0LL;
LABEL_6:
  WdLogSingleEntry1(2LL, v6);
  refreshed = -1071774968;
LABEL_57:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v52, 0LL);
  return (unsigned int)refreshed;
}
