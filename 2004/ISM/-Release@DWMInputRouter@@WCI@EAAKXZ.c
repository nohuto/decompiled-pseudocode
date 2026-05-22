/*
 * XREFs of ?Release@DWMInputRouter@@WCI@EAAKXZ @ 0x18004AE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 40));
}
