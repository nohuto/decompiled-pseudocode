/*
 * XREFs of PopThermalZoneTimerCallback @ 0x14056E100
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x140318CD0 (IoCancelIrp.c)
 */

BOOLEAN __fastcall PopThermalZoneTimerCallback(__int64 a1, __int64 a2)
{
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
