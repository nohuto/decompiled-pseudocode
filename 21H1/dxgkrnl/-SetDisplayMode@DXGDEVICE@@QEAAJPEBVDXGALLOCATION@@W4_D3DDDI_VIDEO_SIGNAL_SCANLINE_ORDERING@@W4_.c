/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013FBA0
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0133700 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087D0 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0008B24 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000CD10 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0011738 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001188C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0011A94 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001AA94 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DxgkQueryDmmInterface @ 0x1C00DE2F0 (DxgkQueryDmmInterface.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE9BC (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01254E0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C012F7C0 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     DxgkStatusChangeNotify @ 0x1C0130D00 (DxgkStatusChangeNotify.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C013FFA0 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C014007C (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C01405F8 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C01406F4 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0140940 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0259F68 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     DxgkNotifyDisplayChange @ 0x1C029B764 (DxgkNotifyDisplayChange.c)
 */

__int64 __fastcall DXGDEVICE::SetDisplayMode(
        DXGDEVICE *this,
        const struct DXGALLOCATION *a2,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a3,
        enum _D3DDDI_ROTATION a4,
        struct _D3DKMT_SETDISPLAYMODE_FLAGS a5,
        unsigned int *a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rsi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v15; // xmm1_8
  __int64 v16; // rax
  void *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 FunctionalVidPnWithEnabledVidPnSource; // rdi
  __int64 v25; // rcx
  enum _D3DDDIFORMAT Format; // eax
  char v27; // di
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  const struct _DXGK_DISPLAYMODE_INFO *v32; // rbx
  __int64 v33; // rdx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  unsigned int updated; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  int v54; // eax
  struct _DXGDMM_INTERFACE *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rax
  _QWORD *v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // r12
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v71; // rcx
  struct DXGGLOBAL *Global; // rax
  int v73; // r8d
  __int64 v74; // rcx
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  int v78; // [rsp+20h] [rbp-E0h]
  _BYTE v79[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v80; // [rsp+54h] [rbp-ACh]
  struct _DXGKARG_DESCRIBEALLOCATION v81; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v82[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v83; // [rsp+98h] [rbp-68h]
  void (__fastcall *v84)(__int64, __int64); // [rsp+A0h] [rbp-60h]
  __int64 v85; // [rsp+A8h] [rbp-58h]
  int v86; // [rsp+B0h] [rbp-50h]
  enum _D3DDDI_ROTATION v87; // [rsp+B8h] [rbp-48h]
  struct _DXGDMM_INTERFACE *v88; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v89; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v90; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v91; // [rsp+D8h] [rbp-28h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v92; // [rsp+E0h] [rbp-20h]
  _QWORD v93[2]; // [rsp+E8h] [rbp-18h] BYREF
  enum _D3DDDIFORMAT v94[4]; // [rsp+F8h] [rbp-8h] BYREF
  struct _D3DDDI_RATIONAL v95[2]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v96[24]; // [rsp+118h] [rbp+18h]
  _DWORD v97[64]; // [rsp+130h] [rbp+30h] BYREF
  __int64 retaddr; // [rsp+288h] [rbp+188h]

  v92 = a7;
  v90 = retaddr;
  v9 = a3;
  v87 = a4;
  LODWORD(v80) = a3;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v90, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v48 + 24) = 6684LL;
    WdLogEvent5_WdAssertion(v48);
  }
  v12 = *((_QWORD *)this + 231);
  v13 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !v12 || !*(_QWORD *)(v12 + 2672) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 231)) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v49 + 24) = 6692LL;
    WdLogEvent5_WdAssertion(v49);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v12 + 2672), (unsigned int)v13);
  *(_OWORD *)v94 = *(_OWORD *)DisplayModeInfo;
  *(_OWORD *)&v95[0].Numerator = *((_OWORD *)DisplayModeInfo + 1);
  *(_OWORD *)v96 = *((_OWORD *)DisplayModeInfo + 2);
  v15 = *((_QWORD *)DisplayModeInfo + 6);
  v81.Rotation = -1;
  v16 = *((_QWORD *)a2 + 6);
  *(_QWORD *)&v96[16] = v15;
  v81.Flags.Value = 1;
  memset(&v81.Width, 0, 32);
  v17 = *(void **)(v16 + 16);
  v18 = *((_QWORD *)this + 2);
  v81.hAllocation = v17;
  v19 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v18 + 16) + 2680LL), &v81);
  FunctionalVidPnWithEnabledVidPnSource = v19;
  if ( v19 < 0 )
    goto LABEL_42;
  if ( v81.Width != v94[0] || v81.Height != v94[1] )
  {
    v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v76[3] = a2;
    v76[4] = v81.Width;
    v76[5] = v81.Height;
    v76[6] = (unsigned int)v94[0];
    v76[7] = (unsigned int)v94[1];
    WdLogEvent5_WdWarning(v76);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_31;
  }
  if ( v81.Rotation != -1 && v81.Rotation != v95[1].Denominator )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v51[3] = a2;
    v51[4] = v81.Rotation;
    v51[5] = (int)v95[1].Denominator;
LABEL_46:
    WdLogEvent5_WdWarning(v51);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_33;
  }
  v25 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v25) = (*(_DWORD *)&v96[8] >> 4) ^ v25;
  if ( (v25 & 1) == 0 && v81.PrivateDriverFormatAttribute != *(_DWORD *)&v96[20] )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v20, v22, v23);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071774891;
    v52[3] = a2;
    v52[4] = v81.PrivateDriverFormatAttribute;
    v52[5] = *(unsigned int *)&v96[20];
    *a6 = v81.PrivateDriverFormatAttribute;
    goto LABEL_33;
  }
  *(D3DDDI_MULTISAMPLINGMETHOD *)&v96[12] = v81.MultisampleMethod;
  Format = v81.Format;
  v94[2] = v81.Format;
  if ( !*(_QWORD *)(v12 + 2680) )
  {
    if ( v81.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    v94[2] = Format;
  }
  if ( !v81.RefreshRate.Denominator )
  {
    v53 = WdLogNewEntry5_WdError(21LL, v20);
    *(_QWORD *)(v53 + 24) = v81.RefreshRate.Numerator;
    WdLogEvent5_WdError(v53);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1073741811;
    goto LABEL_33;
  }
  if ( v81.RefreshRate.Numerator == 64
    && v81.RefreshRate.Denominator == 1
    && v95[0].Numerator == -2
    && v95[0].Denominator == -2 )
  {
    v81.RefreshRate.Numerator = -2;
    v81.RefreshRate.Denominator = -2;
  }
  v27 = *(_BYTE *)&a5 & 1;
  if ( (*(_BYTE *)&a5 & 1) != 0 && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(v95, &v81.RefreshRate, 0) )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
    v51[3] = a2;
    v51[4] = v81.RefreshRate.Numerator;
    v51[5] = v81.RefreshRate.Denominator;
    v51[6] = v95[0].Numerator;
    v51[7] = v95[0].Denominator;
    goto LABEL_46;
  }
  v95[0] = v81.RefreshRate;
  v94[3] = DmmMapVSyncFromRationalToInteger(&v81.RefreshRate, (unsigned int)v9, 0LL);
  v31 = *((_QWORD *)a2 + 6);
  v95[1].Numerator = v9;
  *(_DWORD *)&v96[8] ^= (v96[8] ^ (unsigned __int8)BYTE1(*(_DWORD *)(v31 + 4))) & 0x10;
  v32 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v12 + 2672), (unsigned int)v13);
  if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
          *(DXGADAPTER ***)(v12 + 2672),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF) )
  {
    if ( v27
      || *((_DWORD *)v32 + 4) == v95[0].Numerator
      && *((_DWORD *)v32 + 5) == v95[0].Denominator
      && *((_DWORD *)v32 + 6) == v95[1].Numerator
      && *((_DWORD *)v32 + 7) == v95[1].Denominator
      && *((_DWORD *)v32 + 8) == *(_DWORD *)v96
      && (v33 = *((unsigned int *)v32 + 9), (((unsigned __int8)v33 ^ v96[4]) & 1) == 0)
      && (((unsigned __int8)v33 ^ v96[4]) & 2) == 0
      && ((v96[8] ^ *((_BYTE *)v32 + 40)) & 0xF) == 0 )
    {
      if ( *(_DWORD *)v32 == v94[0] && *((_DWORD *)v32 + 1) == v94[1] )
      {
        if ( (v34 = *((_DWORD *)v32 + 2), v34 == v94[2])
          || v34 == 21 && v94[2] == D3DDDIFMT_X8R8G8B8
          || v34 == 22 && v94[2] == D3DDDIFMT_A8R8G8B8 )
        {
          if ( ((v96[8] ^ *((_BYTE *)v32 + 40)) & 0x10) == 0
            && ((v96[8] ^ (unsigned __int8)*((_DWORD *)v32 + 10)) & 0x20) == 0
            && !DmmNeedTargetModeWireformatOrColorspaceChange((void *)v12, v13, v94[2])
            && (v27 || *(_QWORD *)((char *)v32 + 44) == *(_QWORD *)&v96[12]) )
          {
            DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, (unsigned int)v13, a2, 0, 1u);
            v35 = DmmPowerOnOffTargetsFromSourceIfNecessary((void *const)v12, v13, 0);
            v38 = v35;
            if ( v35 < 0 )
            {
              v60 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
              v60[3] = *(_QWORD *)(v12 + 2672);
              v60[4] = (unsigned int)v13;
              v60[5] = v38;
              WdLogEvent5_WdError(v60);
            }
            updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                        *(ADAPTER_DISPLAY **)(v12 + 2672),
                        this,
                        v13,
                        *((struct DXGADAPTERALLOCATION **)a2 + 6));
            v80 = 0LL;
            LODWORD(FunctionalVidPnWithEnabledVidPnSource) = updated;
            DxgkLogCodePointPacket(0x3Cu, updated, *(_DWORD *)(v12 + 316), v13, 0LL);
LABEL_29:
            if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
              goto LABEL_33;
            *((_DWORD *)this + v13 + 302) |= 0x200u;
            goto LABEL_31;
          }
        }
      }
    }
  }
  v88 = 0LL;
  v54 = DxgkQueryDmmInterface((DXGADAPTER *)v12, v33, &v88);
  FunctionalVidPnWithEnabledVidPnSource = v54;
  if ( v54 < 0 )
  {
LABEL_42:
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v50[3] = FunctionalVidPnWithEnabledVidPnSource;
    v50[4] = this;
    v50[5] = *((unsigned int *)a2 + 4);
    v50[6] = a2;
    v50[7] = (unsigned int)v13;
    WdLogEvent5_WdError(v50);
    goto LABEL_31;
  }
  v55 = v88;
  v91 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0;
  v82[0] = 0;
  v89 = 0LL;
  FunctionalVidPnWithEnabledVidPnSource = (int)CreateFunctionalVidPnWithEnabledVidPnSource(
                                                 v88,
                                                 (void *)v12,
                                                 v13,
                                                 v78,
                                                 (struct _D3DKMT_DISPLAYMODE *)v94,
                                                 (__int64)&v89,
                                                 (__int64)&v91);
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v82,
    v89,
    *((_QWORD *)v55 + 8),
    v12);
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774925 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v57);
    v59 = (unsigned int)v13;
    v58[3] = -1071774925LL;
LABEL_72:
    v58[4] = v59;
    v58[5] = (unsigned int)v94[0];
    v58[6] = (unsigned int)v94[1];
    v58[7] = v94[2];
    v61 = v58;
    goto LABEL_74;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774886 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v57);
    v58[3] = (unsigned int)v13;
    v59 = *(_QWORD *)(v12 + 2672);
    goto LABEL_72;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource != -1071774970 )
  {
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, (unsigned int)v13, a2, 0, 1u);
      memset(v97, 0, sizeof(v97));
      v64 = v83;
      v79[0] = 0;
      v97[8] = 1 << v13;
      v65 = DmmSetTimingsOnAdapter(v12, v83, 0, 2u, (__int64)v97, v79, 0LL, 0LL);
      FunctionalVidPnWithEnabledVidPnSource = v65;
      if ( v65 < 0 )
      {
        v75 = (_QWORD *)WdLogNewEntry5_WdError(v67, v66);
        v75[3] = FunctionalVidPnWithEnabledVidPnSource;
        v75[4] = *(_QWORD *)(v12 + 2672);
        v75[5] = (unsigned int)v13;
        v75[6] = a2;
        v75[7] = this;
        WdLogEvent5_WdError(v75);
      }
      else
      {
        DmmHandleSetTimingsResult((ADAPTER_DISPLAY **)v12, (struct _DMM_SET_TIMING_RESULT *)v79, v92);
        if ( ((1 << v13) & v97[20]) != 0 )
          LODWORD(FunctionalVidPnWithEnabledVidPnSource) = v97[v13 + 21];
        Current = DXGPROCESS::GetCurrent(v69, v68);
        if ( !Current || !*((_BYTE *)Current + 346) )
        {
          Global = DXGGLOBAL::GetGlobal(v71, v40);
          do
            v73 = _InterlockedIncrement((volatile signed __int32 *)Global + 288);
          while ( !v73 );
          ADAPTER_DISPLAY::SetDisplayId(
            *(ADAPTER_DISPLAY **)(v12 + 2672),
            (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
            v73);
          LOBYTE(v74) = 1;
          DxgkNotifyDisplayChange(v74);
          v64 = v83;
        }
      }
      if ( v82[0] )
        v84(v85, v64);
      v9 = (int)v80;
      goto LABEL_29;
    }
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v57, v56);
    v63[4] = (unsigned int)v13;
    v63[3] = FunctionalVidPnWithEnabledVidPnSource;
    v63[5] = (unsigned int)v94[0];
    v63[6] = (unsigned int)v94[1];
    v63[7] = v94[2];
    WdLogEvent5_WdError(v63);
    if ( v82[0] )
      v84(v85, v83);
LABEL_31:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      v93[1] = 0LL;
      v93[0] = 1LL;
      DxgkStatusChangeNotify((int *)v93, v40, v41);
    }
    goto LABEL_33;
  }
  v62 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v57);
  v62[3] = (unsigned int)v94[0];
  v62[4] = (unsigned int)v94[1];
  v62[5] = v94[2];
  v62[6] = v95[0].Numerator / v95[0].Denominator;
  v62[7] = (unsigned int)v13;
  v61 = v62;
LABEL_74:
  WdLogEvent5_WdDmmEvent(v61);
  if ( v82[0] )
    v84(v85, v83);
LABEL_33:
  v94[1] = (enum _D3DDDIFORMAT)v81.Height;
  v94[0] = (enum _D3DDDIFORMAT)v81.Width;
  v94[2] = v81.Format;
  if ( v81.RefreshRate.Denominator )
    v94[3] = DmmMapVSyncFromRationalToInteger(&v81.RefreshRate, (unsigned int)v9, 0LL);
  else
    v94[3] = D3DDDIFMT_UNKNOWN;
  v95[0] = v81.RefreshRate;
  v95[1].Denominator = v87;
  v42 = *((_QWORD *)a2 + 6);
  v95[1].Numerator = v9;
  v43 = DmmCacheDisplayModeChangeRequest(v12, (*(_DWORD *)(v42 + 4) >> 6) & 0xF, v94);
  v46 = v43;
  if ( v43 < 0 )
  {
    v77 = WdLogNewEntry5_WdError(v45, v44);
    *(_QWORD *)(v77 + 24) = v46;
    WdLogEvent5_WdError(v77);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v90, 8);
  return (unsigned int)FunctionalVidPnWithEnabledVidPnSource;
}
