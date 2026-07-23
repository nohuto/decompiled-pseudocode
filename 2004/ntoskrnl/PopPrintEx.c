/*
 * XREFs of PopPrintEx @ 0x1403612F8
 * Callers:
 *     PopCoalescingSetTimer @ 0x140569824 (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x1405CF974 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopSessionInputChange @ 0x140711DE0 (PopSessionInputChange.c)
 *     PopUpdateTimeouts @ 0x14071217C (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x140712330 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x140712414 (PopEvaluateGlobalUserStatus.c)
 *     PopSetSessionDisplayStatus @ 0x14076F628 (PopSetSessionDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14077B54C (PopSessionConnectionChange.c)
 *     PoFxRegisterDevice @ 0x1407A07D0 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1407AE3D4 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x1408E3270 (PopCoalescingNotify.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408E751C (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1408E754C (PopDiagTraceIoCoalescingOn.c)
 *     PopDeferDoze @ 0x1408ED038 (PopDeferDoze.c)
 *     PopCheckConsoleTimeouts @ 0x1408F1BD4 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403613C0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, __int64 a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x92u, Level, va, 1);
}
