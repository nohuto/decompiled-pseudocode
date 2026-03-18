/*
 * XREFs of RIMCmResetContactFrameState @ 0x1C017EB54
 * Callers:
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01779B8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimProcessPointerDeviceContact @ 0x1C017B2EC (rimProcessPointerDeviceContact.c)
 * Callees:
 *     memset @ 0x1C00D3740 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall RIMCmResetContactFrameState(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (a1[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  a1[585] &= 0xFFFFFFF8;
  return memset(a1 + 586, 0, 0xF0uLL);
}
