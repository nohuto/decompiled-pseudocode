/*
 * XREFs of _RtlpSetProcUserMachineLangList@8 @ 0x4B2D3D47
 * Callers:
 *     _RtlpMuiRegLoadRegistryInfo@8 @ 0x4B2ACDB0 (_RtlpMuiRegLoadRegistryInfo@8.c)
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _InitializeUserOrMachineLangList@20 @ 0x4B2E98CF (_InitializeUserOrMachineLangList@20.c)
 *     _RtlGetSystemPreferredUILanguages@20 @ 0x4B352400 (_RtlGetSystemPreferredUILanguages@20.c)
 * Callees:
 *     _RtlpMuiRegLoadPreferredUILanguages@24 @ 0x4B2AD2AC (_RtlpMuiRegLoadPreferredUILanguages@24.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpMuiRegCreateLanguageList@12 @ 0x4B2D3232 (_RtlpMuiRegCreateLanguageList@12.c)
 *     _RtlpSetProcUserMachineLangList@8 @ 0x4B2D3D47 (_RtlpSetProcUserMachineLangList@8.c)
 *     _RtlpInitMuiCriticalSection@8 @ 0x4B2D5E84 (_RtlpInitMuiCriticalSection@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __fastcall RtlpSetProcUserMachineLangList(_DWORD *a1, unsigned int a2)
{
  int v4; // edi
  int LanguageList; // ecx
  bool v7; // sf
  int v8; // [esp+14h] [ebp-24h] BYREF
  int v9; // [esp+18h] [ebp-20h]
  char v10; // [esp+1Fh] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v4 = 0;
  v9 = 0;
  v8 = 0;
  v10 = 0;
  if ( !a1 || a2 > 1 )
    return -1073741811;
  if ( a2 == 1 && a1[10] || a1[9] && !a2 )
    return 0;
  RtlpInitMuiCriticalSection();
  RtlEnterCriticalSection(&RegistryInfoCritSect);
  ms_exc.registration.TryLevel = 0;
  if ( (!a1[10] || a2 != 1) && (!a1[9] || a2) )
  {
    v4 = RtlpMuiRegLoadPreferredUILanguages(a1, a2, 3, &v10, &v8);
    v9 = v4;
    LanguageList = v8;
    if ( !v8 )
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, a2 != 1, (int)a1);
      v8 = LanguageList;
      if ( !LanguageList )
      {
        v4 = -1073741801;
        v9 = -1073741801;
      }
    }
    v7 = v4 < 0;
    if ( v4 )
    {
      if ( v4 != -1073741801 && v10 )
      {
        v4 = 0;
        v9 = 0;
      }
      v7 = v4 < 0;
    }
    if ( !v7 )
    {
      *(_DWORD *)(LanguageList + 32) |= 0x10u;
      *(_DWORD *)(LanguageList + 32) |= 0x40u;
      if ( a2 == 1 )
      {
        a1[10] = LanguageList;
        *a1 |= 0x20u;
      }
      else if ( !a2 )
      {
        a1[9] = LanguageList;
        *a1 |= 0x10u;
      }
    }
  }
  ms_exc.registration.TryLevel = -2;
  RtlLeaveCriticalSection(&RegistryInfoCritSect);
  return v4;
}
