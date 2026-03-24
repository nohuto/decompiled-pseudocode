/*
 * XREFs of ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C02F10E8
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01492C0 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0007F58 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00085F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000B5A8 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000C7F4 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011F70C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01242A0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0125A5C (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0129B38 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C012A2E8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0134888 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013527C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C0146954 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02EAD48 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02EB118 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::_ExtendTopology(struct CCD_TOPOLOGY *this, const struct CDS_JOURNAL::_ENTRY *a2)
{
  struct _LUID *v3; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  struct DMMVIDPNTOPOLOGY *v23; // rbx
  _QWORD *v24; // rax
  unsigned int v25; // r15d
  char IsPrimaryClonePathByModality; // r12
  __int64 v27; // rax
  unsigned __int16 v28; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v30; // rsi
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // esi
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // r15
  __int64 v42; // rcx
  unsigned int v43; // eax
  __int64 v44; // rax
  struct _FAST_MUTEX *v45; // rcx
  __int64 v46; // rax
  int MonitorInstance; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  struct DXGMONITOR *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v56; // rsi
  __int64 v57; // r8
  __int64 v58; // rdx
  bool v60; // [rsp+50h] [rbp-B0h]
  bool v61; // [rsp+51h] [rbp-AFh]
  char IsVirtualModeSuportDisabled; // [rsp+52h] [rbp-AEh]
  unsigned int v63; // [rsp+54h] [rbp-ACh] BYREF
  struct DXGMONITOR *v64; // [rsp+58h] [rbp-A8h] BYREF
  VIDPN_MGR *v65; // [rsp+60h] [rbp-A0h]
  __int64 v66; // [rsp+68h] [rbp-98h] BYREF
  __int64 v67; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v68; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v69[144]; // [rsp+80h] [rbp-80h] BYREF

  v3 = (struct _LUID *)((char *)a2 + 20);
  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v3, &v68);
  v10 = v6;
  if ( !v6 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v11[3] = this;
    v11[4] = *((_QWORD *)this + 8);
    v11[5] = *((int *)a2 + 6);
    v11[6] = v3->LowPart;
    WdLogEvent5_WdWarning(v11);
    LODWORD(v12) = -1073741810;
    return (unsigned int)v12;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v69, v6, 0LL);
  LODWORD(v12) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v69, 0LL);
  if ( (int)v12 < 0 )
    goto LABEL_66;
  v16 = *((_QWORD *)v10 + 337);
  if ( !v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    LODWORD(v12) = -1073741637;
    v17[3] = *((int *)a2 + 6);
    v17[4] = v3->LowPart;
    v17[5] = -1073741637LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_66;
  }
  v65 = *(VIDPN_MGR **)(v16 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v67, (__int64)v65);
  v66 = 0LL;
  v18 = VIDPN_MGR::CreateClientVidPn(v65, &v66);
  v12 = v18;
  if ( v18 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v21[3] = v12;
    v21[4] = v10;
    v21[5] = *((int *)v10 + 80);
    v21[6] = *((unsigned int *)v10 + 79);
    v22 = *((_QWORD *)this + 8);
    goto LABEL_60;
  }
  v23 = (struct DMMVIDPNTOPOLOGY *)(v66 + 96);
  v64 = (struct DXGMONITOR *)(v66 + 96);
  if ( v66 == -96 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v24[3] = v10;
    v24[4] = *((int *)v10 + 80);
    v24[5] = *((unsigned int *)v10 + 79);
    v24[6] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v24);
    LODWORD(v12) = -1073741823;
    goto LABEL_65;
  }
  v25 = 0;
  IsPrimaryClonePathByModality = 1;
  while ( 1 )
  {
    v27 = *((_QWORD *)this + 8);
    v28 = v27 ? *(_WORD *)(v27 + 20) : 0;
    if ( v25 >= v28 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v25);
    v30 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v10 + 79)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v10 + 80) )
    {
      v31 = VIDPN_MGR::AddPathToVidPnTopology(
              v65,
              v23,
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v25,
              0,
              D3DKMDT_MCC_ENFORCE);
      v12 = v31;
      if ( v31 < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
        v21[3] = v12;
        v21[4] = *((int *)v30 + 5);
        v21[5] = *((unsigned int *)v30 + 4);
        v21[6] = *((unsigned int *)v30 + 6);
        v22 = *((unsigned int *)v30 + 7);
LABEL_60:
        v21[7] = v22;
LABEL_61:
        WdLogEvent5_WdError(v21);
        goto LABEL_65;
      }
      v23 = v64;
    }
    ++v25;
  }
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v23, *((_DWORD *)a2 + 8)) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v35, v34);
    WdLogEvent5_WdAssertion(v36);
  }
  v37 = *((_QWORD *)v10 + 337);
  v38 = 0;
  v63 = 0;
  if ( !*(_DWORD *)(v37 + 80) )
    goto LABEL_28;
  while ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v23, v38) )
  {
LABEL_27:
    v40 = *((_QWORD *)v10 + 337);
    v63 = ++v38;
    if ( v38 >= *(_DWORD *)(v40 + 80) )
      goto LABEL_28;
  }
  v39 = VIDPN_MGR::AddPathToVidPnTopology(
          v65,
          v23,
          v38,
          *((_DWORD *)a2 + 8),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_ENFORCE);
  v12 = v39;
  if ( v39 == -1071774975 )
  {
    v23 = v64;
    goto LABEL_27;
  }
  if ( v39 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
    v21[3] = v12;
    v21[4] = *((int *)v10 + 80);
    v42 = *((unsigned int *)v10 + 79);
    goto LABEL_59;
  }
LABEL_28:
  v41 = *((_QWORD *)v10 + 337);
  if ( v38 >= *(_DWORD *)(v41 + 80) )
  {
    LODWORD(v12) = -1071774975;
    goto LABEL_65;
  }
  v43 = *((_DWORD *)a2 + 8);
  LOBYTE(v35) = 0;
  LOBYTE(v34) = 0;
  v60 = 0;
  v61 = 0;
  LODWORD(v65) = v43;
  if ( v43 == -1 )
  {
    LODWORD(v12) = -1073741811;
  }
  else
  {
    if ( !v41 )
    {
      v44 = WdLogNewEntry5_WdError(v35, v34);
      *(_QWORD *)(v44 + 24) = 9262LL;
      WdLogEvent5_WdError(v44);
      LODWORD(v12) = -1073741811;
      goto LABEL_56;
    }
    IsVirtualModeSuportDisabled = 0;
    v45 = *(struct _FAST_MUTEX **)(v41 + 96);
    if ( !v45 )
    {
      v46 = WdLogNewEntry5_WdError(0LL, v34);
      *(_QWORD *)(v46 + 24) = v10;
      WdLogEvent5_WdError(v46);
      LODWORD(v12) = -1073741811;
      goto LABEL_43;
    }
    v64 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v45, v43, 1, &v64);
    LODWORD(v12) = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v48 = WdLogNewEntry5_WdDmmEvent(v35, v34);
      *(_QWORD *)(v48 + 24) = (unsigned int)v65;
      *(_QWORD *)(v48 + 32) = v10;
      WdLogEvent5_WdDmmEvent(v48);
      goto LABEL_41;
    }
    if ( MonitorInstance >= 0 )
    {
      v50 = v64;
      if ( !v64 || *((_DWORD *)v64 + 108) != 1 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v35, v34);
        WdLogEvent5_WdAssertion(v51);
      }
      if ( !v50 )
      {
        v52 = WdLogNewEntry5_WdAssertion(v35, v34);
        WdLogEvent5_WdAssertion(v52);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v50 + 296), 1u);
      IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v50);
      ExReleaseResourceLite((PERESOURCE)((char *)v50 + 296));
      KeLeaveCriticalRegion();
      v38 = v63;
      LODWORD(v12) = 0;
    }
    else
    {
      if ( MonitorInstance == -1073741632 )
LABEL_41:
        LODWORD(v12) = 0;
      if ( (int)v12 < 0 )
      {
LABEL_43:
        v49 = WdLogNewEntry5_WdAssertion(v35, v34);
        *(_QWORD *)(v49 + 24) = (int)v12;
        WdLogEvent5_WdAssertion(v49);
        goto LABEL_53;
      }
    }
    if ( IsVirtualModeSuportDisabled )
    {
      v61 = 1;
      v60 = 1;
    }
    else
    {
      v61 = *(_BYTE *)(v41 + 250) == 0;
      v60 = *(_BYTE *)(v41 + 249) == 0;
    }
LABEL_53:
    LOBYTE(v35) = v60;
    LOBYTE(v34) = v61;
  }
  if ( (int)v12 < 0 )
  {
LABEL_56:
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
    v21[3] = *((unsigned int *)a2 + 8);
    v21[4] = v10;
    goto LABEL_61;
  }
  v64 = 0LL;
  v53 = CCD_TOPOLOGY::AddPathDescriptor(
          (__int64)this,
          (const struct CDS_JOURNAL::_ENTRY *)((char *)a2 + 20),
          v38,
          *((_DWORD *)a2 + 8),
          (_BYTE)v35 == 0,
          (_BYTE)v34 == 0,
          *((_DWORD *)a2 + 9),
          *((_DWORD *)a2 + 10),
          0,
          (__int64 *)&v64);
  v12 = v53;
  if ( v53 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54);
    v21[3] = v12;
    v21[4] = *((int *)a2 + 6);
    v42 = *((unsigned int *)a2 + 5);
LABEL_59:
    v21[5] = v42;
    v21[6] = v38;
    v22 = *((unsigned int *)a2 + 8);
    goto LABEL_60;
  }
  v56 = v64;
  v63 = 0;
  if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(this, (const struct _LUID *)v64 + 2, *((_DWORD *)v64 + 7), &v63) >= 0 )
  {
    CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, v63);
    IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v63);
  }
  LOBYTE(v57) = IsPrimaryClonePathByModality;
  CDS_JOURNAL::_FillPathDescriptor(v56, a2, v57, 0, v10);
LABEL_65:
  auto_rc<DMMVIDPN>::reset(&v66, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v67 + 40), v58);
LABEL_66:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69, v13);
  DXGADAPTER::ReleaseReference(v10);
  return (unsigned int)v12;
}
