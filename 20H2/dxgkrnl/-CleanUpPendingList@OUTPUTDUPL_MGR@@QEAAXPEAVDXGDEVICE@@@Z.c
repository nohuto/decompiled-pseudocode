/*
 * XREFs of ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0113880
 * Callers:
 *     _lambda_3a889f2a3da19ece0881b5d4724e0c1b_::_lambda_invoker_cdecl_ @ 0x1C00D4AC0 (_lambda_3a889f2a3da19ece0881b5d4724e0c1b_--_lambda_invoker_cdecl_.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00EE620 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108EE0 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C0102900 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01138D0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::CleanUpPendingList(struct _KTHREAD ***this, struct DXGDEVICE *a2)
{
  struct _KTHREAD **v4; // rcx
  struct _KTHREAD ***RemoteOutputDuplMgr; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  v4 = *this;
  if ( v4 && !DXGADAPTER::IsCoreResourceSharedOwner(v4[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 1507LL;
    WdLogEvent5_WdAssertion(v8);
  }
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, a2, 0);
  RemoteOutputDuplMgr = (struct _KTHREAD ***)FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPendingDestroy(RemoteOutputDuplMgr, a2, 0);
}
