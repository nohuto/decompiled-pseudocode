/*
 * XREFs of iswspace @ 0x1403CF250
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x140923E90 (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1409248FC (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140924FE8 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1403D136C (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
