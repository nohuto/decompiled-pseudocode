/*
 * XREFs of KdPowerTransition @ 0x1405657E0
 * Callers:
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x1403DA590 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(int a1)
{
  return KdPowerTransitionEx(a1, 1);
}
