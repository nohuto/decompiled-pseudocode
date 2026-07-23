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

NTSTATUS __cdecl RtlGetThreadPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  ULONG v4; // ebx
  ULONG v5; // edi
  int *v6; // esi
  NTSTATUS result; // eax
  int v8; // ecx
  NTSTATUS v9; // edi
  int v10; // ebx
  int v11; // eax
  int v12; // edi
  void *MergedPrefLanguages; // ebx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  char *v17; // eax
  PVOID v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  char v22; // [esp+Dh] [ebp-33h] BYREF
  char v23; // [esp+Eh] [ebp-32h]
  char v24; // [esp+Fh] [ebp-31h]
  PVOID v25; // [esp+10h] [ebp-30h] BYREF
  PVOID v26; // [esp+14h] [ebp-2Ch] BYREF
  void *PreferredLanguages; // [esp+18h] [ebp-28h]
  int v28; // [esp+1Ch] [ebp-24h]
  int v29; // [esp+20h] [ebp-20h]
  ULONG v30; // [esp+24h] [ebp-1Ch]
  PVOID BaseAddress; // [esp+28h] [ebp-18h] BYREF
  unsigned int v32; // [esp+2Ch] [ebp-14h]
  PVOID v33; // [esp+30h] [ebp-10h]
  ULONG v34; // [esp+34h] [ebp-Ch]
  int v35; // [esp+3Ch] [ebp-4h]

  v4 = Flags;
  v34 = 0;
  v5 = Flags & 0x30;
  v32 = 0;
  PreferredLanguages = 0;
  v6 = 0;
  v28 = 0;
  v33 = 0;
  v23 = 0;
  v25 = 0;
  v24 = 0;
  v29 = 0;
  v30 = v5;
  if ( ReturnLength )
    v34 = *ReturnLength;
  if ( (Flags & 0xFFFEFC83) != 0 )
    goto LABEL_32;
  if ( (Flags & 0xC) != 0 )
  {
    if ( (Flags & 0xC) == 0xC )
      goto LABEL_32;
  }
  else
  {
    v4 = Flags | 8;
    Flags |= 8u;
  }
  if ( (v4 & 0x10000) != 0 )
  {
    if ( (v4 & 0x40) != 0 || (v4 & 0x30) != 0 )
      goto LABEL_32;
    v4 |= 0x30u;
    Flags = v4;
  }
  if ( (v4 & 0x40) != 0 && (v4 & 0x30) != 0 )
    goto LABEL_32;
  if ( (v4 & 0x70) == 0 )
  {
    v4 |= 0x20u;
    Flags = v4;
  }
  if ( !ReturnLength )
    goto LABEL_32;
  if ( Languages || !*ReturnLength )
  {
    if ( (v4 & 0x300) == 0x300 )
      goto LABEL_32;
    result = RtlpCreateProcessRegistryInfo(&v25);
    if ( result < 0 )
      return result;
    if ( v5 == 48 )
    {
      v6 = (int *)v25;
      if ( *((_DWORD *)v25 + 3) == MEMORY[0x7FFE03A4] || (int)RtlUpdateProcessRegistryInfo() < 0 )
      {
LABEL_16:
        v35 = v4 & 0x10000;
        if ( (v4 & 0x10000) != 0 )
        {
          v19 = v6[3];
          v8 = 0;
          v22 = 0;
          PreferredLanguages = 0;
          if ( v19 != MEMORY[0x7FFE03A4] )
          {
            v25 = 0;
            v20 = RtlpMuiRegCreateAndLoadRegistryInfo(&v25);
            v9 = v20;
            if ( v20 < 0 )
              goto LABEL_92;
            v6 = (int *)v25;
            v24 = 1;
            if ( !*((_DWORD *)v25 + 9) )
            {
              v9 = RtlpMuiRegLoadPreferredUILanguages(v25, 0, 3, &v22, (int *)v25 + 9);
              if ( v9 < 0 && !v22 )
                goto LABEL_55;
            }
            if ( !v6[10] )
            {
              v22 = 0;
              v9 = RtlpMuiRegLoadPreferredUILanguages(v6, 1u, 3, &v22, v6 + 10);
              if ( v9 < 0 && !v22 )
                goto LABEL_55;
            }
            v12 = v6[9];
            v28 = v6[10];
            goto LABEL_37;
          }
        }
        else
        {
          v8 = 0;
          if ( NtCurrentTeb()->PreferredLanguages )
            PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
          v6 = (int *)v25;
        }
        if ( (v4 & 0x40) != 0 )
        {
          v10 = v28;
          v12 = v28;
        }
        else
        {
          LOBYTE(v8) = 0;
          v9 = InitializeTEBUserLangList(v8, v6);
          if ( v9 < 0 )
            goto LABEL_33;
          v10 = *(_DWORD *)NtCurrentTeb()->UserPrefLanguages;
          v28 = v10;
          v6 = (int *)v25;
          v11 = *((_DWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_DWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *((_DWORD *)v25 + 8);
          v29 = v11;
          v9 = RtlpSetProcUserMachineLangList(v25, 0);
          if ( v9 < 0 )
            goto LABEL_33;
          v12 = v6[9];
        }
        if ( NtCurrentTeb()->MergedPrefLanguages )
        {
          v23 = 1;
          if ( v30 == 48 )
          {
            if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 32) >= 0
              && NtCurrentTeb()->MuiGeneration == *((_DWORD *)v25 + 4) )
            {
              v6 = (int *)v25;
              MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
              v26 = MergedPrefLanguages;
              goto LABEL_48;
            }
            v23 = 0;
            RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
            NtCurrentTeb()->MergedPrefLanguages = 0;
          }
        }
        else
        {
          v23 = 0;
          if ( v30 == 48 && !PreferredLanguages )
          {
            v6 = (int *)v25;
            v17 = (char *)*((_DWORD *)v25 + 14);
            if ( v17 && v10 && (*(_BYTE *)(v10 + 32) & 0x40) != 0 && v17[32] >= 0 )
            {
              v6 = (int *)v25;
              v26 = (PVOID)*((_DWORD *)v25 + 14);
              MergedPrefLanguages = v17;
              NtCurrentTeb()->MuiGeneration = *((_DWORD *)v25 + 4);
LABEL_48:
              v16 = LdrpConvertLangFallbackListToMultiSz(Languages, ReturnLength, Flags, 0, NumberOfLanguages);
              v9 = v16;
              if ( (v16 >= 0 || v16 == -1073741789) && v30 == 48 )
              {
                if ( !*((_WORD *)MergedPrefLanguages + 18) )
                  RtlpComputeLangListCheckSum((char *)MergedPrefLanguages);
                if ( !v23 )
                {
                  if ( (*((_BYTE *)MergedPrefLanguages + 32) & 0x40) == 0 )
                  {
                    RtlpMUIRegPatchLicenseInfortmation(MergedPrefLanguages);
                    if ( !PreferredLanguages && (*(_BYTE *)(v28 + 32) & 0x40) != 0 && v29 == v6[8] )
                      RtlpSetProcMergedLangList(v6, MergedPrefLanguages);
                  }
                  NtCurrentTeb()->MergedPrefLanguages = v26;
                  v6 = (int *)v25;
                  NtCurrentTeb()->MuiGeneration = v32;
                }
                MergedPrefLanguages = 0;
                v26 = 0;
              }
LABEL_54:
              if ( MergedPrefLanguages )
              {
                v18 = v26;
                if ( v26 == NtCurrentTeb()->MergedPrefLanguages )
                {
                  v18 = v26;
                  NtCurrentTeb()->MergedPrefLanguages = 0;
                }
                RtlpMuiRegFreeLanguageList(v18);
                v6 = (int *)v25;
              }
LABEL_55:
              if ( v9 >= 0 )
              {
LABEL_56:
                if ( v24 && v6 )
                  RtlpMuiFreeLangRegistryInfo(v6);
                if ( v33 )
                  RtlpMuiRegFreeLanguageList(v33);
                return v9;
              }
LABEL_33:
              if ( Languages && v34 )
              {
                if ( v34 == 1 )
                  *Languages = 0;
                else
                  *(_DWORD *)Languages = 0;
              }
              goto LABEL_56;
            }
            goto LABEL_37;
          }
        }
        v6 = (int *)v25;
LABEL_37:
        if ( !v35 )
        {
          RtlpInitMuiCriticalSection();
          RtlEnterCriticalSection(&RegistryInfoCritSect);
          v33 = (PVOID)RtlpMuiRegDupLanguageList(v6[11]);
          v32 = v6[4];
          RtlLeaveCriticalSection(&RegistryInfoCritSect);
        }
        if ( v6 )
        {
          MergedPrefLanguages = (void *)RtlpMuiRegCreateLanguageList(v6);
          v26 = MergedPrefLanguages;
          if ( !MergedPrefLanguages )
          {
            v9 = -1073741801;
            goto LABEL_33;
          }
          if ( (Flags & 0x40) != 0 )
          {
            v21 = LdrpMergeLangFallbackLists(Flags, v6, &v26, PreferredLanguages, 0, v28, v12, v29, 0);
            MergedPrefLanguages = v26;
            v9 = v21;
          }
          else
          {
            BaseAddress = (PVOID)RtlpMuiRegCreateLanguageList(v6);
            v9 = LdrpMergeLangFallbackLists(Flags, v6, &BaseAddress, PreferredLanguages, v33, v28, v12, v29, 0);
            if ( v9 >= 0 )
            {
              LOBYTE(v14) = v30 == 48 || (Flags & 0x10) != 0;
              v15 = RtlpAddNeutralsToMergedList(v14, v6, BaseAddress, &v26);
              MergedPrefLanguages = v26;
              v9 = v15;
            }
            RtlpMuiRegFreeLanguageList(BaseAddress);
          }
          if ( v9 < 0 )
            goto LABEL_54;
          goto LABEL_48;
        }
LABEL_32:
        v9 = -1073741811;
        goto LABEL_33;
      }
      v25 = 0;
      v9 = RtlpCreateProcessRegistryInfo(&v25);
      if ( v9 < 0 )
      {
LABEL_92:
        v6 = (int *)v25;
        goto LABEL_33;
      }
    }
    v6 = (int *)v25;
    goto LABEL_16;
  }
  return -1073741811;
}
