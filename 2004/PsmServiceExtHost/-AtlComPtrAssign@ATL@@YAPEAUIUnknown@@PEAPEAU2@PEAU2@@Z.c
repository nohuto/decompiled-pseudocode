/*
 * XREFs of ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180041F28
 * Callers:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x180041A9C (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnfo.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180041E6C (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180041F7C (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180071DF0 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

struct IUnknown *__fastcall ATL::AtlComPtrAssign(struct IUnknown **a1, struct IUnknown *a2)
{
  if ( !a1 )
    return 0LL;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  if ( *a1 )
    ((void (__fastcall *)(_QWORD))(*a1)->lpVtbl->Release)(*a1);
  *a1 = a2;
  return a2;
}
