/*
 * XREFs of DxgkCompletePStateTransitionCB @ 0x1C0041EB0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000D430 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D47C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z @ 0x1C00361E0 (-CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z.c)
 */

void __fastcall DxgkCompletePStateTransitionCB(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v8);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v6);
  DXGADAPTER::CompletePStateTransitionCB(DxgAdapter, a2, a3);
  if ( v8[0] )
    KeUnstackDetachProcess(&ApcState);
}
