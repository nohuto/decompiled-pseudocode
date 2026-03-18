/*
 * XREFs of ?QueryInterface@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@BKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010AD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 424), a2, a3);
}
