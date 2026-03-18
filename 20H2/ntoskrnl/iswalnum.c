/*
 * XREFs of iswalnum @ 0x1403D1E80
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B8904 (PiDrvDbFindSystemFilePathToken.c)
 *     GetAttributeName @ 0x140929860 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x14092A678 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1403D3FFC (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
