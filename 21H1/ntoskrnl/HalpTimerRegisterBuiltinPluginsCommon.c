/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x1403A6F28
 * Callers:
 *     HalpTimerInitializeEarlyStallSource @ 0x1403A5EF0 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403A5FE0 (HalpInitializeTimers.c)
 * Callees:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403A6F5C (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpWdatDiscover @ 0x1403A8A50 (HalpWdatDiscover.c)
 *     HalpHvDiscover @ 0x1403A8ECC (HalpHvDiscover.c)
 */

__int64 __fastcall HalpTimerRegisterBuiltinPluginsCommon(int a1)
{
  __int64 result; // rax

  result = HalpTimerRegisterBuiltinPlugins();
  if ( (int)result >= 0 && a1 == 1 )
  {
    result = HalpHvDiscover();
    if ( (int)result >= 0 )
      return HalpWdatDiscover();
  }
  return result;
}
