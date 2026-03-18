/*
 * XREFs of PopThermalStandbyNotify @ 0x140569DDC
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C1368 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsExit @ 0x140569D60 (PopThermalCsExit.c)
 *     PopThermalZoneRemove @ 0x1408E36F0 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopThermalStandbyNotify(char a1)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = 1;
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_THERMAL_STANDBY_NOTIFICATION);
  }
  else
  {
    v2 = 0;
  }
  return ZwUpdateWnfStateData((__int64)&WNF_PO_THERMAL_STANDBY, (__int64)&v2);
}
