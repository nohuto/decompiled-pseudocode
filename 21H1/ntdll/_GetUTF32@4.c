/*
 * XREFs of _GetUTF32@4 @ 0x4B365232
 * Callers:
 *     _punycode_encode@24 @ 0x4B365B90 (_punycode_encode@24.c)
 * Callees:
 *     _IsSurrogate@4 @ 0x4B3652AA (_IsSurrogate@4.c)
 */

int __thiscall GetUTF32(unsigned __int16 *this)
{
  int v2; // edx

  if ( (unsigned __int8)IsSurrogate(*this, *this) )
    return this[1] + ((v2 - 55287) << 10);
  else
    return v2;
}
