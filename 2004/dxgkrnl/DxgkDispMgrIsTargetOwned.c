/*
 * XREFs of DxgkDispMgrIsTargetOwned @ 0x1C02B1900
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1C02B0D08 (-ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z.c)
 */

bool __fastcall DxgkDispMgrIsTargetOwned(struct DXGFASTMUTEX *const **a1, struct _LUID a2, int a3)
{
  return DXGDISPLAYMANAGEROBJECT::ContainsTarget(*a1, a2, a3);
}
