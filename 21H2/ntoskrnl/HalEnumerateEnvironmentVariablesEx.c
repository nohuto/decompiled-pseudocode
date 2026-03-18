/*
 * XREFs of HalEnumerateEnvironmentVariablesEx @ 0x140508560
 * Callers:
 *     <none>
 * Callees:
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x140508990 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 */

__int64 __fastcall HalEnumerateEnvironmentVariablesEx(__int64 a1, __int64 a2, __int64 a3)
{
  return HalpEnumerateEnvironmentVariablesWithFilter(a1, 0LL, a2, a3);
}
