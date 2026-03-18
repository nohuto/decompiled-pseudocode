/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1400048E0
 * Callers:
 *     IsChangeWindowMessageFilterExPresent @ 0x140004324 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterHotKeyPresent @ 0x140004404 (IsRegisterHotKeyPresent.c)
 *     IsWerReportCreatePresent @ 0x140004630 (IsWerReportCreatePresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x1400046E4 (IsDWMGhostHandleGhostMsgPresent.c)
 *     IsImmDisableIMEPresent @ 0x1400047FC (IsImmDisableIMEPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
