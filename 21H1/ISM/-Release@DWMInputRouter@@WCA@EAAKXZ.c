/*
 * XREFs of ?Release@DWMInputRouter@@WCA@EAAKXZ @ 0x18004B460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 32));
}
