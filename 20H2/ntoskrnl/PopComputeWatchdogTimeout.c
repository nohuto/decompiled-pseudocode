/*
 * XREFs of PopComputeWatchdogTimeout @ 0x14039813C
 * Callers:
 *     PoQueryWatchdogTime @ 0x14030F300 (PoQueryWatchdogTime.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x14037AB2C (PopDiagTraceIrpFinishTelemetry.c)
 *     PopEnableIrpWatchdog @ 0x14039809C (PopEnableIrpWatchdog.c)
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
