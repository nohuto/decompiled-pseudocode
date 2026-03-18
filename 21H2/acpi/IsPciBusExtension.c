/*
 * XREFs of IsPciBusExtension @ 0x1C00B024C
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C002CDC0 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     IsNsobjPciBus @ 0x1C0094D74 (IsNsobjPciBus.c)
 */

char __fastcall IsPciBusExtension(__int64 a1)
{
  return IsNsobjPciBus(*(volatile signed __int32 **)(a1 + 760));
}
