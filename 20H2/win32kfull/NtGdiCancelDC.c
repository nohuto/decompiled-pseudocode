/*
 * XREFs of NtGdiCancelDC @ 0x1C02AD490
 * Callers:
 *     <none>
 * Callees:
 *     GreCancelDC @ 0x1C029ECE0 (GreCancelDC.c)
 */

__int64 __fastcall NtGdiCancelDC(__int64 a1)
{
  return GreCancelDC(a1);
}
