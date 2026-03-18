/*
 * XREFs of WdtpArmTimer @ 0x14033BFE0
 * Callers:
 *     PnpEnableWatchdog @ 0x1406F4BBC (PnpEnableWatchdog.c)
 * Callees:
 *     ExSetTimer @ 0x14033C8D0 (ExSetTimer.c)
 */

__int64 __fastcall WdtpArmTimer(__int64 a1)
{
  return ExSetTimer(*(_QWORD *)(a1 + 56));
}
