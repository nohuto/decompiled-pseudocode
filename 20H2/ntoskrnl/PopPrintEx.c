/*
 * XREFs of PopPrintEx @ 0x140364760
 * Callers:
 *     PopCoalescingSetTimer @ 0x14056D254 (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x1405D5E24 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopUpdateTimeouts @ 0x14072089C (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x140720A50 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x140720B34 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionInputChange @ 0x140720ED0 (PopSessionInputChange.c)
 *     PopSetSessionDisplayStatus @ 0x14077DBD8 (PopSetSessionDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x140789B4C (PopSessionConnectionChange.c)
 *     PoFxRegisterDevice @ 0x1407AFB00 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1407BC314 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x1408E90B0 (PopCoalescingNotify.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408ED12C (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1408ED15C (PopDiagTraceIoCoalescingOn.c)
 *     PopDeferDoze @ 0x1408F2C48 (PopDeferDoze.c)
 *     PopCheckConsoleTimeouts @ 0x1408F77E4 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140364830 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, __int64 a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x92u, Level, va, 1);
}
