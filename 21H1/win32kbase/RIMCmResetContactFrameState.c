/*
 * XREFs of RIMCmResetContactFrameState @ 0x1C0186C84
 * Callers:
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C017FAE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimProcessPointerDeviceContact @ 0x1C018341C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall RIMCmResetContactFrameState(_DWORD *a1)
{
  if ( (a1[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  a1[585] &= 0xFFFFFFF8;
  return memset(a1 + 586, 0, 0xF0uLL);
}
