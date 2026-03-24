/*
 * XREFs of ?QueryInterface@CCompositionCubeMap@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F6500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionCubeMap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 72), a2, a3);
}
