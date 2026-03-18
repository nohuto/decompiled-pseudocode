/*
 * XREFs of ?QueryInterface@CIndirectSwapchainRenderTarget@@WHFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 1880), a2, a3);
}
