/*
 * XREFs of WdtpArmTimer @ 0x140275250
 * Callers:
 *     PnpEnableWatchdog @ 0x140649940 (PnpEnableWatchdog.c)
 * Callees:
 *     ExSetTimer @ 0x140275960 (ExSetTimer.c)
 */

__int64 __fastcall WdtpArmTimer(__int64 a1)
{
  return ExSetTimer(*(_QWORD *)(a1 + 56));
}
