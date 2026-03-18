/*
 * XREFs of ?QueryInterface@CGdiSpriteBitmap@@$4PPPPPPPM@CAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F08C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 520), a2, a3);
}
