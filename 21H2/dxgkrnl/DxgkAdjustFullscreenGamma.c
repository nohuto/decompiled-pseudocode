/*
 * XREFs of DxgkAdjustFullscreenGamma @ 0x1C02D0490
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0013B54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0013DA8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0020E8C (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C004A060 (-IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01A30A0 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C01C4688 (MonitorNotifyDXGIGammaRampChange.c)
 *     ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C02E75E4 (-SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z.c)
 */

__int64 __fastcall DxgkAdjustFullscreenGamma(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD **Current; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // sf
  struct DXGADAPTER *v12; // rbx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdi
  const wchar_t *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  ADAPTER_DISPLAY *v20; // rcx
  __int64 v21; // r14
  DXGDEVICE *v22; // r15
  __int64 v23; // r9
  struct DXGDEVICE *VidPnSourceOwner; // rax
  float v25; // xmm7_4
  float v26; // xmm6_4
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r15
  __int64 v31; // r8
  int v32; // eax
  int v33; // [rsp+50h] [rbp-128h] BYREF
  __int64 v34; // [rsp+58h] [rbp-120h]
  char v35; // [rsp+60h] [rbp-118h]
  struct DXGADAPTER *v36; // [rsp+68h] [rbp-110h] BYREF
  unsigned int v37[4]; // [rsp+70h] [rbp-108h]
  __int128 v38; // [rsp+80h] [rbp-F8h]
  DXGADAPTER *v39; // [rsp+90h] [rbp-E8h] BYREF
  _BYTE v40[144]; // [rsp+A0h] [rbp-D8h] BYREF

  v3 = (_OWORD *)a1;
  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2127;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2127);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2127);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 10269LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 10269LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( !v35 )
      return 3221225485LL;
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_67:
    if ( v11 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v33);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v37 = *v3;
  v38 = v3[1];
  v36 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v39, v37[0], Current, &v36, 1);
  v12 = v36;
  if ( !v36 )
  {
    v13 = v37[0];
    WdLogSingleEntry2(2LL, Current, v37[0]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v13,
      0LL,
      0LL,
      0LL);
    goto LABEL_13;
  }
  if ( !*((_QWORD *)v36 + 349) )
  {
    WdLogSingleEntry2(3LL, v36, -1073741811LL);
    if ( v39 )
      DXGADAPTER::ReleaseReference(v39);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( !v35 )
      return 3221225485LL;
    LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_67;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v40, v36, 0LL);
  v14 = COREADAPTERACCESS::AcquireExclusive((__int64)v40);
  v15 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(2LL, v14);
    v16 = L"Failed in acquiring adapter core access lock, (Status == 0x%I64x)!";
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, v15, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_19;
  }
  v20 = (ADAPTER_DISPLAY *)*((_QWORD *)v12 + 349);
  v21 = v37[1];
  if ( v37[1] >= *((_DWORD *)v20 + 24) )
  {
LABEL_26:
    WdLogSingleEntry2(3LL, v21, -1073741811LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
LABEL_13:
    if ( v39 )
      DXGADAPTER::ReleaseReference(v39);
    goto LABEL_7;
  }
  v22 = 0LL;
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v20, v37[1]) == 2
    || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v12 + 349), v21) == 3 )
  {
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*((ADAPTER_DISPLAY **)v12 + 349), v21);
  }
  else
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(*((DXGADAPTER ***)v12 + 349), v21) )
      goto LABEL_33;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((ADAPTER_DISPLAY **)v12 + 349), v21);
  }
  v22 = VidPnSourceOwner;
LABEL_33:
  if ( !v22 )
    goto LABEL_26;
  LODWORD(v15) = 0;
  v25 = *(float *)&v37[2];
  if ( *(float *)&v37[2] > 4.0
    || *(float *)&v37[2] < 0.2
    || *(float *)&v37[3] > 4.0
    || *(float *)&v37[3] < 0.2
    || *(float *)&v38 > 4.0
    || *(float *)&v38 < 0.2 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    LODWORD(v15) = -1073741811;
  }
  v26 = *((float *)&v38 + 1);
  if ( *((float *)&v38 + 1) > 0.6
    || *((float *)&v38 + 1) < -0.6
    || *((float *)&v38 + 2) > 0.6
    || *((float *)&v38 + 2) < -0.6
    || *((float *)&v38 + 3) > 0.6
    || *((float *)&v38 + 3) < -0.6 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    LODWORD(v15) = -1073741811;
  }
  v27 = 0LL;
  if ( (int)v15 >= 0 )
  {
    if ( v25 != 1.0
      || *(float *)&v37[3] != 1.0
      || *(float *)&v38 != 1.0
      || v26 != 0.0
      || *((float *)&v38 + 2) != 0.0
      || *((float *)&v38 + 3) != 0.0 )
    {
      v27 = operator new[](0x18uLL, 0x4B677844u, 256LL, v23);
      if ( !v27 )
      {
        LODWORD(v15) = -1073741801;
        WdLogSingleEntry2(3LL, v22, -1073741801LL);
        goto LABEL_19;
      }
      *(float *)v27 = v25;
      *(_DWORD *)(v27 + 4) = v37[3];
      *(_DWORD *)(v27 + 8) = v38;
      *(float *)(v27 + 12) = v26;
      *(_QWORD *)(v27 + 16) = *((_QWORD *)&v38 + 1);
    }
    DXGDEVICE::SetFullscreenGammaRampAdjustment(v22, v21, (struct DXGK_GAMMA_ADJUSTMENT *)v27);
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_EnableDisplayColorManagementApi__private_reporting,
      0x12AB040u,
      v28,
      v29,
      (const struct FEATURE_LOGGED_TRAITS *)Feature_DmaRemapping_logged_traits,
      1);
    v30 = 0LL;
    LODWORD(v36) = -1;
    while ( 1 )
    {
      v31 = v30++;
      if ( (int)DmmEnumClientVidPnPathTargetsFromSource(v12, v21, v31, (unsigned int *const)&v36) < 0
        || (_DWORD)v36 == -1 )
      {
        break;
      }
      v32 = MonitorNotifyDXGIGammaRampChange(v12, (unsigned int)v36);
      v15 = v32;
      if ( v32 < 0 )
      {
        WdLogSingleEntry1(2LL, v32);
        v16 = L"Failed to setfullscreen gamma ramp, (Status == 0x%I64x)!";
        goto LABEL_18;
      }
    }
  }
LABEL_19:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
  if ( v39 )
    DXGADAPTER::ReleaseReference(v39);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v33);
  return (unsigned int)v15;
}
