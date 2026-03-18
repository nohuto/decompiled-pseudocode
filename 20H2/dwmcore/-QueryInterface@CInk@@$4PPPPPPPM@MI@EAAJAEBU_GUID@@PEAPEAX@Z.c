/*
 * XREFs of ?QueryInterface@CInk@@$4PPPPPPPM@MI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EF5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInk::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 200), a2, a3);
}
