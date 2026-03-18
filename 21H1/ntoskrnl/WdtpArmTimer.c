/*
 * XREFs of WdtpArmTimer @ 0x14035B400
 * Callers:
 *     PnpEnableWatchdog @ 0x14070AF34 (PnpEnableWatchdog.c)
 * Callees:
 *     ExSetTimer @ 0x14035BB10 (ExSetTimer.c)
 */

__int64 __fastcall WdtpArmTimer(__int64 a1)
{
  return ExSetTimer(*(_QWORD *)(a1 + 56));
}
