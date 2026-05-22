/*
 * XREFs of ?QueryInterface@EdgyInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004CDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall EdgyInputTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return EdgyInputTarget::QueryInterface((EdgyInputTarget *)(a1 - 16), a2, a3);
}
