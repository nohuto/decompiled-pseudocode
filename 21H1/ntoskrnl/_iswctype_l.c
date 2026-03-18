/*
 * XREFs of _iswctype_l @ 0x1403D04FC
 * Callers:
 *     wcstoxlX @ 0x1403CFE3C (wcstoxlX.c)
 *     wcstoxq @ 0x1403D028C (wcstoxq.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype_l(wint_t C, wctype_t Type, _locale_t Locale)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & (*pwctype)[C];
}
