/*
 * XREFs of ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03A478C
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C0162FC0 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A62D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C01BB920 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C01C79D8 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C01E3518 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03A5824 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DmmDisableAllFailurePathsOnAdapter(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  struct VIDPN_MGR *v7; // r15
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned int v9; // ebx
  unsigned int v10; // esi
  struct DMMVIDPN *v11; // rbx
  __int64 *v12; // r13
  int NumPathsFromSource; // eax
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // esi
  __int64 v20; // rax
  char v21; // al
  __int64 v23; // [rsp+20h] [rbp-E0h]
  _BYTE v24[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct DMMVIDPN *v25; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v28[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[272]; // [rsp+90h] [rbp-70h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    WdLogSingleEntry0(1LL);
  if ( a4 && (*(_DWORD *)(a4 + 432) != 2 || *(_QWORD *)(a4 + 1848) != a1) )
    WdLogSingleEntry0(1LL);
  v7 = *(struct VIDPN_MGR **)(*(_QWORD *)(a1 + 2792) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v27, (__int64)v7);
  v25 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v7, (__int64 *)&v25);
  v9 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    WdLogSingleEntry3(2LL, *(int *)(a1 + 408), *(unsigned int *)(a1 + 404), ClientVidPnFromLastClientCommitedVidPn);
    goto LABEL_34;
  }
  v10 = 0;
  v11 = v25;
  v12 = (__int64 *)((char *)v25 + 96);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 2792) + 96LL) )
  {
    while ( 1 )
    {
      if ( _bittest(&a2, v10) )
      {
        v26 = 0LL;
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)v12, v10, &v26);
        if ( NumPathsFromSource >= 0 )
          goto LABEL_15;
        if ( NumPathsFromSource != -1071774919 || v26 )
          break;
      }
LABEL_20:
      if ( ++v10 >= *(_DWORD *)(*(_QWORD *)(a1 + 2792) + 96LL) )
      {
        v11 = v25;
        goto LABEL_22;
      }
    }
    WdLogSingleEntry0(1LL);
LABEL_15:
    if ( v26 )
    {
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v28,
        (__int64)(v12 + 7),
        2u,
        v14,
        v23,
        v12[5]);
      v15 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v12, v10);
      if ( ((v15 + 0x80000000) & 0x80000000) == 0 && v15 != -1071774919 )
        WdLogSingleEntry0(1LL);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v28, v16);
    }
    goto LABEL_20;
  }
LABEL_22:
  memset(v29, 0, 0x104uLL);
  v24[0] = 0;
  v17 = VIDPN_MGR::SetTimingsFromVidPn(
          v7,
          0,
          1u,
          v11,
          (struct D3DKMT_VIDPN_SOURCE_MASKS *)v29,
          v24,
          0,
          (struct DXGDEVICE *)a4,
          0LL);
  if ( v17 < 0 )
  {
    WdLogSingleEntry2(2LL, v11, v17);
    v18 = *(_QWORD *)(a1 + 2792);
    v19 = 0;
    if ( *(_DWORD *)(v18 + 96) )
    {
      do
      {
        v20 = v18;
        if ( _bittest(&a2, v19) )
        {
          ADAPTER_DISPLAY::SetVidPnSourceActive((PERESOURCE **)v18, v19, 0, 0LL, 0, 0);
          v20 = *(_QWORD *)(a1 + 2792);
        }
        ++v19;
        v18 = v20;
      }
      while ( v19 < *(_DWORD *)(v20 + 96) );
    }
  }
  v21 = v24[0];
  if ( (v24[0] & 1) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v21 = v24[0];
  }
  if ( (v21 & 2) != 0 )
    WdLogSingleEntry0(1LL);
  if ( (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef(v7, v11) < 0 )
    WdLogSingleEntry0(1LL);
  v9 = 0;
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v25, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v27 + 40));
  return v9;
}
