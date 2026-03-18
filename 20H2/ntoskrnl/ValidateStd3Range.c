/*
 * XREFs of ValidateStd3Range @ 0x14058BDF0
 * Callers:
 *     RtlpValidateAsciiStd3AndLength @ 0x140918F98 (RtlpValidateAsciiStd3AndLength.c)
 *     punycode_decode @ 0x14091911C (punycode_decode.c)
 *     punycode_encode @ 0x140919764 (punycode_encode.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateStd3Range(int a1)
{
  __int64 v1; // rdx
  bool result; // al

  result = (unsigned __int16)(a1 - 97) <= 0x19u
        || (unsigned __int16)(a1 - 45) <= 0x2Du && (v1 = 0x3FFFFFF01FFBLL, _bittest64(&v1, (unsigned int)(a1 - 45)))
        || (unsigned __int16)a1 >= 0x80u;
  return result;
}
