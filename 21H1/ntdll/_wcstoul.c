/*
 * XREFs of _wcstoul @ 0x4B2FAC70
 * Callers:
 *     _LdrpFixSectionProtection@12 @ 0x4B32C976 (_LdrpFixSectionProtection@12.c)
 *     _LdrpProcessImageProtectionParameter@8 @ 0x4B32CAFE (_LdrpProcessImageProtectionParameter@8.c)
 * Callees:
 *     wcstoxlX @ 0x4B2FAA19 (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((int)&__initiallocalestructinfo, (unsigned __int16 *)String, EndPtr, Radix, 1, 0);
}
