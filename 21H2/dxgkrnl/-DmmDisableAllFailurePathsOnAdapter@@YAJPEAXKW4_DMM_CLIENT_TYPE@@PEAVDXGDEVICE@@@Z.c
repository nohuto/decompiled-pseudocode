/*
 * XREFs of ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C00DDE1C
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C014D16C (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00085F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01115B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01116D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0125B70 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013FB1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0142A04 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C014B0F4 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C014D3A8 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C016A298 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmDisableAllFailurePathsOnAdapter(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  struct VIDPN_MGR *v11; // r15
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  unsigned int v17; // esi
  struct DMMVIDPN *v18; // rbx
  DMMVIDPNTOPOLOGY *v19; // r13
  int NumPathsFromSource; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  ADAPTER_DISPLAY *v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rax
  unsigned int v34; // esi
  ADAPTER_DISPLAY *v35; // rax
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  char v44[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct DMMVIDPN *v45; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v48[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v49[256]; // [rsp+90h] [rbp-70h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a4 && (*(_DWORD *)(a4 + 432) != 2 || *(_QWORD *)(a4 + 1848) != a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(struct VIDPN_MGR **)(*(_QWORD *)(a1 + 2696) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v47, (__int64)v11);
  v45 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v11);
  v15 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v16[3] = *(int *)(a1 + 320);
    v16[4] = *(unsigned int *)(a1 + 316);
    v16[5] = v15;
    WdLogEvent5_WdError(v16);
    goto LABEL_34;
  }
  v17 = 0;
  v18 = v45;
  v19 = (struct DMMVIDPN *)((char *)v45 + 96);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 2696) + 80LL) )
  {
    while ( 1 )
    {
      if ( _bittest(&a2, v17) )
      {
        v46 = 0LL;
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v19, v17, &v46);
        if ( NumPathsFromSource >= 0 )
          goto LABEL_15;
        if ( NumPathsFromSource != -1071774919 || v46 )
          break;
      }
LABEL_20:
      if ( ++v17 >= *(_DWORD *)(*(_QWORD *)(a1 + 2696) + 80LL) )
      {
        v18 = v45;
        goto LABEL_22;
      }
    }
    v24 = WdLogNewEntry5_WdAssertion(v22, v21);
    WdLogEvent5_WdAssertion(v24);
LABEL_15:
    if ( v46 )
    {
      LOBYTE(v23) = 2;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        v48,
        ((unsigned __int64)v45 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v45 + 96) != 0LL),
        v23);
      v25 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v19, v17);
      v27 = v25 + 0x80000000;
      if ( (v27 & 0x80000000) == 0 && v25 != -1071774919 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v27, v26);
        WdLogEvent5_WdAssertion(v28);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v48);
    }
    goto LABEL_20;
  }
LABEL_22:
  memset(v49, 0, sizeof(v49));
  v44[0] = 0;
  v29 = VIDPN_MGR::SetTimingsFromVidPn(v11, 0LL, 1LL, v18, v49, v44, 0, a4, 0LL);
  v32 = v29;
  if ( v29 < 0 )
  {
    v33 = WdLogNewEntry5_WdError(v31, v30);
    *(_QWORD *)(v33 + 24) = v18;
    *(_QWORD *)(v33 + 32) = v32;
    WdLogEvent5_WdError(v33);
    v31 = *(ADAPTER_DISPLAY **)(a1 + 2696);
    v34 = 0;
    if ( *((_DWORD *)v31 + 20) )
    {
      do
      {
        v35 = v31;
        if ( _bittest(&a2, v34) )
        {
          ADAPTER_DISPLAY::SetVidPnSourceActive(v31, v34, 0, 0, 0);
          v35 = *(ADAPTER_DISPLAY **)(a1 + 2696);
        }
        ++v34;
        v31 = v35;
      }
      while ( v34 < *((_DWORD *)v35 + 20) );
    }
  }
  v36 = v44[0];
  if ( (v44[0] & 1) != 0 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v31, v30);
    WdLogEvent5_WdAssertion(v37);
    v36 = v44[0];
  }
  if ( (v36 & 2) != 0 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v31, v30);
    WdLogEvent5_WdAssertion(v38);
  }
  if ( (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef(v11, v18) < 0 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v40, v39);
    WdLogEvent5_WdAssertion(v41);
  }
  LODWORD(v15) = 0;
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v45, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v47 + 40), v42);
  return (unsigned int)v15;
}
