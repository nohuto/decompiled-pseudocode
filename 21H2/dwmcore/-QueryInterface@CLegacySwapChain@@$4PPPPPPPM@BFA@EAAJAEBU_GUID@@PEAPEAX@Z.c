/*
 * XREFs of ?QueryInterface@CLegacySwapChain@@$4PPPPPPPM@BFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180109110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 336), a2, a3);
}
