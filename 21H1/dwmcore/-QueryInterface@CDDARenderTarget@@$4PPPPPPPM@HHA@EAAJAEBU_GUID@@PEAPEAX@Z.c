/*
 * XREFs of ?QueryInterface@CDDARenderTarget@@$4PPPPPPPM@HHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDARenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 1904), a2, a3);
}
