/*
 * XREFs of ?QueryInterface@CD3DResource@@$4PPPPPPPM@BA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DResource::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CD3DResource::QueryInterface((CD3DResource *)(a1 - *(int *)(a1 - 4) - 16), a2, a3);
}
