/*
 * XREFs of ?SessionUninitialize@UmfdHostLifeTimeManager@@CGXXZ @ 0xD39E6
 * Callers:
 *     _UmfdSessionUninitialize@0 @ 0xD39AC (_UmfdSessionUninitialize@0.c)
 * Callees:
 *     <none>
 */

void __stdcall UmfdHostLifeTimeManager::SessionUninitialize()
{
  if ( UmfdHostLifeTimeManager::s_WinlogonCallbackEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent);
    UmfdHostLifeTimeManager::s_WinlogonCallbackEvent = 0;
  }
  if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent);
    UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent = 0;
  }
  if ( UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent);
    UmfdHostLifeTimeManager::s_InitialFontsAddedEvent = 0;
  }
  if ( UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent);
    UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent = 0;
  }
}
