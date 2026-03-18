/*
 * XREFs of ?QueryInterface@CBitmapLock@@$4PPPPPPPM@LI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 184), a2, a3);
}
