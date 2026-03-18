/*
 * XREFs of ?QueryInterface@CSectionBitmapRealization@@WBDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSectionBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 304), a2, a3);
}
