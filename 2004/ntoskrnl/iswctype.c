/*
 * XREFs of iswctype @ 0x1403D136C
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x140351460 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x140351500 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1403538C0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x140353940 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1403CF1F0 (iswalnum.c)
 *     iswalpha @ 0x1403CF20C (iswalpha.c)
 *     iswdigit @ 0x1403CF230 (iswdigit.c)
 *     iswspace @ 0x1403CF250 (iswspace.c)
 *     towlower @ 0x1403D07A0 (towlower.c)
 *     _whiteout @ 0x1403D77B0 (_whiteout.c)
 *     _winput_s @ 0x1403D7808 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x140587760 (RtlEthernetStringToAddressW.c)
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
