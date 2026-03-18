/*
 * XREFs of DxgPresentDisplayOnlyProgressCB @ 0x1C0041910
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000D430 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D47C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C005E2FC (-PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@.c)
 */

void __fastcall DxgPresentDisplayOnlyProgressCB(__int64 a1, const struct _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS *a2)
{
  __int64 v4; // rdx
  DXGDODPRESENT *v5; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v6);
  v5 = *(DXGDODPRESENT **)(*(_QWORD *)(DpiGetDxgAdapter(a1, v4) + 2696) + 384LL);
  if ( v5 )
    DXGDODPRESENT::PresentDisplayOnlySetProgress(v5, a2);
  if ( v6[0] )
    KeUnstackDetachProcess(&ApcState);
}
