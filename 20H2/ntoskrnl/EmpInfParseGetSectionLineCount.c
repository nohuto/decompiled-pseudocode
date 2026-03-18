/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x140A47B38
 * Callers:
 *     EmpParseEntryTypes @ 0x140A46C2C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140A46DA4 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140A47630 (EmpParseRules.c)
 *     EmpParseStrings @ 0x140A4794C (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140A47B8C (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140A48200 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140A48230 (CmpSearchSectionByName.c)
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
