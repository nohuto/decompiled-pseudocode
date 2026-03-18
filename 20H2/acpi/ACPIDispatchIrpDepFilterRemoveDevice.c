/*
 * XREFs of ACPIDispatchIrpDepFilterRemoveDevice @ 0x1C00555E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIFilterIrpRemoveDevice @ 0x1C002CA30 (ACPIFilterIrpRemoveDevice.c)
 */

__int64 __fastcall ACPIDispatchIrpDepFilterRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  return ACPIFilterIrpRemoveDevice(a1, a2);
}
