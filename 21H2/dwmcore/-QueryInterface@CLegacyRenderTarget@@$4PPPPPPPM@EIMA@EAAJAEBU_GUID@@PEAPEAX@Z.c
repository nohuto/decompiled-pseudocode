/*
 * XREFs of ?QueryInterface@CLegacyRenderTarget@@$4PPPPPPPM@EIMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F5400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 18624), a2, a3);
}
