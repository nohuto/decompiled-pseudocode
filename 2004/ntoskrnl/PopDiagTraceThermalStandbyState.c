/*
 * XREFs of PopDiagTraceThermalStandbyState @ 0x14056DCC0
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C2228 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x1408E4970 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceThermalStateChange @ 0x14056DCDC (PopDiagTraceThermalStateChange.c)
 */

__int64 __fastcall PopDiagTraceThermalStandbyState(__int64 a1, __int64 a2)
{
  return PopDiagTraceThermalStateChange(a1, a2, POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
}
