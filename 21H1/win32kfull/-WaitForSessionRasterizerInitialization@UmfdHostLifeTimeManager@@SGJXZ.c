/*
 * XREFs of ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ @ 0x49A66
 * Callers:
 *     _GreGetCharSet@4 @ 0x496EA (_GreGetCharSet@4.c)
 *     _GreGetTextFaceW@16 @ 0x49888 (_GreGetTextFaceW@16.c)
 *     _GreGetOutlineTextMetricsInternalW@16 @ 0x85F6E (_GreGetOutlineTextMetricsInternalW@16.c)
 *     _xxxLW_LoadFonts@4 @ 0xD6E2E (_xxxLW_LoadFonts@4.c)
 *     _NtGdiAddFontResourceW@24 @ 0xDC320 (_NtGdiAddFontResourceW@24.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDE13E (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     _GreWaitForTextReady@0 @ 0xECA72 (_GreWaitForTextReady@0.c)
 *     ?dwGetFontLanguageInfo@@YGKAAVXDCOBJ@@@Z @ 0x1EB996 (-dwGetFontLanguageInfo@@YGKAAVXDCOBJ@@@Z.c)
 *     _NtGdiAddFontMemResourceEx@20 @ 0x21201C (_NtGdiAddFontMemResourceEx@20.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0x46590 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SGJXZ @ 0x49AEE (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SGJXZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDBA9E (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SG_NXZ.c)
 */

NTSTATUS __stdcall UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization()
{
  NTSTATUS result; // eax
  int v1; // esi
  bool v2; // bl

  result = UmfdHostLifeTimeManager::GetSessionTextStackStatus();
  v1 = 259;
  if ( result == 259 )
  {
    v2 = KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) != 0;
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      || UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread() )
    {
      if ( v2 )
        return 0;
      return v1;
    }
    else
    {
      if ( !v2 && UserIsUserCritSecIn() )
        return -1073741595;
      result = KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0);
      if ( result < 0 )
        return result;
      if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
      {
        KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0);
        return 0;
      }
      else
      {
        return -1073741595;
      }
    }
  }
  return result;
}
