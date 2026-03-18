/*
 * XREFs of HalpIommuPopulateExceptionList @ 0x1403DD65C
 * Callers:
 *     HalpIommuInitializeAll @ 0x140A543D8 (HalpIommuInitializeAll.c)
 * Callees:
 *     HalpIommuAddDebuggerException @ 0x1403DD678 (HalpIommuAddDebuggerException.c)
 */

__int64 HalpIommuPopulateExceptionList()
{
  __int64 result; // rax

  result = HalpIommuAddDebuggerException();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
