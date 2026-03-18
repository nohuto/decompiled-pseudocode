/*
 * XREFs of RIMResetPointerDevicePrimaryContact @ 0x1C017F974
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0162A54 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C017FAE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMResetPointerDevicePrimaryContact(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 32) & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
      v1 = *(_QWORD *)(a1 + 960);
    }
    result = *(unsigned int *)(v1 + 32);
    if ( (result & 8) == 0 )
    {
      result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
      v1 = *(_QWORD *)(a1 + 960);
    }
    *(_DWORD *)(v1 + 32) &= ~8u;
    *(_QWORD *)(a1 + 960) = 0LL;
  }
  return result;
}
