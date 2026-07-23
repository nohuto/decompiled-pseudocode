/*
 * XREFs of _RtlpGetSystemDefaultUILanguage@8 @ 0x4B2D5D90
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x4B2D44A1 (RtlpAddNeutralsToMergedList.c)
 *     _LdrpMergeLangFallbackLists@36 @ 0x4B2D4925 (_LdrpMergeLangFallbackLists@36.c)
 *     _RtlpQueryDefaultUILanguage@8 @ 0x4B2E9760 (_RtlpQueryDefaultUILanguage@8.c)
 *     _RtlpCleanupRegistryKeys@0 @ 0x4B353540 (_RtlpCleanupRegistryKeys@0.c)
 * Callees:
 *     _RtlpLoadInstallLanguageFallback@12 @ 0x4B2ACC28 (_RtlpLoadInstallLanguageFallback@12.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _ZwIsUILanguageComitted@0 @ 0x4B2F39B0 (_ZwIsUILanguageComitted@0.c)
 *     _NtQueryInstallUILanguage@4 @ 0x4B2F3E80 (_NtQueryInstallUILanguage@4.c)
 */

NTSTATUS __cdecl RtlpGetSystemDefaultUILanguage(LANGID DefaultUILanguageId, PLCID Lcid)
{
  int v2; // edi
  LANGID *v3; // esi
  int v5; // eax
  LANGID *v6; // [esp+10h] [ebp-8h] BYREF
  LANGID InstallUILanguageId; // [esp+14h] [ebp-4h] BYREF

  v2 = 0;
  InstallUILanguageId = 0;
  v6 = 0;
  if ( DefaultUILanguageId )
  {
    v3 = (LANGID *)Lcid;
    *(_WORD *)DefaultUILanguageId = 0;
    if ( !Lcid )
    {
      v5 = RtlpCreateProcessRegistryInfo(&v6);
      v3 = v6;
      v2 = v5;
      if ( v5 < 0 )
      {
LABEL_12:
        v2 = NtQueryInstallUILanguage(&InstallUILanguageId);
        if ( v2 < 0 )
          return v2;
        if ( ZwIsUILanguageComitted() >= 0 )
        {
          if ( v3 )
          {
            RtlpLoadInstallLanguageFallback((int)v3, v3 + 3, v3 + 4);
            v3[2] = InstallUILanguageId;
          }
        }
LABEL_6:
        *(_WORD *)DefaultUILanguageId = InstallUILanguageId;
        return v2;
      }
      if ( !v6 )
        goto LABEL_10;
    }
    if ( v3[2] )
      InstallUILanguageId = v3[2];
    else
LABEL_10:
      v2 = -1073741595;
    if ( v2 >= 0 )
      goto LABEL_6;
    goto LABEL_12;
  }
  return -1073741811;
}
