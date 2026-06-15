/*
 * XREFs of ?Release@CAudioSession@@W7EAAKXZ @ 0x180074380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::Release(__int64 a1)
{
  return CAudioStream::Release((CAudioStream *)(a1 - 8));
}
