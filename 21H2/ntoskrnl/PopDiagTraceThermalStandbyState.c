/*
 * XREFs of PopDiagTraceThermalStandbyState @ 0x1405D36C0
 * Callers:
 *     PopThermalZoneRemove @ 0x140990740 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceThermalStateChange @ 0x1405D36DC (PopDiagTraceThermalStateChange.c)
 */

__int64 __fastcall PopDiagTraceThermalStandbyState(__int64 a1, __int64 a2)
{
  return PopDiagTraceThermalStateChange(a1, a2, POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
}
