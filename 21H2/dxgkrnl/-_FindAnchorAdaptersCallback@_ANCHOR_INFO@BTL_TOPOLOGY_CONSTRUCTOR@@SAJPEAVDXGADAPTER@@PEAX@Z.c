/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B06A0
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_ @ 0x1C01672C0 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A62D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C01A8564 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01AA0E0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     MonitorGetMonitorType @ 0x1C01B0AC4 (MonitorGetMonitorType.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01B0B38 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C01B0CA4 (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C01B0CC0 (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B0CF4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C03AF020 (-_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@.c)
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C03AF06C (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(
        struct DXGADAPTER *a1,
        _DWORD *a2)
{
  _DWORD *v2; // r12
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct VIDPN_MGR *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  int ClientVidPn; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // r15
  __int64 v14; // rcx
  struct HDXGMONITOR__ *v15; // rbx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int MonitorType; // eax
  unsigned int v21; // edx
  unsigned int v22; // eax
  __int64 v23; // rsi
  DXGMONITOR *v24; // rbx
  char IsVirtualModeSupportDisabled; // si
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // al
  char v30; // r8
  char v31; // dl
  __int64 v32; // r9
  __int64 v33; // rdx
  unsigned int v34; // ebx
  int VmtPreference; // eax
  __int64 v36; // r9
  int v37; // edx
  bool v38; // sf
  bool v39; // of
  char v40; // al
  int v41; // ebx
  unsigned int v42; // eax
  char v43; // al
  unsigned int VotPreference; // eax
  __int64 v45; // r9
  __int64 v46; // rcx
  int v47; // eax
  int v48; // r11d
  __int64 v49; // [rsp+20h] [rbp-79h]
  int v50; // [rsp+50h] [rbp-49h]
  DMMVIDPNTOPOLOGY *v51; // [rsp+58h] [rbp-41h]
  __int64 v52; // [rsp+60h] [rbp-39h] BYREF
  __int64 v53; // [rsp+68h] [rbp-31h] BYREF
  DMMVIDPNTOPOLOGY *v54; // [rsp+70h] [rbp-29h]
  DXGMONITOR *v55; // [rsp+78h] [rbp-21h] BYREF
  __int64 v56; // [rsp+80h] [rbp-19h]
  __int64 v57; // [rsp+88h] [rbp-11h]
  struct VIDPN_MGR *v58; // [rsp+90h] [rbp-9h]
  __int64 v59; // [rsp+98h] [rbp-1h] BYREF
  _BYTE v60[80]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned int PathSourceFromTarget; // [rsp+110h] [rbp+77h]
  unsigned int v63; // [rsp+110h] [rbp+77h]
  __int64 v64; // [rsp+118h] [rbp+7Fh]
  __int64 v65; // [rsp+118h] [rbp+7Fh]

  v2 = a2;
  v50 = ((__int64 (*)(void))BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference)();
  if ( v50 < *(_DWORD *)(v5 + 36) )
    return 0LL;
  v6 = *(struct VIDPN_MGR **)(*(_QWORD *)(v4 + 2792) + 104LL);
  v58 = v6;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v59, (__int64)v6);
  v7 = *((_QWORD *)a1 + 349);
  v53 = 0LL;
  v54 = 0LL;
  if ( *(_BYTE *)(v7 + 290) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v6, &v53) >= 0 )
  {
    v8 = v53;
    if ( !v53 )
      WdLogSingleEntry0(1LL);
    v54 = (DMMVIDPNTOPOLOGY *)(v8 + 96);
  }
  v52 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v6);
  v10 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    WdLogSingleEntry5(2LL, ClientVidPn, a1, *((int *)a1 + 102), *((unsigned int *)a1 + 101), v2);
    goto LABEL_17;
  }
  v51 = (DMMVIDPNTOPOLOGY *)(v52 + 96);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 15) + 72LL));
  v11 = *((_QWORD *)v6 + 15);
  v56 = v11;
  v12 = *(_QWORD *)(v11 + 24);
  if ( v12 == v11 + 24 || (v13 = v12 - 8) == 0 )
  {
LABEL_15:
    v10 = 0;
    goto LABEL_16;
  }
  v14 = v11 + 24;
  while ( 1 )
  {
    v15 = *(struct HDXGMONITOR__ **)(v13 + 112);
    if ( v15 )
      break;
LABEL_12:
    v16 = *(_QWORD *)(v13 + 8);
    v13 = v16 - 8;
    if ( v16 == v14 )
      v13 = 0LL;
    if ( !v13 )
      goto LABEL_15;
  }
  v18 = *(_QWORD *)(v13 + 40);
  if ( !v18 )
  {
    WdLogSingleEntry0(1LL);
    v18 = *(_QWORD *)(v13 + 40);
  }
  v64 = *(_QWORD *)(v18 + 88);
  v19 = *(_QWORD *)(v64 + 8);
  if ( !v19 )
  {
    WdLogSingleEntry0(1LL);
    v19 = *(_QWORD *)(v64 + 8);
  }
  v65 = *(_QWORD *)(v19 + 16);
  MonitorType = MonitorGetMonitorType(v15);
  if ( MonitorType < 0 )
    WdLogSingleEntry3(2LL, v15, v65, MonitorType);
  if ( *(_DWORD *)(v13 + 92) )
    goto LABEL_42;
  if ( v2[9] < (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference(a1) )
    goto LABEL_26;
  BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v21);
  VmtPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference((unsigned int)v2[8]);
  v39 = __OFSUB__(v37, VmtPreference);
  v38 = v37 - VmtPreference < 0;
  if ( v37 != VmtPreference )
    goto LABEL_61;
  v40 = *((_BYTE *)v2 + 49);
  if ( *(_BYTE *)(v13 + 412) )
  {
    if ( !v40 )
      goto LABEL_42;
  }
  else if ( v40 )
  {
    goto LABEL_26;
  }
  v41 = *((_DWORD *)a1 + 101);
  if ( *(_QWORD *)v2 == *(_QWORD *)((char *)a1 + 404) )
  {
    v42 = *(_DWORD *)(v13 + 124);
    if ( v42 != v2[7] )
    {
      v43 = v42 < v2[7];
      goto LABEL_62;
    }
  }
  LOBYTE(v36) = 1;
  VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                    a1,
                    *(unsigned int *)(v13 + 84),
                    *(unsigned int *)(v13 + 100),
                    v36);
  LOBYTE(v45) = 1;
  v63 = VotPreference;
  v47 = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(v46, (unsigned int)v2[5], (unsigned int)v2[6], v45);
  v39 = __OFSUB__(v63, v47);
  v38 = (int)(v63 - v47) < 0;
  if ( v63 != v47 )
  {
LABEL_61:
    v43 = v38 ^ v39;
LABEL_62:
    if ( v43 )
      goto LABEL_26;
LABEL_42:
    v14 = v11 + 24;
    goto LABEL_12;
  }
  if ( v48 == v41 && v2[1] == *((_DWORD *)a1 + 102)
    || (int)((__int64 (*)(void))BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference)() >= v2[11] )
  {
    goto LABEL_42;
  }
LABEL_26:
  if ( !v54
    || (PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v54, *(unsigned int *)(v13 + 24)),
        PathSourceFromTarget == -1)
    || (int)VIDPN_MGR::AddPathToVidPnTopology(
              v6,
              v51,
              PathSourceFromTarget,
              *(_DWORD *)(v13 + 24),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_IGNORE) < 0 )
  {
    v34 = 0;
    PathSourceFromTarget = 0;
    if ( *(_DWORD *)(*((_QWORD *)a1 + 349) + 96LL) )
    {
      do
      {
        if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                    v6,
                    v51,
                    v34,
                    *(_DWORD *)(v13 + 24),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE) >= 0 )
          break;
        ++v34;
      }
      while ( v34 < *(_DWORD *)(*((_QWORD *)a1 + 349) + 96LL) );
      v11 = v56;
      v2 = a2;
      PathSourceFromTarget = v34;
    }
  }
  v22 = *(_DWORD *)(v13 + 24);
  if ( v22 == -1 )
    goto LABEL_70;
  v23 = *((_QWORD *)a1 + 349);
  v57 = v23;
  if ( v23 )
  {
    MONITOR_MGR::AcquireMonitorShared(&v55, (__int64)a1, v22);
    v24 = v55;
    if ( v55 )
    {
      if ( *((_DWORD *)v55 + 78) != 1 )
        WdLogSingleEntry0(1LL);
      IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v24);
      ExReleaseResourceLite((PERESOURCE)((char *)v24 + 24));
      KeLeaveCriticalRegion();
      if ( IsVirtualModeSupportDisabled )
      {
        LOBYTE(v27) = 1;
        LOBYTE(v28) = 1;
LABEL_38:
        LOBYTE(v26) = 1;
LABEL_39:
        *(_QWORD *)v2 = *(_QWORD *)((char *)a1 + 404);
        v2[2] = PathSourceFromTarget;
        v2[3] = *(_DWORD *)(v13 + 24);
        v2[4] = *(_DWORD *)(v13 + 80);
        v2[5] = *(_DWORD *)(v13 + 84);
        v2[6] = *(_DWORD *)(v13 + 100);
        v2[7] = *(_DWORD *)(v13 + 124);
        v2[8] = 0;
        v2[9] = v50;
        *((_BYTE *)v2 + 40) = *(_BYTE *)(v13 + 405);
        v2[11] = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1, v26, v27, v28);
        *((_BYTE *)v2 + 41) = v30 ^ 1;
        *((_BYTE *)v2 + 42) = v31 ^ 1;
        LOBYTE(v32) = v32 ^ 1;
        *((_BYTE *)v2 + 48) = v32;
        *((_BYTE *)v2 + 49) = *(_BYTE *)(v13 + 412);
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v60,
          (__int64)v51 + 56,
          2u,
          v32,
          v49,
          255LL);
        if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v51, PathSourceFromTarget, *(_DWORD *)(v13 + 24), 0LL) < 0
          || *((_QWORD *)v51 + 5) )
        {
          WdLogSingleEntry0(1LL);
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v60, v33);
        v6 = v58;
        goto LABEL_42;
      }
      v23 = v57;
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741632LL);
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v55);
    }
    v29 = *(_BYTE *)(v23 + 289);
    LOBYTE(v27) = v29 == 0;
    LOBYTE(v28) = *(_BYTE *)(v23 + 290) == 0;
    if ( v29 )
    {
      LOBYTE(v26) = 0;
      if ( (*(_DWORD *)(v23 + 24) & 0x20) != 0 )
        goto LABEL_39;
    }
    goto LABEL_38;
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
  v22 = *(_DWORD *)(v13 + 24);
LABEL_70:
  WdLogSingleEntry3(2LL, v22, *((int *)a1 + 102), *((unsigned int *)a1 + 101));
  v10 = -1073741811;
LABEL_16:
  ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
LABEL_17:
  auto_rc<DMMVIDPN>::reset(&v52, 0LL);
  auto_rc<DMMVIDPN>::reset(&v53, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v59 + 40));
  return v10;
}
