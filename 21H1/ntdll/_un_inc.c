/*
 * XREFs of _un_inc @ 0x4B302DE8
 * Callers:
 *     ReadString_1 @ 0x4B3029D2 (ReadString_1.c)
 *     __winput_s @ 0x4B302E38 (__winput_s.c)
 * Callees:
 *     <none>
 */

wint_t __cdecl un_inc(wint_t Character, FILE *Stream)
{
  wint_t result; // ax

  result = -1;
  if ( Character != 0xFFFF )
    return _ungetwc_nolock(Character, Stream);
  return result;
}
