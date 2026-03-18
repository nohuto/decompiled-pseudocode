/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0216DB4
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3C90 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0010C30 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001F014 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0029D98 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C00694A0 (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@@Z @ 0x1C01631B4 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01A05B4 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C01A0DA4 (MonitorGetMonitorHandle.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     MonitorGetNativeFlags @ 0x1C01A67CC (MonitorGetNativeFlags.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01A69AC (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C01A8564 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     MonitorGetUsageClass @ 0x1C01D7358 (MonitorGetUsageClass.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0217198 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1C03477A8 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 */

__int64 __fastcall VIDPN_MGR::OnMonitorConnectionChanged(
        __int64 a1,
        unsigned int a2,
        struct DMMVIDEOPRESENTTARGET *a3,
        int a4)
{
  __int64 v6; // r12
  __int64 v7; // rbx
  struct DMMVIDEOPRESENTTARGET *v8; // r14
  __int64 v9; // rcx
  struct HDXGMONITOR__ *v10; // r13
  unsigned int v11; // ebx
  int MonitorHandle; // eax
  __int64 v13; // r15
  struct HDXGMONITOR__ *v14; // rbx
  unsigned int v15; // eax
  int NativeFlags; // eax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  char v21; // al
  unsigned __int8 v22; // cl
  char v23; // al
  int UsageClass; // eax
  __int64 v25; // rdi
  int v26; // eax
  char v27; // cl
  char v28; // di
  unsigned __int8 v29; // al
  DXGMONITOR *v30; // rbx
  int LinkInfo; // eax
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r15
  DXGMONITOR *v36; // rbx
  char IsVirtualModeSupportDisabled; // di
  bool v38; // al
  char v39; // al
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned int PathSourceFromTarget; // edi
  __int64 v43; // rdx
  unsigned int v44; // edx
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v45; // r8
  ADAPTER_DISPLAY *v46; // rbx
  struct _LUID *v47; // rdx
  DXGADAPTER *v48; // rcx
  __int64 v49; // rbx
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // r8
  int v54; // ebx
  __int64 v55; // r8
  __int64 v56; // rbx
  __int64 v57; // rax
  struct DXGGLOBAL *Global; // rax
  int v59; // eax
  __int64 v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r15
  DXGMONITOR *v65; // rbx
  char v66; // di
  bool v67; // al
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned __int8 v71; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int8 v72; // [rsp+51h] [rbp-28h] BYREF
  unsigned __int8 v73; // [rsp+52h] [rbp-27h] BYREF
  char v74; // [rsp+53h] [rbp-26h] BYREF
  unsigned int v75; // [rsp+54h] [rbp-25h] BYREF
  int v76; // [rsp+58h] [rbp-21h] BYREF
  int v77; // [rsp+5Ch] [rbp-1Dh] BYREF
  DXGMONITOR *v78; // [rsp+60h] [rbp-19h] BYREF
  struct HDXGMONITOR__ *v79; // [rsp+68h] [rbp-11h] BYREF
  DXGMONITOR *v80; // [rsp+70h] [rbp-9h] BYREF
  __int64 v81; // [rsp+78h] [rbp-1h] BYREF
  DXGMONITOR *v82; // [rsp+80h] [rbp+7h] BYREF
  struct _DXGK_MONITORLINKINFO v83; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v84; // [rsp+98h] [rbp+1Fh]
  char v85; // [rsp+E0h] [rbp+67h] BYREF
  struct DMMVIDEOPRESENTTARGET *TargetById; // [rsp+F0h] [rbp+77h]

  TargetById = a3;
  v6 = a2;
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
    WdLogSingleEntry0(1LL);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 120) + 72LL));
  v7 = *(_QWORD *)(a1 + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v7, v6);
  v8 = TargetById;
  if ( TargetById )
  {
    if ( v7 )
      ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
    v9 = *(_QWORD *)(a1 + 8);
    v10 = (struct HDXGMONITOR__ *)*((_QWORD *)v8 + 14);
    v11 = *((_DWORD *)v8 + 6);
    v84 = (__int64)v10;
    v79 = 0LL;
    if ( !v9 )
    {
      WdLogSingleEntry0(1LL);
      v9 = *(_QWORD *)(a1 + 8);
    }
    MonitorHandle = MonitorGetMonitorHandle(*(_QWORD *)(v9 + 16), v11, 0, v8, &v79);
    v13 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v14 = v79;
      LODWORD(v13) = 0;
      if ( v79 )
        WdLogSingleEntry0(1LL);
    }
    else
    {
      v14 = 0LL;
      if ( MonitorHandle < 0 )
      {
        v51 = *(_QWORD *)(a1 + 8);
        if ( !v51 )
        {
          WdLogSingleEntry0(1LL);
          v51 = *(_QWORD *)(a1 + 8);
        }
        WdLogSingleEntry3(2LL, v6, *(_QWORD *)(v51 + 16), v13);
        v79 = 0LL;
      }
      else
      {
        v14 = v79;
      }
    }
    if ( v14 != v10 )
    {
      DMMVIDEOPRESENTTARGET::SetConnectedMonitor(v8, v14);
      v15 = *((_DWORD *)v8 + 20) - 10;
      *((_BYTE *)v8 + 413) = 1;
      if ( v15 <= 1 )
        *((_BYTE *)v8 + 414) = 1;
      if ( !v14 )
      {
        *(_WORD *)((char *)v8 + 405) = 0;
        *((_DWORD *)v8 + 23) = 0;
        *((_BYTE *)v8 + 96) = 0;
        *((_BYTE *)v8 + 412) = 1;
LABEL_42:
        v40 = *(_QWORD *)(a1 + 160);
        if ( v40 != a1 + 160 )
        {
          v56 = v40 - 8;
          if ( v56 )
          {
            do
            {
              if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v56 + 96), v6) )
                DMMVIDPNTOPOLOGY::Invalidate((DMMVIDPNTOPOLOGY *)(v56 + 96));
              v57 = *(_QWORD *)(v56 + 8);
              v56 = v57 - 8;
              if ( v57 == a1 + 160 )
                v56 = 0LL;
            }
            while ( v56 );
            v8 = TargetById;
          }
        }
        v41 = *(_QWORD *)(a1 + 128);
        v81 = 0LL;
        PathSourceFromTarget = -1;
        if ( v41 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v41 + 32));
          v43 = *(_QWORD *)(a1 + 128);
        }
        else
        {
          v43 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v81, v43);
        if ( v81 )
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                   (DMMVIDPNTOPOLOGY *)(v81 + 96),
                                   (unsigned int)v6);
        auto_rc<DMMVIDPN const>::reset(&v81, 0LL);
        v46 = *(ADAPTER_DISPLAY **)(a1 + 8);
        if ( !v46 )
        {
          WdLogSingleEntry0(1LL);
          v46 = *(ADAPTER_DISPLAY **)(a1 + 8);
        }
        ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(v46, v44, v45);
        if ( PathSourceFromTarget != -1 )
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)v46, PathSourceFromTarget, 1);
        v48 = (DXGADAPTER *)*((_QWORD *)v46 + 2);
        v75 = 0;
        if ( (*((_DWORD *)v48 + 109) & 0x100) != 0 && DXGADAPTER::IsAdapterSessionized(v48, v47, &v75, 0LL) )
        {
          Global = DXGGLOBAL_GetGlobal();
          v59 = DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(*((DXGSESSIONMGR **)Global + 122), v75);
          if ( v59 < 0 )
          {
            v60 = v75;
            v61 = v59;
            WdLogSingleEntry2(2LL, v75, v59);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to purge the cached IDD display config request for session 0x%I64x, (Status = 0x%I64x).",
              v60,
              v61,
              0LL,
              0LL,
              0LL);
          }
        }
        goto LABEL_52;
      }
      v71 = 0;
      v72 = 0;
      v73 = 0;
      NativeFlags = MonitorGetNativeFlags((__int64)v14, &v71, &v72, &v73);
      v17 = NativeFlags;
      if ( NativeFlags < 0 )
      {
        v52 = *(_QWORD *)(a1 + 8);
        if ( !v52 )
        {
          WdLogSingleEntry0(1LL);
          v52 = *(_QWORD *)(a1 + 8);
        }
        WdLogSingleEntry3(2LL, v6, *(_QWORD *)(v52 + 16), v17);
      }
      v18 = *(_QWORD *)(a1 + 8);
      if ( !v18 )
      {
        WdLogSingleEntry0(1LL);
        v18 = *(_QWORD *)(a1 + 8);
      }
      v19 = *(_QWORD *)(v18 + 16);
      v20 = *(_QWORD *)(v19 + 2792);
      if ( *(_BYTE *)(v20 + 289) && *(_BYTE *)(v20 + 290)
        || (v21 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
      {
        v21 = 1;
      }
      v22 = v71;
      *((_BYTE *)v8 + 405) = v71;
      if ( v21 || !v22 || (v23 = 1, !v72) )
        v23 = 0;
      v76 = 0;
      v85 = 0;
      *((_BYTE *)v8 + 406) = v23;
      UsageClass = MonitorGetUsageClass((__int64)v14, &v76, &v85);
      v25 = UsageClass;
      if ( UsageClass < 0 )
      {
        v53 = *(_QWORD *)(a1 + 8);
        if ( !v53 )
        {
          WdLogSingleEntry0(1LL);
          v53 = *(_QWORD *)(a1 + 8);
        }
        WdLogSingleEntry3(2LL, v6, *(_QWORD *)(v53 + 16), v25);
        v26 = 0;
        v76 = 0;
        v27 = 0;
        v85 = 0;
      }
      else
      {
        v26 = v76;
        v27 = v85;
      }
      *((_DWORD *)v8 + 23) = v26;
      v28 = 0;
      v29 = v73;
      *((_BYTE *)v8 + 96) = v27;
      v77 = 0;
      *((_BYTE *)v8 + 412) = v29;
      MONITOR_MGR::AcquireMonitorShared(&v80, (__int64)v14);
      v30 = v80;
      if ( v80 )
      {
        *(_QWORD *)&v83.UsageHints.0 = 0LL;
        v83.DitheringSupport.Value = 0;
        LinkInfo = DXGMONITOR::_GetLinkInfo(v80, &v83);
        if ( LinkInfo == -1073741275 )
        {
          RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v80);
          goto LABEL_29;
        }
        if ( LinkInfo >= 0 )
        {
          DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
            *((DxgMonitor::MonitorColorState **)v30 + 28),
            &v83,
            (union MONITOR_AND_LINK_HDR_CAPS *)&v77);
          ExReleaseResourceLite((PERESOURCE)((char *)v30 + 24));
          KeLeaveCriticalRegion();
          v28 = v77;
          goto LABEL_29;
        }
        v54 = LinkInfo;
      }
      else
      {
        v54 = -1073741275;
        WdLogSingleEntry1(2LL, -1073741275LL);
      }
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v80);
      v55 = *(_QWORD *)(a1 + 8);
      if ( !v55 )
      {
        WdLogSingleEntry0(1LL);
        v55 = *(_QWORD *)(a1 + 8);
      }
      WdLogSingleEntry3(2LL, v6, *(_QWORD *)(v55 + 16), v54);
LABEL_29:
      *((_BYTE *)v8 + 419) = v28 & 1;
      v32 = *(_QWORD *)(a1 + 8);
      v33 = v32;
      if ( !v32 )
      {
        WdLogSingleEntry0(1LL);
        v32 = *(_QWORD *)(a1 + 8);
        v33 = v32;
      }
      v34 = *(_QWORD *)(v32 + 16);
      if ( v34 && (_DWORD)v6 != -1 )
      {
        v35 = *(_QWORD *)(v34 + 2792);
        if ( v35 )
        {
          MONITOR_MGR::AcquireMonitorShared(&v82, v34, v6);
          v36 = v82;
          if ( v82 )
          {
            if ( *((_DWORD *)v82 + 78) != 1 )
              WdLogSingleEntry0(1LL);
            IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v36);
            ExReleaseResourceLite((PERESOURCE)((char *)v36 + 24));
            KeLeaveCriticalRegion();
            if ( IsVirtualModeSupportDisabled )
            {
              v38 = 1;
LABEL_39:
              if ( v38 )
              {
                v39 = 0;
                goto LABEL_41;
              }
LABEL_40:
              v39 = 1;
LABEL_41:
              *((_BYTE *)v8 + 407) = v39;
              LODWORD(v13) = 0;
              goto LABEL_42;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, -1073741632LL);
            RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v82);
          }
          v38 = *(_BYTE *)(v35 + 289) == 0;
          goto LABEL_39;
        }
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
        v33 = *(_QWORD *)(a1 + 8);
      }
      if ( !v33 )
      {
        WdLogSingleEntry0(1LL);
        v33 = *(_QWORD *)(a1 + 8);
      }
      WdLogSingleEntry3(2LL, v6, *(_QWORD *)(v33 + 16), -1073741811LL);
      goto LABEL_40;
    }
    if ( a4 == 10 )
    {
      v75 = 0;
      v74 = 0;
      if ( (int)MonitorGetUsageClass((__int64)v14, &v75, &v74) >= 0 )
      {
        *((_DWORD *)v8 + 23) = v75;
        *((_BYTE *)v8 + 96) = v74;
      }
      v62 = *(_QWORD *)(a1 + 8);
      if ( !v62 )
      {
        WdLogSingleEntry0(1LL);
        v62 = *(_QWORD *)(a1 + 8);
      }
      v63 = *(_QWORD *)(v62 + 16);
      if ( !v63 || (_DWORD)v6 == -1 )
        goto LABEL_127;
      v64 = *(_QWORD *)(v63 + 2792);
      if ( !v64 )
      {
        WdLogSingleEntry1(2LL, 9372LL);
LABEL_120:
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
        goto LABEL_127;
      }
      MONITOR_MGR::AcquireMonitorShared(&v78, v63, v6);
      v65 = v78;
      if ( v78 )
      {
        if ( *((_DWORD *)v78 + 78) != 1 )
          WdLogSingleEntry0(1LL);
LABEL_112:
        v66 = DXGMONITOR::_IsVirtualModeSupportDisabled(v65);
        ExReleaseResourceLite((PERESOURCE)((char *)v65 + 24));
        KeLeaveCriticalRegion();
        if ( v66 )
        {
          v67 = 1;
LABEL_126:
          *((_BYTE *)v8 + 407) = !v67;
          goto LABEL_127;
        }
LABEL_125:
        v67 = *(_BYTE *)(v64 + 289) == 0;
        goto LABEL_126;
      }
    }
    else
    {
      if ( a4 != 11 )
      {
LABEL_52:
        v49 = v84;
        if ( v84 )
        {
          v70 = *(_QWORD *)(a1 + 8);
          if ( !v70 )
          {
            WdLogSingleEntry0(1LL);
            v70 = *(_QWORD *)(a1 + 8);
          }
          MonitorReleaseMonitorHandle(*(_QWORD *)(v70 + 16), v49, v8);
        }
        return (unsigned int)v13;
      }
      v68 = *(_QWORD *)(a1 + 8);
      if ( !v68 )
      {
        WdLogSingleEntry0(1LL);
        v68 = *(_QWORD *)(a1 + 8);
      }
      v69 = *(_QWORD *)(v68 + 16);
      if ( !v69 || (_DWORD)v6 == -1 )
      {
LABEL_127:
        LODWORD(v13) = 0;
        goto LABEL_52;
      }
      v64 = *(_QWORD *)(v69 + 2792);
      if ( !v64 )
      {
        WdLogSingleEntry1(2LL, 9372LL);
        goto LABEL_120;
      }
      MONITOR_MGR::AcquireMonitorShared(&v78, v69, v6);
      v65 = v78;
      if ( v78 )
      {
        if ( *((_DWORD *)v78 + 78) != 1 )
          WdLogSingleEntry0(1LL);
        goto LABEL_112;
      }
    }
    WdLogSingleEntry1(2LL, -1073741632LL);
    RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v78);
    goto LABEL_125;
  }
  WdLogSingleEntry2(2LL, v6, a1);
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
  return 3223192325LL;
}
