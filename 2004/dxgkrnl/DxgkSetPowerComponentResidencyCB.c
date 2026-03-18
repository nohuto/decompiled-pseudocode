/*
 * XREFs of DxgkSetPowerComponentResidencyCB @ 0x1C0042500
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000D430 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D47C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0038CE0 (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DxgkSetPowerComponentResidencyCB(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v8);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v6);
  DXGADAPTER::SetPowerComponentResidencyCB(DxgAdapter, a2, a3);
  if ( v8[0] )
    KeUnstackDetachProcess(&ApcState);
}
