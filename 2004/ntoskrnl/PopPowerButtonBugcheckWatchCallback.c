/*
 * XREFs of PopPowerButtonBugcheckWatchCallback @ 0x1408EEDD0
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerButtonBugcheckConfigure @ 0x14077F148 (PopPowerButtonBugcheckConfigure.c)
 */

NTSTATUS __fastcall PopPowerButtonBugcheckWatchCallback(void *a1)
{
  return PopPowerButtonBugcheckConfigure(a1);
}
