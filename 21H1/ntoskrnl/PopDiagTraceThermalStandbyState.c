/*
 * XREFs of PopDiagTraceThermalStandbyState @ 0x14056D670
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C1368 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x1408E36F0 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceThermalStateChange @ 0x14056D68C (PopDiagTraceThermalStateChange.c)
 */

__int64 __fastcall PopDiagTraceThermalStandbyState(__int64 a1, __int64 a2)
{
  return PopDiagTraceThermalStateChange(a1, a2, POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
}
