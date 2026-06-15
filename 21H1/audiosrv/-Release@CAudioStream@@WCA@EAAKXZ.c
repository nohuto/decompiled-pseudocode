/*
 * XREFs of ?Release@CAudioStream@@WCA@EAAKXZ @ 0x180074D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::Release(__int64 a1)
{
  return CAudioStream::Release((CAudioStream *)(a1 - 32));
}
