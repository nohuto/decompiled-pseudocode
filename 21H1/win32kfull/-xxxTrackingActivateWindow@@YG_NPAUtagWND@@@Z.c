/*
 * XREFs of ?xxxTrackingActivateWindow@@YG_NPAUtagWND@@@Z @ 0x141930
 * Callers:
 *     _xxxActiveWindowTracking@12 @ 0x14ECA1 (_xxxActiveWindowTracking@12.c)
 * Callees:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::IsForegroundWindow @ 0xAD3E2 (_anonymous_namespace_--IsForegroundWindow.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

bool __thiscall xxxTrackingActivateWindow(int *this)
{
  bool result; // al

  if ( ((unsigned __int8)_gpdwCPUserPreferencesMask & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  result = anonymous_namespace_::IsForegroundWindow(this);
  if ( !result )
  {
    if ( *(_DWORD *)(this[2] + 236) == _gpqForeground )
      return anonymous_namespace_::xxxLocalActivateWindow(
               this,
               0,
               ~(unsigned __int8)((unsigned int)_gpdwCPUserPreferencesMask >> 5) & 2);
    else
      return xxxSetForegroundWindow2(
               (int)this,
               0,
               ~(unsigned __int8)((unsigned int)_gpdwCPUserPreferencesMask >> 4) & 4 | 2) != 0;
  }
  return result;
}
