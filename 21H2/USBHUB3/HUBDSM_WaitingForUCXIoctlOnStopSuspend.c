/*
 * XREFs of HUBDSM_WaitingForUCXIoctlOnStopSuspend @ 0x1C001E610
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_CancelUCXIoctl @ 0x1C0023F88 (HUBUCX_CancelUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_WaitingForUCXIoctlOnStopSuspend(__int64 a1)
{
  HUBUCX_CancelUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
