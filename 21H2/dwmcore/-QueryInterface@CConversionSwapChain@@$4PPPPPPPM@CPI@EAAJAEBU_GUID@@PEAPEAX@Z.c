/*
 * XREFs of ?QueryInterface@CConversionSwapChain@@$4PPPPPPPM@CPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010A750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 760), a2, a3);
}
