/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x1403B05D8
 * Callers:
 *     HalpTimerInitializeEarlyStallSource @ 0x1403AF598 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403AF688 (HalpInitializeTimers.c)
 * Callees:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403B060C (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpWdatDiscover @ 0x1403B2100 (HalpWdatDiscover.c)
 *     HalpHvDiscover @ 0x1403B257C (HalpHvDiscover.c)
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
