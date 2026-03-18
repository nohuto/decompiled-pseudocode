/*
 * XREFs of ?QueryInterface@CDDisplayRenderTarget@@$4PPPPPPPM@EIKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801063D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 18592), a2, a3);
}
