/*
 * XREFs of ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02DE764
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00E1F50 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0005D64 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0007EB4 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007EE0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00085F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C001A4C0 (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01115B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01116D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0124D74 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0125B70 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C013BC8C (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C013F584 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013FB1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C014BF2C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C016A298 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmRemovePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct VIDPN_MGR *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  ADAPTER_DISPLAY *v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // ebx
  char v20; // r13
  unsigned int i; // r15d
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v33; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r13
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  struct DMMVIDPN *v47; // rbx
  struct DXGDEVICE *v48; // r13
  VIDPN_MGR *v49; // r15
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r14
  _QWORD *v55; // rax
  ADAPTER_DISPLAY *v56; // r14
  int v57; // eax
  int ClientCommittedVidPnRef; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r14
  _QWORD *v64; // rax
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rbx
  _QWORD *v69; // rax
  __int64 v70; // r8
  __int64 v71; // r8
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rbx
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v81; // [rsp+20h] [rbp-E0h]
  _BYTE v82[4]; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v83; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v84; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v85; // [rsp+5Ch] [rbp-A4h] BYREF
  struct DMMVIDPN *v86; // [rsp+60h] [rbp-A0h] BYREF
  DMMVIDPNTOPOLOGY *v87; // [rsp+68h] [rbp-98h]
  ADAPTER_DISPLAY *v88; // [rsp+70h] [rbp-90h]
  VIDPN_MGR *v89; // [rsp+78h] [rbp-88h]
  struct DXGDEVICE *v90; // [rsp+80h] [rbp-80h]
  _BYTE v91[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v92; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v93[24]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v94[64]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = *((_QWORD *)a1 + 231);
  v90 = a1;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v3) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v8);
  }
  v88 = *(ADAPTER_DISPLAY **)(v3 + 2696);
  v89 = (VIDPN_MGR *)*((_QWORD *)v88 + 11);
  v9 = v89;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v92, (__int64)v89);
  v12 = WdLogNewEntry5_WdDmmEvent(v11, v10);
  *(_QWORD *)(v12 + 24) = v5;
  *(_QWORD *)(v12 + 32) = v9;
  WdLogEvent5_WdDmmEvent(v12);
  v86 = 0LL;
  if ( (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v9, (__int64 *)&v86) < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = v9;
    WdLogEvent5_WdError(v16);
    goto LABEL_50;
  }
  v87 = (struct DMMVIDPN *)((char *)v86 + 96);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v93,
    ((unsigned __int64)v86 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v86 + 96) != 0LL),
    2u,
    v15,
    v81,
    *((_QWORD *)v86 + 17));
  v84 = -1;
  if ( a3 )
  {
    v17 = *(ADAPTER_DISPLAY **)(v3 + 2696);
    v85 = 0;
    ADAPTER_DISPLAY::GetPrimaryPath(v17, &v85, &v84, (enum _DXGK_PRIMARY_TARGET_TYPE *)v91);
    v18 = v84;
    if ( v85 != (_DWORD)v5 )
      v18 = -1;
    v84 = v18;
  }
  v19 = v84;
  v20 = 0;
  for ( i = 0; ; ++i )
  {
    v83 = -1;
    v22 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v87, (unsigned int)v5, i, (unsigned int *)&v83);
    v25 = v22;
    if ( v22 < 0 )
    {
      if ( v22 == -1071774919 )
        break;
      v26 = WdLogNewEntry5_WdAssertion(v24, v23);
      WdLogEvent5_WdAssertion(v26);
    }
    if ( v25 == -1071774919 || v83 == -1 )
      break;
    if ( v83 == v19 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v87, v5, v83);
      if ( !Path )
      {
        v33 = WdLogNewEntry5_WdAssertion(v31, v30);
        WdLogEvent5_WdAssertion(v33);
      }
      v34 = *((_DWORD *)Path + 28);
      v83 = v34;
      if ( v34 == D3DKMDT_VPPS_UNPINNED )
      {
        v35 = WdLogNewEntry5_WdAssertion(v31, v30);
        *(_QWORD *)(v35 + 24) = 13670LL;
        WdLogEvent5_WdAssertion(v35);
        v34 = v83;
      }
      if ( ((v34 - 1) & 0xFFFFFFFD) != 0 && (*((_DWORD *)Path + 30) & 4) != 0 )
      {
        if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
        {
          v38 = WdLogNewEntry5_WdAssertion(v37, v36);
          WdLogEvent5_WdAssertion(v38);
        }
        v39 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, 3LL);
        v42 = v39;
        if ( v39 < 0 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
          v43[3] = v5;
          v43[4] = v3;
          v43[5] = v42;
          WdLogEvent5_WdError(v43);
          if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(Path, (unsigned int)v83) < 0 )
          {
            v46 = WdLogNewEntry5_WdAssertion(v45, v44);
            WdLogEvent5_WdAssertion(v46);
          }
        }
        v20 = 1;
      }
    }
    else
    {
      if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v87, (unsigned int)v5, v83, 0LL) < 0 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v28, v27);
        WdLogEvent5_WdAssertion(v29);
      }
      v20 = 1;
      --i;
    }
  }
  v47 = v86;
  if ( !v20 )
  {
    v49 = v89;
    v48 = v90;
    goto LABEL_39;
  }
  memset(v94, 0, sizeof(v94));
  v48 = v90;
  v49 = v89;
  v82[0] = 0;
  v50 = VIDPN_MGR::SetTimingsFromVidPn(
          v89,
          0LL,
          1u,
          (__int64)v86,
          (struct D3DKMT_VIDPN_SOURCE_MASKS *)v94,
          v82,
          0,
          v90,
          0LL);
  v54 = v50;
  if ( v50 >= 0 )
  {
    v57 = v94[20];
    if ( _bittest(&v57, v5) )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51, v53);
      v55[4] = v5;
      v55[5] = -1071774970LL;
      goto LABEL_35;
    }
LABEL_39:
    ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v49, v47);
    v63 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef < 0 )
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdTrace(v60, v59, v61, v62);
      v64[3] = v47;
      v64[4] = v3;
      v64[5] = v63;
    }
    v56 = v88;
    v65 = ADAPTER_DISPLAY::DestroyCddAllocations((PERESOURCE **)v88, v48, v5);
    v68 = v65;
    if ( v65 < 0 )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdError(v67, v66);
      v69[3] = v5;
      v69[4] = v3;
      v69[5] = v68;
      WdLogEvent5_WdError(v69);
    }
    goto LABEL_43;
  }
  v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51, v53);
  v55[4] = v54;
LABEL_35:
  v55[3] = v47;
  WdLogEvent5_WdWarning(v55);
  v56 = v88;
LABEL_43:
  v70 = *(_QWORD *)(v3 + 2704);
  if ( v70 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v70 + 616) + 8LL) + 880LL))(
      *(_QWORD *)(v70 + 624),
      (unsigned int)v5);
  }
  else
  {
    v71 = *((_QWORD *)v56 + 49);
    if ( v71 )
      _InterlockedExchange((volatile __int32 *)(2904 * v5 + *(_QWORD *)(v71 + 8) + 944), 0);
  }
  v72 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v56, (unsigned int)v5, 0, 256, 0);
  v77 = v72;
  if ( v72 < 0 )
  {
    v78 = (_QWORD *)WdLogNewEntry5_WdError(v74, v73);
    v78[3] = v5;
    v78[4] = v3;
    v78[5] = v77;
    WdLogEvent5_WdError(v78);
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v93, v73, v75, v76);
LABEL_50:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v86, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v92 + 40), v79);
  return 0LL;
}
