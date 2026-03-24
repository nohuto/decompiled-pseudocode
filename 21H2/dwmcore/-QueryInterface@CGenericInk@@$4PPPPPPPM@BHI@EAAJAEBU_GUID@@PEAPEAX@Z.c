/*
 * XREFs of ?QueryInterface@CGenericInk@@$4PPPPPPPM@BHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F5380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericInk::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 376), a2, a3);
}
