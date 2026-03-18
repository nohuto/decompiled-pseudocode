/*
 * XREFs of ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02E9D90
 * Callers:
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EA5CC (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EA6C4 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EADA0 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EAE48 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000F2C0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0010750 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0011098 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EC34C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EFE18 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00F05C8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0128A60 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128C08 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128F28 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02D96B8 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N2@Z @ 0x1C02E9D30 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C02EB3A8 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
        CCD_TOPOLOGY **this,
        __int64 a2,
        const struct _LUID *a3,
        unsigned int a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGADAPTER *v12; // rsi
  _QWORD *v13; // rax
  struct DMMVIDEOPRESENTTARGET *v14; // rdi
  __int64 v15; // rdx
  VIDPN_MGR *v16; // r12
  int ClientVidPn; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  unsigned int i; // r14d
  __int64 v23; // rax
  unsigned __int16 v24; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rbx
  unsigned int v27; // r8d
  unsigned int v28; // r9d
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  _QWORD *v32; // rbx
  unsigned int v33; // r14d
  _QWORD *v34; // r13
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r13
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // r10
  __int64 v40; // r12
  struct _FAST_MUTEX *v41; // rcx
  __int64 v42; // rax
  int MonitorInstance; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  struct DXGMONITOR *v46; // r14
  __int64 v47; // rax
  __int64 v48; // rax
  bool v49; // al
  __int64 v50; // rdx
  int IsTargetForceable; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r9
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct DMMVIDPNTOPOLOGY *v58; // r12
  unsigned int v59; // eax
  unsigned int v60; // ecx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  bool v70; // [rsp+40h] [rbp-C0h]
  char IsVirtualModeSuportDisabled; // [rsp+41h] [rbp-BFh] BYREF
  bool v72; // [rsp+42h] [rbp-BEh]
  bool v73; // [rsp+43h] [rbp-BDh]
  bool v74; // [rsp+44h] [rbp-BCh]
  int v75; // [rsp+48h] [rbp-B8h]
  char v76; // [rsp+4Ch] [rbp-B4h]
  struct DMMVIDEOPRESENTTARGET *v77; // [rsp+50h] [rbp-B0h]
  int v78; // [rsp+58h] [rbp-A8h]
  unsigned int v79; // [rsp+5Ch] [rbp-A4h]
  __int64 v80; // [rsp+60h] [rbp-A0h] BYREF
  const struct DMMVIDPN *v81; // [rsp+68h] [rbp-98h] BYREF
  VIDPN_MGR *v82; // [rsp+70h] [rbp-90h]
  DMMVIDPNTOPOLOGY *v83; // [rsp+78h] [rbp-88h]
  struct DXGMONITOR *v84; // [rsp+80h] [rbp-80h] BYREF
  char *v85; // [rsp+88h] [rbp-78h]
  __int64 v86; // [rsp+90h] [rbp-70h] BYREF
  struct DXGADAPTER *v87; // [rsp+98h] [rbp-68h]
  unsigned __int64 v88; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v89[144]; // [rsp+B0h] [rbp-50h] BYREF

  v79 = a4;
  v76 = a2;
  LOBYTE(v78) = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a3, &v88);
  v87 = v8;
  v12 = v8;
  if ( !v8 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v13[3] = *this;
    v13[4] = *((_QWORD *)*this + 8);
    v13[5] = a3->HighPart;
    v13[6] = a3->LowPart;
    WdLogEvent5_WdWarning(v13);
    LODWORD(v14) = -1073741810;
    return (unsigned int)v14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v89, v8, 0LL);
  LODWORD(v14) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v89, 0LL);
  if ( (int)v14 < 0 )
    goto LABEL_93;
  v85 = (char *)v12 + 2672;
  v82 = *(VIDPN_MGR **)(*((_QWORD *)v12 + 334) + 88LL);
  v16 = v82;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v86, (__int64)v82);
  v81 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v82, (__int64 *)&v81);
  v14 = (struct DMMVIDEOPRESENTTARGET *)ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v20[3] = v14;
    v20[4] = v12;
    v20[5] = *((int *)v12 + 80);
    v20[6] = *((unsigned int *)v12 + 79);
    v20[7] = this;
LABEL_20:
    WdLogEvent5_WdError(v20);
    goto LABEL_92;
  }
  v83 = (const struct DMMVIDPN *)((char *)v81 + 96);
  if ( v81 == (const struct DMMVIDPN *)-96LL )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v21[3] = v12;
    v21[4] = *((int *)v12 + 80);
    v21[5] = *((unsigned int *)v12 + 79);
    v21[6] = this;
    WdLogEvent5_WdError(v21);
    LODWORD(v14) = -1073741823;
    goto LABEL_92;
  }
  for ( i = 0; ; ++i )
  {
    v23 = *((_QWORD *)*this + 8);
    v24 = v23 ? *(_WORD *)(v23 + 20) : 0;
    if ( i >= v24 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
    v26 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v12 + 79)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v12 + 80) )
    {
      v27 = *((_DWORD *)PathDescriptor + 6);
      v28 = *((_DWORD *)PathDescriptor + 7);
      v29 = (unsigned __int8)v78;
      if ( v27 == a4 )
        v29 = 1;
      v78 = v29;
      v30 = VIDPN_MGR::AddPathToVidPnTopology(
              v16,
              v83,
              v27,
              v28,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      v14 = (struct DMMVIDEOPRESENTTARGET *)v30;
      if ( v30 < 0 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v31, v18);
        v20[3] = v14;
        v20[4] = *((int *)v26 + 5);
        v20[5] = *((unsigned int *)v26 + 4);
        v20[6] = *((unsigned int *)v26 + 6);
        v20[7] = *((unsigned int *)v26 + 7);
        goto LABEL_20;
      }
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v16 + 10) + 72LL), 1u);
  v32 = (_QWORD *)*((_QWORD *)v16 + 10);
  v12 = v87;
  v14 = 0LL;
  v33 = -1;
  v74 = 0;
  v72 = 0;
  v77 = 0LL;
  v34 = (_QWORD *)v32[3];
  v75 = -1;
  v73 = 0;
  v70 = 0;
  if ( v34 == v32 + 3 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v34 - 1)) == 0LL )
  {
LABEL_90:
    LODWORD(v14) = -1073741275;
    goto LABEL_91;
  }
  while ( 1 )
  {
    if ( *((_DWORD *)NextTarget + 22) )
      goto LABEL_54;
    v36 = *((unsigned int *)NextTarget + 6);
    if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v83, *((_DWORD *)NextTarget + 6)) && (_DWORD)v36 != *((_DWORD *)this + 6) )
      break;
LABEL_53:
    v33 = v75;
LABEL_54:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v32, NextTarget);
    if ( !NextTarget )
    {
      if ( v14 )
      {
        LODWORD(v14) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                         (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                         (struct _LUID *)((char *)v12 + 316),
                         v33,
                         *((_DWORD *)v77 + 6),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v14 + 20),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v14 + 21),
                         v74,
                         v73);
        goto LABEL_91;
      }
      goto LABEL_90;
    }
    v16 = v82;
  }
  if ( (_DWORD)v36 != -1 )
  {
    v40 = *(_QWORD *)v85;
    if ( !*(_QWORD *)v85 )
    {
      v64 = WdLogNewEntry5_WdError(v38, v37);
      *(_QWORD *)(v64 + 24) = 9255LL;
      WdLogEvent5_WdError(v64);
      LODWORD(v14) = -1073741811;
LABEL_80:
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
      v65[3] = v12;
      v65[4] = *((unsigned int *)NextTarget + 6);
LABEL_81:
      WdLogEvent5_WdError(v65);
      goto LABEL_91;
    }
    v41 = *(struct _FAST_MUTEX **)(v40 + 96);
    IsVirtualModeSuportDisabled = 0;
    if ( !v41 )
    {
      v42 = WdLogNewEntry5_WdError(0LL, v37);
      *(_QWORD *)(v42 + 24) = v12;
      WdLogEvent5_WdError(v42);
      LODWORD(v14) = -1073741811;
LABEL_36:
      v45 = WdLogNewEntry5_WdAssertion(v38, v37);
      *(_QWORD *)(v45 + 24) = (int)v14;
      WdLogEvent5_WdAssertion(v45);
LABEL_47:
      v39 = v70;
      v16 = v82;
      goto LABEL_49;
    }
    v84 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v41, (unsigned int)v36, 1, &v84);
    LODWORD(v14) = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v44 = WdLogNewEntry5_WdDmmEvent(v38);
      *(_QWORD *)(v44 + 24) = v36;
      *(_QWORD *)(v44 + 32) = v12;
      WdLogEvent5_WdDmmEvent(v44);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v46 = v84;
        if ( !v84 || *((_DWORD *)v84 + 108) != 1 )
        {
          v47 = WdLogNewEntry5_WdAssertion(v38, v37);
          WdLogEvent5_WdAssertion(v47);
        }
        if ( !v46 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v38, v37);
          WdLogEvent5_WdAssertion(v48);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v46 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v46);
        ExReleaseResourceLite((PERESOURCE)((char *)v46 + 296));
        KeLeaveCriticalRegion();
        LODWORD(v14) = 0;
        goto LABEL_43;
      }
      if ( MonitorInstance != -1073741632 )
      {
LABEL_35:
        if ( (int)v14 < 0 )
          goto LABEL_36;
LABEL_43:
        if ( IsVirtualModeSuportDisabled )
        {
          v49 = 1;
          v72 = 1;
        }
        else
        {
          v49 = *(_BYTE *)(v40 + 250) == 0;
          v72 = *(_BYTE *)(v40 + 249) == 0;
        }
        v70 = v49;
        goto LABEL_47;
      }
    }
    LODWORD(v14) = 0;
    goto LABEL_35;
  }
  LODWORD(v14) = -1073741811;
LABEL_49:
  if ( (int)v14 < 0 )
    goto LABEL_80;
  if ( (_BYTE)v78 )
  {
    if ( !v39 )
    {
LABEL_52:
      v14 = v77;
      goto LABEL_53;
    }
  }
  else if ( *((_BYTE *)this + 10) && v39 )
  {
    goto LABEL_52;
  }
  if ( *((_QWORD *)NextTarget + 14) )
    goto LABEL_62;
  if ( !v76 )
    goto LABEL_52;
  v50 = *((unsigned int *)NextTarget + 6);
  IsVirtualModeSuportDisabled = 0;
  IsTargetForceable = DmmIsTargetForceable(v12, v50, (bool *)&IsVirtualModeSuportDisabled, 0);
  v14 = (struct DMMVIDEOPRESENTTARGET *)IsTargetForceable;
  if ( IsTargetForceable < 0 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52);
    v65[3] = v14;
    v65[4] = *((int *)v12 + 80);
    v65[5] = *((unsigned int *)v12 + 79);
    v65[6] = *((unsigned int *)NextTarget + 6);
    v65[7] = *((_QWORD *)*this + 8);
    goto LABEL_81;
  }
  if ( !IsVirtualModeSuportDisabled )
    goto LABEL_52;
LABEL_62:
  v14 = v77;
  if ( !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v12, NextTarget, v77) )
    goto LABEL_53;
  v80 = 0LL;
  v55 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v16, v81, &v80, v54);
  v14 = (struct DMMVIDEOPRESENTTARGET *)v55;
  if ( v55 < 0 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdError(v57, v56);
    v66[3] = v14;
    v66[4] = v12;
    v66[5] = *((int *)v12 + 80);
    v66[6] = *((unsigned int *)v12 + 79);
    v66[7] = this;
    goto LABEL_86;
  }
  v58 = (struct DMMVIDPNTOPOLOGY *)(v80 + 96);
  if ( v80 == -96 )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdError(v57, v56);
    v67[3] = v12;
    v67[4] = *((int *)v12 + 80);
    v67[5] = *((unsigned int *)v12 + 79);
    v67[6] = this;
    WdLogEvent5_WdError(v67);
    LODWORD(v14) = -1073741823;
  }
  else
  {
    v59 = v79;
    v33 = 0;
    if ( v79 != -1 )
      v33 = v79;
    while ( 1 )
    {
      if ( v59 == -1 )
      {
        v60 = *(_DWORD *)(*(_QWORD *)v85 + 80LL);
        v59 = v79;
      }
      else
      {
        v60 = v59 + 1;
      }
      if ( v33 >= v60 )
      {
        v14 = v77;
        v33 = v75;
        goto LABEL_78;
      }
      if ( v59 != -1 || !DMMVIDPNTOPOLOGY::IsSourceInTopology(v58, v33) )
      {
        v61 = VIDPN_MGR::AddPathToVidPnTopology(
                v82,
                v58,
                v33,
                *((_DWORD *)NextTarget + 6),
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                0xFFFFu,
                0,
                D3DKMDT_MCC_IGNORE);
        v14 = (struct DMMVIDEOPRESENTTARGET *)v61;
        if ( v61 != -1071774975 )
          break;
      }
      v59 = v79;
      ++v33;
    }
    if ( v61 >= 0 )
    {
      v14 = NextTarget;
      v77 = NextTarget;
      v74 = !v72;
      v75 = v33;
      v73 = !v70;
LABEL_78:
      auto_rc<DMMVIDPN>::reset(&v80, 0LL);
      goto LABEL_54;
    }
    v66 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62);
    v66[3] = v14;
    v66[4] = *((int *)v12 + 80);
    v66[5] = *((unsigned int *)v12 + 79);
    v66[6] = v33;
    v66[7] = *((unsigned int *)NextTarget + 6);
LABEL_86:
    WdLogEvent5_WdError(v66);
  }
  auto_rc<DMMVIDPN>::reset(&v80, 0LL);
LABEL_91:
  ReferenceCounted::Release((ReferenceCounted *)(v32 + 8), v18);
LABEL_92:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v81, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v86 + 40), v68);
LABEL_93:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v89, v15);
  DXGADAPTER::ReleaseReferenceNoTracking(v12);
  return (unsigned int)v14;
}
