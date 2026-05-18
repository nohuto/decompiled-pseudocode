/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x18000DD80
 * Callers:
 *     IsWaitForInputIdlePresent @ 0x18000D244 (IsWaitForInputIdlePresent.c)
 *     IsEnumDisplayDevicesWPresent @ 0x18000D324 (IsEnumDisplayDevicesWPresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x18000D404 (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x18000D570 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
