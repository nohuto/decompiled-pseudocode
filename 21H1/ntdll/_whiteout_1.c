/*
 * XREFs of _whiteout_1 @ 0x4B302E00
 * Callers:
 *     __winput_s @ 0x4B302E38 (__winput_s.c)
 * Callees:
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 *     __fgetwc_nolock @ 0x4B30365C (__fgetwc_nolock.c)
 */

wint_t __cdecl whiteout_1(_DWORD *a1, FILE *Stream)
{
  wint_t v2; // si

  do
  {
    ++*a1;
    v2 = _fgetwc_nolock(Stream);
  }
  while ( v2 != 0xFFFF && iswctype(v2, 8u) );
  return v2;
}
