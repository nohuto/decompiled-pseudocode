/*
 * XREFs of strtoul @ 0x1403D0B90
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     EmpParseCallbacks @ 0x140A46DA4 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140A47630 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x140A48420 (EmpParseRuleTermArgMapping.c)
 *     EmpCacheBiosDate @ 0x140A4873C (EmpCacheBiosDate.c)
 *     CmpGetBiosDate @ 0x140A5835C (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1403D0900 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
