/*
 * XREFs of DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C00409B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0013B20 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013B6C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0037358 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 */

void __fastcall DxgSetPowerComponentActiveNoWaitForceAsyncCB(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v6);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v4);
  DXGADAPTER::SetPowerComponentActiveCBInternal(DxgAdapter, a2, 0, 2u);
  if ( v6[0] )
    KeUnstackDetachProcess(&ApcState);
}
