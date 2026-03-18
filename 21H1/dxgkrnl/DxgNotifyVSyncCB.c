/*
 * XREFs of DxgNotifyVSyncCB @ 0x1C0040870
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0013B20 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013B6C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C0036194 (-NotifyVSync@DXGADAPTER@@QEAAXI@Z.c)
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
