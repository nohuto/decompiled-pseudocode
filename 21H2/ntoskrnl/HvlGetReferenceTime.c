/*
 * XREFs of HvlGetReferenceTime @ 0x14039AF3C
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140304A20 (PpmCheckSnapAllDeliveredPerformance.c)
 *     HvlGetPpmStatsForProcessor @ 0x14039AEA4 (HvlGetPpmStatsForProcessor.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x1405DC4F8 (PpmHvSnapPerformanceAccumulation.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x14039AF70 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlpGetRegister64 @ 0x14054BFF0 (HvlpGetRegister64.c)
 */

__int64 HvlGetReferenceTime()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage(0LL);
  HvlpGetRegister64(589828LL, &v1);
  return v1;
}
