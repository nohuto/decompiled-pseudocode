/*
 * XREFs of DxgSetPowerComponentActiveCB @ 0x1C0251710
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000D430 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D47C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C003815C (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DxgSetPowerComponentActiveCB(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v6);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v4);
  DXGADAPTER::SetPowerComponentActiveCB(DxgAdapter, a2);
  if ( v6[0] )
    KeUnstackDetachProcess(&ApcState);
}
