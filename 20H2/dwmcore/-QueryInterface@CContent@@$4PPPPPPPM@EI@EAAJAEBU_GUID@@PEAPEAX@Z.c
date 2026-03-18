/*
 * XREFs of ?QueryInterface@CContent@@$4PPPPPPPM@EI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EEA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CContent::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 72), a2, a3);
}
