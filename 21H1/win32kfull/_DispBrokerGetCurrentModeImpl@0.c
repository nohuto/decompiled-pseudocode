/*
 * XREFs of _DispBrokerGetCurrentModeImpl@0 @ 0xEA730
 * Callers:
 *     <none>
 * Callees:
 *     ?Feature_DesktopDisplayBroker__private_IsEnabledPreCheck@@YGHXZ @ 0xEA758 (-Feature_DesktopDisplayBroker__private_IsEnabledPreCheck@@YGHXZ.c)
 *     ?Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck@@YGHXZ @ 0xEA77A (-Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck@@YGHXZ.c)
 */

int __stdcall DispBrokerGetCurrentModeImpl()
{
  Feature_DesktopDisplayBroker__private_IsEnabledPreCheck();
  if ( UserIsConsoleConnection() )
  {
    Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck();
    return 0;
  }
  if ( !UserRemoteConnectedSessionUsingWddm() )
    return 0;
  return 3;
}
