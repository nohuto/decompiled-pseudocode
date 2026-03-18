/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C01597F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009F98 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000F2C0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C0047B24 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C0050A74 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00EB900 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00EC88C (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011D4B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011D5D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0128A60 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128C08 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128E64 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C012A008 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
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
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  __int64 v39; // rdx
  _QWORD *v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // r14
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // r14
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rdx
  _QWORD *v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rdx
  _QWORD *v78; // r14
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // [rsp+20h] [rbp-E0h]
  unsigned int v89; // [rsp+40h] [rbp-C0h]
  struct DMMVIDPN *v90; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v91; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v92; // [rsp+58h] [rbp-A8h]
  __int64 v93; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v94; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTOPOLOGY *v95; // [rsp+70h] [rbp-90h]
  _BYTE v96[8]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v97; // [rsp+80h] [rbp-80h]
  char v98; // [rsp+88h] [rbp-78h]
  _BYTE v99[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v100[144]; // [rsp+B0h] [rbp-50h] BYREF

  v97 = a1;
  v98 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v96);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v96);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v100, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v100, 0LL);
  LODWORD(v9) = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_34;
    v41 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v41[3] = a1;
    v41[4] = *((int *)a1 + 80);
    v41[5] = *((unsigned int *)a1 + 79);
    v41[6] = this;
    goto LABEL_41;
  }
  if ( *((_BYTE *)a1 + 2585)
    || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled()
    || (v10 = *((_QWORD *)a1 + 334)) == 0 )
  {
LABEL_41:
    LODWORD(v9) = 0;
    goto LABEL_34;
  }
  v11 = *(struct VIDPN_MGR **)(v10 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v91, (__int64)v11);
  v90 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v11, (__int64 *)&v90);
  v9 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v43[3] = v9;
    v43[4] = v11;
    v44 = *(_QWORD *)this;
    v43[5] = *(_QWORD *)this;
    v45 = *((_QWORD *)v11 + 1);
    if ( !v45 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v44, v42);
      WdLogEvent5_WdAssertion(v46);
      v45 = *((_QWORD *)v11 + 1);
    }
    v47 = *(int *)(*(_QWORD *)(v45 + 16) + 320LL);
    v43[6] = v47;
    v48 = *((_QWORD *)v11 + 1);
    if ( !v48 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v47, v42);
      WdLogEvent5_WdAssertion(v49);
      v48 = *((_QWORD *)v11 + 1);
    }
    v43[7] = *(unsigned int *)(*(_QWORD *)(v48 + 16) + 316LL);
    v50 = v43;
    goto LABEL_50;
  }
  v16 = v90;
  v95 = (struct DMMVIDPN *)((char *)v90 + 96);
  if ( v90 == (struct DMMVIDPN *)-96LL )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v53[3] = -96LL;
    v53[4] = this;
    v54 = *(_QWORD *)this;
    v53[5] = *(_QWORD *)this;
    v55 = *((_QWORD *)v11 + 1);
    if ( !v55 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v54, v52);
      WdLogEvent5_WdAssertion(v56);
      v55 = *((_QWORD *)v11 + 1);
    }
    v57 = *(int *)(*(_QWORD *)(v55 + 16) + 320LL);
    v53[6] = v57;
    v58 = *((_QWORD *)v11 + 1);
    if ( !v58 )
    {
      v59 = WdLogNewEntry5_WdAssertion(v57, v52);
      WdLogEvent5_WdAssertion(v59);
      v58 = *((_QWORD *)v11 + 1);
    }
    v53[7] = *(unsigned int *)(*(_QWORD *)(v58 + 16) + 316LL);
    WdLogEvent5_WdWarning(v53);
    goto LABEL_33;
  }
  LODWORD(v9) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v90, 1);
  if ( (int)v9 < 0 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v61[3] = v16;
    v61[4] = this;
    v62 = *(_QWORD *)this;
    v61[5] = *(_QWORD *)this;
    v63 = *((_QWORD *)v11 + 1);
    if ( !v63 )
    {
      v64 = WdLogNewEntry5_WdAssertion(v62, v60);
      WdLogEvent5_WdAssertion(v64);
      v63 = *((_QWORD *)v11 + 1);
    }
    v65 = *(int *)(*(_QWORD *)(v63 + 16) + 320LL);
    v61[6] = v65;
    v66 = *((_QWORD *)v11 + 1);
    if ( !v66 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v65, v60);
      WdLogEvent5_WdAssertion(v51);
      v66 = *((_QWORD *)v11 + 1);
    }
    v61[7] = *(unsigned int *)(*(_QWORD *)(v66 + 16) + 316LL);
    v50 = v61;
LABEL_50:
    WdLogEvent5_WdError(v50);
    goto LABEL_33;
  }
  v93 = 0LL;
  v19 = VIDPN_MGR::CreateClientVidPn(v11, &v93);
  v9 = v19;
  if ( v19 < 0 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v68[3] = v9;
    v68[4] = v11;
    v69 = *(_QWORD *)this;
    v68[5] = *(_QWORD *)this;
    v70 = *((_QWORD *)v11 + 1);
    if ( !v70 )
    {
      v71 = WdLogNewEntry5_WdAssertion(v69, v67);
      WdLogEvent5_WdAssertion(v71);
      v70 = *((_QWORD *)v11 + 1);
    }
    v72 = *(int *)(*(_QWORD *)(v70 + 16) + 320LL);
    v68[6] = v72;
    v73 = *((_QWORD *)v11 + 1);
    if ( !v73 )
    {
      v74 = WdLogNewEntry5_WdAssertion(v72, v67);
      WdLogEvent5_WdAssertion(v74);
      v73 = *((_QWORD *)v11 + 1);
    }
    v68[7] = *(unsigned int *)(*(_QWORD *)(v73 + 16) + 316LL);
    v75 = v68;
    goto LABEL_66;
  }
  v22 = (struct DMMVIDPNTOPOLOGY *)(v93 + 96);
  if ( v93 == -96 )
  {
    v78 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v78[3] = -96LL;
    v78[4] = this;
    v79 = *(_QWORD *)this;
    v78[5] = *(_QWORD *)this;
    v80 = *((_QWORD *)v11 + 1);
    if ( !v80 )
    {
      v81 = WdLogNewEntry5_WdAssertion(v79, v77);
      WdLogEvent5_WdAssertion(v81);
      v80 = *((_QWORD *)v11 + 1);
    }
    v82 = *(int *)(*(_QWORD *)(v80 + 16) + 320LL);
    v78[6] = v82;
    v83 = *((_QWORD *)v11 + 1);
    if ( !v83 )
    {
      v76 = WdLogNewEntry5_WdAssertion(v82, v77);
      WdLogEvent5_WdAssertion(v76);
      v83 = *((_QWORD *)v11 + 1);
    }
    v78[7] = *(unsigned int *)(*(_QWORD *)(v83 + 16) + 316LL);
    v75 = v78;
LABEL_66:
    WdLogEvent5_WdError(v75);
    goto LABEL_32;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v11 + 10) + 72LL));
  v23 = *((_QWORD *)a1 + 334);
  v24 = 0LL;
  v25 = *((_QWORD *)v11 + 10);
  v94 = v25;
  v89 = 0;
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
    v89 = v24;
    if ( (unsigned int)v24 >= *(_DWORD *)(*((_QWORD *)a1 + 334) + 80LL) )
      goto LABEL_30;
  }
  while ( 1 )
  {
    v92 = *(_DWORD *)(v27 + 24);
    if ( DMMVIDPNTOPOLOGY::FindPath(v95, v24, v92) || *(_DWORD *)(v27 + 84) == 15 && !*(_QWORD *)(v27 + 112) )
      goto LABEL_27;
    if ( *((_QWORD *)v22 + 5) )
    {
      v84 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v84 + 24) = 809LL;
      WdLogEvent5_WdAssertion(v84);
    }
    v30 = VIDPN_MGR::AddPathToVidPnTopology(
            v11,
            v22,
            v89,
            v92,
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
      v85 = WdLogNewEntry5_WdAssertion(v32, v31);
      *(_QWORD *)(v85 + 24) = 840LL;
      WdLogEvent5_WdAssertion(v85);
    }
    Path = DMMVIDPNTOPOLOGY::FindPath(v22, v89, v92);
    LODWORD(v9) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, a1, Path, 0, 0);
    if ( (int)v9 < 0 )
      goto LABEL_73;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v99, (__int64)v22 + 56, 2u, v35, v88, 255LL);
    DMMVIDPNTOPOLOGY::RemovePath(v22, v89, v92, 0LL);
    if ( *((_QWORD *)v22 + 5) )
    {
      v86 = WdLogNewEntry5_WdAssertion(v37, v36);
      *(_QWORD *)(v86 + 24) = 864LL;
      WdLogEvent5_WdAssertion(v86);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v99, v36);
LABEL_27:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                   (DMMVIDEOPRESENTTARGETSET *)v25,
                   (const struct DMMVIDEOPRESENTTARGET *const)v27);
    LODWORD(v24) = v89;
    v27 = (__int64)NextTarget;
    if ( !NextTarget )
    {
      v26 = (_QWORD *)(v25 + 24);
      goto LABEL_29;
    }
  }
  v87 = WdLogNewEntry5_WdError(v32, v31);
  *(_QWORD *)(v87 + 24) = v9;
  WdLogEvent5_WdError(v87);
LABEL_73:
  auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v94, v34);
LABEL_32:
  auto_rc<DMMVIDPN>::reset(&v93, 0LL);
LABEL_33:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v90, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v91 + 40), v39);
LABEL_34:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v100, v5);
  if ( v98 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v96);
  return (unsigned int)v9;
}
