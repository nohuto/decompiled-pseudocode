/*
 * XREFs of ?QueryInterface@CLegacyRemotingSwapChain@@$4PPPPPPPM@OI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRemotingSwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 232), a2, a3);
}
