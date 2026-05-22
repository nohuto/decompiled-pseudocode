/*
 * XREFs of ?Release@DWMInputRouter@@WDI@EAAKXZ @ 0x18004B4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 56));
}
