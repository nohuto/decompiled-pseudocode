/*
 * XREFs of DxgkQueryMonitorTypeLockHeld @ 0x1C015E400
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C015D25C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C015DA44 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C025CEEC (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C02977A0 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007E24 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C0129A20 (MonitorGetMonitorHandle.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0129B38 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C012A2E8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     MonitorGetMonitorType @ 0x1C012BB78 (MonitorGetMonitorType.c)
 *     MonitorReleaseMonitorHandle @ 0x1C012F96C (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DxgkQueryMonitorTypeLockHeld(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6,
        char *a7,
        bool *a8,
        bool *a9)
{
  __int64 v9; // rbx
  int MonitorType; // edi
  _DWORD *v12; // r9
  unsigned int v13; // r10d
  bool *v15; // r12
  char v16; // r8
  bool *v17; // r13
  _BYTE *v18; // r14
  _DWORD *v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v23; // rdx
  struct DMMVIDEOPRESENTTARGET *v24; // rcx
  __int64 result; // rax
  __int64 v26; // rax
  __int64 v27; // rbp
  char v28; // al
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  struct _FAST_MUTEX *v33; // rcx
  __int64 v34; // rax
  int MonitorInstance; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  struct DXGMONITOR *v38; // rbp
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  bool v51; // [rsp+30h] [rbp-58h]
  char IsVirtualModeSuportDisabled; // [rsp+31h] [rbp-57h]
  struct DXGMONITOR *v53; // [rsp+38h] [rbp-50h] BYREF
  __int64 v54; // [rsp+40h] [rbp-48h] BYREF
  struct DMMVIDEOPRESENTTARGET *v55; // [rsp+48h] [rbp-40h]
  struct HDXGMONITOR__ *v56; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v57; // [rsp+98h] [rbp+10h]
  _DWORD *v58; // [rsp+A0h] [rbp+18h]

  v58 = a3;
  v57 = a2;
  v9 = *(_QWORD *)(a1 + 2696);
  MonitorType = 0;
  v12 = a3;
  v13 = a2;
  if ( !v9 )
  {
    v26 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v26 + 24) = a1;
    *(_QWORD *)(v26 + 32) = v57;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  v15 = a9;
  v16 = 1;
  v17 = a8;
  v18 = a6;
  v19 = a5;
  if ( a4 || a5 || a6 || a8 || a9 )
  {
    v20 = *(_QWORD *)(v9 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v54, v20);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 80) + 72LL));
    v21 = *(_QWORD *)(v20 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v21, v57);
    v55 = TargetById;
    v24 = TargetById;
    if ( !TargetById )
    {
      if ( v18 )
        *v18 = 0;
      if ( v17 )
        *v17 = *(_BYTE *)(*(_QWORD *)(a1 + 2696) + 249LL);
      if ( v15 )
        *v15 = *(_BYTE *)(*(_QWORD *)(a1 + 2696) + 250LL);
      goto LABEL_14;
    }
    if ( a4 )
      *a4 = *((_DWORD *)TargetById + 20);
    if ( v19 )
      *v19 = *((_DWORD *)TargetById + 21);
    if ( v18 )
      *v18 = *((_BYTE *)TargetById + 405);
    if ( !v17 && !v15 )
    {
LABEL_14:
      if ( v21 )
        ReferenceCounted::Release((ReferenceCounted *)(v21 + 64), v23);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v54 + 40), v23);
      v13 = v57;
      v16 = 1;
      v12 = v58;
      goto LABEL_17;
    }
    v27 = *((unsigned int *)TargetById + 6);
    v28 = 0;
    LOBYTE(v23) = 0;
    LOBYTE(v56) = 0;
    v51 = 0;
    if ( (_DWORD)v27 == -1 )
    {
      MonitorType = -1073741811;
LABEL_51:
      if ( MonitorType >= 0 )
      {
        if ( v17 )
          *v17 = v28 == 0;
        if ( v15 )
          *v15 = (_BYTE)v23 == 0;
        goto LABEL_14;
      }
LABEL_28:
      v31 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v31 + 24) = *((unsigned int *)v55 + 6);
      *(_QWORD *)(v31 + 32) = a1;
      WdLogEvent5_WdError(v31);
      if ( v21 )
        ReferenceCounted::Release((ReferenceCounted *)(v21 + 64), v32);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v54 + 40), v32);
      return (unsigned int)MonitorType;
    }
    v29 = *(_QWORD *)(a1 + 2696);
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v30 + 24) = 9262LL;
      WdLogEvent5_WdError(v30);
      MonitorType = -1073741811;
      goto LABEL_28;
    }
    v33 = *(struct _FAST_MUTEX **)(v29 + 96);
    IsVirtualModeSuportDisabled = 0;
    if ( !v33 )
    {
      v34 = WdLogNewEntry5_WdError(0LL, v23);
      *(_QWORD *)(v34 + 24) = a1;
      WdLogEvent5_WdError(v34);
      MonitorType = -1073741811;
LABEL_39:
      v37 = WdLogNewEntry5_WdAssertion(v24, v23);
      *(_QWORD *)(v37 + 24) = MonitorType;
      WdLogEvent5_WdAssertion(v37);
LABEL_49:
      v28 = (char)v56;
      LOBYTE(v23) = v51;
      goto LABEL_51;
    }
    v53 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v33, (unsigned int)v27, 1, &v53);
    MonitorType = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v36 = WdLogNewEntry5_WdDmmEvent(v24, v23);
      *(_QWORD *)(v36 + 24) = v27;
      *(_QWORD *)(v36 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v36);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v38 = v53;
        if ( !v53 || *((_DWORD *)v53 + 108) != 1 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v24, v23);
          WdLogEvent5_WdAssertion(v39);
        }
        if ( !v38 )
        {
          v40 = WdLogNewEntry5_WdAssertion(v24, v23);
          WdLogEvent5_WdAssertion(v40);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v38 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v38);
        ExReleaseResourceLite((PERESOURCE)((char *)v38 + 296));
        KeLeaveCriticalRegion();
        MonitorType = 0;
        goto LABEL_46;
      }
      if ( MonitorInstance != -1073741632 )
      {
LABEL_38:
        if ( MonitorType < 0 )
          goto LABEL_39;
LABEL_46:
        if ( IsVirtualModeSuportDisabled )
        {
          v51 = 1;
          LOBYTE(v56) = 1;
        }
        else
        {
          v51 = *(_BYTE *)(v29 + 250) == 0;
          LOBYTE(v56) = *(_BYTE *)(v29 + 249) == 0;
        }
        goto LABEL_49;
      }
    }
    MonitorType = 0;
    goto LABEL_38;
  }
LABEL_17:
  if ( a7 )
  {
    v41 = *(_QWORD *)(a1 + 2696);
    if ( (!*(_BYTE *)(v41 + 249) || !*(_BYTE *)(v41 + 250))
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 64LL) + 40LL) + 28LL) < 0x4003u )
    {
      v16 = 0;
    }
    *a7 = v16;
  }
  if ( !v12 )
    return (unsigned int)MonitorType;
  v56 = 0LL;
  result = MonitorGetMonitorHandle(a1, v13, 0LL, DxgkQueryMonitorTypeLockHeld, &v56);
  if ( (int)result >= 0 )
  {
    MonitorType = MonitorGetMonitorType(v56, v58, v42, v43);
    if ( MonitorType < 0 )
    {
      v47 = WdLogNewEntry5_WdError(v45, v44);
      *(_QWORD *)(v47 + 24) = v57;
      *(_QWORD *)(v47 + 32) = a1;
      WdLogEvent5_WdError(v47);
    }
    if ( (int)MonitorReleaseMonitorHandle(a1, (__int64)v56, DxgkQueryMonitorTypeLockHeld, v46) < 0 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v49, v48);
      *(_QWORD *)(v50 + 24) = 2981LL;
      WdLogEvent5_WdAssertion(v50);
    }
    return (unsigned int)MonitorType;
  }
  return result;
}
