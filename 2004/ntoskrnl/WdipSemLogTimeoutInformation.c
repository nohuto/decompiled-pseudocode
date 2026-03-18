/*
 * XREFs of WdipSemLogTimeoutInformation @ 0x14092CEB0
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14064CAE0 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     WdipSemWriteTimeoutEvent @ 0x14092D244 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmEnabled @ 0x14092D5E0 (WdipSemSqmEnabled.c)
 *     WdipSemSqmLogTimeoutDataPoints @ 0x14092D6D0 (WdipSemSqmLogTimeoutDataPoints.c)
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
