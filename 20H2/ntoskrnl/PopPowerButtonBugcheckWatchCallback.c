/*
 * XREFs of PopPowerButtonBugcheckWatchCallback @ 0x1408F49E0
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerButtonBugcheckConfigure @ 0x14078C68C (PopPowerButtonBugcheckConfigure.c)
 */

NTSTATUS __fastcall PopPowerButtonBugcheckWatchCallback(void *a1)
{
  return PopPowerButtonBugcheckConfigure(a1);
}
