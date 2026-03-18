/*
 * XREFs of ?MKButtonSelect@@YAHG@Z @ 0x1C0189A00
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionPostAccessibility @ 0x1C01CF630 (ApiSetEditionPostAccessibility.c)
 */

__int64 __fastcall MKButtonSelect(__int16 a1)
{
  gwMKCurrentButton = a1;
  ApiSetEditionPostAccessibility(3LL);
  return 0LL;
}
