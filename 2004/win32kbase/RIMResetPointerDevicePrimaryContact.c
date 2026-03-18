/*
 * XREFs of RIMResetPointerDevicePrimaryContact @ 0x1C0179C74
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C015C704 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0179DE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMResetPointerDevicePrimaryContact(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 960);
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 32) & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v4, a3, a4);
      v4 = *(_QWORD *)(a1 + 960);
    }
    result = *(unsigned int *)(v4 + 32);
    if ( (result & 8) == 0 )
    {
      result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v4, a3, a4);
      v4 = *(_QWORD *)(a1 + 960);
    }
    *(_DWORD *)(v4 + 32) &= ~8u;
    *(_QWORD *)(a1 + 960) = 0LL;
  }
  return result;
}
