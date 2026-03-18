/*
 * XREFs of KdPowerTransition @ 0x14050F470
 * Callers:
 *     PopHandleNextState @ 0x1409960D0 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x1409967A0 (PopSaveHiberContext.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x14050F490 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return KdPowerTransitionEx(a1, a2);
}
