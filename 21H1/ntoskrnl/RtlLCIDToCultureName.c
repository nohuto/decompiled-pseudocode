/*
 * XREFs of RtlLCIDToCultureName @ 0x1409119B0
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1403B3C50 (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x1406EDF58 (PnpGetDevicePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x14072C26C (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x140768F28 (PnpSetDeviceInterfacePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140794530 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140794C88 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpGetDeviceInstancePropertyData @ 0x14089C910 (PnpGetDeviceInstancePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14089E540 (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14097C79C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14097CF20 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14097DAAC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x14097DF0C (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x14033C6D0 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x140362394 (DownLevelLangIDToLanguageName.c)
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
        if ( (int)DownLevelLangIDToLanguageName(v4, word_140CF7460, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_140CF7460);
          return 1;
        }
      }
    }
  }
  return v2;
}
