/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C016E1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007EE0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00085F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00099E8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A800 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C00499C4 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00528D4 (DxgkIsMSBDDFallbackEnabled.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01115B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01116D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01242A0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0125A5C (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0125B70 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C0131D44 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C0134358 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C013BC8C (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rdi
  struct VIDPN_MGR *v11; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DMMVIDPN *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DMMVIDPNTOPOLOGY *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  _QWORD *v26; // r8
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  __int64 v41; // rdx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // r14
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  _QWORD *v63; // r14
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // rbx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  _QWORD *v80; // r14
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // [rsp+20h] [rbp-E0h]
  unsigned int v91; // [rsp+40h] [rbp-C0h]
  struct DMMVIDPN *v92; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v93; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v94; // [rsp+58h] [rbp-A8h]
  __int64 v95; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v96; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTOPOLOGY *v97; // [rsp+70h] [rbp-90h]
  _BYTE v98[8]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v99; // [rsp+80h] [rbp-80h]
  char v100; // [rsp+88h] [rbp-78h]
  _BYTE v101[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v102[144]; // [rsp+B0h] [rbp-50h] BYREF

  v99 = a1;
  v100 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v98);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v98);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v102, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v102, 0LL);
  LODWORD(v9) = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_34;
    v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v43[3] = a1;
    v43[4] = *((int *)a1 + 80);
    v43[5] = *((unsigned int *)a1 + 79);
    v43[6] = this;
    goto LABEL_41;
  }
  if ( *((_BYTE *)a1 + 2609)
    || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled()
    || (v10 = *((_QWORD *)a1 + 337)) == 0 )
  {
LABEL_41:
    LODWORD(v9) = 0;
    goto LABEL_34;
  }
  v11 = *(struct VIDPN_MGR **)(v10 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v93, (__int64)v11);
  v92 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v11, (__int64 *)&v92);
  v9 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v45[3] = v9;
    v45[4] = v11;
    v46 = *(_QWORD *)this;
    v45[5] = *(_QWORD *)this;
    v47 = *((_QWORD *)v11 + 1);
    if ( !v47 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v46, v44);
      WdLogEvent5_WdAssertion(v48);
      v47 = *((_QWORD *)v11 + 1);
    }
    v49 = *(int *)(*(_QWORD *)(v47 + 16) + 320LL);
    v45[6] = v49;
    v50 = *((_QWORD *)v11 + 1);
    if ( !v50 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v49, v44);
      WdLogEvent5_WdAssertion(v51);
      v50 = *((_QWORD *)v11 + 1);
    }
    v45[7] = *(unsigned int *)(*(_QWORD *)(v50 + 16) + 316LL);
    v52 = v45;
    goto LABEL_50;
  }
  v16 = v92;
  v97 = (struct DMMVIDPN *)((char *)v92 + 96);
  if ( v92 == (struct DMMVIDPN *)-96LL )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v55[3] = -96LL;
    v55[4] = this;
    v56 = *(_QWORD *)this;
    v55[5] = *(_QWORD *)this;
    v57 = *((_QWORD *)v11 + 1);
    if ( !v57 )
    {
      v58 = WdLogNewEntry5_WdAssertion(v56, v54);
      WdLogEvent5_WdAssertion(v58);
      v57 = *((_QWORD *)v11 + 1);
    }
    v59 = *(int *)(*(_QWORD *)(v57 + 16) + 320LL);
    v55[6] = v59;
    v60 = *((_QWORD *)v11 + 1);
    if ( !v60 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v59, v54);
      WdLogEvent5_WdAssertion(v61);
      v60 = *((_QWORD *)v11 + 1);
    }
    v55[7] = *(unsigned int *)(*(_QWORD *)(v60 + 16) + 316LL);
    WdLogEvent5_WdWarning(v55);
    goto LABEL_33;
  }
  LODWORD(v9) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v92, 1);
  if ( (int)v9 < 0 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v63[3] = v16;
    v63[4] = this;
    v64 = *(_QWORD *)this;
    v63[5] = *(_QWORD *)this;
    v65 = *((_QWORD *)v11 + 1);
    if ( !v65 )
    {
      v66 = WdLogNewEntry5_WdAssertion(v64, v62);
      WdLogEvent5_WdAssertion(v66);
      v65 = *((_QWORD *)v11 + 1);
    }
    v67 = *(int *)(*(_QWORD *)(v65 + 16) + 320LL);
    v63[6] = v67;
    v68 = *((_QWORD *)v11 + 1);
    if ( !v68 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v67, v62);
      WdLogEvent5_WdAssertion(v53);
      v68 = *((_QWORD *)v11 + 1);
    }
    v63[7] = *(unsigned int *)(*(_QWORD *)(v68 + 16) + 316LL);
    v52 = v63;
LABEL_50:
    WdLogEvent5_WdError(v52);
    goto LABEL_33;
  }
  v95 = 0LL;
  v19 = VIDPN_MGR::CreateClientVidPn(v11, &v95);
  v9 = v19;
  if ( v19 < 0 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v70[3] = v9;
    v70[4] = v11;
    v71 = *(_QWORD *)this;
    v70[5] = *(_QWORD *)this;
    v72 = *((_QWORD *)v11 + 1);
    if ( !v72 )
    {
      v73 = WdLogNewEntry5_WdAssertion(v71, v69);
      WdLogEvent5_WdAssertion(v73);
      v72 = *((_QWORD *)v11 + 1);
    }
    v74 = *(int *)(*(_QWORD *)(v72 + 16) + 320LL);
    v70[6] = v74;
    v75 = *((_QWORD *)v11 + 1);
    if ( !v75 )
    {
      v76 = WdLogNewEntry5_WdAssertion(v74, v69);
      WdLogEvent5_WdAssertion(v76);
      v75 = *((_QWORD *)v11 + 1);
    }
    v70[7] = *(unsigned int *)(*(_QWORD *)(v75 + 16) + 316LL);
    v77 = v70;
    goto LABEL_66;
  }
  v22 = (struct DMMVIDPNTOPOLOGY *)(v95 + 96);
  if ( v95 == -96 )
  {
    v80 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v80[3] = -96LL;
    v80[4] = this;
    v81 = *(_QWORD *)this;
    v80[5] = *(_QWORD *)this;
    v82 = *((_QWORD *)v11 + 1);
    if ( !v82 )
    {
      v83 = WdLogNewEntry5_WdAssertion(v81, v79);
      WdLogEvent5_WdAssertion(v83);
      v82 = *((_QWORD *)v11 + 1);
    }
    v84 = *(int *)(*(_QWORD *)(v82 + 16) + 320LL);
    v80[6] = v84;
    v85 = *((_QWORD *)v11 + 1);
    if ( !v85 )
    {
      v78 = WdLogNewEntry5_WdAssertion(v84, v79);
      WdLogEvent5_WdAssertion(v78);
      v85 = *((_QWORD *)v11 + 1);
    }
    v80[7] = *(unsigned int *)(*(_QWORD *)(v85 + 16) + 316LL);
    v77 = v80;
LABEL_66:
    WdLogEvent5_WdError(v77);
    goto LABEL_32;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v11 + 10) + 72LL));
  v23 = *((_QWORD *)a1 + 337);
  v24 = 0LL;
  v25 = *((_QWORD *)v11 + 10);
  v96 = v25;
  v91 = 0;
  if ( !*(_DWORD *)(v23 + 80) )
  {
LABEL_30:
    if ( v25 )
      ReferenceCounted::Release((ReferenceCounted *)(v25 + 64), v24);
    goto LABEL_32;
  }
  v26 = (_QWORD *)(v25 + 24);
  while ( 1 )
  {
    v27 = 0LL;
    if ( (_QWORD *)*v26 != v26 )
      v27 = *v26 - 8LL;
    if ( v27 )
      break;
LABEL_29:
    v24 = (unsigned int)(v24 + 1);
    v91 = v24;
    if ( (unsigned int)v24 >= *(_DWORD *)(*((_QWORD *)a1 + 337) + 80LL) )
      goto LABEL_30;
  }
  while ( 1 )
  {
    v94 = *(_DWORD *)(v27 + 24);
    if ( DMMVIDPNTOPOLOGY::FindPath(v97, v24, v94) || *(_DWORD *)(v27 + 84) == 15 && !*(_QWORD *)(v27 + 112) )
      goto LABEL_27;
    if ( *((_QWORD *)v22 + 5) )
    {
      v86 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v86 + 24) = 809LL;
      WdLogEvent5_WdAssertion(v86);
    }
    v30 = VIDPN_MGR::AddPathToVidPnTopology(
            v11,
            v22,
            v91,
            v94,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
            0xFFFFu,
            0,
            D3DKMDT_MCC_IGNORE);
    v9 = v30;
    if ( v30 == -1071774975 )
    {
      LODWORD(v9) = 0;
      goto LABEL_27;
    }
    if ( v30 < 0 )
      break;
    if ( *((_QWORD *)v22 + 5) != 1LL )
    {
      v87 = WdLogNewEntry5_WdAssertion(v32, v31);
      *(_QWORD *)(v87 + 24) = 840LL;
      WdLogEvent5_WdAssertion(v87);
    }
    Path = DMMVIDPNTOPOLOGY::FindPath(v22, v91, v94);
    LODWORD(v9) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, a1, Path, 0, 0);
    if ( (int)v9 < 0 )
      goto LABEL_73;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v101,
      (__int64)v22 + 56,
      2u,
      v35,
      v90,
      255LL);
    DMMVIDPNTOPOLOGY::RemovePath(v22, v91, v94, 0LL);
    if ( *((_QWORD *)v22 + 5) )
    {
      v88 = WdLogNewEntry5_WdAssertion(v37, v36);
      *(_QWORD *)(v88 + 24) = 864LL;
      WdLogEvent5_WdAssertion(v88);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v101,
      v36,
      v38,
      v39);
LABEL_27:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                   (DMMVIDEOPRESENTTARGETSET *)v25,
                   (const struct DMMVIDEOPRESENTTARGET *const)v27);
    LODWORD(v24) = v91;
    v27 = (__int64)NextTarget;
    if ( !NextTarget )
    {
      v26 = (_QWORD *)(v25 + 24);
      goto LABEL_29;
    }
  }
  v89 = WdLogNewEntry5_WdError(v32, v31);
  *(_QWORD *)(v89 + 24) = v9;
  WdLogEvent5_WdError(v89);
LABEL_73:
  auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v96, v34);
LABEL_32:
  auto_rc<DMMVIDPN>::reset(&v95, 0LL);
LABEL_33:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v92, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v93 + 40), v41);
LABEL_34:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v102, v5);
  if ( v100 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v98);
  return (unsigned int)v9;
}
