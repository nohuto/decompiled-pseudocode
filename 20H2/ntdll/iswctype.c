/*
 * XREFs of iswctype @ 0x18008FCB0
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x18000D5D0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x18000D720 (RtlIpv4StringToAddressW.c)
 *     RtlIpv6StringToAddressExW @ 0x18000D950 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x18000DB60 (RtlIpv6StringToAddressW.c)
 *     iswalnum @ 0x18008FBE0 (iswalnum.c)
 *     iswalpha @ 0x18008FBF0 (iswalpha.c)
 *     iswdigit @ 0x18008FC20 (iswdigit.c)
 *     iswgraph @ 0x18008FC30 (iswgraph.c)
 *     iswlower @ 0x18008FC40 (iswlower.c)
 *     iswprint @ 0x18008FC50 (iswprint.c)
 *     iswspace @ 0x18008FC60 (iswspace.c)
 *     iswxdigit @ 0x18008FC70 (iswxdigit.c)
 *     towlower @ 0x180091DB0 (towlower.c)
 *     _whiteout @ 0x18009A934 (_whiteout.c)
 *     _winput_s @ 0x18009A98C (_winput_s.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF888 (RtlUnicodeStringToLcid.c)
 *     RtlEthernetStringToAddressW @ 0x1800FC250 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & pwctype[C];
}
