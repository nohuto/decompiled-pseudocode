/*
 * XREFs of ?QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@BCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 288), a2, a3);
}
