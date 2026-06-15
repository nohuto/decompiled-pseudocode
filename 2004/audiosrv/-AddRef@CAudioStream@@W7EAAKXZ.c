/*
 * XREFs of ?AddRef@CAudioStream@@W7EAAKXZ @ 0x180074D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::AddRef(__int64 a1)
{
  return CAudioSession::AddRef((CAudioSession *)(a1 - 8));
}
