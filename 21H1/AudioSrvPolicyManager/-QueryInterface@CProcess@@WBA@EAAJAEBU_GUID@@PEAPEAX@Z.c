/*
 * XREFs of ?QueryInterface@CProcess@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001F120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CProcess::QueryInterface((CProcess *)(a1 - 16), a2, a3);
}
