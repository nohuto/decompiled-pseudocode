/*
 * XREFs of safe_cast_fnid_to_PTOOLTIPWND @ 0x1C011CA90
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00BAAC4 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00BD088 (xxxCancelMouseMoveTracking.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     _SetDoubleClickTime @ 0x1C011C9B0 (_SetDoubleClickTime.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall safe_cast_fnid_to_PTOOLTIPWND(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int16 v6; // ax

  if ( !a1 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v5 + 42) & 0x1000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v5, a3, a4);
    v5 = *(_QWORD *)(a1 + 40);
  }
  v6 = *(_WORD *)(v5 + 42);
  if ( (v6 & 0x1000) != 0 || (v6 & 0x2FFF) != 0x2B6 )
    return 0LL;
  if ( *(_DWORD *)(v5 + 252) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v5 + 296);
}
