/*
 * XREFs of ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02EDB10
 * Callers:
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02EDAD0 (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0007F58 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00085F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000B5A8 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C01106EC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01242A0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0125A5C (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0125B70 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0129B38 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C012A2E8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013527C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N2@Z @ 0x1C02EE600 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C02EF9C4 (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C02EFA6C (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        struct DXGADAPTER *a2)
{
  BTL_TOPOLOGY_CONSTRUCTOR *v3; // r12
  VIDPN_MGR *v4; // r13
  __int64 v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  bool v26; // r13
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  char *v31; // r8
  __int64 v32; // r13
  struct _FAST_MUTEX *v33; // rcx
  char IsVirtualModeSuportDisabled; // r12
  __int64 v35; // rax
  int MonitorInstance; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  struct DXGMONITOR *v39; // r15
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int PathSourceFromTarget; // eax
  __int64 v43; // r15
  struct DMMVIDPNTOPOLOGY *v44; // r10
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  const struct DMMVIDEOPRESENTTARGET *v49; // r14
  const struct DMMVIDEOPRESENTTARGET *FirstBestSecondaryTarget; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // r14
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct DMMVIDPNTOPOLOGY *v59; // r10
  __int64 v60; // r13
  struct _FAST_MUTEX *v61; // rcx
  char v62; // r12
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  struct DXGMONITOR *v67; // r14
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned int v70; // r14d
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  int v74; // eax
  const struct DMMVIDEOPRESENTTARGET *v75; // r15
  int v76; // eax
  __int64 v77; // rdx
  __int64 v79; // rax
  struct DMMVIDPNTOPOLOGY *v80; // [rsp+40h] [rbp-29h]
  __int64 v81; // [rsp+48h] [rbp-21h] BYREF
  __int64 v82; // [rsp+50h] [rbp-19h] BYREF
  struct DXGMONITOR *v83; // [rsp+58h] [rbp-11h] BYREF
  DMMVIDPNTOPOLOGY *v84; // [rsp+60h] [rbp-9h]
  struct DXGMONITOR *v85; // [rsp+68h] [rbp-1h] BYREF
  VIDPN_MGR *v86; // [rsp+70h] [rbp+7h]
  __int64 v87[9]; // [rsp+78h] [rbp+Fh] BYREF
  bool v89; // [rsp+D8h] [rbp+6Fh]
  bool v90; // [rsp+E0h] [rbp+77h]
  int v91; // [rsp+E8h] [rbp+7Fh]

  v3 = this;
  v4 = *(VIDPN_MGR **)(*((_QWORD *)a2 + 337) + 88LL);
  v86 = v4;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v87, (__int64)v4);
  v5 = *((_QWORD *)a2 + 337);
  v6 = 0;
  v82 = 0LL;
  v7 = 0LL;
  v84 = 0LL;
  if ( *(_BYTE *)(v5 + 250) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v4, &v82) >= 0 )
  {
    v10 = v82;
    if ( !v82 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v11);
    }
    v7 = v10 + 96;
    v84 = (DMMVIDPNTOPOLOGY *)(v10 + 96);
  }
  v81 = 0LL;
  v12 = VIDPN_MGR::CreateClientVidPn(v4, &v81);
  v15 = v12;
  if ( v12 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v16[3] = v15;
    v16[4] = a2;
    v16[5] = *((int *)a2 + 80);
    v16[6] = *((unsigned int *)a2 + 79);
LABEL_19:
    WdLogEvent5_WdError(v16);
    goto LABEL_114;
  }
  v80 = (struct DMMVIDPNTOPOLOGY *)(v81 + 96);
  if ( v81 == -96 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v17[3] = -96LL;
    v17[4] = a2;
    v17[5] = *((int *)a2 + 80);
    v17[6] = *((unsigned int *)a2 + 79);
    WdLogEvent5_WdError(v17);
    LODWORD(v15) = -1073741823;
    goto LABEL_114;
  }
  while ( 1 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)v3 + 64LL);
    v19 = v18 ? *(_WORD *)(v18 + 20) : 0;
    if ( v6 >= v19 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)v3, v6);
    v21 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)a2 + 79)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a2 + 80) )
    {
      v22 = VIDPN_MGR::AddPathToVidPnTopology(
              v4,
              v80,
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v6,
              0,
              D3DKMDT_MCC_IGNORE);
      v15 = v22;
      if ( v22 < 0 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
        v16[3] = v15;
        v16[4] = *((int *)v21 + 5);
        v16[5] = *((unsigned int *)v21 + 4);
        v16[6] = *((unsigned int *)v21 + 6);
        v16[7] = *((unsigned int *)v21 + 7);
        goto LABEL_19;
      }
    }
    ++v6;
  }
  v91 = -1071774975;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v4 + 10) + 72LL));
  v25 = *((_QWORD *)v4 + 10);
  v26 = 0;
  v90 = 0;
  v89 = 0;
  if ( v7 )
  {
    for ( i = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget((const struct DMMVIDEOPRESENTTARGETSET *)v25);
          ;
          i = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v49, (const struct DMMVIDEOPRESENTTARGETSET *)v25) )
    {
      v49 = i;
      if ( !i )
        goto LABEL_62;
      v28 = *((unsigned int *)i + 6);
      if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v80, *((_DWORD *)i + 6))
        || (_DWORD)v28 == *((_DWORD *)v3 + 6)
        && *((_DWORD *)a2 + 79) == *((_DWORD *)v3 + 3)
        && *((_DWORD *)a2 + 80) == *((_DWORD *)v3 + 4)
        || !*((_QWORD *)v49 + 14)
        || *((_DWORD *)v49 + 22) )
      {
        continue;
      }
      if ( (_DWORD)v28 != -1 )
        break;
      LODWORD(v15) = -1073741811;
LABEL_50:
      if ( (int)v15 < 0 )
        goto LABEL_64;
      if ( !*((_BYTE *)v3 + 10) || !v26 )
      {
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v84, *((unsigned int *)v49 + 6), v31);
        v43 = PathSourceFromTarget;
        if ( PathSourceFromTarget != -1 && !DMMVIDPNTOPOLOGY::IsSourceInTopology(v80, PathSourceFromTarget) )
        {
          v45 = VIDPN_MGR::AddPathToVidPnTopology(
                  v86,
                  v44,
                  v43,
                  *((_DWORD *)v49 + 6),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_IGNORE);
          v15 = v45;
          if ( v45 != -1071774975 )
          {
            if ( v45 < 0 )
            {
              v53 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46);
              v53[3] = v15;
              v53[4] = *((int *)a2 + 80);
              v53[5] = *((unsigned int *)a2 + 79);
              v53[6] = v43;
              v55 = *((unsigned int *)v49 + 6);
LABEL_66:
              v53[7] = v55;
              goto LABEL_118;
            }
            LODWORD(v15) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                             v3,
                             (const struct _LUID *)((char *)a2 + 316),
                             v43,
                             *((_DWORD *)v49 + 6),
                             (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v49 + 20),
                             (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v49 + 21),
                             !v90,
                             !v26);
            v48 = v91;
            if ( (int)v15 >= 0 )
              v48 = v15;
            v91 = v48;
          }
        }
      }
    }
    v32 = *((_QWORD *)a2 + 337);
    if ( !v32 )
    {
      v52 = WdLogNewEntry5_WdError(v30, v29);
      *(_QWORD *)(v52 + 24) = 9262LL;
      WdLogEvent5_WdError(v52);
      LODWORD(v15) = -1073741811;
LABEL_64:
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
      v54 = *((unsigned int *)v49 + 6);
LABEL_117:
      v53[4] = a2;
      v53[3] = v54;
LABEL_118:
      WdLogEvent5_WdError(v53);
      goto LABEL_112;
    }
    v33 = *(struct _FAST_MUTEX **)(v32 + 96);
    IsVirtualModeSuportDisabled = 0;
    if ( !v33 )
    {
      v35 = WdLogNewEntry5_WdError(0LL, v29);
      *(_QWORD *)(v35 + 24) = a2;
      WdLogEvent5_WdError(v35);
      LODWORD(v15) = -1073741811;
LABEL_38:
      v38 = WdLogNewEntry5_WdAssertion(v30, v29);
      *(_QWORD *)(v38 + 24) = (int)v15;
      WdLogEvent5_WdAssertion(v38);
LABEL_48:
      v3 = this;
      v26 = v89;
      goto LABEL_50;
    }
    v83 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v33, (unsigned int)v28, 1, &v83);
    LODWORD(v15) = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v37 = WdLogNewEntry5_WdDmmEvent(v30, v29);
      *(_QWORD *)(v37 + 24) = v28;
      *(_QWORD *)(v37 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v37);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v39 = v83;
        if ( !v83 || *((_DWORD *)v83 + 108) != 1 )
        {
          v40 = WdLogNewEntry5_WdAssertion(v30, v29);
          WdLogEvent5_WdAssertion(v40);
        }
        if ( !v39 )
        {
          v41 = WdLogNewEntry5_WdAssertion(v30, v29);
          WdLogEvent5_WdAssertion(v41);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v39 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v39);
        ExReleaseResourceLite((PERESOURCE)((char *)v39 + 296));
        KeLeaveCriticalRegion();
        LODWORD(v15) = 0;
        goto LABEL_45;
      }
      if ( MonitorInstance != -1073741632 )
      {
LABEL_37:
        if ( (int)v15 < 0 )
          goto LABEL_38;
LABEL_45:
        if ( IsVirtualModeSuportDisabled )
        {
          v89 = 1;
          v90 = 1;
        }
        else
        {
          v89 = *(_BYTE *)(v32 + 250) == 0;
          v90 = *(_BYTE *)(v32 + 249) == 0;
        }
        goto LABEL_48;
      }
    }
    LODWORD(v15) = 0;
    goto LABEL_37;
  }
LABEL_62:
  FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget((const struct DMMVIDEOPRESENTTARGETSET *)v25);
LABEL_108:
  v75 = FirstBestSecondaryTarget;
  if ( FirstBestSecondaryTarget )
  {
    v56 = *((unsigned int *)FirstBestSecondaryTarget + 6);
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v80, *((_DWORD *)FirstBestSecondaryTarget + 6))
      || (_DWORD)v56 == *((_DWORD *)v3 + 6)
      && *((_DWORD *)a2 + 79) == *((_DWORD *)v3 + 3)
      && *((_DWORD *)a2 + 80) == *((_DWORD *)v3 + 4)
      || !*((_QWORD *)v75 + 14) )
    {
      goto LABEL_107;
    }
    if ( (_DWORD)v56 == -1 )
    {
      LODWORD(v15) = -1073741811;
      goto LABEL_94;
    }
    v60 = *((_QWORD *)a2 + 337);
    if ( !v60 )
    {
      v79 = WdLogNewEntry5_WdError(v58, v57);
      *(_QWORD *)(v79 + 24) = 9262LL;
      WdLogEvent5_WdError(v79);
      LODWORD(v15) = -1073741811;
LABEL_116:
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
      v54 = *((unsigned int *)v75 + 6);
      goto LABEL_117;
    }
    v61 = *(struct _FAST_MUTEX **)(v60 + 96);
    v62 = 0;
    if ( !v61 )
    {
      v63 = WdLogNewEntry5_WdError(0LL, v57);
      *(_QWORD *)(v63 + 24) = a2;
      WdLogEvent5_WdError(v63);
      LODWORD(v15) = -1073741811;
LABEL_82:
      v66 = WdLogNewEntry5_WdAssertion(v58, v57);
      *(_QWORD *)(v66 + 24) = (int)v15;
      WdLogEvent5_WdAssertion(v66);
LABEL_92:
      v3 = this;
      v59 = v80;
LABEL_94:
      if ( (int)v15 < 0 )
        goto LABEL_116;
      if ( *((_BYTE *)v3 + 10) && v89 )
        goto LABEL_107;
      v70 = 0;
      if ( !*(_DWORD *)(*((_QWORD *)a2 + 337) + 80LL) )
        goto LABEL_107;
      while ( 1 )
      {
        if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v59, v70) )
        {
          v71 = VIDPN_MGR::AddPathToVidPnTopology(
                  v86,
                  v59,
                  v70,
                  *((_DWORD *)v75 + 6),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_IGNORE);
          v15 = v71;
          if ( v71 != -1071774975 )
          {
            if ( v71 < 0 )
            {
              v53 = (_QWORD *)WdLogNewEntry5_WdError(v73, v72);
              v53[3] = v15;
              v53[4] = *((int *)a2 + 80);
              v53[5] = *((unsigned int *)a2 + 79);
              v53[6] = v70;
              v55 = *((unsigned int *)v75 + 6);
              goto LABEL_66;
            }
            LODWORD(v15) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                             v3,
                             (const struct _LUID *)((char *)a2 + 316),
                             v70,
                             *((_DWORD *)v75 + 6),
                             (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v75 + 20),
                             (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v75 + 21),
                             !v90,
                             !v89);
            v74 = v91;
            if ( (int)v15 >= 0 )
              v74 = v15;
            v91 = v74;
LABEL_107:
            FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(
                                         v75,
                                         (const struct DMMVIDEOPRESENTTARGETSET *)v25);
            goto LABEL_108;
          }
          v59 = v80;
        }
        if ( ++v70 >= *(_DWORD *)(*((_QWORD *)a2 + 337) + 80LL) )
          goto LABEL_107;
      }
    }
    v85 = 0LL;
    v64 = MONITOR_MGR::_GetMonitorInstance(v61, (unsigned int)v56, 1, &v85);
    LODWORD(v15) = v64;
    if ( v64 == -1073741275 )
    {
      v65 = WdLogNewEntry5_WdDmmEvent(v58, v57);
      *(_QWORD *)(v65 + 24) = v56;
      *(_QWORD *)(v65 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v65);
    }
    else
    {
      if ( v64 >= 0 )
      {
        v67 = v85;
        if ( !v85 || *((_DWORD *)v85 + 108) != 1 )
        {
          v68 = WdLogNewEntry5_WdAssertion(v58, v57);
          WdLogEvent5_WdAssertion(v68);
        }
        if ( !v67 )
        {
          v69 = WdLogNewEntry5_WdAssertion(v58, v57);
          WdLogEvent5_WdAssertion(v69);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v67 + 296), 1u);
        v62 = DXGMONITOR::_IsVirtualModeSuportDisabled(v67);
        ExReleaseResourceLite((PERESOURCE)((char *)v67 + 296));
        KeLeaveCriticalRegion();
        LODWORD(v15) = 0;
        goto LABEL_89;
      }
      if ( v64 != -1073741632 )
      {
LABEL_81:
        if ( (int)v15 < 0 )
          goto LABEL_82;
LABEL_89:
        if ( v62 )
        {
          v89 = 1;
          v90 = 1;
        }
        else
        {
          v89 = *(_BYTE *)(v60 + 250) == 0;
          v90 = *(_BYTE *)(v60 + 249) == 0;
        }
        goto LABEL_92;
      }
    }
    LODWORD(v15) = 0;
    goto LABEL_81;
  }
  v76 = v91;
  if ( (_DWORD)v15 != -1071774975 )
    v76 = v15;
  LODWORD(v15) = v76;
LABEL_112:
  if ( v25 )
    ReferenceCounted::Release((ReferenceCounted *)(v25 + 64), v51);
LABEL_114:
  auto_rc<DMMVIDPN>::reset(&v81, 0LL);
  auto_rc<DMMVIDPN>::reset(&v82, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v87[0] + 40), v77);
  return (unsigned int)v15;
}
