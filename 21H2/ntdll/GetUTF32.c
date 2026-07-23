/*
 * XREFs of GetUTF32 @ 0x1800FEF24
 * Callers:
 *     punycode_encode @ 0x180082B44 (punycode_encode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetUTF32(unsigned __int16 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (unsigned __int16)(result + 10240) <= 0x7FFu )
    return (unsigned int)a1[1] + (((_DWORD)result - 55287) << 10);
  return result;
}
