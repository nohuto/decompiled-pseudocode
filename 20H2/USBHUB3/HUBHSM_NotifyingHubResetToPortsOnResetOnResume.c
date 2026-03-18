/*
 * XREFs of HUBHSM_NotifyingHubResetToPortsOnResetOnResume @ 0x1C00082C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueueResetToAllPSMs @ 0x1C000F794 (HUBMUX_QueueResetToAllPSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubResetToPortsOnResetOnResume(__int64 a1)
{
  HUBMUX_QueueResetToAllPSMs(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
