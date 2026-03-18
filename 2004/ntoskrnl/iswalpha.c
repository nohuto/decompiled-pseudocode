/*
 * XREFs of iswalpha @ 0x1403CF20C
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B2CE4 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1403D136C (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
