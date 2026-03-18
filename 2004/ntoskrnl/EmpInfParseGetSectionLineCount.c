/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x140A41898
 * Callers:
 *     EmpParseEntryTypes @ 0x140A4098C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140A40B04 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140A41390 (EmpParseRules.c)
 *     EmpParseStrings @ 0x140A416AC (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140A418EC (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140A41F60 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140A41F90 (CmpSearchSectionByName.c)
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
