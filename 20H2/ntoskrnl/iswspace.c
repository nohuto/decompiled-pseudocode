/*
 * XREFs of iswspace @ 0x1403D1EE0
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x140929CB8 (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x14092A724 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x14092AE10 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1403D3FFC (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
