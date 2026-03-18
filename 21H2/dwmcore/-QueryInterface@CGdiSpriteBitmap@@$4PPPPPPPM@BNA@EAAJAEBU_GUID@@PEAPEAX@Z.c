/*
 * XREFs of ?QueryInterface@CGdiSpriteBitmap@@$4PPPPPPPM@BNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801074D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 464), a2, a3);
}
