/*
 * XREFs of ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128C08
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00E02B8 (_BmlGetPathModalityForAdapter.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128E64 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012A63C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C013C270 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C01597F0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02DB888 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     ?CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C02DE130 (-CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTE.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C02E7DA8 (_BmlGetPathModeListForAdapter.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02E9240 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02E9D90 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C02EC818 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0010244 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C01105C8 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateClientVidPn(struct VIDPN_MGR *a1, __int64 *a2)
{
  unsigned int v2; // edi
  DMMVIDPN *v5; // rax
  unsigned __int8 v6; // r8
  DMMVIDPN *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    WdLogEvent5_WdAssertion(v21);
  }
  auto_rc<DMMVIDPN>::reset(a2, 0LL);
  v25 = 0LL;
  v5 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v5 )
    v7 = DMMVIDPN::DMMVIDPN(v5, a1, v6);
  else
    v7 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v25, (__int64)v7);
  v12 = v25;
  if ( v25 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v25 + 72))(v25 + 72) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 16LL) != CurrentThread )
      {
        v20 = WdLogNewEntry5_WdAssertion(CurrentThread, v13);
        WdLogEvent5_WdAssertion(v20);
      }
      v16 = v25;
      if ( Set<DMMVIDPN>::Add() != 1 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v24);
      }
      v25 = 0LL;
      auto_rc<DMMVIDPN>::reset(a2, v16);
    }
    else
    {
      v23 = WdLogNewEntry5_WdDmmEvent(v14);
      *(_QWORD *)(v23 + 24) = v12;
      *(_QWORD *)(v23 + 32) = *(int *)(v12 + 80);
      WdLogEvent5_WdDmmEvent(v23);
      v2 = *(_DWORD *)(v12 + 80);
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    WdLogEvent5_WdLowResource(v22);
    v2 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v25, 0LL);
  return v2;
}
