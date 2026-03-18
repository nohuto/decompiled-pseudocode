/*
 * XREFs of iswctype @ 0x1403D3FFC
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1403219F0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x140321A90 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x140324430 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1403244B0 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1403D1E80 (iswalnum.c)
 *     iswalpha @ 0x1403D1E9C (iswalpha.c)
 *     iswdigit @ 0x1403D1EC0 (iswdigit.c)
 *     iswspace @ 0x1403D1EE0 (iswspace.c)
 *     towlower @ 0x1403D3430 (towlower.c)
 *     _whiteout @ 0x1403DA440 (_whiteout.c)
 *     _winput_s @ 0x1403DA498 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x14058B0C0 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & (*pwctype)[C];
}
