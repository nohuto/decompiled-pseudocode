/*
 * XREFs of ?QueryInterface@CLocalAppRenderTarget@@$4PPPPPPPM@LA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLocalAppRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 176), a2, a3);
}
