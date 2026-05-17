/*
 * XREFs of _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80
 * Callers:
 *     _LdrpSetThreadPreferredLangList@0 @ 0x4B2BA5F0 (_LdrpSetThreadPreferredLangList@0.c)
 *     _RtlSetThreadPreferredUILanguages@12 @ 0x4B2D64B0 (_RtlSetThreadPreferredUILanguages@12.c)
 *     _RtlSetThreadPreferredUILanguages2@16 @ 0x4B2D66B0 (_RtlSetThreadPreferredUILanguages2@16.c)
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 * Callees:
 *     _RtlpMuiRegCreateAndLoadRegistryInfo@4 @ 0x4B2AC270 (_RtlpMuiRegCreateAndLoadRegistryInfo@4.c)
 *     _RtlpMuiRegLoadPreferredUILanguages@24 @ 0x4B2AD2AC (_RtlpMuiRegLoadPreferredUILanguages@24.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpComputeLangListCheckSum@4 @ 0x4B2D2774 (_RtlpComputeLangListCheckSum@4.c)
 *     _RtlpMuiRegCreateLanguageList@12 @ 0x4B2D3232 (_RtlpMuiRegCreateLanguageList@12.c)
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 *     _LdrpConvertLangFallbackListToMultiSz@28 @ 0x4B2D3319 (_LdrpConvertLangFallbackListToMultiSz@28.c)
 *     _RtlpSetProcUserMachineLangList@8 @ 0x4B2D3D47 (_RtlpSetProcUserMachineLangList@8.c)
 *     _InitializeTEBUserLangList@8 @ 0x4B2D3E35 (_InitializeTEBUserLangList@8.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlpMUIRegPatchLicenseInfortmation@4 @ 0x4B2D427F (_RtlpMUIRegPatchLicenseInfortmation@4.c)
 *     RtlpAddNeutralsToMergedList @ 0x4B2D44A1 (RtlpAddNeutralsToMergedList.c)
 *     _LdrpMergeLangFallbackLists@36 @ 0x4B2D4925 (_LdrpMergeLangFallbackLists@36.c)
 *     _RtlpMuiRegDupLanguageList@8 @ 0x4B2D5E04 (_RtlpMuiRegDupLanguageList@8.c)
 *     _RtlpInitMuiCriticalSection@8 @ 0x4B2D5E84 (_RtlpInitMuiCriticalSection@8.c)
 *     _RtlpSetProcMergedLangList@8 @ 0x4B2EBADE (_RtlpSetProcMergedLangList@8.c)
 *     _RtlUpdateProcessRegistryInfo@0 @ 0x4B3530B9 (_RtlUpdateProcessRegistryInfo@0.c)
 *     _RtlpMuiFreeLangRegistryInfo@4 @ 0x4B36ADA0 (_RtlpMuiFreeLangRegistryInfo@4.c)
 */

int __stdcall RtlGetThreadPreferredUILanguages(int a1, int a2, _WORD *a3, int *a4)
{
  int v4; // ebx
  int v5; // edi
  int *v6; // esi
  int result; // eax
  int v8; // ecx
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  int v12; // edi
  void *MergedPrefLanguages; // ebx
  int v14; // eax
  int v15; // eax
  char *v16; // eax
  void *v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  char v21; // [esp+Dh] [ebp-33h] BYREF
  char v22; // [esp+Eh] [ebp-32h]
  char v23; // [esp+Fh] [ebp-31h]
  int *v24; // [esp+10h] [ebp-30h] BYREF
  void *v25; // [esp+14h] [ebp-2Ch] BYREF
  void *PreferredLanguages; // [esp+18h] [ebp-28h]
  int v27; // [esp+1Ch] [ebp-24h]
  int v28; // [esp+20h] [ebp-20h]
  int v29; // [esp+24h] [ebp-1Ch]
  int LanguageList; // [esp+28h] [ebp-18h] BYREF
  unsigned int v31; // [esp+2Ch] [ebp-14h]
  int v32; // [esp+30h] [ebp-10h]
  int v33; // [esp+34h] [ebp-Ch]
  int v34; // [esp+3Ch] [ebp-4h]

  v4 = a1;
  v33 = 0;
  v5 = a1 & 0x30;
  v31 = 0;
  PreferredLanguages = 0;
  v6 = 0;
  v27 = 0;
  v32 = 0;
  v22 = 0;
  v24 = 0;
  v23 = 0;
  v28 = 0;
  v29 = v5;
  if ( a4 )
    v33 = *a4;
  if ( (a1 & 0xFFFEFC83) != 0 )
    goto LABEL_32;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 0xC) == 0xC )
      goto LABEL_32;
  }
  else
  {
    v4 = a1 | 8;
    a1 |= 8u;
  }
  if ( (v4 & 0x10000) != 0 )
  {
    if ( (v4 & 0x40) != 0 || (v4 & 0x30) != 0 )
      goto LABEL_32;
    v4 |= 0x30u;
    a1 = v4;
  }
  if ( (v4 & 0x40) != 0 && (v4 & 0x30) != 0 )
    goto LABEL_32;
  if ( (v4 & 0x70) == 0 )
  {
    v4 |= 0x20u;
    a1 = v4;
  }
  if ( !a4 )
    goto LABEL_32;
  if ( a3 || !*a4 )
  {
    if ( (v4 & 0x300) == 0x300 )
      goto LABEL_32;
    result = RtlpCreateProcessRegistryInfo(&v24);
    if ( result < 0 )
      return result;
    if ( v5 == 48 )
    {
      v6 = v24;
      if ( v24[3] == MEMORY[0x7FFE03A4] || (int)RtlUpdateProcessRegistryInfo() < 0 )
      {
LABEL_16:
        v34 = v4 & 0x10000;
        if ( (v4 & 0x10000) != 0 )
        {
          v18 = v6[3];
          v8 = 0;
          v21 = 0;
          PreferredLanguages = 0;
          if ( v18 != MEMORY[0x7FFE03A4] )
          {
            v24 = 0;
            v19 = RtlpMuiRegCreateAndLoadRegistryInfo(&v24);
            v9 = v19;
            if ( v19 < 0 )
              goto LABEL_88;
            v6 = v24;
            v23 = 1;
            if ( !v24[9] )
            {
              v9 = RtlpMuiRegLoadPreferredUILanguages(v24, 0, 3, &v21, v24 + 9);
              if ( v9 < 0 && !v21 )
                goto LABEL_53;
            }
            if ( !v6[10] )
            {
              v21 = 0;
              v9 = RtlpMuiRegLoadPreferredUILanguages(v6, 1u, 3, &v21, v6 + 10);
              if ( v9 < 0 && !v21 )
                goto LABEL_53;
            }
            v12 = v6[9];
            v27 = v6[10];
            goto LABEL_37;
          }
        }
        else
        {
          v8 = 0;
          if ( NtCurrentTeb()->PreferredLanguages )
            PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
          v6 = v24;
        }
        if ( (v4 & 0x40) != 0 )
        {
          v10 = v27;
          v12 = v27;
        }
        else
        {
          LOBYTE(v8) = 0;
          v9 = InitializeTEBUserLangList(v8, v6);
          if ( v9 < 0 )
            goto LABEL_33;
          v10 = *(_DWORD *)NtCurrentTeb()->UserPrefLanguages;
          v27 = v10;
          v6 = v24;
          v11 = *((_DWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_DWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : v24[8];
          v28 = v11;
          v9 = RtlpSetProcUserMachineLangList(v24, 0);
          if ( v9 < 0 )
            goto LABEL_33;
          v12 = v6[9];
        }
        if ( NtCurrentTeb()->MergedPrefLanguages )
        {
          v22 = 1;
          if ( v29 == 48 )
          {
            if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 32) >= 0 && NtCurrentTeb()->MuiGeneration == v24[4] )
            {
              v6 = v24;
              MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
              v25 = MergedPrefLanguages;
              goto LABEL_46;
            }
            v22 = 0;
            RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
            NtCurrentTeb()->MergedPrefLanguages = 0;
          }
        }
        else
        {
          v22 = 0;
          if ( v29 == 48 && !PreferredLanguages )
          {
            v6 = v24;
            v16 = (char *)v24[14];
            if ( v16 && v10 && (*(_BYTE *)(v10 + 32) & 0x40) != 0 && v16[32] >= 0 )
            {
              v6 = v24;
              v25 = (void *)v24[14];
              MergedPrefLanguages = v16;
              NtCurrentTeb()->MuiGeneration = v24[4];
LABEL_46:
              v15 = LdrpConvertLangFallbackListToMultiSz(a3, a4, a1, 0, a2);
              v9 = v15;
              if ( (v15 >= 0 || v15 == -1073741789) && v29 == 48 )
              {
                if ( !*((_WORD *)MergedPrefLanguages + 18) )
                  RtlpComputeLangListCheckSum((char *)MergedPrefLanguages);
                if ( !v22 )
                {
                  if ( (*((_BYTE *)MergedPrefLanguages + 32) & 0x40) == 0 )
                  {
                    RtlpMUIRegPatchLicenseInfortmation(MergedPrefLanguages);
                    if ( !PreferredLanguages && (*(_BYTE *)(v27 + 32) & 0x40) != 0 && v28 == v6[8] )
                      RtlpSetProcMergedLangList(v6, MergedPrefLanguages);
                  }
                  NtCurrentTeb()->MergedPrefLanguages = v25;
                  v6 = v24;
                  NtCurrentTeb()->MuiGeneration = v31;
                }
                MergedPrefLanguages = 0;
                v25 = 0;
              }
LABEL_52:
              if ( MergedPrefLanguages )
              {
                v17 = v25;
                if ( v25 == NtCurrentTeb()->MergedPrefLanguages )
                {
                  v17 = v25;
                  NtCurrentTeb()->MergedPrefLanguages = 0;
                }
                RtlpMuiRegFreeLanguageList(v17);
                v6 = v24;
              }
LABEL_53:
              if ( v9 >= 0 )
              {
LABEL_54:
                if ( v23 && v6 )
                  RtlpMuiFreeLangRegistryInfo(v6);
                if ( v32 )
                  RtlpMuiRegFreeLanguageList(v32);
                return v9;
              }
LABEL_33:
              if ( a3 && v33 )
              {
                if ( v33 == 1 )
                  *a3 = 0;
                else
                  *(_DWORD *)a3 = 0;
              }
              goto LABEL_54;
            }
            goto LABEL_37;
          }
        }
        v6 = v24;
LABEL_37:
        if ( !v34 )
        {
          RtlpInitMuiCriticalSection();
          RtlEnterCriticalSection((int)&RegistryInfoCritSect);
          v32 = RtlpMuiRegDupLanguageList(v6[11]);
          v31 = v6[4];
          RtlLeaveCriticalSection((int)&RegistryInfoCritSect);
        }
        if ( v6 )
        {
          MergedPrefLanguages = (void *)RtlpMuiRegCreateLanguageList(v6);
          v25 = MergedPrefLanguages;
          if ( !MergedPrefLanguages )
          {
            v9 = -1073741801;
            goto LABEL_33;
          }
          if ( (a1 & 0x40) != 0 )
          {
            v20 = LdrpMergeLangFallbackLists(&v25, PreferredLanguages, 0, v27, v12, v28, 0);
            MergedPrefLanguages = v25;
            v9 = v20;
          }
          else
          {
            LanguageList = RtlpMuiRegCreateLanguageList(v6);
            v9 = LdrpMergeLangFallbackLists(&LanguageList, PreferredLanguages, v32, v27, v12, v28, 0);
            if ( v9 >= 0 )
            {
              v14 = RtlpAddNeutralsToMergedList(LanguageList, &v25);
              MergedPrefLanguages = v25;
              v9 = v14;
            }
            RtlpMuiRegFreeLanguageList(LanguageList);
          }
          if ( v9 < 0 )
            goto LABEL_52;
          goto LABEL_46;
        }
LABEL_32:
        v9 = -1073741811;
        goto LABEL_33;
      }
      v24 = 0;
      v9 = RtlpCreateProcessRegistryInfo(&v24);
      if ( v9 < 0 )
      {
LABEL_88:
        v6 = v24;
        goto LABEL_33;
      }
    }
    v6 = v24;
    goto LABEL_16;
  }
  return -1073741811;
}
