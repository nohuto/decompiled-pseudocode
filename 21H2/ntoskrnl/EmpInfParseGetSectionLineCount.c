/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x140B0CD58
 * Callers:
 *     EmpParseEntryTypes @ 0x140B0BE8C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140B0C004 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140B0C87C (EmpParseRules.c)
 *     EmpParseStrings @ 0x140B0CB80 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140B0CDAC (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140B0D440 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140B0D470 (CmpSearchSectionByName.c)
 */

__int64 __fastcall EmpInfParseGetSectionLineCount(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  __int64 v5; // rax

  for ( i = 0; ; ++i )
  {
    v5 = CmpSearchSectionByName(a1, a2);
    if ( !v5 || !CmpSearchLineInSectionByIndex(v5, i) )
      break;
  }
  return i;
}
