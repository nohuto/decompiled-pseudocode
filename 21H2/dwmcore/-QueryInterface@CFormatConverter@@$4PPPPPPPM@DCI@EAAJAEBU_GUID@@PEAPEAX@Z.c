/*
 * XREFs of ?QueryInterface@CFormatConverter@@$4PPPPPPPM@DCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F6E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFormatConverter::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 808), a2, a3);
}
