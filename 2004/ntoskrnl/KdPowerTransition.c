/*
 * XREFs of KdPowerTransition @ 0x14050BB40
 * Callers:
 *     PopHandleNextState @ 0x140990110 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x140990730 (PopSaveHiberContext.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x14050BB60 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return KdPowerTransitionEx(a1, a2);
}
