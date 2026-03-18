/*
 * XREFs of DxgkMultiPlaneOverlayDisabledCB @ 0x1C00421A0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000D490 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D4DC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C0036B5C (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DxgkMultiPlaneOverlayDisabledCB(__int64 a1, int a2)
{
  __int64 v4; // rdx
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v6);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v4);
  DXGADAPTER::NotifyMultiPlaneOverlayDisable(DxgAdapter, a2);
  if ( v6[0] )
    KeUnstackDetachProcess(&ApcState);
}
