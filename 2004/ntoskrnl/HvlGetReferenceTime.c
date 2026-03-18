/*
 * XREFs of HvlGetReferenceTime @ 0x14038B5C8
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140215A90 (PpmCheckSnapAllDeliveredPerformance.c)
 *     HvlGetPpmStatsForProcessor @ 0x14038B530 (HvlGetPpmStatsForProcessor.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x1405770A0 (PpmHvSnapPerformanceAccumulation.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x14038B600 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlpGetRegister64 @ 0x1404F4E00 (HvlpGetRegister64.c)
 */

__int64 HvlGetReferenceTime()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage();
  HvlpGetRegister64(589828LL, &v1);
  return v1;
}
