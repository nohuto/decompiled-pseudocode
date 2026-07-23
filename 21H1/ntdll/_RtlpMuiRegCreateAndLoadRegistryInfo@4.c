/*
 * XREFs of _RtlpMuiRegCreateAndLoadRegistryInfo@4 @ 0x4B2AC270
 * Callers:
 *     _LdrpSetThreadPreferredLangList@0 @ 0x4B2BA5F0 (_LdrpSetThreadPreferredLangList@0.c)
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlGetUILanguageInfo@20 @ 0x4B352940 (_RtlGetUILanguageInfo@20.c)
 *     _RtlUpdateProcessRegistryInfo@0 @ 0x4B3530B9 (_RtlUpdateProcessRegistryInfo@0.c)
 *     _RtlpInitializeLangRegistryInfo@4 @ 0x4B3545F0 (_RtlpInitializeLangRegistryInfo@4.c)
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 * Callees:
 *     _RtlpMuiRegLoadRegistryInfo@8 @ 0x4B2ACDB0 (_RtlpMuiRegLoadRegistryInfo@8.c)
 *     _RtlpMuiRegFreeRegistryInfo@8 @ 0x4B2ACEB0 (_RtlpMuiRegFreeRegistryInfo@8.c)
 *     _RtlpMuiRegCreateRegistryInfo@0 @ 0x4B2ADC00 (_RtlpMuiRegCreateRegistryInfo@0.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __thiscall RtlpMuiRegCreateAndLoadRegistryInfo(_DWORD *this)
{
  _DWORD *v2; // esi
  _DWORD *RegistryInfo; // eax
  int v4; // edi
  int result; // eax

  v2 = 0;
  if ( !this || *this )
  {
    v4 = -1073741811;
  }
  else
  {
    RegistryInfo = (_DWORD *)RtlpMuiRegCreateRegistryInfo();
    v2 = RegistryInfo;
    if ( RegistryInfo )
    {
      v4 = RtlpMuiRegLoadRegistryInfo(RegistryInfo, 4095);
      if ( v4 < 0 )
      {
        RtlpMuiRegFreeRegistryInfo(v2, 4095);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
        v2 = 0;
      }
      else
      {
        v4 = 0;
        v2[3] = MEMORY[0x7FFE03A4];
      }
    }
    else
    {
      v4 = -1073741801;
    }
  }
  result = v4;
  *this = v2;
  return result;
}
