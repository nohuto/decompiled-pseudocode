/*
 * XREFs of RtlpGetSystemDefaultUILanguage @ 0x18003C5B0
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x18003BD04 (RtlpAddNeutralsToMergedList.c)
 *     RtlpQueryDefaultUILanguage @ 0x180075740 (RtlpQueryDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFDE0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008BCC8 (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x18009F100 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x18009FAA0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpGetSystemDefaultUILanguage(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v6; // edi
  int v8; // eax
  __int16 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  v9 = 0;
  v10 = 0LL;
  v6 = 0;
  if ( a1 )
  {
    *a1 = 0;
    if ( !a2 && (v8 = RtlpCreateProcessRegistryInfo(&v10), v4 = v10, v6 = v8, v8 < 0)
      || (!v4 || !*(_WORD *)(v4 + 4) ? (v6 = -1073741595) : (v9 = *(_WORD *)(v4 + 4)), v6 < 0) )
    {
      v6 = NtQueryInstallUILanguage(&v9, a2, a3, a4);
      if ( v6 < 0 )
        return (unsigned int)v6;
      if ( (int)NtIsUILanguageComitted() >= 0 )
      {
        if ( v4 )
        {
          RtlpLoadInstallLanguageFallback(v4, v4 + 6, v4 + 8);
          *(_WORD *)(v4 + 4) = v9;
        }
      }
    }
    *a1 = v9;
    return (unsigned int)v6;
  }
  return 3221225485LL;
}
