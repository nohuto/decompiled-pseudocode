/*
 * XREFs of HUBHSM_WaitingForDevicesToReleaseReferenceOnSuspend @ 0x1C0008AD0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueuePowerDownEventToDSMs @ 0x1C000FB28 (HUBMUX_QueuePowerDownEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_WaitingForDevicesToReleaseReferenceOnSuspend(__int64 a1)
{
  HUBMUX_QueuePowerDownEventToDSMs(*(_QWORD *)(a1 + 960), 4030LL);
  return 1000LL;
}
