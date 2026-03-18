/*
 * XREFs of _whiteout @ 0x1403D6970
 * Callers:
 *     _winput_s @ 0x1403D69C8 (_winput_s.c)
 * Callees:
 *     iswctype @ 0x1403D052C (iswctype.c)
 *     _fgetwc_nolock @ 0x1403D7440 (_fgetwc_nolock.c)
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
