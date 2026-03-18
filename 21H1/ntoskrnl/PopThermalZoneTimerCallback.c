/*
 * XREFs of PopThermalZoneTimerCallback @ 0x14056A080
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x14030AD00 (IoCancelIrp.c)
 */

BOOLEAN __fastcall PopThermalZoneTimerCallback(__int64 a1, __int64 a2)
{
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
