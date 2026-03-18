/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x1403ADFE8
 * Callers:
 *     HalpTimerInitializeEarlyStallSource @ 0x1403ACFB0 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403AD0A0 (HalpInitializeTimers.c)
 * Callees:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403AE01C (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpWdatDiscover @ 0x1403AFB10 (HalpWdatDiscover.c)
 *     HalpHvDiscover @ 0x1403AFF8C (HalpHvDiscover.c)
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
