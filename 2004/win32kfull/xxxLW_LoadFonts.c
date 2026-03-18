/*
 * XREFs of xxxLW_LoadFonts @ 0x1C0009720
 * Callers:
 *     UserOnGreTextReady @ 0x1C0009D2C (UserOnGreTextReady.c)
 * Callees:
 *     EngCloseFNTCache @ 0x1C00097F0 (EngCloseFNTCache.c)
 *     ClientLoadLocalT1Fonts @ 0x1C0009968 (ClientLoadLocalT1Fonts.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     xxxAddFontResourceW @ 0x1C0044D58 (xxxAddFontResourceW.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C0048AD4 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C0048C2C (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00A1D70 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

__int64 __fastcall xxxLW_LoadFonts(int a1)
{
  unsigned int v2; // edi
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  UserSessionSwitchLeaveCrit();
  if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    EnterCrit(0LL, 1LL);
    return 0LL;
  }
  else
  {
    EnterCrit(0LL, 1LL);
    if ( a1 )
    {
      Interval.QuadPart = 0LL;
      v2 = 0;
      if ( gbPermanentFontsLoaded )
      {
LABEL_8:
        xxxLoadUserAndNetworkFonts();
      }
      else
      {
        while ( !gbNonServiceSession || v2 < 0x960 )
        {
          if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          UserSessionSwitchLeaveCrit();
          Interval.QuadPart = -2500000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          EnterCrit(0LL, 1LL);
          ++v2;
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
