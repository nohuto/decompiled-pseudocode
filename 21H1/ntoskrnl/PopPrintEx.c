/*
 * XREFs of PopPrintEx @ 0x14033C680
 * Callers:
 *     PopCoalescingSetTimer @ 0x1405691D4 (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x1405CE5A4 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x1406FE594 (PopSessionInputChange.c)
 *     PopUpdateTimeouts @ 0x1406FE9F8 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x1406FEBAC (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406FEC90 (PopEvaluateGlobalUserStatus.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopSetSessionDisplayStatus @ 0x14076CE88 (PopSetSessionDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14077913C (PopSessionConnectionChange.c)
 *     PoFxRegisterDevice @ 0x14079C7F0 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1407AB274 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x1408E1FF0 (PopCoalescingNotify.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408E629C (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1408E62CC (PopDiagTraceIoCoalescingOn.c)
 *     PopDeferDoze @ 0x1408EBDB8 (PopDeferDoze.c)
 *     PopCheckConsoleTimeouts @ 0x1408F08E4 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14033C750 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, __int64 a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x92u, Level, va, 1);
}
