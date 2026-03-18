/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x1403BCA0C
 * Callers:
 *     HalpInitializeTimers @ 0x1403BBAC8 (HalpInitializeTimers.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x1403BBDD4 (HalpTimerInitializeEarlyStallSource.c)
 * Callees:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403BCA40 (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpWdatDiscover @ 0x1403BE570 (HalpWdatDiscover.c)
 *     HalpHvDiscover @ 0x1403BEA4C (HalpHvDiscover.c)
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
