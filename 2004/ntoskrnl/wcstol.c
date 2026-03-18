/*
 * XREFs of wcstol @ 0x1403D0E94
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x140351500 (RtlIpv6StringToAddressW.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14072E2EC (DrvDbSplitDeviceIdDriverInfMatch.c)
 * Callees:
 *     wcstoxlX @ 0x1403D0C7C (wcstoxlX.c)
 */

int __cdecl wcstol(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 0, 0);
}
