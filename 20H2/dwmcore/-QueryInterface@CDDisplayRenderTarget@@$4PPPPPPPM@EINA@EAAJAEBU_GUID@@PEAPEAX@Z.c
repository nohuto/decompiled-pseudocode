/*
 * XREFs of ?QueryInterface@CDDisplayRenderTarget@@$4PPPPPPPM@EINA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EF550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 18640), a2, a3);
}
