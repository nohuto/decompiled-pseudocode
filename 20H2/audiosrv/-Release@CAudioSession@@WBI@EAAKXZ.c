/*
 * XREFs of ?Release@CAudioSession@@WBI@EAAKXZ @ 0x1800743A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::Release(__int64 a1)
{
  return CAudioStream::Release((CAudioStream *)(a1 - 24));
}
