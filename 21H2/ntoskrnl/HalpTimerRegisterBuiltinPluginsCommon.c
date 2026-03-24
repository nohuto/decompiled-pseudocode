/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x1403AA588
 * Callers:
 *     HalpTimerInitializeEarlyStallSource @ 0x1403A9548 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403A9638 (HalpInitializeTimers.c)
 * Callees:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403AA5BC (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpWdatDiscover @ 0x1403AC0B0 (HalpWdatDiscover.c)
 *     HalpHvDiscover @ 0x1403AC52C (HalpHvDiscover.c)
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
