/*
 * XREFs of ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D3030
 * Callers:
 *     xxxActiveWindowTracking @ 0x1C01E2F7C (xxxActiveWindowTracking.c)
 * Callees:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::IsForegroundWindow @ 0x1C00F5C58 (_anonymous_namespace_--IsForegroundWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall xxxTrackingActivateWindow(struct tagWND *a1)
{
  bool result; // al

  if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, (unsigned int)gpdwCPUserPreferencesMask);
  result = anonymous_namespace_::IsForegroundWindow((__int64)a1);
  if ( !result )
  {
    if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == gpqForeground )
      return anonymous_namespace_::xxxLocalActivateWindow(
               a1,
               0,
               ~(unsigned __int8)((unsigned int)gpdwCPUserPreferencesMask >> 5) & 2);
    else
      return (unsigned int)xxxSetForegroundWindow2(
                             (__int64)a1,
                             0LL,
                             ~(unsigned __int8)((unsigned int)gpdwCPUserPreferencesMask >> 4) & 4 | 2u) != 0;
  }
  return result;
}
