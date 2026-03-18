/*
 * XREFs of ?SetProximityBlocking@@YAXXZ @ 0x1C011D9D0
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0074424 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PowerOffMonitor @ 0x1C00C8920 (PowerOffMonitor.c)
 * Callees:
 *     <none>
 */

void SetProximityBlocking(void)
{
  if ( !HIDWORD(qword_1C024B1AC) )
  {
    gProximityLastPowerPressTime = -1LL;
    ++gProximityScenarioCount;
    HIDWORD(qword_1C024B1AC) = 1;
  }
}
