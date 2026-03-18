/*
 * XREFs of DxgkMitigatedRangeUpdateCB @ 0x1C0041210
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013B6C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     DpiMitigatedRangeUpdate @ 0x1C02C2190 (DpiMitigatedRangeUpdate.c)
 */

void __fastcall DxgkMitigatedRangeUpdateCB(void *a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v2);
  DpiMitigatedRangeUpdate(a1);
  if ( v2[0] )
    KeUnstackDetachProcess(&ApcState);
}
