/*
 * XREFs of _decode_digit@4 @ 0x4B365633
 * Callers:
 *     _punycode_decode@32 @ 0x4B365668 (_punycode_decode@32.c)
 * Callees:
 *     <none>
 */

int __fastcall decode_digit(unsigned __int16 a1)
{
  if ( (unsigned __int16)(a1 - 48) <= 9u )
    return a1 - 22;
  if ( (unsigned __int16)(a1 - 97) <= 0x19u )
    return a1 - 97;
  if ( (unsigned __int16)(a1 - 65) > 0x19u )
    return -1;
  return a1 - 65;
}
