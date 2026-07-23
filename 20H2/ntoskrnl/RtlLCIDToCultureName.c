/*
 * XREFs of RtlLCIDToCultureName @ 0x140918870
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1403B7468 (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x14070F9B8 (PnpGetDevicePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x140737980 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14077A0C8 (PnpSetDeviceInterfacePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1407A3610 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1407A3D68 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1408A3760 (PnpGetDeviceInstancePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A5390 (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14098390C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140984090 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140984C1C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x14098507C (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x1403647B0 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x140364D34 (DownLevelLangIDToLanguageName.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  BOOLEAN v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = Lcid;
  if ( Lcid )
  {
    if ( String )
    {
      if ( Lcid != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)DownLevelLangIDToLanguageName(v4, word_140CF7420, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_140CF7420);
          return 1;
        }
      }
    }
  }
  return v2;
}
