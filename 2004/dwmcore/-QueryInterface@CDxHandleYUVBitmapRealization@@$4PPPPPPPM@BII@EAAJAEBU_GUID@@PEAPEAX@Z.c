/*
 * XREFs of ?QueryInterface@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@BII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F3850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 392), a2, a3);
}
