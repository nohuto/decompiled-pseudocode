/*
 * XREFs of ?QueryInterface@CD2DResource@@$4PPPPPPPM@FI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F5510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DResource::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 88), a2, a3);
}
