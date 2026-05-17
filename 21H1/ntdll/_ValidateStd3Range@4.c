/*
 * XREFs of _ValidateStd3Range@4 @ 0x4B3655A6
 * Callers:
 *     _RtlpValidateAsciiStd3AndLength@16 @ 0x4B2E5A9B (_RtlpValidateAsciiStd3AndLength@16.c)
 *     _punycode_decode@32 @ 0x4B365668 (_punycode_decode@32.c)
 *     _punycode_encode@24 @ 0x4B365B90 (_punycode_encode@24.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateStd3Range(unsigned __int16 a1)
{
  return a1 > 0x2Cu
      && a1 != 47
      && (a1 < 0x3Au || a1 > 0x40u)
      && (a1 < 0x5Bu || a1 > 0x60u)
      && (a1 < 0x7Bu || a1 > 0x7Fu);
}
