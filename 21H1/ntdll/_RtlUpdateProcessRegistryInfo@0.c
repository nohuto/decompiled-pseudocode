/*
 * XREFs of _RtlUpdateProcessRegistryInfo@0 @ 0x4B3530B9
 * Callers:
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 *     _RtlpVerifyAndCommitUILanguageSettings@4 @ 0x4B356030 (_RtlpVerifyAndCommitUILanguageSettings@4.c)
 * Callees:
 *     _RtlpMuiRegCreateAndLoadRegistryInfo@4 @ 0x4B2AC270 (_RtlpMuiRegCreateAndLoadRegistryInfo@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpInitMuiCriticalSection@8 @ 0x4B2D5E84 (_RtlpInitMuiCriticalSection@8.c)
 *     _RtlpMuiFreeLangRegistryInfo@4 @ 0x4B36ADA0 (_RtlpMuiFreeLangRegistryInfo@4.c)
 */

int __stdcall RtlUpdateProcessRegistryInfo()
{
  int v0; // esi
  int v1; // edx
  int v3; // [esp+Ch] [ebp-4h] BYREF

  v0 = 0;
  if ( !g_RegInfo || *(_DWORD *)(g_RegInfo + 12) != MEMORY[0x7FFE03A4] )
  {
    v3 = 0;
    v0 = RtlpMuiRegCreateAndLoadRegistryInfo(&v3);
    if ( v0 >= 0 )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection((int)&RegistryInfoCritSect);
      if ( g_RegInfo && *(_DWORD *)(g_RegInfo + 12) == MEMORY[0x7FFE03A4] )
      {
        RtlpMuiFreeLangRegistryInfo(v3);
      }
      else
      {
        v1 = v3;
        *(_DWORD *)(v3 + 60) = g_RegInfo;
        if ( g_RegInfo )
          *(_DWORD *)(v1 + 44) = *(_DWORD *)(g_RegInfo + 44);
        g_RegInfo = v1;
      }
      RtlLeaveCriticalSection((int)&RegistryInfoCritSect);
    }
  }
  return v0;
}
