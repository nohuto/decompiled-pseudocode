/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x1408F56A0
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C1368 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x1408F54C8 (PopSqmThermalCriticalEvent.c)
 */

char __fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 140), 1);
}
