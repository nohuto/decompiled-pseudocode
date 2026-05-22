/*
 * XREFs of ?AddRef@DWMInputRouter@@WCA@EAAKXZ @ 0x18004B320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::AddRef(__int64 a1)
{
  return MPCInputRouter::AddRef((MPCInputRouter *)(a1 - 32));
}
