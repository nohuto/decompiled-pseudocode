/*
 * XREFs of KdPowerTransition @ 0x140510FA0
 * Callers:
 *     PopHandleNextState @ 0x1409930D0 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x1409937A0 (PopSaveHiberContext.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x140510FC0 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return KdPowerTransitionEx(a1, a2);
}
