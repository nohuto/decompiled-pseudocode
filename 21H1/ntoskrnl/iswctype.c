/*
 * XREFs of iswctype @ 0x1403D052C
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1403135B0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x140313650 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x140315A40 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x140315AC0 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1403CE3B0 (iswalnum.c)
 *     iswalpha @ 0x1403CE3CC (iswalpha.c)
 *     iswdigit @ 0x1403CE3F0 (iswdigit.c)
 *     iswspace @ 0x1403CE410 (iswspace.c)
 *     towlower @ 0x1403CF960 (towlower.c)
 *     _whiteout @ 0x1403D6970 (_whiteout.c)
 *     _winput_s @ 0x1403D69C8 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x140587030 (RtlEthernetStringToAddressW.c)
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
