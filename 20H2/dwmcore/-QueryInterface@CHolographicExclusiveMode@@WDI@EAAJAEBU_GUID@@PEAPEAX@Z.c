/*
 * XREFs of ?QueryInterface@CHolographicExclusiveMode@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EFF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusiveMode::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 56), a2, a3);
}
