/*
 * XREFs of ?QueryInterface@CPrimitiveGroup@@$4PPPPPPPM@CJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180106510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 664), a2, a3);
}
