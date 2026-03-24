/*
 * XREFs of ?QueryInterface@CDDARenderTarget@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F5E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDARenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 136), a2, a3);
}
