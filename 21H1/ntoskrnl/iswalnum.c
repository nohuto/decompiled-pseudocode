/*
 * XREFs of iswalnum @ 0x1403CE3B0
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B19C4 (PiDrvDbFindSystemFilePathToken.c)
 *     GetAttributeName @ 0x140922788 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1409235A0 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1403D052C (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
