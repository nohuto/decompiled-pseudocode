/*
 * XREFs of _lambda_3a889f2a3da19ece0881b5d4724e0c1b_::_lambda_invoker_cdecl_ @ 0x1C00D5AC0
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00EF6B0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0114A00 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall lambda_3a889f2a3da19ece0881b5d4724e0c1b_::_lambda_invoker_cdecl_(
        OUTPUTDUPL_MGR *a1,
        struct DXGDEVICE *a2)
{
  OUTPUTDUPL_MGR::CleanUpPendingList(a1, a2);
  return 0LL;
}
