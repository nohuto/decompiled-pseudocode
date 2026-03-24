/*
 * XREFs of ?QueryInterface@CRemoteRenderTarget@@$4PPPPPPPM@BEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F54B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 320), a2, a3);
}
