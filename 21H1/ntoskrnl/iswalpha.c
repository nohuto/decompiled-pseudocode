/*
 * XREFs of iswalpha @ 0x1403CE3CC
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B19C4 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1403D052C (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
