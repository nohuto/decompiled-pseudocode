/*
 * XREFs of PopComputeWatchdogTimeout @ 0x1403950AC
 * Callers:
 *     PoQueryWatchdogTime @ 0x140231B90 (PoQueryWatchdogTime.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x140377FEC (PopDiagTraceIrpFinishTelemetry.c)
 *     PopEnableIrpWatchdog @ 0x14039500C (PopEnableIrpWatchdog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopComputeWatchdogTimeout(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 188);
  if ( !v1 && *(_DWORD *)(a1 + 192) == 1 || v1 == 1 && *(_DWORD *)(a1 + 192) == 1 )
    return (unsigned int)PopWatchdogResumeTimeout;
  else
    return (unsigned int)PopWatchdogSleepTimeout;
}
