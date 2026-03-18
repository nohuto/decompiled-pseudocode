/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4C30
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C01C2EF0 (DxgkSetDisplayMode.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000E260 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0013234 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0013668 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0013B94 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001FA1C (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1C0157474 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1C015761C (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01BB9EC (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BC204 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01BE360 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     DxgkQueryDmmInterface @ 0x1C01BEC10 (DxgkQueryDmmInterface.c)
 *     DxgkStatusChangeNotify @ 0x1C01C26A0 (DxgkStatusChangeNotify.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C01C5760 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01C5840 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C01C5AA0 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1C01E7CF0 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 *     ?CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EPEAU_DXGK_DISPLAYMODE_INFO@@PEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@PEAY0BA@I@Z @ 0x1C02F6FB8 (-CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PR.c)
 *     DxgkNotifyDisplayChange @ 0x1C034961C (DxgkNotifyDisplayChange.c)
 *     ?DmmIsFreqWithinToleranceRange@@YAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C039C1B0 (-DmmIsFreqWithinToleranceRange@@YAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 */

__int64 __fastcall DXGDEVICE::SetDisplayMode(
        DXGDEVICE *this,
        const struct DXGALLOCATION *a2,
        unsigned __int32 a3,
        enum _D3DDDI_ROTATION a4,
        struct _D3DKMT_SETDISPLAYMODE_FLAGS a5,
        unsigned int *a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v9; // edi
  __int64 v10; // r15
  __int64 v11; // r12
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v13; // xmm0
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 Height; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  enum _D3DDDIFORMAT Format; // eax
  char v27; // di
  struct DXGPROCESS *Current; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  int PreferredHdrPixelFormat; // eax
  __int64 v32; // rax
  const struct _DXGK_DISPLAYMODE_INFO *v33; // rbx
  __int64 v34; // rdx
  int v35; // r8d
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  __int64 v39; // rbx
  unsigned int updated; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v44; // r9d
  struct _DXGDMM_INTERFACE *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rdi
  int v49; // eax
  struct DXGGLOBAL *Global; // rax
  int v51; // r8d
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rbx
  unsigned __int8 v57; // [rsp+20h] [rbp-E0h]
  unsigned int *v58; // [rsp+40h] [rbp-C0h]
  _BYTE v60[4]; // [rsp+54h] [rbp-ACh] BYREF
  struct _DXGDMM_INTERFACE *v61; // [rsp+58h] [rbp-A8h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v62; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v63[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v64; // [rsp+98h] [rbp-68h]
  void (__fastcall *v65)(__int64, __int64); // [rsp+A0h] [rbp-60h]
  __int64 v66; // [rsp+A8h] [rbp-58h]
  int v67; // [rsp+B0h] [rbp-50h]
  enum _D3DDDI_ROTATION v68; // [rsp+B8h] [rbp-48h]
  struct D3DKMDT_HVIDPN__ *v69; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v71; // [rsp+D0h] [rbp-30h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v72; // [rsp+D8h] [rbp-28h]
  struct DXGPROCESS *v73; // [rsp+E0h] [rbp-20h]
  _QWORD v74[3]; // [rsp+E8h] [rbp-18h] BYREF
  enum _D3DDDIFORMAT v75[4]; // [rsp+100h] [rbp+0h] BYREF
  struct _D3DDDI_RATIONAL v76[2]; // [rsp+110h] [rbp+10h] BYREF
  __m256i v77; // [rsp+120h] [rbp+20h] BYREF
  __int128 v78; // [rsp+140h] [rbp+40h]
  _DWORD v79[68]; // [rsp+150h] [rbp+50h] BYREF
  __int64 retaddr; // [rsp+2B8h] [rbp+1B8h]

  v72 = a7;
  v70 = retaddr;
  v9 = a3;
  v68 = a4;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v70, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 6902LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderAdapter()->IsCoreResourceExclusiveOwner()",
      6902LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *((_QWORD *)this + 231);
  v11 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !v10 || !*(_QWORD *)(v10 + 2792) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 231)) )
  {
    WdLogSingleEntry1(1LL, 6910LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter != NULL) && pDisplayAdapter->IsDisplayAdapter() && pDisplayAdapter->IsCoreResourceExclusiveOwner()",
      6910LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v10 + 2792), v11);
  *(_OWORD *)v75 = *(_OWORD *)DisplayModeInfo;
  *(_OWORD *)&v76[0].Numerator = *((_OWORD *)DisplayModeInfo + 1);
  v77 = *(__m256i *)((_BYTE *)DisplayModeInfo + 1);
  v13 = *((_OWORD *)DisplayModeInfo + 4);
  v62.Rotation = -1;
  v14 = *((_QWORD *)a2 + 6);
  v78 = v13;
  v62.Flags.Value = 1;
  memset(&v62.Width, 0, 32);
  v15 = *(void **)(v14 + 16);
  v16 = *((_QWORD *)this + 2);
  v62.hAllocation = v15;
  v18 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v16 + 16) + 2800LL), &v62, v17);
  v21 = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry5(2LL, v18, this, *((unsigned int *)a2 + 4), a2, (unsigned int)v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x 0x%I64x",
      v21,
      (__int64)this,
      *((unsigned int *)a2 + 4),
      (__int64)a2,
      (unsigned int)v11);
    goto LABEL_34;
  }
  Height = v62.Height;
  if ( *(_QWORD *)&v62.Width != *(_QWORD *)v75 )
  {
    WdLogSingleEntry5(3LL, a2, v62.Width, v62.Height, (unsigned int)v75[0], (unsigned int)v75[1]);
    goto LABEL_13;
  }
  if ( v62.Rotation != -1 && v62.Rotation != v76[1].Denominator )
  {
    WdLogSingleEntry3(3LL, a2, v62.Rotation, (int)v76[1].Denominator);
LABEL_13:
    LODWORD(v21) = -1071775739;
    goto LABEL_34;
  }
  v23 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v23) = ((unsigned __int32)v77.m256i_i32[2] >> 4) ^ v23;
  if ( (v23 & 1) == 0 && v62.PrivateDriverFormatAttribute != v77.m256i_i32[5] )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v62.Height);
    LODWORD(v21) = -1071774891;
    v24[3] = a2;
    v24[4] = v62.PrivateDriverFormatAttribute;
    v24[5] = v77.m256i_u32[5];
    *a6 = v62.PrivateDriverFormatAttribute;
    goto LABEL_34;
  }
  *(__int64 *)((char *)&v77.m256i_i64[1] + 4) = (__int64)v62.MultisampleMethod;
  v25 = 21LL;
  Format = v62.Format;
  v75[2] = v62.Format;
  if ( !*(_QWORD *)(v10 + 2800) )
  {
    if ( v62.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    v75[2] = Format;
  }
  if ( !v62.RefreshRate.Denominator )
  {
    WdLogSingleEntry1(2LL, v62.RefreshRate.Numerator);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The miniport driver returned invalid refresh rate with denominator being 0; numerator is 0x%I64x",
      v62.RefreshRate.Numerator,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v21) = -1073741811;
    goto LABEL_34;
  }
  if ( v62.RefreshRate.Numerator == 64
    && v62.RefreshRate.Denominator == 1
    && v76[0].Numerator == -2
    && v76[0].Denominator == -2 )
  {
    v62.RefreshRate.Numerator = -2;
    v62.RefreshRate.Denominator = -2;
  }
  v27 = *(_BYTE *)&a5 & 1;
  if ( (*(_BYTE *)&a5 & 1) == 0 )
  {
LABEL_37:
    Current = DXGPROCESS::GetCurrent(v25, Height, v19, v20);
    v73 = Current;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_DWMHdrPixelFormatEnforced__private_reporting,
      0x1EF8963u,
      v29,
      v30,
      (const struct FEATURE_LOGGED_TRAITS *)Feature_DmaRemapping_logged_traits,
      1);
    if ( !*((_BYTE *)DXGGLOBAL_GetGlobal() + 304569) )
    {
      if ( v27 )
      {
        if ( Current )
        {
          if ( (*((_DWORD *)Current + 106) & 4) != 0 )
          {
            PreferredHdrPixelFormat = ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(*(_QWORD *)(v10 + 2792));
            if ( !BmlPixelFormatMatchHdrPixelFormat(v62.Format, SHIDWORD(v78), PreferredHdrPixelFormat != 1) )
            {
              WdLogSingleEntry3(3LL, a2, v62.Format, SHIDWORD(v78));
              goto LABEL_32;
            }
          }
        }
      }
    }
    v76[0] = v62.RefreshRate;
    v75[3] = DmmMapVSyncFromRationalToInteger(&v62.RefreshRate, (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)a3, 0LL);
    v32 = *((_QWORD *)a2 + 6);
    v76[1].Numerator = a3;
    v77.m256i_i32[2] ^= (v77.m256i_i8[8] ^ (unsigned __int8)BYTE1(*(_DWORD *)(v32 + 4))) & 0x10;
    v33 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v10 + 2792), v11);
    if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
            *(DXGADAPTER ***)(v10 + 2792),
            (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF) )
    {
      v34 = v77.m256i_u32[2];
      if ( v27
        || *((_DWORD *)v33 + 4) == v76[0].Numerator
        && *((_DWORD *)v33 + 5) == v76[0].Denominator
        && *((_DWORD *)v33 + 6) == v76[1].Numerator
        && *((_DWORD *)v33 + 7) == v76[1].Denominator
        && *((_DWORD *)v33 + 8) == v77.m256i_i32[0]
        && (v35 = *((_DWORD *)v33 + 9), (((unsigned __int8)v35 ^ v77.m256i_i8[4]) & 1) == 0)
        && (((unsigned __int8)v35 ^ v77.m256i_i8[4]) & 2) == 0
        && ((v77.m256i_i8[8] ^ *((_BYTE *)v33 + 40)) & 0xF) == 0 )
      {
        if ( *(_DWORD *)v33 == v75[0] && *((_DWORD *)v33 + 1) == v75[1] )
        {
          if ( (v36 = *((_DWORD *)v33 + 2), v36 == v75[2])
            || v36 == 21 && v75[2] == D3DDDIFMT_X8R8G8B8
            || v36 == 22 && v75[2] == D3DDDIFMT_A8R8G8B8 )
          {
            v37 = *((_DWORD *)v33 + 10);
            if ( (((unsigned __int8)v37 ^ v77.m256i_i8[8]) & 0x10) == 0 )
            {
              v34 = v37 ^ v77.m256i_i32[2];
              if ( (((unsigned __int8)v37 ^ v77.m256i_i8[8]) & 0x20) == 0
                && !DmmNeedTargetModeWireformatOrColorspaceChange((void *)v10, v11, v75[2])
                && (v27 || *(_QWORD *)((char *)v33 + 44) == *(__int64 *)((char *)&v77.m256i_i64[1] + 4)) )
              {
                DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v11, a2, 0, 1u);
                v38 = DmmPowerOnOffTargetsFromSourceIfNecessary((PERESOURCE *)v10, 0LL, 0LL);
                if ( v38 < 0 )
                {
                  v39 = v38;
                  WdLogSingleEntry2(2LL, *(_QWORD *)(v10 + 2792), v38);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"DmmPowerOnOffTargetsFromSourceIfNecessary failed on hAdapter 0x%I64x (Status = 0x%I64x).",
                    *(_QWORD *)(v10 + 2792),
                    v39,
                    0LL,
                    0LL,
                    0LL);
                }
                updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                            *(ADAPTER_DISPLAY **)(v10 + 2792),
                            this,
                            v11,
                            *((struct DXGADAPTERALLOCATION **)a2 + 6));
                v61 = 0LL;
                LODWORD(v21) = updated;
                DxgkLogCodePointPacket(0x3Cu, updated, *(_DWORD *)(v10 + 404), v11, 0LL);
LABEL_93:
                if ( (int)v21 >= 0 )
                {
                  *((_DWORD *)this + v11 + 302) |= 0x200u;
                  v74[1] = 0LL;
                  v74[0] = 1LL;
                  DxgkStatusChangeNotify((int *)v74, v41, v42);
                }
                goto LABEL_33;
              }
            }
          }
        }
      }
    }
    v61 = 0LL;
    v43 = DxgkQueryDmmInterface((DXGADAPTER *)v10, v34, &v61);
    v21 = v43;
    if ( v43 < 0 )
    {
      WdLogSingleEntry5(2LL, v43, this, *((unsigned int *)a2 + 4), a2, (unsigned int)v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Device 0x%I64x: DxgkQueryDmmInterface failed 0x%I64x 0x%I64x 0x%I64x",
        v21,
        (__int64)this,
        *((unsigned int *)a2 + 4),
        (__int64)a2,
        (unsigned int)v11);
      goto LABEL_33;
    }
    v45 = v61;
    v71 = 0LL;
    v64 = 0LL;
    v65 = 0LL;
    v66 = 0LL;
    v67 = 0;
    v63[0] = 0;
    v69 = 0LL;
    v21 = (int)CreateFunctionalVidPnWithEnabledVidPnSource(
                 v61,
                 (void *const)v10,
                 v11,
                 v44,
                 v57,
                 (struct _DXGK_DISPLAYMODE_INFO *)v75,
                 &v69,
                 &v71,
                 (unsigned int (*)[16])v58);
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v63,
      (__int64)v69,
      *((_QWORD *)v45 + 8),
      v10);
    v46 = -1071774925LL;
    switch ( (_DWORD)v21 )
    {
      case 0xC01E0333:
        v47 = (unsigned int)v11;
LABEL_72:
        WdLogSingleEntry5(7LL, v46, v47, (unsigned int)v75[0], (unsigned int)v75[1], v75[2]);
        goto LABEL_73;
      case 0xC01E035A:
        v47 = *(_QWORD *)(v10 + 2792);
        v46 = (unsigned int)v11;
        goto LABEL_72;
      case 0xC01E0306:
        WdLogSingleEntry5(
          7LL,
          (unsigned int)v75[0],
          (unsigned int)v75[1],
          v75[2],
          v76[0].Numerator / v76[0].Denominator,
          (unsigned int)v11);
        goto LABEL_73;
    }
    if ( (int)v21 < 0 )
    {
      WdLogSingleEntry5(2LL, v21, (unsigned int)v11, (unsigned int)v75[0], (unsigned int)v75[1], v75[2]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed to create functional VidPN based on the active VidPN with source 0x%I64x enabled with %I"
                  "64d x %I64d x %I64d.",
        v21,
        (unsigned int)v11,
        (unsigned int)v75[0],
        (unsigned int)v75[1],
        v75[2]);
LABEL_73:
      if ( v63[0] )
        v65(v66, v64);
      goto LABEL_33;
    }
    DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v11, a2, 0, 1u);
    memset(v79, 0, 0x104uLL);
    v60[0] = 0;
    v48 = v64;
    v79[8] = 1 << v11;
    v49 = DmmSetTimingsOnAdapter(v10, v64, 0, 2u, (__int64)v79, v60, 0LL, 0LL);
    v21 = v49;
    if ( v49 < 0 )
    {
      WdLogSingleEntry5(2LL, v49, *(_QWORD *)(v10 + 2792), (unsigned int)v11, a2, this);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"NTSTATUS=0x%I64x DXGADAPTER 0x%I64x DXGADAPTER::CommitVidPn failed VidPnSourceId 0x%I64x DXGALLOCATION "
                  "0x%I64x 0x%I64x 0x%I64x",
        v21,
        *(_QWORD *)(v10 + 2792),
        (unsigned int)v11,
        (__int64)a2,
        (__int64)this);
    }
    else
    {
      DmmHandleSetTimingsResult((ADAPTER_DISPLAY **)v10, (struct _DMM_SET_TIMING_RESULT *)v60, v72);
      if ( ((1 << v11) & v79[21]) != 0 )
        LODWORD(v21) = v79[v11 + 22];
      if ( v73 && (*((_DWORD *)v73 + 106) & 4) != 0 )
        goto LABEL_91;
      Global = DXGGLOBAL_GetGlobal();
      do
        v51 = _InterlockedIncrement((volatile signed __int32 *)Global + 352);
      while ( !v51 );
      ADAPTER_DISPLAY::SetDisplayId(
        *(ADAPTER_DISPLAY **)(v10 + 2792),
        (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
        v51);
      LOBYTE(v52) = 1;
      DxgkNotifyDisplayChange(v52);
    }
    v48 = v64;
LABEL_91:
    if ( v63[0] )
      v65(v66, v48);
    goto LABEL_93;
  }
  if ( DmmIsFreqWithinToleranceRange(v76, &v62.RefreshRate, 0)
    || DmmIsFreqWithinToleranceRange((const struct _D3DDDI_RATIONAL *)&v77.m256i_u64[3], &v62.RefreshRate, v19) )
  {
    v62.RefreshRate = v76[0];
    goto LABEL_37;
  }
  WdLogSingleEntry5(
    3LL,
    a2,
    v62.RefreshRate.Numerator,
    v62.RefreshRate.Denominator,
    v76[0].Numerator,
    v76[0].Denominator);
LABEL_32:
  LODWORD(v21) = -1071775739;
LABEL_33:
  v9 = a3;
LABEL_34:
  v75[1] = (enum _D3DDDIFORMAT)v62.Height;
  v75[0] = (enum _D3DDDIFORMAT)v62.Width;
  v75[2] = v62.Format;
  if ( v62.RefreshRate.Denominator )
    v75[3] = DmmMapVSyncFromRationalToInteger(&v62.RefreshRate, v9, 0LL);
  else
    v75[3] = D3DDDIFMT_UNKNOWN;
  v76[0] = v62.RefreshRate;
  v76[1].Denominator = v68;
  v53 = *((_QWORD *)a2 + 6);
  v76[1].Numerator = v9;
  v54 = DmmCacheDisplayModeChangeRequest(v10, (*(_DWORD *)(v53 + 4) >> 6) & 0xF, v75);
  if ( v54 < 0 )
  {
    v55 = v54;
    WdLogSingleEntry1(2LL, v54);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DmmCacheDisplayModeChangeRequest (status = 0x%I64x)",
      v55,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v70, 8);
  return (unsigned int)v21;
}
