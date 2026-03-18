/*
 * XREFs of HalpInterruptThermalService @ 0x1404D0D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 HalpInterruptThermalService()
{
  return ((__int64 (*)(void))HalpInterruptThermalServiceRoutine)();
}
