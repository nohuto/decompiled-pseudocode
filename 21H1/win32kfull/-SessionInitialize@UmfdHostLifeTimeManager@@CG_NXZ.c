/*
 * XREFs of ?SessionInitialize@UmfdHostLifeTimeManager@@CG_NXZ @ 0xE6078
 * Callers:
 *     _UmfdSessionInitialize@0 @ 0xE5DB0 (_UmfdSessionInitialize@0.c)
 * Callees:
 *     <none>
 */

char __stdcall UmfdHostLifeTimeManager::SessionInitialize()
{
  UmfdHostLifeTimeManager::s_WinlogonCallbackEvent = (PRKEVENT)Win32AllocPoolNonPaged(16, 1986348102);
  if ( !UmfdHostLifeTimeManager::s_WinlogonCallbackEvent )
    return 0;
  UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent = (PVOID)Win32AllocPoolNonPaged(16, 1986348102);
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent )
    return 0;
  UmfdHostLifeTimeManager::s_InitialFontsAddedEvent = (PRKEVENT)Win32AllocPoolNonPaged(16, 1986348102);
  if ( !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
    return 0;
  UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent = (PVOID)Win32AllocPoolNonPaged(16, 1986348102);
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent )
    return 0;
  GreInitializePushLock(&UmfdHostLifeTimeManager::s_ReadyLock);
  GreInitializePushLock(&UmfdHostLifeTimeManager::s_LaunchLock);
  KeInitializeEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, NotificationEvent, 0);
  KeInitializeEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent, NotificationEvent, 0);
  return 1;
}
