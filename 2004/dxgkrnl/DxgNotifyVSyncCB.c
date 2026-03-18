/*
 * XREFs of DxgNotifyVSyncCB @ 0x1C0041890
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000D430 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D47C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C0037074 (-NotifyVSync@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DxgNotifyVSyncCB(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  KSPIN_LOCK *DxgAdapter; // rax
  __int64 v6; // r8
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v7);
  DxgAdapter = (KSPIN_LOCK *)DpiGetDxgAdapter(a1, v4);
  DXGADAPTER::NotifyVSync(DxgAdapter, a2, v6);
  if ( v7[0] )
    KeUnstackDetachProcess(&ApcState);
}
