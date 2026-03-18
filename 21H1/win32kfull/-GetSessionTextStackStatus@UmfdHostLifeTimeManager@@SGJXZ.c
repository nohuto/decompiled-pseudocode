/*
 * XREFs of ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SGJXZ @ 0x49AEE
 * Callers:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ @ 0x49A66 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ.c)
 *     _GreEnableEUDC@4 @ 0xEBCF6 (_GreEnableEUDC@4.c)
 *     GreEudcLoadLinkW @ 0x1F7AA9 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1F7CCC (GreEudcUnloadLinkW.c)
 * Callees:
 *     <none>
 */

int __stdcall UmfdHostLifeTimeManager::GetSessionTextStackStatus()
{
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
    || !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
    return -1073741595;
  }
  if ( KeReadStateEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
    && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    && KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
  {
    return 0;
  }
  return 259;
}
