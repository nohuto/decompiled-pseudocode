/*
 * XREFs of ?QueryInterface@CAudioStream@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CAudioStream::QueryInterface((CAudioStream *)(a1 - 32), a2, a3);
}
