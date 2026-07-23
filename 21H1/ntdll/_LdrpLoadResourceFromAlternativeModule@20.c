/*
 * XREFs of _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980
 * Callers:
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 * Callees:
 *     _LdrpIsReparsePoint@4 @ 0x4B2A87A0 (_LdrpIsReparsePoint@4.c)
 *     _LdrpGetParentLangId@8 @ 0x4B2A8888 (_LdrpGetParentLangId@8.c)
 *     _LdrpCompareServiceChecksum@8 @ 0x4B2AA440 (_LdrpCompareServiceChecksum@8.c)
 *     _LdrpFindMessageInAlternateModule@20 @ 0x4B2B86EA (_LdrpFindMessageInAlternateModule@20.c)
 *     _LdrpGetRcConfig@16 @ 0x4B2B8818 (_LdrpGetRcConfig@16.c)
 *     _LdrpSetThreadPreferredLangList@0 @ 0x4B2BA5F0 (_LdrpSetThreadPreferredLangList@0.c)
 *     _GetLCIDFromLangListNodeWithLICCheck@20 @ 0x4B2BA710 (_GetLCIDFromLangListNodeWithLICCheck@20.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 *     _LdrpMUIEtwOutput@16 @ 0x4B33F89A (_LdrpMUIEtwOutput@16.c)
 */

NTSTATUS __fastcall LdrpLoadResourceFromAlternativeModule(void *a1, int a2, int a3, ULONG Flags, int a5)
{
  unsigned int v6; // edx
  unsigned __int16 v7; // di
  int v8; // esi
  ULONG v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  NTSTATUS result; // eax
  int MessageInAlternateModule; // ecx
  _DWORD *v17; // eax
  _DWORD *SharedData; // eax
  int v19; // eax
  int ParentLangId; // eax
  int RcConfig; // ecx
  int v22; // eax
  char v23; // al
  int v24; // [esp-4h] [ebp-DCh]
  bool v25; // [esp+Fh] [ebp-C9h] BYREF
  LANGID LanguageId[2]; // [esp+10h] [ebp-C8h] BYREF
  unsigned int v27; // [esp+14h] [ebp-C4h]
  NTSTATUS v28; // [esp+18h] [ebp-C0h]
  char v29; // [esp+1Eh] [ebp-BAh]
  char v30; // [esp+1Fh] [ebp-B9h]
  int v31; // [esp+20h] [ebp-B8h]
  PVOID ResourceDllBase; // [esp+24h] [ebp-B4h] BYREF
  PVOID DllHandle; // [esp+28h] [ebp-B0h]
  unsigned int v34; // [esp+2Ch] [ebp-ACh]
  ULONG v35; // [esp+30h] [ebp-A8h]
  int v36; // [esp+34h] [ebp-A4h]
  char v37[4]; // [esp+38h] [ebp-A0h]
  int v38; // [esp+3Ch] [ebp-9Ch]
  ULONG_PTR ResourceOffset; // [esp+40h] [ebp-98h] BYREF
  _UNICODE_STRING DestinationString; // [esp+48h] [ebp-90h] BYREF
  _WORD v41[66]; // [esp+50h] [ebp-88h]

  DllHandle = a1;
  v6 = 0;
  v31 = a5;
  v7 = 0;
  v8 = 0;
  v36 = a2;
  v28 = -1073020927;
  ResourceDllBase = 0;
  LanguageId[0] = 0;
  v30 = 0;
  v27 = 0;
  v34 = 0;
  *(_DWORD *)v37 = 0;
  v29 = 0;
  if ( a3 != 3 && a3 != 4 )
    return -1073741583;
  v38 = *(unsigned __int16 *)(a2 + 8);
  v25 = 0;
LABEL_3:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        v9 = Flags;
        while ( 1 )
        {
          while ( 1 )
          {
            v35 = v8;
            v10 = v9 & 0x1000000;
            if ( (v9 & 0x1000000) != 0 )
              break;
            v11 = v8++;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( !v13 )
                {
                  LanguageId[0] = 0;
                  if ( !LdrpSetThreadPreferredLangList()
                    || v34 >= *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2)
                    || (GetLCIDFromLangListNodeWithLICCheck(
                          v34,
                          (int)NtCurrentTeb()->MergedPrefLanguages,
                          v34,
                          LanguageId,
                          &v25),
                        (v7 = LanguageId[0]) == 0) )
                  {
LABEL_67:
                    v6 = v27;
                    v7 = -4370;
                    LanguageId[0] = -4370;
                    goto LABEL_3;
                  }
                  v9 = Flags;
                  if ( v25 && (Flags & 0x100000) != 0 )
                  {
                    v7 = -4370;
                    LanguageId[0] = -4370;
                  }
                  ++v34;
                  v8 = v35;
                  goto LABEL_13;
                }
                if ( v13 == 1 )
                {
                  RcConfig = *(_DWORD *)v37;
                  if ( !*(_DWORD *)v37 )
                  {
                    RcConfig = LdrpGetRcConfig(DllHandle, 0, 1);
                    *(_DWORD *)v37 = RcConfig;
                    if ( !RcConfig )
                      goto LABEL_66;
                  }
                  if ( *(_DWORD *)RcConfig != -20054323 )
                    goto LABEL_66;
                  if ( (*(_BYTE *)(RcConfig + 24) & 2) == 0 )
                    goto LABEL_66;
                  v22 = *(_DWORD *)(RcConfig + 124);
                  if ( !v22 )
                    goto LABEL_66;
                  RtlInitUnicodeString(&DestinationString, (PCWSTR)(RcConfig + v22));
                  if ( !RtlCultureNameToLCID(&DestinationString, (PLCID)&ResourceOffset + 1) )
                  {
                    v28 = -1073020923;
LABEL_66:
                    v6 = v27;
                    v7 = -4370;
                    LanguageId[0] = -4370;
                    goto LABEL_3;
                  }
                  v7 = WORD2(ResourceOffset);
                  v9 = Flags;
                  LanguageId[0] = WORD2(ResourceOffset);
                  if ( (Flags & 0x100000) != 0 )
                  {
                    GetLCIDFromLangListNodeWithLICCheck(
                      Flags,
                      (int)NtCurrentTeb()->MergedPrefLanguages,
                      0,
                      LanguageId,
                      &v25);
                    if ( v25 )
                      goto LABEL_67;
                    v7 = LanguageId[0];
                    v9 = Flags;
                  }
LABEL_13:
                  v6 = v27;
LABEL_14:
                  if ( v7 != 0xEEEE )
                    goto LABEL_15;
                }
                else
                {
                  if ( v29 || v30 || (LdrpIsReparsePoint(DllHandle) & 0x80000000) != 0 )
                    return v28;
                  v8 = 0;
                  v9 = Flags | 0x400000;
                  v29 = 1;
                  v6 = 0;
                  Flags |= 0x400000u;
                  v27 = 0;
                  v34 = 0;
                }
              }
              else
              {
                if ( v7 == 0xEEEE )
                  goto LABEL_36;
                if ( (v9 & 4) == 0 )
                {
                  if ( (v38 & 0x3FF) != 0 )
                  {
                    ParentLangId = LdrpGetParentLangId(v7, LanguageId);
                    v9 = Flags;
                    v6 = v27;
                    if ( ParentLangId >= 0 )
                    {
                      v7 = LanguageId[0];
                      if ( LanguageId[0] )
                      {
                        v8 = v35;
                        goto LABEL_14;
                      }
                    }
                    v8 = -2;
                  }
                  goto LABEL_36;
                }
                v7 = -4370;
                v8 = -2;
                LanguageId[0] = -4370;
              }
            }
            else
            {
              if ( (_WORD)v38 && (_WORD)v38 != 1024 && (_WORD)v38 != 2048 )
              {
                v7 = v38;
                LanguageId[0] = v38;
                goto LABEL_14;
              }
LABEL_36:
              v7 = -4370;
              LanguageId[0] = -4370;
            }
          }
          v7 = -3346;
          LanguageId[0] = -3346;
LABEL_15:
          v14 = 0;
          if ( !v6 )
            break;
          while ( v41[v14] != v7 )
          {
            if ( ++v14 >= v6 )
              goto LABEL_16;
          }
        }
LABEL_16:
        if ( v6 >= 0x40 )
          return v28;
        v41[v6] = v7;
        LODWORD(ResourceOffset) = 0;
        v27 = v6 + 1;
        result = LdrLoadAlternateResourceModuleEx(DllHandle, LanguageId[0], &ResourceDllBase, &ResourceOffset, v9);
        v28 = result;
        if ( result < 0 )
        {
          if ( result == -1073741766 || result == -1073741772 )
          {
            result = -1073020927;
            v28 = -1073020927;
          }
          if ( !v10 )
          {
            v6 = v27;
            continue;
          }
          return result;
        }
        break;
      }
      v24 = v31;
      *(_DWORD *)(v36 + 8) = v7;
      v30 = 1;
      MessageInAlternateModule = LdrpSearchResourceSection_U(ResourceDllBase, 3, 0x2000030u, v24);
      v28 = MessageInAlternateModule;
      v35 = Flags & 0x40;
      if ( (Flags & 0x40) == 0 )
      {
        v17 = (_DWORD *)v31;
        goto LABEL_20;
      }
      if ( MessageInAlternateModule < 0 )
        goto LABEL_82;
      MessageInAlternateModule = LdrpFindMessageInAlternateModule(
                                   ResourceDllBase,
                                   *(int **)v31,
                                   0,
                                   *(_DWORD *)(v36 + 12),
                                   0);
      v17 = (_DWORD *)v31;
      v28 = MessageInAlternateModule;
      if ( MessageInAlternateModule < 0 )
      {
        *(_DWORD *)v31 = 0;
LABEL_20:
        if ( MessageInAlternateModule < 0 )
        {
LABEL_82:
          if ( !LdrpCompareServiceChecksum(DllHandle, ResourceDllBase) && !v10 )
          {
            v6 = v27;
            continue;
          }
          return v28;
        }
      }
      break;
    }
    if ( *v17 > (unsigned int)ResourceDllBase )
    {
      if ( !(_DWORD)ResourceOffset || *v17 < (unsigned int)((unsigned int)ResourceDllBase + ResourceOffset) )
      {
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && *SharedData )
          v19 = (int)NtCurrentPeb()->SharedData + 555;
        else
          v19 = 2147353477;
        if ( (*(_BYTE *)v19 & 2) != 0 )
        {
          if ( v35 )
            v23 = 9;
          else
            v23 = 2 * ((Flags & 1) != 0) + 3;
          LdrpMUIEtwOutput(ResourceDllBase, a3, v23);
        }
        if ( NtCurrentTeb()->ResourceRetValue )
          *(_DWORD *)NtCurrentTeb()->ResourceRetValue = DllHandle;
        return v28;
      }
      v17 = (_DWORD *)v31;
    }
    v28 = -1073741701;
    *v17 = 0;
    DbgPrintEx(
      85,
      2u,
      (int)"'LDR: %s(), invalid image format of MUI file \n",
      (int)"LdrpLoadResourceFromAlternativeModule");
    if ( !v10 )
    {
      v6 = v27;
      continue;
    }
    return -1073741701;
  }
}
