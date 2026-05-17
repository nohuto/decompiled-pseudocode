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

int __stdcall RtlpGetSystemDefaultUILanguage(_WORD *a1, _WORD *a2)
{
  int v2; // edi
  _WORD *v3; // esi
  int ProcessRegistryInfo; // eax
  _WORD *v6; // [esp+10h] [ebp-8h] BYREF
  __int16 v7; // [esp+14h] [ebp-4h] BYREF

  v2 = 0;
  v7 = 0;
  v6 = 0;
  if ( a1 )
  {
    v3 = a2;
    *a1 = 0;
    if ( !a2 )
    {
      ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((int *)&v6);
      v3 = v6;
      v2 = ProcessRegistryInfo;
      if ( ProcessRegistryInfo < 0 )
      {
LABEL_12:
        v2 = NtQueryInstallUILanguage(&v7);
        if ( v2 < 0 )
          return v2;
        if ( (int)ZwIsUILanguageComitted() >= 0 )
        {
          if ( v3 )
          {
            RtlpLoadInstallLanguageFallback((int)v3, v3 + 3, v3 + 4);
            v3[2] = v7;
          }
        }
LABEL_6:
        *a1 = v7;
        return v2;
      }
      if ( !v6 )
        goto LABEL_10;
    }
    if ( v3[2] )
      v7 = v3[2];
    else
LABEL_10:
      v2 = -1073741595;
    if ( v2 >= 0 )
      goto LABEL_6;
    goto LABEL_12;
  }
  return -1073741811;
}
