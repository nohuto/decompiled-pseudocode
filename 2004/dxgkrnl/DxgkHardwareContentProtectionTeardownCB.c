/*
 * XREFs of DxgkHardwareContentProtectionTeardownCB @ 0x1C0042030
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000D430 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D47C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x1C0036B8C (-NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DxgkHardwareContentProtectionTeardownCB(__int64 a1, int a2)
{
  __int64 v4; // rdx
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v6);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v4);
  DXGADAPTER::NotifyHardwareContentProtectionTeardown(DxgAdapter, a2);
  if ( v6[0] )
    KeUnstackDetachProcess(&ApcState);
}
