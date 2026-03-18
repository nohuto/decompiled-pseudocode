/*
 * XREFs of ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C013C270
 * Callers:
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C013CBBC (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C02EC3BC (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0012EF0 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0012F90 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EC34C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00ECDBC (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EFE18 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00F05C8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0128A60 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128C08 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C013C398 (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C0160100 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02E6478 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02E6848 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C02E6A74 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C02EC4A4 (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(
        struct CCD_TOPOLOGY *this,
        struct D3DKMT_AUGMENT_CDSJ *a2,
        char a3)
{
  struct _LUID *v3; // rdi
  unsigned int v4; // esi
  unsigned int v8; // ebx
  char IsPrimaryClonePathByModality; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v12; // rax
  _DWORD *v13; // rcx
  unsigned int v14; // r8d
  int v15; // eax
  _DWORD *v16; // rcx
  bool v17; // r9
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // r11
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGADAPTER *v25; // r15
  _QWORD *v26; // rax
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  _QWORD *v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  unsigned int i; // ebx
  __int64 v41; // rax
  unsigned __int16 v42; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v44; // rdi
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rbx
  bool v50; // al
  __int64 v51; // rcx
  char *v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  struct _FAST_MUTEX *v56; // r10
  __int64 v57; // rax
  int MonitorInstance; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  struct DXGMONITOR *v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // r9d
  bool v65; // r9
  __int64 v66; // rdx
  bool v67; // [rsp+50h] [rbp-B0h]
  bool v68; // [rsp+51h] [rbp-AFh]
  char IsVirtualModeSuportDisabled; // [rsp+52h] [rbp-AEh]
  unsigned int v70; // [rsp+54h] [rbp-ACh] BYREF
  VIDPN_MGR *v71; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGMONITOR *v72; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v73; // [rsp+68h] [rbp-98h] BYREF
  char *v74; // [rsp+70h] [rbp-90h]
  __int64 v75; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v76; // [rsp+80h] [rbp-80h]
  unsigned __int64 v77; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v78[144]; // [rsp+90h] [rbp-70h] BYREF

  *((_DWORD *)a2 + 4) = -1;
  v3 = (struct _LUID *)((char *)a2 + 4);
  v4 = 0;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 6) = -2;
  if ( (*(_DWORD *)a2 & 8) != 0 )
    CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(this, v3, *((_DWORD *)a2 + 3));
  v8 = 0;
  IsPrimaryClonePathByModality = 1;
  while ( 1 )
  {
    v10 = *((_QWORD *)this + 8);
    if ( v10 )
      v11 = *(unsigned __int16 *)(v10 + 20);
    else
      v11 = 0LL;
    if ( v8 >= (unsigned __int16)v11 )
    {
      if ( !a3 )
        return 3223192377LL;
      Global = DXGGLOBAL::GetGlobal(v11, (__int64)a2);
      v21 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v3, &v77);
      v76 = v21;
      v25 = v21;
      if ( !v21 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
        v26[3] = this;
        v26[4] = *((_QWORD *)this + 8);
        v26[5] = *((int *)a2 + 2);
        v26[6] = *((unsigned int *)a2 + 1);
        WdLogEvent5_WdWarning(v26);
        return (unsigned int)-1073741810;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v78, v21, 0LL);
      v27 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v78, 0LL);
      if ( v27 < 0 )
      {
LABEL_76:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v78, v28);
        DXGADAPTER::ReleaseReferenceNoTracking(v25);
        return (unsigned int)v27;
      }
      v74 = (char *)v25 + 2672;
      v31 = *((_QWORD *)v25 + 334);
      if ( !v31 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
        v27 = -1073741637;
        v32[3] = *((int *)a2 + 2);
        v32[4] = *((unsigned int *)a2 + 1);
        v32[5] = -1073741637LL;
        WdLogEvent5_WdWarning(v32);
        goto LABEL_76;
      }
      v71 = *(VIDPN_MGR **)(v31 + 88);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v75, (__int64)v71);
      v73 = 0LL;
      v33 = VIDPN_MGR::CreateClientVidPn(v71, &v73);
      v36 = v33;
      if ( v33 < 0 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
        v37[3] = v36;
        v37[4] = *((int *)v25 + 80);
        v37[5] = *((unsigned int *)v25 + 79);
        v37[6] = this;
        v38 = *((_QWORD *)this + 8);
LABEL_42:
        v37[7] = v38;
        WdLogEvent5_WdError(v37);
        goto LABEL_30;
      }
      v72 = (struct DXGMONITOR *)(v73 + 96);
      if ( v73 == -96 )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
        v39[3] = v25;
        v39[4] = *((int *)v25 + 80);
        v39[5] = *((unsigned int *)v25 + 79);
        v39[6] = this;
        v39[7] = *((_QWORD *)this + 8);
        WdLogEvent5_WdError(v39);
        LODWORD(v36) = -1073741823;
LABEL_30:
        v27 = v36;
LABEL_75:
        auto_rc<DMMVIDPN>::reset(&v73, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v75 + 40), v66);
        goto LABEL_76;
      }
      for ( i = 0; ; ++i )
      {
        v41 = *((_QWORD *)this + 8);
        v70 = i;
        v42 = v41 ? *(_WORD *)(v41 + 20) : 0;
        if ( i >= v42 )
          break;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
        v44 = PathDescriptor;
        if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v25 + 79)
          && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v25 + 80) )
        {
          v45 = VIDPN_MGR::AddPathToVidPnTopology(
                  v71,
                  v72,
                  *((_DWORD *)PathDescriptor + 6),
                  *((_DWORD *)PathDescriptor + 7),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  i,
                  0,
                  D3DKMDT_MCC_IGNORE);
          v36 = v45;
          if ( v45 < 0 )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46);
            v37[3] = v36;
            v37[4] = *((int *)v44 + 5);
            v37[5] = *((unsigned int *)v44 + 4);
            v37[6] = *((unsigned int *)v44 + 6);
            v38 = *((unsigned int *)v44 + 7);
            goto LABEL_42;
          }
          i = v70;
        }
      }
      LODWORD(v36) = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(v72, a2);
      if ( (int)v36 < 0 )
        goto LABEL_30;
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v71 + 10) + 72LL), 1u);
      v49 = *((_QWORD *)v71 + 10);
      v50 = 0;
      v51 = *((unsigned int *)a2 + 4);
      LOBYTE(v48) = 0;
      v25 = v76;
      v67 = 0;
      v68 = 0;
      LODWORD(v71) = v51;
      if ( (_DWORD)v51 == -1 )
      {
        v27 = -1073741811;
LABEL_68:
        if ( v27 >= 0 )
        {
          v64 = *((_DWORD *)a2 + 4);
          v71 = 0LL;
          v27 = CCD_TOPOLOGY::AddPathDescriptor(
                  (__int64)this,
                  (struct D3DKMT_AUGMENT_CDSJ *)((char *)a2 + 4),
                  *((_DWORD *)a2 + 3),
                  v64,
                  !v50,
                  (_BYTE)v48 == 0,
                  *((_DWORD *)a2 + 5),
                  *((_DWORD *)a2 + 6),
                  0,
                  (__int64 *)&v71);
          if ( v27 >= 0 )
          {
            if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                        this,
                        (const struct _LUID *)v71 + 2,
                        *((_DWORD *)v71 + 7),
                        &v70) >= 0 )
            {
              CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, v70);
              IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v70);
            }
            CDS_JOURNAL::FillPathDescriptor(v71, a2, IsPrimaryClonePathByModality, v65, v25);
          }
          goto LABEL_73;
        }
LABEL_47:
        v54 = (_QWORD *)WdLogNewEntry5_WdError(v51, v48);
        v54[3] = *((unsigned int *)a2 + 4);
        v54[4] = *((int *)a2 + 2);
        v54[5] = *((unsigned int *)a2 + 1);
        WdLogEvent5_WdError(v54);
LABEL_73:
        if ( v49 )
          ReferenceCounted::Release((ReferenceCounted *)(v49 + 64), v55);
        goto LABEL_75;
      }
      v52 = *(char **)v74;
      v74 = v52;
      if ( !v52 )
      {
        v53 = WdLogNewEntry5_WdError(v51, v48);
        *(_QWORD *)(v53 + 24) = 9255LL;
        WdLogEvent5_WdError(v53);
        v27 = -1073741811;
        goto LABEL_47;
      }
      v56 = (struct _FAST_MUTEX *)*((_QWORD *)v52 + 12);
      IsVirtualModeSuportDisabled = 0;
      if ( !v56 )
      {
        v57 = WdLogNewEntry5_WdError(v51, v48);
        *(_QWORD *)(v57 + 24) = v25;
        WdLogEvent5_WdError(v57);
        v27 = -1073741811;
LABEL_56:
        v60 = WdLogNewEntry5_WdAssertion(v51, v48);
        *(_QWORD *)(v60 + 24) = v27;
        WdLogEvent5_WdAssertion(v60);
LABEL_66:
        v50 = v67;
        LOBYTE(v48) = v68;
        goto LABEL_68;
      }
      v72 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v56, (unsigned int)v51, 1, &v72);
      v27 = MonitorInstance;
      if ( MonitorInstance == -1073741275 )
      {
        v59 = WdLogNewEntry5_WdDmmEvent(v51);
        *(_QWORD *)(v59 + 24) = (unsigned int)v71;
        *(_QWORD *)(v59 + 32) = v25;
        WdLogEvent5_WdDmmEvent(v59);
      }
      else
      {
        if ( MonitorInstance >= 0 )
        {
          v61 = v72;
          if ( !v72 || *((_DWORD *)v72 + 108) != 1 )
          {
            v62 = WdLogNewEntry5_WdAssertion(v51, v48);
            WdLogEvent5_WdAssertion(v62);
          }
          if ( !v61 )
          {
            v63 = WdLogNewEntry5_WdAssertion(v51, v48);
            WdLogEvent5_WdAssertion(v63);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v61 + 296), 1u);
          IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v72);
          ExReleaseResourceLite((PERESOURCE)((char *)v61 + 296));
          KeLeaveCriticalRegion();
          v27 = 0;
          goto LABEL_63;
        }
        if ( MonitorInstance != -1073741632 )
        {
LABEL_55:
          if ( v27 < 0 )
            goto LABEL_56;
LABEL_63:
          if ( IsVirtualModeSuportDisabled )
          {
            v68 = 1;
            v67 = 1;
          }
          else
          {
            v68 = v74[250] == 0;
            v67 = v74[249] == 0;
          }
          goto LABEL_66;
        }
      }
      v27 = 0;
      goto LABEL_55;
    }
    v12 = CCD_TOPOLOGY::GetPathDescriptor(this, v8);
    if ( CCD_TOPOLOGY::IsMatchingSource(v12, v3, *((_DWORD *)a2 + 3)) )
      break;
    ++v8;
  }
  *((_DWORD *)a2 + 4) = v13[7];
  *((_DWORD *)a2 + 5) = v13[22];
  v15 = v13[23];
  v16 = (_DWORD *)*((_QWORD *)a2 + 4);
  *((_DWORD *)a2 + 6) = v15;
  if ( !v16 )
    return v4;
  if ( (v16[18] & 0x180000) == 0x180000 && !v16[43] && !v16[44] )
    return (unsigned int)CCD_TOPOLOGY::RemoveCloneGroupByModality(this, v3, v14);
  if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v8) )
  {
    CDS_JOURNAL::FillPathDescriptor(v18, a2, 1, v17, 0LL);
    return v4;
  }
  return 3223192371LL;
}
