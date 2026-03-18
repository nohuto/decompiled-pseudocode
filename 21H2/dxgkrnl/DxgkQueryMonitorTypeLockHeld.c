/*
 * XREFs of DxgkQueryMonitorTypeLockHeld @ 0x1C01D2410
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01D2768 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01D31C8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE3333@Z @ 0x1C02F28C8 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C02F6A9C (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01A05B4 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C01A0DA4 (MonitorGetMonitorHandle.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     MonitorGetMonitorType @ 0x1C01B0AC4 (MonitorGetMonitorType.c)
 */

__int64 __fastcall DxgkQueryMonitorTypeLockHeld(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6,
        char *a7,
        bool *a8,
        bool *a9,
        _BYTE *a10)
{
  __int64 v10; // rdi
  __int64 v11; // rsi
  bool *v14; // r15
  bool *v15; // r12
  _BYTE *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DMMVIDEOPRESENTTARGET *v20; // rsi
  int MonitorType; // edi
  __int64 result; // rax
  unsigned int v23; // eax
  __int64 v24; // r13
  DXGMONITOR *v25; // rbx
  char v26; // al
  bool v27; // dl
  bool v28; // cl
  char v29; // al
  char IsVirtualModeSupportDisabled; // si
  __int64 v31; // rax
  char v32; // al
  __int64 v33[9]; // [rsp+50h] [rbp-48h] BYREF
  DXGMONITOR *v34; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v35; // [rsp+A8h] [rbp+10h]
  _DWORD *v36; // [rsp+B0h] [rbp+18h]

  v36 = a3;
  v35 = a2;
  v10 = *(_QWORD *)(a1 + 2792);
  v11 = a2;
  if ( !v10 )
  {
    WdLogSingleEntry2(2LL, a1, a2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkQueryMonitorTypeLockHeld is called on a render only adapter. (pAdapter = 0x%I64x, VidPn target Id = 0x%I64x)",
      a1,
      v11,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( a2 == -1 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkQueryMonitorTypeLockHeld is called with D3DDDI_ID_UNINITIALIZED (pAdapter = 0x%I64x)",
      a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v14 = a9;
  v15 = a8;
  v16 = a6;
  if ( !a4 && !a5 && !a6 && !a8 && !a9 )
    goto LABEL_18;
  v17 = *(_QWORD *)(v10 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v33, v17);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 120) + 72LL));
  v18 = *(_QWORD *)(v17 + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v18, v11);
  v20 = TargetById;
  if ( !TargetById )
  {
    if ( v16 )
      *v16 = 0;
    if ( v15 )
      *v15 = *(_BYTE *)(*(_QWORD *)(a1 + 2792) + 289LL);
    if ( v14 )
      *v14 = *(_BYTE *)(*(_QWORD *)(a1 + 2792) + 290LL);
    goto LABEL_15;
  }
  if ( a4 )
    *a4 = *((_DWORD *)TargetById + 20);
  if ( a5 )
    *a5 = *((_DWORD *)TargetById + 21);
  if ( v16 )
    *v16 = *((_BYTE *)TargetById + 405);
  if ( v15 || v14 )
  {
    v23 = *((_DWORD *)TargetById + 6);
    if ( v23 == -1 )
    {
LABEL_32:
      WdLogSingleEntry2(2LL, v23, a1);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Fail to find virtualization state on VidPn Target 0x%I64x adapter 0x%I64x",
        *((unsigned int *)v20 + 6),
        a1,
        0LL,
        0LL,
        0LL);
      if ( v18 )
        ReferenceCounted::Release((ReferenceCounted *)(v18 + 64));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v33[0] + 40));
      return 3221225485LL;
    }
    v24 = *(_QWORD *)(a1 + 2792);
    if ( !v24 )
    {
      WdLogSingleEntry1(2LL, 9372LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The selected adapter is render-only",
        9372LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v23 = *((_DWORD *)v20 + 6);
      goto LABEL_32;
    }
    MONITOR_MGR::AcquireMonitorShared(&v34, a1, v23);
    v25 = v34;
    if ( v34 )
    {
      if ( *((_DWORD *)v34 + 78) != 1 )
        WdLogSingleEntry0(1LL);
      IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v25);
      ExReleaseResourceLite((PERESOURCE)((char *)v25 + 24));
      KeLeaveCriticalRegion();
      if ( IsVirtualModeSupportDisabled )
      {
        v27 = 1;
        v28 = 1;
        goto LABEL_43;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741632LL);
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v34);
    }
    v26 = *(_BYTE *)(v24 + 289);
    v27 = v26 == 0;
    v28 = *(_BYTE *)(v24 + 290) == 0;
    if ( v26 && (*(_DWORD *)(v24 + 24) & 0x20) != 0 )
    {
      v29 = 0;
LABEL_44:
      if ( v15 )
        *v15 = !v27;
      if ( v14 )
        *v14 = !v28;
      if ( a10 )
        *a10 = v29 ^ 1;
      goto LABEL_15;
    }
LABEL_43:
    v29 = 1;
    goto LABEL_44;
  }
LABEL_15:
  if ( v18 )
    ReferenceCounted::Release((ReferenceCounted *)(v18 + 64));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v33[0] + 40));
  a3 = v36;
  LODWORD(v11) = v35;
LABEL_18:
  if ( a7 )
  {
    v31 = *(_QWORD *)(a1 + 2792);
    if ( *(_BYTE *)(v31 + 289) && *(_BYTE *)(v31 + 290)
      || (v32 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
    {
      v32 = 1;
    }
    *a7 = v32;
  }
  MonitorType = 0;
  if ( !a3 )
    return (unsigned int)MonitorType;
  v34 = 0LL;
  result = MonitorGetMonitorHandle(a1, (unsigned int)v11, 0, &DxgkQueryMonitorTypeLockHeld, &v34);
  if ( (int)result >= 0 )
  {
    MonitorType = MonitorGetMonitorType(v34, v36);
    if ( MonitorType < 0 )
    {
      WdLogSingleEntry2(2LL, (unsigned int)v11, a1);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Fail to find MonitorType on VidPn Target 0x%I64x adapter 0x%I64x",
        (unsigned int)v11,
        a1,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)MonitorReleaseMonitorHandle(a1, (__int64)v34, &DxgkQueryMonitorTypeLockHeld) < 0 )
    {
      WdLogSingleEntry1(1LL, 3004LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_Status)", 3004LL, 0LL, 0LL, 0LL, 0LL);
    }
    return (unsigned int)MonitorType;
  }
  return result;
}
