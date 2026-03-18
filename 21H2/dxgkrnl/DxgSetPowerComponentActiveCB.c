/*
 * XREFs of DxgSetPowerComponentActiveCB @ 0x1C01F4740
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C00151D0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0015214 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0025B90 (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 */

void __fastcall DxgSetPowerComponentActiveCB(__int64 a1, unsigned int a2)
{
  DXGADAPTER *DxgAdapter; // rax
  __int64 v5; // r8
  _BYTE v6[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v6);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::SetPowerComponentActiveCB(DxgAdapter, a2, v5);
  if ( v6[0] )
    KeUnstackDetachProcess(&ApcState);
}
