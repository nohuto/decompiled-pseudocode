/*
 * XREFs of DxgkSetPowerComponentLatencyCB @ 0x1C0041460
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0013B20 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013B6C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0037D54 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DxgkSetPowerComponentLatencyCB(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v8);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v6);
  DXGADAPTER::SetPowerComponentLatencyCB(DxgAdapter, a2, a3);
  if ( v8[0] )
    KeUnstackDetachProcess(&ApcState);
}
