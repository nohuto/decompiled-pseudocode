/*
 * XREFs of WdipSemLogTimeoutInformation @ 0x140932CE0
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1406F3CC0 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     WdipSemWriteTimeoutEvent @ 0x140933074 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmEnabled @ 0x140933410 (WdipSemSqmEnabled.c)
 *     WdipSemSqmLogTimeoutDataPoints @ 0x140933500 (WdipSemSqmLogTimeoutDataPoints.c)
 */

__int64 __fastcall WdipSemLogTimeoutInformation(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v6; // ebx

  v3 = a2;
  v6 = 0;
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_TIMEOUT) )
  {
    v6 = WdipSemWriteTimeoutEvent(a1, (unsigned __int16)v3, a3);
    if ( v6 < 0 )
      v6 = 0;
  }
  if ( (unsigned __int8)WdipSemSqmEnabled() )
  {
    v6 = WdipSemSqmLogTimeoutDataPoints(a1, v3);
    if ( v6 < 0 )
      return 0;
  }
  return (unsigned int)v6;
}
