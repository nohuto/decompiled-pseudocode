/*
 * XREFs of strtoul @ 0x1403CD0C0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     EmpParseCallbacks @ 0x140A47B74 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140A48400 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x140A491F0 (EmpParseRuleTermArgMapping.c)
 *     EmpCacheBiosDate @ 0x140A4950C (EmpCacheBiosDate.c)
 *     CmpGetBiosDate @ 0x140A51FDC (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1403CCE30 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
