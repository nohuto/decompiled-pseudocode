/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x140A48908
 * Callers:
 *     EmpParseEntryTypes @ 0x140A479FC (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140A47B74 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140A48400 (EmpParseRules.c)
 *     EmpParseStrings @ 0x140A4871C (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140A4895C (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140A48FD0 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140A49000 (CmpSearchSectionByName.c)
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
