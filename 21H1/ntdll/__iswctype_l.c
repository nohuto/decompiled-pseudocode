/*
 * XREFs of __iswctype_l @ 0x4B2F86D6
 * Callers:
 *     _wcstoxq @ 0x4B2F7C71 (_wcstoxq.c)
 *     wcstoxlX @ 0x4B2FAA19 (wcstoxlX.c)
 * Callees:
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 */

int __cdecl _iswctype_l(wint_t C, wctype_t Type, _locale_t Locale)
{
  return iswctype(C, Type);
}
