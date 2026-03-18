/*
 * XREFs of strtoul @ 0x1403CDF00
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     EmpParseCallbacks @ 0x140A40B04 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140A41390 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x140A42180 (EmpParseRuleTermArgMapping.c)
 *     EmpCacheBiosDate @ 0x140A4249C (EmpCacheBiosDate.c)
 *     CmpGetBiosDate @ 0x140A57CDC (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1403CDC70 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
