/*
 * XREFs of iswspace @ 0x1403CE410
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x140922BE0 (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x14092364C (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140923D38 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1403D052C (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
