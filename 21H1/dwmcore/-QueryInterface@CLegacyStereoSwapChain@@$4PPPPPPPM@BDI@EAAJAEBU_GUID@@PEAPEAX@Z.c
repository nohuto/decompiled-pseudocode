/*
 * XREFs of ?QueryInterface@CLegacyStereoSwapChain@@$4PPPPPPPM@BDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EF0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyStereoSwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 312), a2, a3);
}
