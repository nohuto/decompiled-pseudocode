/*
 * XREFs of ?QueryInterface@CConversionSwapChain@@$4PPPPPPPM@CMI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 712), a2, a3);
}
