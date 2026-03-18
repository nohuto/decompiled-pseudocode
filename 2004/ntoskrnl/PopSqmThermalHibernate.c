/*
 * XREFs of PopSqmThermalHibernate @ 0x1408F69B4
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C2228 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x1408F67B8 (PopSqmThermalCriticalEvent.c)
 */

char __fastcall PopSqmThermalHibernate(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 188), 0);
}
