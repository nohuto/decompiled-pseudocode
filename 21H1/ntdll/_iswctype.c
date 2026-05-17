/*
 * XREFs of _iswctype @ 0x4B2F86F0
 * Callers:
 *     _RtlIpv6StringToAddressExW@16 @ 0x4B2E7FB0 (_RtlIpv6StringToAddressExW@16.c)
 *     _RtlIpv6StringToAddressW@12 @ 0x4B2E8020 (_RtlIpv6StringToAddressW@12.c)
 *     _RtlIpv4StringToAddressExW@16 @ 0x4B2E89C0 (_RtlIpv4StringToAddressExW@16.c)
 *     _RtlIpv4StringToAddressW@16 @ 0x4B2E8A10 (_RtlIpv4StringToAddressW@16.c)
 *     _iswalnum @ 0x4B2F85C0 (_iswalnum.c)
 *     _iswalpha @ 0x4B2F85E0 (_iswalpha.c)
 *     _iswdigit @ 0x4B2F8620 (_iswdigit.c)
 *     _iswgraph @ 0x4B2F8640 (_iswgraph.c)
 *     _iswlower @ 0x4B2F8660 (_iswlower.c)
 *     _iswprint @ 0x4B2F8680 (_iswprint.c)
 *     _iswspace @ 0x4B2F86A0 (_iswspace.c)
 *     _iswxdigit @ 0x4B2F86C0 (_iswxdigit.c)
 *     __iswctype_l @ 0x4B2F86D6 (__iswctype_l.c)
 *     _towlower @ 0x4B2FA5C0 (_towlower.c)
 *     _whiteout_1 @ 0x4B302E00 (_whiteout_1.c)
 *     __winput_s @ 0x4B302E38 (__winput_s.c)
 *     _RtlUnicodeStringToLcid@8 @ 0x4B352FCF (_RtlUnicodeStringToLcid@8.c)
 *     _RtlEthernetStringToAddressW@12 @ 0x4B362130 (_RtlEthernetStringToAddressW@12.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & _pwctype[C];
}
