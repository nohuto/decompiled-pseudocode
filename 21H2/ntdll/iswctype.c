/*
 * XREFs of iswctype @ 0x1800902B0
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x18000D5D0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x18000D720 (RtlIpv4StringToAddressW.c)
 *     RtlIpv6StringToAddressExW @ 0x18000D950 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x18000DB60 (RtlIpv6StringToAddressW.c)
 *     iswalnum @ 0x1800901E0 (iswalnum.c)
 *     iswalpha @ 0x1800901F0 (iswalpha.c)
 *     iswdigit @ 0x180090220 (iswdigit.c)
 *     iswgraph @ 0x180090230 (iswgraph.c)
 *     iswlower @ 0x180090240 (iswlower.c)
 *     iswprint @ 0x180090250 (iswprint.c)
 *     iswspace @ 0x180090260 (iswspace.c)
 *     iswxdigit @ 0x180090270 (iswxdigit.c)
 *     towlower @ 0x1800923B0 (towlower.c)
 *     _whiteout @ 0x18009AF34 (_whiteout.c)
 *     _winput_s @ 0x18009AF8C (_winput_s.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF6D8 (RtlUnicodeStringToLcid.c)
 *     RtlEthernetStringToAddressW @ 0x1800FC0B0 (RtlEthernetStringToAddressW.c)
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
