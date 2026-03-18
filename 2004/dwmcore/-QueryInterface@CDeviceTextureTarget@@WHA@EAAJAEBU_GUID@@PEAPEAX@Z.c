/*
 * XREFs of ?QueryInterface@CDeviceTextureTarget@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F08D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 112), a2, a3);
}
