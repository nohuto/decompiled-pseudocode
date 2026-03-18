/*
 * XREFs of _xxxLW_LoadFonts@4 @ 0xD6E2E
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 *     _UserOnGreTextReady@0 @ 0xD74BA (_UserOnGreTextReady@0.c)
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ @ 0x49A66 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YGXXZ @ 0xD6E00 (-xxxLoadUserAndNetworkFonts@@YGXXZ.c)
 *     ?xxxLoadPermanentFonts@@YGHXZ @ 0xD6ED6 (-xxxLoadPermanentFonts@@YGHXZ.c)
 *     _xxxClientAddFontResourceW@12 @ 0xD719A (_xxxClientAddFontResourceW@12.c)
 *     _CloseFNTCache@0 @ 0xD73B0 (_CloseFNTCache@0.c)
 *     _ClientLoadLocalT1Fonts@0 @ 0xD73D6 (_ClientLoadLocalT1Fonts@0.c)
 */

int __stdcall xxxLW_LoadFonts(int a1)
{
  unsigned int v1; // edi
  struct _UNICODE_STRING DestinationString; // [esp+8h] [ebp-8h] BYREF

  UserSessionSwitchLeaveCrit();
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    EnterCrit(0, 1);
    return 0;
  }
  else
  {
    v1 = 0;
    EnterCrit(0, 1);
    *(_DWORD *)&DestinationString.Length = 0;
    DestinationString.Buffer = 0;
    if ( a1 )
    {
      if ( gbPermanentFontsLoaded )
      {
LABEL_9:
        xxxLoadUserAndNetworkFonts();
      }
      else
      {
        while ( !_gbNonServiceSession || v1 < 0x960 )
        {
          if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
          UserSessionSwitchLeaveCrit();
          DestinationString.Buffer = (PWSTR)-1;
          *(_DWORD *)&DestinationString.Length = -2500000;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&DestinationString);
          EnterCrit(0, 1);
          ++v1;
          if ( gbPermanentFontsLoaded )
            goto LABEL_9;
        }
      }
      gbNetworkFontsLoaded = 1;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"marlett.ttf");
      xxxClientAddFontResourceW(0);
      if ( xxxLoadPermanentFonts() && !gbPermanentT1FontsLoaded )
      {
        if ( gbPermanentFontsLoaded )
        {
          ClientLoadLocalT1Fonts();
          gbPermanentT1FontsLoaded = 1;
          CloseFNTCache();
        }
      }
    }
    return 1;
  }
}
