/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x1403AB318
 * Callers:
 *     HalpTimerInitializeEarlyStallSource @ 0x1403AA2D8 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403AA3C8 (HalpInitializeTimers.c)
 * Callees:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403AB34C (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpWdatDiscover @ 0x1403ACE40 (HalpWdatDiscover.c)
 *     HalpHvDiscover @ 0x1403AD2BC (HalpHvDiscover.c)
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
