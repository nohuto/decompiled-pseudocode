/*
 * XREFs of ?QueryInterface@CAtlasedRectsGroup@@$4PPPPPPPM@IA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801062D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedRectsGroup::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 128), a2, a3);
}
