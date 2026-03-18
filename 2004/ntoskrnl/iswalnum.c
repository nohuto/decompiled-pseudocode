/*
 * XREFs of iswalnum @ 0x1403CF1F0
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B2CE4 (PiDrvDbFindSystemFilePathToken.c)
 *     GetAttributeName @ 0x140923A38 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x140924850 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1403D136C (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
