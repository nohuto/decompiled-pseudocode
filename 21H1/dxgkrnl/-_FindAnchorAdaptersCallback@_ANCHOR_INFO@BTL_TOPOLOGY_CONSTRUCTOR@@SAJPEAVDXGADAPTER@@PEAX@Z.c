/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012A63C
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_ @ 0x1C012AB60 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EFE18 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00F05C8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011D4B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011D5D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C011DA1C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0128A60 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128C08 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128E64 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C012A008 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C012AA90 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C012AB10 (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C012AB2C (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02EB2B0 (-_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@.c)
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C02EB2FC (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
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
  __int64 v36; // rdx
  DMMVIDPNTOPOLOGY *v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  int VmtPreference; // eax
  __int64 v44; // r9
  bool v45; // al
  char v46; // al
  unsigned int v47; // eax
  int VotPreference; // eax
  __int64 v49; // r9
  int v50; // edi
  int v51; // eax
  int v52; // r10d
  int v53; // r11d
  int PostAdapterPreference; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // [rsp+20h] [rbp-69h]
  char IsVirtualModeSuportDisabled; // [rsp+40h] [rbp-49h]
  unsigned int v64; // [rsp+44h] [rbp-45h] BYREF
  DMMVIDPNTOPOLOGY *v65; // [rsp+48h] [rbp-41h]
  int v66; // [rsp+50h] [rbp-39h]
  __int64 v67; // [rsp+58h] [rbp-31h] BYREF
  __int64 v68; // [rsp+60h] [rbp-29h] BYREF
  DMMVIDPNTOPOLOGY *v69; // [rsp+68h] [rbp-21h]
  struct DXGMONITOR *v70; // [rsp+70h] [rbp-19h] BYREF
  __int64 v71; // [rsp+78h] [rbp-11h]
  __int64 v72; // [rsp+80h] [rbp-9h]
  struct VIDPN_MGR *v73; // [rsp+88h] [rbp-1h]
  __int64 v74; // [rsp+90h] [rbp+7h] BYREF
  _BYTE v75[72]; // [rsp+98h] [rbp+Fh] BYREF
  bool v77; // [rsp+100h] [rbp+77h]
  bool v78; // [rsp+108h] [rbp+7Fh]

  v2 = a2;
  v66 = ((__int64 (*)(void))BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference)();
  if ( v66 < *(_DWORD *)(v5 + 36) )
    return 0LL;
  v6 = *(struct VIDPN_MGR **)(*(_QWORD *)(v4 + 2672) + 88LL);
  v73 = v6;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v74, (__int64)v6);
  v7 = *((_QWORD *)a1 + 334);
  v68 = 0LL;
  v69 = 0LL;
  if ( *(_BYTE *)(v7 + 250) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v6, &v68) >= 0 )
  {
    v10 = v68;
    if ( !v68 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v41);
    }
    v69 = (DMMVIDPNTOPOLOGY *)(v10 + 96);
  }
  v67 = 0LL;
  v11 = VIDPN_MGR::CreateClientVidPn(v6, &v67);
  LODWORD(v14) = 0;
  v15 = v11;
  if ( v11 < 0 || (v65 = (DMMVIDPNTOPOLOGY *)(v67 + 96), v67 == -96) )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v42[3] = v15;
    v42[4] = a1;
    v42[5] = *((int *)a1 + 80);
    v42[6] = *((unsigned int *)a1 + 79);
    v42[7] = v2;
    WdLogEvent5_WdError(v42);
    goto LABEL_17;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 10) + 72LL));
  v16 = *((_QWORD *)v6 + 10);
  v71 = v16;
  v77 = 0;
  v78 = 0;
  v17 = *(_QWORD *)(v16 + 24);
  if ( v17 == v16 + 24 || (v18 = (char *)(v17 - 8)) == 0LL )
  {
LABEL_15:
    LODWORD(v15) = (_DWORD)v14;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v64 = (unsigned int)v14;
    IsMonitorConnected = DMMVIDEOPRESENTTARGET::IsMonitorConnected(
                           (DMMVIDEOPRESENTTARGET *)v18,
                           (enum _DMM_VIDPN_MONITOR_TYPE *)&v64);
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
  BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v64);
  VmtPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference((unsigned int)v2[8]);
  if ( (_DWORD)v12 != VmtPreference )
  {
    v45 = (int)v12 < VmtPreference;
    goto LABEL_66;
  }
  v46 = *((_BYTE *)v2 + 49);
  if ( v18[412] == (_BYTE)v14 )
  {
    if ( v46 )
      goto LABEL_20;
  }
  else if ( !v46 )
  {
    goto LABEL_12;
  }
  if ( *v2 == *((_DWORD *)a1 + 79) && v2[1] == *((_DWORD *)a1 + 80) )
  {
    v47 = *((_DWORD *)v18 + 31);
    if ( v47 != v2[7] )
    {
      v45 = v47 < v2[7];
      goto LABEL_66;
    }
  }
  LOBYTE(v44) = 1;
  VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                    a1,
                    *((unsigned int *)v18 + 21),
                    *((unsigned int *)v18 + 24),
                    v44);
  LOBYTE(v49) = 1;
  v50 = VotPreference;
  v51 = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(a1, (unsigned int)v2[5], (unsigned int)v2[6], v49);
  if ( v50 != v51 )
  {
    v45 = v50 < v51;
    v14 = 0LL;
    goto LABEL_66;
  }
  if ( v52 == v53 && v2[1] == *((_DWORD *)a1 + 80) )
  {
LABEL_39:
    v14 = 0LL;
    goto LABEL_12;
  }
  PostAdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1);
  v14 = 0LL;
  if ( PostAdapterPreference >= v2[11] )
  {
    v45 = 0;
LABEL_66:
    if ( !v45 )
      goto LABEL_12;
  }
LABEL_20:
  if ( v69 )
  {
    PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v69, *((unsigned int *)v18 + 6), v14);
    v25 = v65;
    v26 = PathSourceFromTarget;
    if ( PathSourceFromTarget == -1 )
    {
      v14 = 0LL;
    }
    else
    {
      v27 = VIDPN_MGR::AddPathToVidPnTopology(
              v6,
              v65,
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
    v25 = v65;
  }
  v26 = (unsigned int)v14;
  if ( *(_DWORD *)(*((_QWORD *)a1 + 334) + 80LL) > (unsigned int)v14 )
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
    while ( v26 < *(_DWORD *)(*((_QWORD *)a1 + 334) + 80LL) );
    v16 = v71;
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
  v29 = *((_QWORD *)a1 + 334);
  v72 = v29;
  if ( v29 )
  {
    v30 = *(struct _FAST_MUTEX **)(v29 + 96);
    IsVirtualModeSuportDisabled = (char)v14;
    if ( !v30 )
    {
      v55 = WdLogNewEntry5_WdError(0LL, v12);
      *(_QWORD *)(v55 + 24) = a1;
      WdLogEvent5_WdError(v55);
      LODWORD(v15) = -1073741811;
LABEL_72:
      v56 = WdLogNewEntry5_WdAssertion(v23, v12);
      *(_QWORD *)(v56 + 24) = (int)v15;
      WdLogEvent5_WdAssertion(v56);
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
      v2[8] = v64;
      v2[9] = v66;
      *((_BYTE *)v2 + 40) = v18[405];
      v33 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1);
      v34 = v65;
      v2[11] = v33;
      *((_BYTE *)v2 + 41) = !v77;
      *((_BYTE *)v2 + 48) = !v78;
      *((_BYTE *)v2 + 49) = v18[412];
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v75,
        (__int64)v34 + 56,
        2u,
        v35,
        v62,
        255LL);
      v36 = v26;
      v37 = v65;
      if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v65, v36, *((_DWORD *)v18 + 6), 0LL) < 0 || *((_QWORD *)v37 + 5) )
      {
        v59 = WdLogNewEntry5_WdAssertion(v39, v38);
        WdLogEvent5_WdAssertion(v59);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v75, v38);
      v6 = v73;
      goto LABEL_39;
    }
    v70 = (struct DXGMONITOR *)v14;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v30, (unsigned int)v28, 1, &v70);
    LODWORD(v15) = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v40 = WdLogNewEntry5_WdDmmEvent(v23);
      *(_QWORD *)(v40 + 24) = v28;
      *(_QWORD *)(v40 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v40);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v32 = v70;
        if ( !v70 || *((_DWORD *)v70 + 108) != 1 )
        {
          v57 = WdLogNewEntry5_WdAssertion(v23, v12);
          WdLogEvent5_WdAssertion(v57);
        }
        if ( !v32 )
        {
          v58 = WdLogNewEntry5_WdAssertion(v23, v12);
          WdLogEvent5_WdAssertion(v58);
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
        v78 = 1;
        v77 = 1;
      }
      else
      {
        v78 = *(_BYTE *)(v72 + 250) == 0;
        v77 = *(_BYTE *)(v72 + 249) == 0;
      }
      goto LABEL_35;
    }
    goto LABEL_72;
  }
  v60 = WdLogNewEntry5_WdError(v23, v12);
  *(_QWORD *)(v60 + 24) = 9255LL;
  WdLogEvent5_WdError(v60);
  LODWORD(v15) = -1073741811;
LABEL_80:
  v61 = (_QWORD *)WdLogNewEntry5_WdError(v23, v12);
  v61[3] = *((unsigned int *)v18 + 6);
  v61[4] = *((int *)a1 + 80);
  v61[5] = *((unsigned int *)a1 + 79);
  WdLogEvent5_WdError(v61);
LABEL_16:
  ReferenceCounted::Release((ReferenceCounted *)(v16 + 64), v12);
LABEL_17:
  auto_rc<DMMVIDPN>::reset(&v67, 0LL);
  auto_rc<DMMVIDPN>::reset(&v68, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v74 + 40), v21);
  return (unsigned int)v15;
}
