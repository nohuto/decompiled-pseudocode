/*
 * XREFs of ?ToggleMMCSSForDT@@YGXXZ @ 0xC4470
 * Callers:
 *     __EnableSessionForMMCSS@4 @ 0xC4416 (__EnableSessionForMMCSS@4.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

void __stdcall ToggleMMCSSForDT()
{
  int CurrentProcess; // eax

  CurrentProcess = PsGetCurrentProcess();
  if ( !IsProcessDwm(CurrentProcess) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  KeSetEvent(Event, 1, 0);
}
