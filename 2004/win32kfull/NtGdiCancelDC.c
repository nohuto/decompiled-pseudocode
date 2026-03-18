/*
 * XREFs of NtGdiCancelDC @ 0x1C02AEA10
 * Callers:
 *     <none>
 * Callees:
 *     GreCancelDC @ 0x1C02A0130 (GreCancelDC.c)
 */

__int64 __fastcall NtGdiCancelDC(__int64 a1)
{
  return GreCancelDC(a1);
}
