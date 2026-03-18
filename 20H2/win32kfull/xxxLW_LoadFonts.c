/*
 * XREFs of xxxLW_LoadFonts @ 0x1C0022640
 * Callers:
 *     UserOnGreTextReady @ 0x1C0022DC8 (UserOnGreTextReady.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C0022710 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00228B0 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     EngCloseFNTCache @ 0x1C0022BA0 (EngCloseFNTCache.c)
 *     ClientLoadLocalT1Fonts @ 0x1C0022D18 (ClientLoadLocalT1Fonts.c)
 *     xxxAddFontResourceW @ 0x1C0073C1C (xxxAddFontResourceW.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C008CB60 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

__int64 __fastcall xxxLW_LoadFonts(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rcx
  unsigned int v3; // edi
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1;
  UserSessionSwitchLeaveCrit(a1);
  if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    EnterCrit(0LL, 1LL);
    return 0LL;
  }
  else
  {
    EnterCrit(0LL, 1LL);
    if ( v1 )
    {
      Interval.QuadPart = 0LL;
      v3 = 0;
      if ( gbPermanentFontsLoaded )
      {
LABEL_8:
        xxxLoadUserAndNetworkFonts();
      }
      else
      {
        while ( !gbNonServiceSession || v3 < 0x960 )
        {
          if ( gdwInAtomicOperation )
          {
            v2 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v2);
          Interval.QuadPart = -2500000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          EnterCrit(0LL, 1LL);
          ++v3;
          if ( gbPermanentFontsLoaded )
            goto LABEL_8;
        }
      }
      gbNetworkFontsLoaded = 1;
    }
    else
    {
      xxxAddFontResourceW(L"marlett.ttf");
      if ( (unsigned int)xxxLoadPermanentFonts() && !gbPermanentT1FontsLoaded )
      {
        if ( gbPermanentFontsLoaded )
        {
          ClientLoadLocalT1Fonts();
          gbPermanentT1FontsLoaded = 1;
          Interval.QuadPart = ghsemFntCache;
          GreAcquireSemaphore(ghsemFntCache);
          EngCloseFNTCache();
          SEMOBJ::vUnlock((SEMOBJ *)&Interval);
        }
      }
    }
    return 1LL;
  }
}
