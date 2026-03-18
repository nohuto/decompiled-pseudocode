/*
 * XREFs of DxgkSetPowerComponentLatencyCB @ 0x1C004C130
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C000A3B0 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     DpiGetDxgAdapter @ 0x1C00151D0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0015214 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 */

void __fastcall DxgkSetPowerComponentLatencyCB(__int64 a1, unsigned int a2, __int64 a3)
{
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v7);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::SetPowerComponentLatencyCB(DxgAdapter, a2, a3);
  if ( v7[0] )
    KeUnstackDetachProcess(&ApcState);
}
