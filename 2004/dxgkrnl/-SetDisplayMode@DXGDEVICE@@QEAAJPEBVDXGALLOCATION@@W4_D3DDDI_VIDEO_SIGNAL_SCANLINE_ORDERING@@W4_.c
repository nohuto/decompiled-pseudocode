/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0149E64
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0148DC0 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C00028D0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A6AC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C000B36C (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C000B7F8 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000B848 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C000BA30 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000D090 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001A9D0 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F6970 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C011D6E0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013F490 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013FC34 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     DxgkQueryDmmInterface @ 0x1C01400B0 (DxgkQueryDmmInterface.c)
 *     DxgkStatusChangeNotify @ 0x1C0141830 (DxgkStatusChangeNotify.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C014A480 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C014A55C (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C014AAD8 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C014ABD4 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C025E268 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     DxgkNotifyDisplayChange @ 0x1C029FC54 (DxgkNotifyDisplayChange.c)
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
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 FunctionalVidPnWithEnabledVidPnSource; // rdi
  __int64 v26; // rcx
  enum _D3DDDIFORMAT Format; // eax
  char v28; // di
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  const struct _DXGK_DISPLAYMODE_INFO *v33; // rbx
  __int64 v34; // rdx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  unsigned int updated; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  int v55; // eax
  struct _DXGDMM_INTERFACE *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rcx
  _QWORD *v61; // rax
  _QWORD *v62; // rcx
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // r12
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v72; // rcx
  struct DXGGLOBAL *Global; // rax
  int v74; // r8d
  __int64 v75; // rcx
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  int v79; // [rsp+20h] [rbp-E0h]
  _BYTE v80[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v81; // [rsp+54h] [rbp-ACh]
  struct _DXGKARG_DESCRIBEALLOCATION v82; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v83[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v84; // [rsp+98h] [rbp-68h]
  void (__fastcall *v85)(__int64, __int64); // [rsp+A0h] [rbp-60h]
  __int64 v86; // [rsp+A8h] [rbp-58h]
  int v87; // [rsp+B0h] [rbp-50h]
  enum _D3DDDI_ROTATION v88; // [rsp+B8h] [rbp-48h]
  struct _DXGDMM_INTERFACE *v89; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v90; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v91; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v92; // [rsp+D8h] [rbp-28h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v93; // [rsp+E0h] [rbp-20h]
  _QWORD v94[2]; // [rsp+E8h] [rbp-18h] BYREF
  enum _D3DDDIFORMAT v95[4]; // [rsp+F8h] [rbp-8h] BYREF
  struct _D3DDDI_RATIONAL v96[2]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v97[24]; // [rsp+118h] [rbp+18h]
  _DWORD v98[64]; // [rsp+130h] [rbp+30h] BYREF
  __int64 retaddr; // [rsp+288h] [rbp+188h]

  v93 = a7;
  v91 = retaddr;
  v9 = a3;
  v88 = a4;
  LODWORD(v81) = a3;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v91, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v49 + 24) = 6684LL;
    WdLogEvent5_WdAssertion(v49);
  }
  v12 = *((_QWORD *)this + 231);
  v13 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !v12 || !*(_QWORD *)(v12 + 2696) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 231)) )
  {
    v50 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v50 + 24) = 6692LL;
    WdLogEvent5_WdAssertion(v50);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v12 + 2696), (unsigned int)v13);
  *(_OWORD *)v95 = *(_OWORD *)DisplayModeInfo;
  *(_OWORD *)&v96[0].Numerator = *((_OWORD *)DisplayModeInfo + 1);
  *(_OWORD *)v97 = *((_OWORD *)DisplayModeInfo + 2);
  v15 = *((_QWORD *)DisplayModeInfo + 6);
  v82.Rotation = -1;
  v16 = *((_QWORD *)a2 + 6);
  *(_QWORD *)&v97[16] = v15;
  v82.Flags.Value = 1;
  memset(&v82.Width, 0, 32);
  v17 = *(void **)(v16 + 16);
  v18 = *((_QWORD *)this + 2);
  v82.hAllocation = v17;
  v20 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v18 + 16) + 2704LL), &v82, v19);
  FunctionalVidPnWithEnabledVidPnSource = v20;
  if ( v20 < 0 )
    goto LABEL_42;
  if ( v82.Width != v95[0] || v82.Height != v95[1] )
  {
    v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v77[3] = a2;
    v77[4] = v82.Width;
    v77[5] = v82.Height;
    v77[6] = (unsigned int)v95[0];
    v77[7] = (unsigned int)v95[1];
    WdLogEvent5_WdWarning(v77);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_31;
  }
  if ( v82.Rotation != -1 && v82.Rotation != v96[1].Denominator )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v52[3] = a2;
    v52[4] = v82.Rotation;
    v52[5] = (int)v96[1].Denominator;
LABEL_46:
    WdLogEvent5_WdWarning(v52);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_33;
  }
  v26 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v26) = (*(_DWORD *)&v97[8] >> 4) ^ v26;
  if ( (v26 & 1) == 0 && v82.PrivateDriverFormatAttribute != *(_DWORD *)&v97[20] )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v21, v23, v24);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071774891;
    v53[3] = a2;
    v53[4] = v82.PrivateDriverFormatAttribute;
    v53[5] = *(unsigned int *)&v97[20];
    *a6 = v82.PrivateDriverFormatAttribute;
    goto LABEL_33;
  }
  *(D3DDDI_MULTISAMPLINGMETHOD *)&v97[12] = v82.MultisampleMethod;
  Format = v82.Format;
  v95[2] = v82.Format;
  if ( !*(_QWORD *)(v12 + 2704) )
  {
    if ( v82.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    v95[2] = Format;
  }
  if ( !v82.RefreshRate.Denominator )
  {
    v54 = WdLogNewEntry5_WdError(21LL, v21);
    *(_QWORD *)(v54 + 24) = v82.RefreshRate.Numerator;
    WdLogEvent5_WdError(v54);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1073741811;
    goto LABEL_33;
  }
  if ( v82.RefreshRate.Numerator == 64
    && v82.RefreshRate.Denominator == 1
    && v96[0].Numerator == -2
    && v96[0].Denominator == -2 )
  {
    v82.RefreshRate.Numerator = -2;
    v82.RefreshRate.Denominator = -2;
  }
  v28 = *(_BYTE *)&a5 & 1;
  if ( (*(_BYTE *)&a5 & 1) != 0 && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(v96, &v82.RefreshRate, 0) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
    v52[3] = a2;
    v52[4] = v82.RefreshRate.Numerator;
    v52[5] = v82.RefreshRate.Denominator;
    v52[6] = v96[0].Numerator;
    v52[7] = v96[0].Denominator;
    goto LABEL_46;
  }
  v96[0] = v82.RefreshRate;
  v95[3] = DmmMapVSyncFromRationalToInteger(&v82.RefreshRate, (unsigned int)v9, 0LL);
  v32 = *((_QWORD *)a2 + 6);
  v96[1].Numerator = v9;
  *(_DWORD *)&v97[8] ^= (v97[8] ^ (unsigned __int8)BYTE1(*(_DWORD *)(v32 + 4))) & 0x10;
  v33 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v12 + 2696), (unsigned int)v13);
  if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
          *(DXGADAPTER ***)(v12 + 2696),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF) )
  {
    if ( v28
      || *((_DWORD *)v33 + 4) == v96[0].Numerator
      && *((_DWORD *)v33 + 5) == v96[0].Denominator
      && *((_DWORD *)v33 + 6) == v96[1].Numerator
      && *((_DWORD *)v33 + 7) == v96[1].Denominator
      && *((_DWORD *)v33 + 8) == *(_DWORD *)v97
      && (v34 = *((unsigned int *)v33 + 9), (((unsigned __int8)v34 ^ v97[4]) & 1) == 0)
      && (((unsigned __int8)v34 ^ v97[4]) & 2) == 0
      && ((v97[8] ^ *((_BYTE *)v33 + 40)) & 0xF) == 0 )
    {
      if ( *(_DWORD *)v33 == v95[0] && *((_DWORD *)v33 + 1) == v95[1] )
      {
        if ( (v35 = *((_DWORD *)v33 + 2), v35 == v95[2])
          || v35 == 21 && v95[2] == D3DDDIFMT_X8R8G8B8
          || v35 == 22 && v95[2] == D3DDDIFMT_A8R8G8B8 )
        {
          if ( ((v97[8] ^ *((_BYTE *)v33 + 40)) & 0x10) == 0
            && ((v97[8] ^ (unsigned __int8)*((_DWORD *)v33 + 10)) & 0x20) == 0
            && !DmmNeedTargetModeWireformatOrColorspaceChange((void *)v12, v13, v95[2])
            && (v28 || *(_QWORD *)((char *)v33 + 44) == *(_QWORD *)&v97[12]) )
          {
            DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, (unsigned int)v13, a2, 0, 1u);
            v36 = DmmPowerOnOffTargetsFromSourceIfNecessary((void *const)v12, v13, 0);
            v39 = v36;
            if ( v36 < 0 )
            {
              v61 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
              v61[3] = *(_QWORD *)(v12 + 2696);
              v61[4] = (unsigned int)v13;
              v61[5] = v39;
              WdLogEvent5_WdError(v61);
            }
            updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                        *(ADAPTER_DISPLAY **)(v12 + 2696),
                        this,
                        v13,
                        *((struct DXGADAPTERALLOCATION **)a2 + 6));
            v81 = 0LL;
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
  v89 = 0LL;
  v55 = DxgkQueryDmmInterface((DXGADAPTER *)v12, v34, &v89);
  FunctionalVidPnWithEnabledVidPnSource = v55;
  if ( v55 < 0 )
  {
LABEL_42:
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v51[3] = FunctionalVidPnWithEnabledVidPnSource;
    v51[4] = this;
    v51[5] = *((unsigned int *)a2 + 4);
    v51[6] = a2;
    v51[7] = (unsigned int)v13;
    WdLogEvent5_WdError(v51);
    goto LABEL_31;
  }
  v56 = v89;
  v92 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0;
  v83[0] = 0;
  v90 = 0LL;
  FunctionalVidPnWithEnabledVidPnSource = (int)CreateFunctionalVidPnWithEnabledVidPnSource(
                                                 v89,
                                                 (void *)v12,
                                                 v13,
                                                 v79,
                                                 (struct _D3DKMT_DISPLAYMODE *)v95,
                                                 (__int64)&v90,
                                                 (__int64)&v92);
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v83,
    v90,
    *((_QWORD *)v56 + 8),
    v12);
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774925 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v58, v57);
    v60 = (unsigned int)v13;
    v59[3] = -1071774925LL;
LABEL_72:
    v59[4] = v60;
    v59[5] = (unsigned int)v95[0];
    v59[6] = (unsigned int)v95[1];
    v59[7] = v95[2];
    v62 = v59;
    goto LABEL_74;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774886 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v58, v57);
    v59[3] = (unsigned int)v13;
    v60 = *(_QWORD *)(v12 + 2696);
    goto LABEL_72;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource != -1071774970 )
  {
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, (unsigned int)v13, a2, 0, 1u);
      memset(v98, 0, sizeof(v98));
      v65 = v84;
      v80[0] = 0;
      v98[8] = 1 << v13;
      v66 = DmmSetTimingsOnAdapter(v12, v84, 0, 2u, (__int64)v98, v80, 0LL, 0LL);
      FunctionalVidPnWithEnabledVidPnSource = v66;
      if ( v66 < 0 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError(v68, v67);
        v76[3] = FunctionalVidPnWithEnabledVidPnSource;
        v76[4] = *(_QWORD *)(v12 + 2696);
        v76[5] = (unsigned int)v13;
        v76[6] = a2;
        v76[7] = this;
        WdLogEvent5_WdError(v76);
      }
      else
      {
        DmmHandleSetTimingsResult((ADAPTER_DISPLAY **)v12, (struct _DMM_SET_TIMING_RESULT *)v80, v93);
        if ( ((1 << v13) & v98[20]) != 0 )
          LODWORD(FunctionalVidPnWithEnabledVidPnSource) = v98[v13 + 21];
        Current = DXGPROCESS::GetCurrent(v70, v69);
        if ( !Current || !*((_BYTE *)Current + 346) )
        {
          Global = DXGGLOBAL::GetGlobal(v72, v41);
          do
            v74 = _InterlockedIncrement((volatile signed __int32 *)Global + 316);
          while ( !v74 );
          ADAPTER_DISPLAY::SetDisplayId(
            *(ADAPTER_DISPLAY **)(v12 + 2696),
            (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
            v74);
          LOBYTE(v75) = 1;
          DxgkNotifyDisplayChange(v75);
          v65 = v84;
        }
      }
      if ( v83[0] )
        v85(v86, v65);
      v9 = (int)v81;
      goto LABEL_29;
    }
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
    v64[4] = (unsigned int)v13;
    v64[3] = FunctionalVidPnWithEnabledVidPnSource;
    v64[5] = (unsigned int)v95[0];
    v64[6] = (unsigned int)v95[1];
    v64[7] = v95[2];
    WdLogEvent5_WdError(v64);
    if ( v83[0] )
      v85(v86, v84);
LABEL_31:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      v94[1] = 0LL;
      v94[0] = 1LL;
      DxgkStatusChangeNotify((int *)v94, v41, v42);
    }
    goto LABEL_33;
  }
  v63 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v58, v57);
  v63[3] = (unsigned int)v95[0];
  v63[4] = (unsigned int)v95[1];
  v63[5] = v95[2];
  v63[6] = v96[0].Numerator / v96[0].Denominator;
  v63[7] = (unsigned int)v13;
  v62 = v63;
LABEL_74:
  WdLogEvent5_WdDmmEvent(v62);
  if ( v83[0] )
    v85(v86, v84);
LABEL_33:
  v95[1] = (enum _D3DDDIFORMAT)v82.Height;
  v95[0] = (enum _D3DDDIFORMAT)v82.Width;
  v95[2] = v82.Format;
  if ( v82.RefreshRate.Denominator )
    v95[3] = DmmMapVSyncFromRationalToInteger(&v82.RefreshRate, (unsigned int)v9, 0LL);
  else
    v95[3] = D3DDDIFMT_UNKNOWN;
  v96[0] = v82.RefreshRate;
  v96[1].Denominator = v88;
  v43 = *((_QWORD *)a2 + 6);
  v96[1].Numerator = v9;
  v44 = DmmCacheDisplayModeChangeRequest(v12, (*(_DWORD *)(v43 + 4) >> 6) & 0xF, v95);
  v47 = v44;
  if ( v44 < 0 )
  {
    v78 = WdLogNewEntry5_WdError(v46, v45);
    *(_QWORD *)(v78 + 24) = v47;
    WdLogEvent5_WdError(v78);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v91, 8);
  return (unsigned int)FunctionalVidPnWithEnabledVidPnSource;
}
