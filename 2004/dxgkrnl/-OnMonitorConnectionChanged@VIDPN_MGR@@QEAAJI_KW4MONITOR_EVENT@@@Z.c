/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C01950EC
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0175E20 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0001B04 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00054DC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B74 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0007CA8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000CFDC (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0023D1C (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C005B854 (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C010F05C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C0126370 (MonitorGetMonitorHandle.c)
 *     MonitorGetNativeFlags @ 0x1C0126894 (MonitorGetNativeFlags.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C01283E8 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorReleaseMonitorHandle @ 0x1C012C2CC (MonitorReleaseMonitorHandle.c)
 *     MonitorGetUsageClass @ 0x1C01449A8 (MonitorGetUsageClass.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C01953C8 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1C029E2D4 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 */

__int64 __fastcall VIDPN_MGR::OnMonitorConnectionChanged(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v12; // rcx
  __int64 v13; // r12
  unsigned int v14; // ebx
  int MonitorHandle; // eax
  struct _LUID *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r14
  struct HDXGMONITOR__ *v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // r11
  int NativeFlags; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  char v30; // al
  unsigned __int8 v31; // cl
  char v32; // al
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r12
  int v37; // eax
  char v38; // cl
  bool v39; // al
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  char v43; // al
  __int64 v44; // rbx
  _QWORD *v45; // rcx
  __int64 v46; // rax
  unsigned int PathSourceFromTarget; // r15d
  __int64 v48; // rdx
  char *v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v52; // r8
  ADAPTER_DISPLAY *v53; // rbx
  DXGADAPTER *v54; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  _QWORD *v67; // r14
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  _QWORD *v73; // r14
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  _QWORD *v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  struct DXGGLOBAL *Global; // rax
  int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // rbx
  __int64 v88; // rax
  int UsageClass; // eax
  __int64 v90; // rcx
  __int64 v91; // rax
  bool v92; // [rsp+30h] [rbp-30h] BYREF
  bool v93; // [rsp+31h] [rbp-2Fh] BYREF
  _BYTE v94[2]; // [rsp+32h] [rbp-2Eh] BYREF
  int v95; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v96; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v97; // [rsp+3Ch] [rbp-24h] BYREF
  int v98; // [rsp+40h] [rbp-20h] BYREF
  __int64 v99; // [rsp+48h] [rbp-18h] BYREF
  struct HDXGMONITOR__ *v100; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v101; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v102; // [rsp+B0h] [rbp+50h] BYREF

  v102 = a3;
  v6 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(a1[5] + 16LL) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1[10] + 72LL));
  v8 = a1[10];
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, (unsigned int)v6);
  if ( TargetById )
  {
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64), v9);
    v12 = a1[1];
    v13 = *((_QWORD *)TargetById + 14);
    v14 = *((_DWORD *)TargetById + 6);
    v99 = v13;
    v100 = 0LL;
    if ( !v12 )
    {
      v58 = WdLogNewEntry5_WdAssertion(0LL, v9);
      WdLogEvent5_WdAssertion(v58);
      v12 = a1[1];
    }
    MonitorHandle = MonitorGetMonitorHandle(*(_QWORD *)(v12 + 16), v14, 0LL, TargetById, &v100);
    v19 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v20 = v100;
      LODWORD(v19) = 0;
      if ( v100 )
      {
        v59 = WdLogNewEntry5_WdAssertion(v17, v16);
        WdLogEvent5_WdAssertion(v59);
      }
    }
    else if ( MonitorHandle < 0 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
      v62[3] = v6;
      v63 = a1[1];
      if ( !v63 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v61, v60);
        WdLogEvent5_WdAssertion(v64);
        v63 = a1[1];
      }
      v62[4] = *(_QWORD *)(v63 + 16);
      v62[5] = v19;
      WdLogEvent5_WdError(v62);
      v20 = 0LL;
      v100 = 0LL;
    }
    else
    {
      v20 = v100;
    }
    if ( v20 == (struct HDXGMONITOR__ *)v13 )
    {
      if ( a4 == 10 )
      {
        v98 = 0;
        v94[0] = 0;
        UsageClass = MonitorGetUsageClass(v20, &v98, v94);
        LODWORD(v19) = UsageClass;
        if ( UsageClass < 0 )
        {
          LODWORD(v19) = 0;
        }
        else
        {
          *((_DWORD *)TargetById + 22) = v98;
          *((_BYTE *)TargetById + 92) = v94[0];
        }
      }
    }
    else
    {
      DMMVIDEOPRESENTTARGET::SetConnectedMonitor(TargetById, v20);
      v21 = *((_DWORD *)TargetById + 20) - 10;
      *((_BYTE *)TargetById + 413) = 1;
      if ( v21 <= 1 )
        *((_BYTE *)TargetById + 414) = 1;
      v22 = 0LL;
      if ( v20 )
      {
        v101 = 0;
        v92 = 0;
        v93 = 0;
        NativeFlags = MonitorGetNativeFlags(v20, &v101, &v92, &v93);
        v26 = NativeFlags;
        if ( NativeFlags < 0 )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
          v67[3] = v6;
          v68 = a1[1];
          if ( !v68 )
          {
            v69 = WdLogNewEntry5_WdAssertion(v66, v65);
            WdLogEvent5_WdAssertion(v69);
            v68 = a1[1];
          }
          v67[4] = *(_QWORD *)(v68 + 16);
          v67[5] = v26;
          WdLogEvent5_WdError(v67);
        }
        v27 = a1[1];
        if ( !v27 )
        {
          v70 = WdLogNewEntry5_WdAssertion(v25, v24);
          WdLogEvent5_WdAssertion(v70);
          v27 = a1[1];
        }
        v28 = *(_QWORD *)(v27 + 16);
        v29 = *(_QWORD *)(v28 + 2696);
        if ( *(_BYTE *)(v29 + 249) && *(_BYTE *)(v29 + 250)
          || (v30 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
        {
          v30 = 1;
        }
        v31 = v101;
        *((_BYTE *)TargetById + 405) = v101;
        if ( v30 || !v31 || (v32 = 1, !v92) )
          v32 = 0;
        *((_BYTE *)TargetById + 406) = v32;
        v95 = 0;
        LOBYTE(v102) = 0;
        v33 = MonitorGetUsageClass(v20, &v95, &v102);
        v36 = v33;
        if ( v33 < 0 )
        {
          v73 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
          v73[3] = v6;
          v74 = a1[1];
          if ( !v74 )
          {
            v75 = WdLogNewEntry5_WdAssertion(v72, v71);
            WdLogEvent5_WdAssertion(v75);
            v74 = a1[1];
          }
          v73[4] = *(_QWORD *)(v74 + 16);
          v73[5] = v36;
          WdLogEvent5_WdError(v73);
          v37 = 0;
          v38 = 0;
          v95 = 0;
          LOBYTE(v102) = 0;
        }
        else
        {
          v37 = v95;
          v38 = v102;
        }
        *((_DWORD *)TargetById + 22) = v37;
        v39 = v93;
        *((_BYTE *)TargetById + 92) = v38;
        *((_BYTE *)TargetById + 412) = v39;
        v96 = 0;
        IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v20, &v96);
        v22 = 0LL;
        v19 = IsMonitorAndLinkHDRCapable;
        if ( IsMonitorAndLinkHDRCapable < 0 )
        {
          v78 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
          v78[3] = v6;
          v79 = a1[1];
          if ( !v79 )
          {
            v80 = WdLogNewEntry5_WdAssertion(v77, v76);
            WdLogEvent5_WdAssertion(v80);
            v79 = a1[1];
          }
          v78[4] = *(_QWORD *)(v79 + 16);
          v78[5] = v19;
          WdLogEvent5_WdError(v78);
          v22 = 0LL;
          v43 = 0;
          LODWORD(v19) = 0;
          v96 = 0;
        }
        else
        {
          v43 = v96;
        }
        v13 = v99;
        *((_BYTE *)TargetById + 419) = v43 & 1;
      }
      else
      {
        *(_WORD *)((char *)TargetById + 405) = 0;
        *((_DWORD *)TargetById + 22) = 0;
        *((_BYTE *)TargetById + 92) = 0;
        *((_BYTE *)TargetById + 412) = 1;
      }
      v44 = 0LL;
      v45 = (_QWORD *)a1[15];
      if ( v45 != a1 + 15 )
        v44 = (__int64)(v45 - 1);
      while ( v44 )
      {
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v44 + 96), v6) )
        {
          DMMVIDPNTOPOLOGY::Invalidate((DMMVIDPNTOPOLOGY *)(v44 + 96));
          v22 = 0LL;
        }
        v81 = *(_QWORD **)(v44 + 8);
        v44 = (__int64)(v81 - 1);
        if ( v81 == a1 + 15 )
          v44 = v22;
      }
      v46 = a1[11];
      PathSourceFromTarget = -1;
      v99 = v22;
      if ( v46 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v46 + 32));
        v48 = a1[11];
      }
      else
      {
        v48 = v22;
      }
      auto_rc<DMMVIDPN const>::reset(&v99, v48);
      if ( v99 )
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                 (DMMVIDPNTOPOLOGY *)(v99 + 96),
                                 (unsigned int)v6,
                                 v49);
      auto_rc<DMMVIDPN const>::reset(&v99, 0LL);
      v53 = (ADAPTER_DISPLAY *)a1[1];
      if ( !v53 )
      {
        v82 = WdLogNewEntry5_WdAssertion(v51, v50);
        WdLogEvent5_WdAssertion(v82);
        v53 = (ADAPTER_DISPLAY *)a1[1];
      }
      ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(v53, v50, v52);
      if ( PathSourceFromTarget != -1 )
        ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)v53, PathSourceFromTarget, 1);
      v54 = (DXGADAPTER *)*((_QWORD *)v53 + 2);
      v97 = 0;
      if ( (*((_DWORD *)v54 + 87) & 0x100) != 0 && DXGADAPTER::IsAdapterSessionized(v54, v16, &v97, 0LL) )
      {
        Global = DXGGLOBAL::GetGlobal(v83, (__int64)v16);
        v85 = DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(*((DXGSESSIONMGR **)Global + 102), v97);
        v87 = v85;
        if ( v85 < 0 )
        {
          v88 = WdLogNewEntry5_WdError(v86, v16);
          *(_QWORD *)(v88 + 24) = v97;
          *(_QWORD *)(v88 + 32) = v87;
          WdLogEvent5_WdError(v88);
        }
      }
    }
    if ( v13 )
    {
      v90 = a1[1];
      if ( !v90 )
      {
        v91 = WdLogNewEntry5_WdAssertion(0LL, v16);
        WdLogEvent5_WdAssertion(v91);
        v90 = a1[1];
      }
      MonitorReleaseMonitorHandle(*(_QWORD *)(v90 + 16), v13, TargetById, v18);
    }
    return (unsigned int)v19;
  }
  else
  {
    v56 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v56 + 24) = v6;
    *(_QWORD *)(v56 + 32) = a1;
    WdLogEvent5_WdError(v56);
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64), v57);
    return 3223192325LL;
  }
}
