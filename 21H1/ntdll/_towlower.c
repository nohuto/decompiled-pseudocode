/*
 * XREFs of _towlower @ 0x4B2FA5C0
 * Callers:
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 * Callees:
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // si

  v1 = C;
  if ( iswctype(C, 1u) )
    return C + 32;
  return v1;
}
