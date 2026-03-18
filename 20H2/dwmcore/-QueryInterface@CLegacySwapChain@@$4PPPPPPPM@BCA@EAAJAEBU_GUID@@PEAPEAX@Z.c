/*
 * XREFs of ?QueryInterface@CLegacySwapChain@@$4PPPPPPPM@BCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CLegacySwapChain::QueryInterface((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 288), a2, a3);
}
