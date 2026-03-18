/*
 * XREFs of HvlGetReferenceTime @ 0x14038AA58
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14026EAE0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     HvlGetPpmStatsForProcessor @ 0x14038A9C0 (HvlGetPpmStatsForProcessor.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x140576A50 (PpmHvSnapPerformanceAccumulation.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x14038AA90 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlpGetRegister64 @ 0x1404F47B0 (HvlpGetRegister64.c)
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
