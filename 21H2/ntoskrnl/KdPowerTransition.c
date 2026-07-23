/*
 * XREFs of KdPowerTransition @ 0x1405111E0
 * Callers:
 *     PopHandleNextState @ 0x1409940D0 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x1409947A0 (PopSaveHiberContext.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x140511200 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return KdPowerTransitionEx(a1, a2);
}
