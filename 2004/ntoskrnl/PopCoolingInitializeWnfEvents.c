/*
 * XREFs of PopCoolingInitializeWnfEvents @ 0x140A905F8
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     PopUpdateBackgroundCoolingStatus @ 0x1407C1D84 (PopUpdateBackgroundCoolingStatus.c)
 */

void __noreturn PopCoolingInitializeWnfEvents()
{
  PopUpdateBackgroundCoolingStatus(0);
}
