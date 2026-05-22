/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800908E8
 * Callers:
 *     ?OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x180022DB0 (-OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18002E158 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?OnRIMPnpEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x180038AC0 (-OnRIMPnpEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnRIMAutoRepeatEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x180090930 (-OnRIMAutoRepeatEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnRIMTimerEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x1800909B0 (-OnRIMTimerEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x180090A30 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800967A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180189AC0 (-OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@HeatProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180189C30 (-OnInputReport@HeatProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180035748 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, __int64 a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  wil::details::ReportFailure_Hr((__int64)this, a2, a3, 0LL, 0LL, retaddr);
  return v4;
}
