/*
 * XREFs of ?ToggleMMCSSForDT@@YAXXZ @ 0x1C010381C
 * Callers:
 *     _EnableSessionForMMCSS @ 0x1C0103790 (_EnableSessionForMMCSS.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ToggleMMCSSForDT(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  KeSetEvent(qword_1C033AEE8, 1, 0);
}
