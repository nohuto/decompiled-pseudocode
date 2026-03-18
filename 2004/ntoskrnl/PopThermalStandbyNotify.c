/*
 * XREFs of PopThermalStandbyNotify @ 0x14056A42C
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C2228 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsExit @ 0x14056A3B0 (PopThermalCsExit.c)
 *     PopThermalZoneRemove @ 0x1408E4970 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14035B1A4 (PopDiagTraceEventNoPayload.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
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
