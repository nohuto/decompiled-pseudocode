/*
 * XREFs of ?QueryInterface@CSystemMemoryBitmap@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F53A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 64), a2, a3);
}
