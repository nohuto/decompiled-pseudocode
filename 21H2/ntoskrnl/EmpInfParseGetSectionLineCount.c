/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x140A47A88
 * Callers:
 *     EmpParseEntryTypes @ 0x140A46B7C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140A46CF4 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140A47580 (EmpParseRules.c)
 *     EmpParseStrings @ 0x140A4789C (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140A47ADC (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140A48150 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140A48180 (CmpSearchSectionByName.c)
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
