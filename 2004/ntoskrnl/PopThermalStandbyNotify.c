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

NTSTATUS __fastcall PopThermalStandbyNotify(char a1)
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
  {
    Buffer = 1;
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_THERMAL_STANDBY_NOTIFICATION);
  }
  else
  {
    Buffer = 0;
  }
  return ZwUpdateWnfStateData(&WNF_PO_THERMAL_STANDBY, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
