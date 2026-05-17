/*
 * XREFs of _iswdigit @ 0x4B2F8620
 * Callers:
 *     _RtlpIsDosDeviceName_Ustr@4 @ 0x4B2C9330 (_RtlpIsDosDeviceName_Ustr@4.c)
 * Callees:
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
