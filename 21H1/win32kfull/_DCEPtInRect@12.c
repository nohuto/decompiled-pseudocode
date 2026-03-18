/*
 * XREFs of _DCEPtInRect@12 @ 0x150BB6
 * Callers:
 *     _NtUserLogicalToPerMonitorDPIPhysicalPoint@8 @ 0x165DA7 (_NtUserLogicalToPerMonitorDPIPhysicalPoint@8.c)
 *     _NtUserLogicalToPhysicalPoint@8 @ 0x1660DB (_NtUserLogicalToPhysicalPoint@8.c)
 *     _NtUserPerMonitorDPIPhysicalToLogicalPoint@8 @ 0x167567 (_NtUserPerMonitorDPIPhysicalToLogicalPoint@8.c)
 *     _NtUserPhysicalToLogicalPoint@8 @ 0x16781D (_NtUserPhysicalToLogicalPoint@8.c)
 *     _EditionQueryInertiaWorker@12 @ 0x17CA46 (_EditionQueryInertiaWorker@12.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall DCEPtInRect(_DWORD *this, int a2, int a3)
{
  return this && a2 >= *this && a2 <= this[2] && a3 >= this[1] && a3 <= this[3];
}
