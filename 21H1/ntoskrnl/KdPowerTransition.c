/*
 * XREFs of KdPowerTransition @ 0x14050B4F0
 * Callers:
 *     PopHandleNextState @ 0x14098F3C0 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x14050B510 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return KdPowerTransitionEx(a1, a2);
}
