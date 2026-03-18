/*
 * XREFs of wcstol @ 0x1403D3B24
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x140321A90 (RtlIpv6StringToAddressW.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140731594 (DrvDbSplitDeviceIdDriverInfMatch.c)
 * Callees:
 *     wcstoxlX @ 0x1403D390C (wcstoxlX.c)
 */

int __cdecl wcstol(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 0, 0);
}
