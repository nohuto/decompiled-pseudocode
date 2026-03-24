/*
 * XREFs of DxgkAdjustFullscreenGamma @ 0x1C0222680
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024D8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007174 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000BB90 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001C620 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001E9EC (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage @ 0x1C0025BCC (Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage.c)
 *     ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C003EF80 (-IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C0124B5C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C013D720 (MonitorNotifyDXGIGammaRampChange.c)
 *     ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C02568A0 (-SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z.c)
 */

__int64 __fastcall DxgkAdjustFullscreenGamma(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  ADAPTER_DISPLAY **v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  ADAPTER_DISPLAY *v28; // rcx
  __int64 v29; // r14
  DXGDEVICE *v30; // r15
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  float v36; // xmm7_4
  __int64 v37; // rax
  float v38; // xmm6_4
  __int64 v39; // rax
  float *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // r15
  unsigned __int64 i; // r8
  int v47; // eax
  int v48; // [rsp+30h] [rbp-128h] BYREF
  __int64 v49; // [rsp+38h] [rbp-120h]
  char v50; // [rsp+40h] [rbp-118h]
  struct DXGADAPTER *v51; // [rsp+48h] [rbp-110h] BYREF
  unsigned int v52[4]; // [rsp+50h] [rbp-108h]
  __int128 v53; // [rsp+60h] [rbp-F8h]
  DXGADAPTER *v54; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v55[144]; // [rsp+80h] [rbp-D8h] BYREF

  v3 = (_OWORD *)a1;
  v48 = -1;
  v49 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v50 = 1;
    v48 = 2127;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2127);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v48, 2127LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = 10247LL;
    WdLogEvent5_WdError(v9);
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v10);
    if ( v50 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v48);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v52 = *v3;
  v53 = v3[1];
  v51 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v54, v52[0], Current, &v51, 1);
  v14 = (ADAPTER_DISPLAY **)v51;
  if ( !v51 )
  {
    v15 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v15 + 24) = Current;
    *(_QWORD *)(v15 + 32) = v52[0];
    WdLogEvent5_WdError(v15);
    goto LABEL_30;
  }
  if ( !*((_QWORD *)v51 + 337) )
  {
    v16 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v16 + 24) = v14;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v16);
    goto LABEL_30;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v55, v51, 0LL);
  v18 = COREADAPTERACCESS::AcquireExclusive((__int64)v55, (unsigned int)(v17 + 1));
  v22 = v18;
  if ( v18 >= 0 )
  {
    v28 = v14[337];
    v29 = v52[1];
    if ( v52[1] >= *((_DWORD *)v28 + 20) )
      goto LABEL_29;
    v30 = 0LL;
    if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v28, v52[1]) == 2
      || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v14[337], (unsigned int)v29) == 3 )
    {
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(v14[337], (unsigned int)v29);
    }
    else
    {
      if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated((DXGADAPTER **)v14[337], v29) )
        goto LABEL_28;
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(v14[337], (unsigned int)v29);
    }
    v30 = VidPnSourceOwner;
LABEL_28:
    if ( v30 )
    {
      LODWORD(v22) = 0;
      v36 = *(float *)&v52[2];
      if ( *(float *)&v52[2] > 4.0
        || *(float *)&v52[2] < 0.2
        || *(float *)&v52[3] > 4.0
        || *(float *)&v52[3] < 0.2
        || *(float *)&v53 > 4.0
        || *(float *)&v53 < 0.2 )
      {
        v37 = WdLogNewEntry5_WdWarning(v28, v19, v21);
        *(_QWORD *)(v37 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v37);
        LODWORD(v22) = -1073741811;
      }
      v38 = *((float *)&v53 + 1);
      if ( *((float *)&v53 + 1) > 0.6
        || *((float *)&v53 + 1) < -0.6
        || *((float *)&v53 + 2) > 0.6
        || *((float *)&v53 + 2) < -0.6
        || *((float *)&v53 + 3) > 0.6
        || *((float *)&v53 + 3) < -0.6 )
      {
        v39 = WdLogNewEntry5_WdWarning(v28, v19, v21);
        *(_QWORD *)(v39 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v39);
        LODWORD(v22) = -1073741811;
      }
      v40 = 0LL;
      if ( (int)v22 < 0 )
        goto LABEL_15;
      if ( v36 != 1.0
        || *(float *)&v52[3] != 1.0
        || *(float *)&v53 != 1.0
        || v38 != 0.0
        || *((float *)&v53 + 2) != 0.0
        || *((float *)&v53 + 3) != 0.0 )
      {
        v40 = (float *)operator new[](0x18uLL, 0x4B677844u, PagedPool);
        if ( !v40 )
        {
          v44 = WdLogNewEntry5_WdWarning(v42, v41, v43);
          *(_QWORD *)(v44 + 24) = v30;
          LODWORD(v22) = -1073741801;
          *(_QWORD *)(v44 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v44);
          goto LABEL_15;
        }
        *v40 = v36;
        v40[1] = *(float *)&v52[3];
        *((_DWORD *)v40 + 2) = v53;
        v40[3] = v38;
        *((_QWORD *)v40 + 2) = *((_QWORD *)&v53 + 1);
      }
      DXGDEVICE::SetFullscreenGammaRampAdjustment(v30, v29, (struct DXGK_GAMMA_ADJUSTMENT *)v40);
      Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage();
      LODWORD(v51) = -1;
      v45 = 1LL;
      for ( i = 0LL;
            (int)DmmEnumClientVidPnPathTargetsFromSource(v14, (unsigned int)v29, i, (unsigned int *const)&v51) >= 0;
            i = v45++ )
      {
        v19 = (unsigned int)v51;
        if ( (_DWORD)v51 == -1 )
          break;
        v47 = MonitorNotifyDXGIGammaRampChange((DXGADAPTER *)v14, (unsigned int)v51);
        v22 = v47;
        if ( v47 < 0 )
          goto LABEL_14;
      }
      goto LABEL_15;
    }
LABEL_29:
    v32 = WdLogNewEntry5_WdWarning(v28, v19, v21);
    *(_QWORD *)(v32 + 24) = v29;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v32);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55, v33);
LABEL_30:
    if ( v54 )
      DXGADAPTER::ReleaseReference(v54);
    goto LABEL_32;
  }
LABEL_14:
  v23 = WdLogNewEntry5_WdError(v20, v19);
  *(_QWORD *)(v23 + 24) = v22;
  WdLogEvent5_WdError(v23);
LABEL_15:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55, v19);
  if ( v54 )
    DXGADAPTER::ReleaseReference(v54);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v24);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v48);
  return (unsigned int)v22;
}
