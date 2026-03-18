/*
 * XREFs of ?QueryInterface@CProjectedShadow@@$4PPPPPPPM@BJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EDFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProjectedShadow::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 400), a2, a3);
}
