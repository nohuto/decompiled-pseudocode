/*
 * XREFs of ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D2220
 * Callers:
 *     xxxActiveWindowTracking @ 0x1C01E22BC (xxxActiveWindowTracking.c)
 * Callees:
 *     _anonymous_namespace_::IsForegroundWindow @ 0x1C000F5D8 (_anonymous_namespace_--IsForegroundWindow.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall xxxTrackingActivateWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool result; // al

  if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, (unsigned int)gpdwCPUserPreferencesMask, a3, a4);
  result = anonymous_namespace_::IsForegroundWindow((__int64)a1);
  if ( !result )
  {
    if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == gpqForeground )
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
