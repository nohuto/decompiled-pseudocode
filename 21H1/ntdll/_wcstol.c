/*
 * XREFs of _wcstol @ 0x4B2FAC20
 * Callers:
 *     _RtlIpv6StringToAddressW@12 @ 0x4B2E8020 (_RtlIpv6StringToAddressW@12.c)
 * Callees:
 *     wcstoxlX @ 0x4B2FAA19 (wcstoxlX.c)
 */

int __cdecl wcstol(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((int)&__initiallocalestructinfo, (unsigned __int16 *)String, EndPtr, Radix, 0, 0);
}
