/*
 * XREFs of ?QueryInterface@CDxHandleBitmapRealization@@$4PPPPPPPM@BII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CPrimitiveGroup::QueryInterface((CPrimitiveGroup *)(a1 - *(int *)(a1 - 4) - 392), a2, a3);
}
