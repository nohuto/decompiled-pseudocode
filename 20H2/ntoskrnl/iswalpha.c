/*
 * XREFs of iswalpha @ 0x1403D1E9C
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B8904 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1403D3FFC (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
