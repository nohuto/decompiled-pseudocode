/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C013B7B8
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_ @ 0x1C012F860 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00085F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C01106EC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01115B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01116D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01242A0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0125A5C (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0125B70 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0129B38 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C012A2E8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C013BC0C (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C013BC8C (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C013BDF4 (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C013BE10 (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02EFB80 (-_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@.c)
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C02EFBCC (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(
        struct DXGADAPTER *a1,
        _DWORD *a2)
{
  _DWORD *v2; // r15
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct VIDPN_MGR *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r14
  char *v18; // r14
  unsigned __int8 IsMonitorConnected; // al
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v23; // rcx
  unsigned int PathSourceFromTarget; // eax
  struct DMMVIDPNTOPOLOGY *v25; // rdi
  unsigned int v26; // r12d
  int v27; // eax
  __int64 v28; // r13
  __int64 v29; // rax
  struct _FAST_MUTEX *v30; // rcx
  int MonitorInstance; // eax
  struct DXGMONITOR *v32; // r13
  int v33; // eax
  DMMVIDPNTOPOLOGY *v34; // rdx
  __int64 v35; // r9
  unsigned int v36; // edx
  DMMVIDPNTOPOLOGY *v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  int VmtPreference; // eax
  __int64 v46; // r9
  bool v47; // al
  char v48; // al
  unsigned int v49; // eax
  int VotPreference; // eax
  __int64 v51; // r9
  int v52; // edi
  int v53; // eax
  int v54; // r10d
  int v55; // r11d
  int PostAdapterPreference; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // [rsp+20h] [rbp-69h]
  char IsVirtualModeSuportDisabled; // [rsp+40h] [rbp-49h]
  unsigned int v66; // [rsp+44h] [rbp-45h] BYREF
  DMMVIDPNTOPOLOGY *v67; // [rsp+48h] [rbp-41h]
  int v68; // [rsp+50h] [rbp-39h]
  __int64 v69; // [rsp+58h] [rbp-31h] BYREF
  __int64 v70; // [rsp+60h] [rbp-29h] BYREF
  DMMVIDPNTOPOLOGY *v71; // [rsp+68h] [rbp-21h]
  struct DXGMONITOR *v72; // [rsp+70h] [rbp-19h] BYREF
  __int64 v73; // [rsp+78h] [rbp-11h]
  __int64 v74; // [rsp+80h] [rbp-9h]
  struct VIDPN_MGR *v75; // [rsp+88h] [rbp-1h]
  __int64 v76; // [rsp+90h] [rbp+7h] BYREF
  _BYTE v77[72]; // [rsp+98h] [rbp+Fh] BYREF
  bool v79; // [rsp+100h] [rbp+77h]
  bool v80; // [rsp+108h] [rbp+7Fh]

  v2 = a2;
  v68 = ((__int64 (*)(void))BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference)();
  if ( v68 < *(_DWORD *)(v5 + 36) )
    return 0LL;
  v6 = *(struct VIDPN_MGR **)(*(_QWORD *)(v4 + 2696) + 88LL);
  v75 = v6;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v76, (__int64)v6);
  v7 = *((_QWORD *)a1 + 337);
  v70 = 0LL;
  v71 = 0LL;
  if ( *(_BYTE *)(v7 + 250) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v6, &v70) >= 0 )
  {
    v10 = v70;
    if ( !v70 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v43);
    }
    v71 = (DMMVIDPNTOPOLOGY *)(v10 + 96);
  }
  v69 = 0LL;
  v11 = VIDPN_MGR::CreateClientVidPn(v6, &v69);
  LODWORD(v14) = 0;
  v15 = v11;
  if ( v11 < 0 || (v67 = (DMMVIDPNTOPOLOGY *)(v69 + 96), v69 == -96) )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v44[3] = v15;
    v44[4] = a1;
    v44[5] = *((int *)a1 + 80);
    v44[6] = *((unsigned int *)a1 + 79);
    v44[7] = v2;
    WdLogEvent5_WdError(v44);
    goto LABEL_17;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 10) + 72LL));
  v16 = *((_QWORD *)v6 + 10);
  v73 = v16;
  v79 = 0;
  v80 = 0;
  v17 = *(_QWORD *)(v16 + 24);
  if ( v17 == v16 + 24 || (v18 = (char *)(v17 - 8)) == 0LL )
  {
LABEL_15:
    LODWORD(v15) = (_DWORD)v14;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v66 = (unsigned int)v14;
    IsMonitorConnected = DMMVIDEOPRESENTTARGET::IsMonitorConnected(
                           (DMMVIDEOPRESENTTARGET *)v18,
                           (enum _DMM_VIDPN_MONITOR_TYPE *)&v66);
    v14 = 0LL;
    if ( IsMonitorConnected )
    {
      if ( !*((_DWORD *)v18 + 22) )
        break;
    }
LABEL_12:
    v20 = *((_QWORD *)v18 + 1);
    v18 = (char *)(v20 - 8);
    if ( v20 == v16 + 24 )
      v18 = v14;
    if ( !v18 )
      goto LABEL_15;
  }
  if ( v2[9] < (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference(a1, v12, 0LL) )
    goto LABEL_20;
  BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v66);
  VmtPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference((unsigned int)v2[8]);
  if ( (_DWORD)v12 != VmtPreference )
  {
    v47 = (int)v12 < VmtPreference;
    goto LABEL_66;
  }
  v48 = *((_BYTE *)v2 + 49);
  if ( v18[412] == (_BYTE)v14 )
  {
    if ( v48 )
      goto LABEL_20;
  }
  else if ( !v48 )
  {
    goto LABEL_12;
  }
  if ( *v2 == *((_DWORD *)a1 + 79) && v2[1] == *((_DWORD *)a1 + 80) )
  {
    v49 = *((_DWORD *)v18 + 31);
    if ( v49 != v2[7] )
    {
      v47 = v49 < v2[7];
      goto LABEL_66;
    }
  }
  LOBYTE(v46) = 1;
  VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                    a1,
                    *((unsigned int *)v18 + 21),
                    *((unsigned int *)v18 + 24),
                    v46);
  LOBYTE(v51) = 1;
  v52 = VotPreference;
  v53 = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(a1, (unsigned int)v2[5], (unsigned int)v2[6], v51);
  if ( v52 != v53 )
  {
    v47 = v52 < v53;
    v14 = 0LL;
    goto LABEL_66;
  }
  if ( v54 == v55 && v2[1] == *((_DWORD *)a1 + 80) )
  {
LABEL_39:
    v14 = 0LL;
    goto LABEL_12;
  }
  PostAdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1);
  v14 = 0LL;
  if ( PostAdapterPreference >= v2[11] )
  {
    v47 = 0;
LABEL_66:
    if ( !v47 )
      goto LABEL_12;
  }
LABEL_20:
  if ( v71 )
  {
    PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v71, *((unsigned int *)v18 + 6), v14);
    v25 = v67;
    v26 = PathSourceFromTarget;
    if ( PathSourceFromTarget == -1 )
    {
      v14 = 0LL;
    }
    else
    {
      v27 = VIDPN_MGR::AddPathToVidPnTopology(
              v6,
              v67,
              PathSourceFromTarget,
              *((_DWORD *)v18 + 6),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_IGNORE);
      v14 = 0LL;
      if ( v27 >= 0 )
        goto LABEL_23;
    }
  }
  else
  {
    v25 = v67;
  }
  v26 = (unsigned int)v14;
  if ( *(_DWORD *)(*((_QWORD *)a1 + 337) + 80LL) > (unsigned int)v14 )
  {
    do
    {
      if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                  v6,
                  v25,
                  v26,
                  *((_DWORD *)v18 + 6),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_IGNORE) >= 0 )
        break;
      ++v26;
    }
    while ( v26 < *(_DWORD *)(*((_QWORD *)a1 + 337) + 80LL) );
    v16 = v73;
    v14 = 0LL;
    v2 = a2;
  }
LABEL_23:
  v28 = *((unsigned int *)v18 + 6);
  if ( (_DWORD)v28 == -1 )
  {
    LODWORD(v15) = -1073741811;
    goto LABEL_35;
  }
  v29 = *((_QWORD *)a1 + 337);
  v74 = v29;
  if ( v29 )
  {
    v30 = *(struct _FAST_MUTEX **)(v29 + 96);
    IsVirtualModeSuportDisabled = (char)v14;
    if ( !v30 )
    {
      v57 = WdLogNewEntry5_WdError(0LL, v12);
      *(_QWORD *)(v57 + 24) = a1;
      WdLogEvent5_WdError(v57);
      LODWORD(v15) = -1073741811;
LABEL_72:
      v58 = WdLogNewEntry5_WdAssertion(v23, v12);
      *(_QWORD *)(v58 + 24) = (int)v15;
      WdLogEvent5_WdAssertion(v58);
LABEL_35:
      if ( (int)v15 < 0 )
        goto LABEL_80;
      *(_QWORD *)v2 = *(_QWORD *)((char *)a1 + 316);
      v2[2] = v26;
      v2[3] = *((_DWORD *)v18 + 6);
      v2[4] = *((_DWORD *)v18 + 20);
      v2[5] = *((_DWORD *)v18 + 21);
      v2[6] = *((_DWORD *)v18 + 24);
      v2[7] = *((_DWORD *)v18 + 31);
      v2[8] = v66;
      v2[9] = v68;
      *((_BYTE *)v2 + 40) = v18[405];
      v33 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1);
      v34 = v67;
      v2[11] = v33;
      *((_BYTE *)v2 + 41) = !v79;
      *((_BYTE *)v2 + 48) = !v80;
      *((_BYTE *)v2 + 49) = v18[412];
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v77,
        (__int64)v34 + 56,
        2u,
        v35,
        v64,
        255LL);
      v36 = v26;
      v37 = v67;
      if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v67, v36, *((_DWORD *)v18 + 6), 0LL) < 0 || *((_QWORD *)v37 + 5) )
      {
        v61 = WdLogNewEntry5_WdAssertion(v39, v38);
        WdLogEvent5_WdAssertion(v61);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v77,
        v38,
        v40,
        v41);
      v6 = v75;
      goto LABEL_39;
    }
    v72 = (struct DXGMONITOR *)v14;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v30, (unsigned int)v28, 1, &v72);
    LODWORD(v15) = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v42 = WdLogNewEntry5_WdDmmEvent(v23, v12);
      *(_QWORD *)(v42 + 24) = v28;
      *(_QWORD *)(v42 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v42);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v32 = v72;
        if ( !v72 || *((_DWORD *)v72 + 108) != 1 )
        {
          v59 = WdLogNewEntry5_WdAssertion(v23, v12);
          WdLogEvent5_WdAssertion(v59);
        }
        if ( !v32 )
        {
          v60 = WdLogNewEntry5_WdAssertion(v23, v12);
          WdLogEvent5_WdAssertion(v60);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v32 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v32);
        ExReleaseResourceLite((PERESOURCE)((char *)v32 + 296));
        KeLeaveCriticalRegion();
        LODWORD(v15) = 0;
        goto LABEL_33;
      }
      if ( MonitorInstance != -1073741632 )
        goto LABEL_46;
    }
    LODWORD(v15) = 0;
LABEL_46:
    if ( (int)v15 >= 0 )
    {
LABEL_33:
      if ( IsVirtualModeSuportDisabled )
      {
        v80 = 1;
        v79 = 1;
      }
      else
      {
        v80 = *(_BYTE *)(v74 + 250) == 0;
        v79 = *(_BYTE *)(v74 + 249) == 0;
      }
      goto LABEL_35;
    }
    goto LABEL_72;
  }
  v62 = WdLogNewEntry5_WdError(v23, v12);
  *(_QWORD *)(v62 + 24) = 9262LL;
  WdLogEvent5_WdError(v62);
  LODWORD(v15) = -1073741811;
LABEL_80:
  v63 = (_QWORD *)WdLogNewEntry5_WdError(v23, v12);
  v63[3] = *((unsigned int *)v18 + 6);
  v63[4] = *((int *)a1 + 80);
  v63[5] = *((unsigned int *)a1 + 79);
  WdLogEvent5_WdError(v63);
LABEL_16:
  ReferenceCounted::Release((ReferenceCounted *)(v16 + 64), v12);
LABEL_17:
  auto_rc<DMMVIDPN>::reset(&v69, 0LL);
  auto_rc<DMMVIDPN>::reset(&v70, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v76 + 40), v21);
  return (unsigned int)v15;
}
