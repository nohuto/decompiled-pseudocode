/*
 * XREFs of ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02D9EA4
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C0131400 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000DD24 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C000E144 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C00199B0 (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011D4B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011D5D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128E64 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0129B6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C012A008 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C012BF80 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C012C4A8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C013F574 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C0155418 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmRemovePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct VIDPN_MGR *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  ADAPTER_DISPLAY *v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  char v19; // r13
  unsigned int i; // r15d
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v32; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r13
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  struct DMMVIDPN *v46; // rbx
  struct DXGDEVICE *v47; // r13
  VIDPN_MGR *v48; // r15
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r14
  _QWORD *v54; // rax
  ADAPTER_DISPLAY *v55; // r14
  int v56; // eax
  int ClientCommittedVidPnRef; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r14
  _QWORD *v63; // rax
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbx
  _QWORD *v68; // rax
  __int64 v69; // r8
  __int64 v70; // r8
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rbx
  _QWORD *v75; // rax
  __int64 v76; // rdx
  __int64 v78; // [rsp+20h] [rbp-E0h]
  _BYTE v79[4]; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v80; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v81; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v82; // [rsp+5Ch] [rbp-A4h] BYREF
  struct DMMVIDPN *v83; // [rsp+60h] [rbp-A0h] BYREF
  DMMVIDPNTOPOLOGY *v84; // [rsp+68h] [rbp-98h]
  ADAPTER_DISPLAY *v85; // [rsp+70h] [rbp-90h]
  VIDPN_MGR *v86; // [rsp+78h] [rbp-88h]
  struct DXGDEVICE *v87; // [rsp+80h] [rbp-80h]
  _BYTE v88[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v89; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v90[24]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v91[64]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = *((_QWORD *)a1 + 231);
  v87 = a1;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v3) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v8);
  }
  v85 = *(ADAPTER_DISPLAY **)(v3 + 2672);
  v86 = (VIDPN_MGR *)*((_QWORD *)v85 + 11);
  v9 = v86;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v89, (__int64)v86);
  v11 = WdLogNewEntry5_WdDmmEvent(v10);
  *(_QWORD *)(v11 + 24) = v5;
  *(_QWORD *)(v11 + 32) = v9;
  WdLogEvent5_WdDmmEvent(v11);
  v83 = 0LL;
  if ( (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v9, (__int64 *)&v83) < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = v9;
    WdLogEvent5_WdError(v15);
    goto LABEL_50;
  }
  v84 = (struct DMMVIDPN *)((char *)v83 + 96);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v90,
    ((unsigned __int64)v83 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v83 + 96) != 0LL),
    2u,
    v14,
    v78,
    *((_QWORD *)v83 + 17));
  v81 = -1;
  if ( a3 )
  {
    v16 = *(ADAPTER_DISPLAY **)(v3 + 2672);
    v82 = 0;
    ADAPTER_DISPLAY::GetPrimaryPath(v16, &v82, &v81, (enum _DXGK_PRIMARY_TARGET_TYPE *)v88);
    v17 = v81;
    if ( v82 != (_DWORD)v5 )
      v17 = -1;
    v81 = v17;
  }
  v18 = v81;
  v19 = 0;
  for ( i = 0; ; ++i )
  {
    v80 = -1;
    v21 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v84, (unsigned int)v5, i, (unsigned int *)&v80);
    v24 = v21;
    if ( v21 < 0 )
    {
      if ( v21 == -1071774919 )
        break;
      v25 = WdLogNewEntry5_WdAssertion(v23, v22);
      WdLogEvent5_WdAssertion(v25);
    }
    if ( v24 == -1071774919 || v80 == -1 )
      break;
    if ( v80 == v18 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v84, v5, v80);
      if ( !Path )
      {
        v32 = WdLogNewEntry5_WdAssertion(v30, v29);
        WdLogEvent5_WdAssertion(v32);
      }
      v33 = *((_DWORD *)Path + 28);
      v80 = v33;
      if ( v33 == D3DKMDT_VPPS_UNPINNED )
      {
        v34 = WdLogNewEntry5_WdAssertion(v30, v29);
        *(_QWORD *)(v34 + 24) = 13652LL;
        WdLogEvent5_WdAssertion(v34);
        v33 = v80;
      }
      if ( ((v33 - 1) & 0xFFFFFFFD) != 0 && (*((_DWORD *)Path + 30) & 4) != 0 )
      {
        if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v36, v35);
          WdLogEvent5_WdAssertion(v37);
        }
        v38 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, 3LL);
        v41 = v38;
        if ( v38 < 0 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
          v42[3] = v5;
          v42[4] = v3;
          v42[5] = v41;
          WdLogEvent5_WdError(v42);
          if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(Path, (unsigned int)v80) < 0 )
          {
            v45 = WdLogNewEntry5_WdAssertion(v44, v43);
            WdLogEvent5_WdAssertion(v45);
          }
        }
        v19 = 1;
      }
    }
    else
    {
      if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v84, (unsigned int)v5, v80, 0LL) < 0 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v27, v26);
        WdLogEvent5_WdAssertion(v28);
      }
      v19 = 1;
      --i;
    }
  }
  v46 = v83;
  if ( !v19 )
  {
    v48 = v86;
    v47 = v87;
    goto LABEL_39;
  }
  memset(v91, 0, sizeof(v91));
  v47 = v87;
  v48 = v86;
  v79[0] = 0;
  v49 = VIDPN_MGR::SetTimingsFromVidPn(
          v86,
          0LL,
          1u,
          (__int64)v83,
          (struct D3DKMT_VIDPN_SOURCE_MASKS *)v91,
          v79,
          0,
          v87,
          0LL);
  v53 = v49;
  if ( v49 >= 0 )
  {
    v56 = v91[20];
    if ( _bittest(&v56, v5) )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v50, v52);
      v54[4] = v5;
      v54[5] = -1071774970LL;
      goto LABEL_35;
    }
LABEL_39:
    ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v48, v46);
    v62 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef < 0 )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdTrace(v59, v58, v60, v61);
      v63[3] = v46;
      v63[4] = v3;
      v63[5] = v62;
    }
    v55 = v85;
    v64 = ADAPTER_DISPLAY::DestroyCddAllocations((PERESOURCE **)v85, v47, v5);
    v67 = v64;
    if ( v64 < 0 )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdError(v66, v65);
      v68[3] = v5;
      v68[4] = v3;
      v68[5] = v67;
      WdLogEvent5_WdError(v68);
    }
    goto LABEL_43;
  }
  v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v50, v52);
  v54[4] = v53;
LABEL_35:
  v54[3] = v46;
  WdLogEvent5_WdWarning(v54);
  v55 = v85;
LABEL_43:
  v69 = *(_QWORD *)(v3 + 2680);
  if ( v69 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v69 + 616) + 8LL) + 880LL))(
      *(_QWORD *)(v69 + 624),
      (unsigned int)v5);
  }
  else
  {
    v70 = *((_QWORD *)v55 + 48);
    if ( v70 )
      _InterlockedExchange((volatile __int32 *)(2904 * v5 + *(_QWORD *)(v70 + 8) + 944), 0);
  }
  v71 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v55, (unsigned int)v5, 0, 256, 0);
  v74 = v71;
  if ( v71 < 0 )
  {
    v75 = (_QWORD *)WdLogNewEntry5_WdError(v73, v72);
    v75[3] = v5;
    v75[4] = v3;
    v75[5] = v74;
    WdLogEvent5_WdError(v75);
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v90, v72);
LABEL_50:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v83, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v89 + 40), v76);
  return 0LL;
}
