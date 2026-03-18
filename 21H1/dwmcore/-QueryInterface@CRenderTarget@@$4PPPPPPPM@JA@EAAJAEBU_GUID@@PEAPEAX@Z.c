/*
 * XREFs of ?QueryInterface@CRenderTarget@@$4PPPPPPPM@JA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 144), a2, a3);
}
