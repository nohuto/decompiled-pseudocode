/*
 * XREFs of _whiteout @ 0x18009A934
 * Callers:
 *     _winput_s @ 0x18009A98C (_winput_s.c)
 * Callees:
 *     iswctype @ 0x18008FCB0 (iswctype.c)
 *     _fgetwc_nolock @ 0x18009B37C (_fgetwc_nolock.c)
 */

__int64 __fastcall whiteout(_DWORD *a1, FILE *a2)
{
  wint_t v4; // bx

  do
  {
    ++*a1;
    v4 = fgetwc_nolock(a2);
  }
  while ( v4 != 0xFFFF && iswctype(v4, 8u) );
  return v4;
}
