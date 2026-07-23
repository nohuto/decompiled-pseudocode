/*
 * XREFs of _RtlGetUILanguageInfo@20 @ 0x4B352940
 * Callers:
 *     <none>
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpMuiRegCreateAndLoadRegistryInfo@4 @ 0x4B2AC270 (_RtlpMuiRegCreateAndLoadRegistryInfo@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByLangId@16 @ 0x4B2D4FD4 (_RtlpMuiRegGetInstalledLanguageIndexByLangId@16.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0 (_RtlUnicodeStringToInteger@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlUnicodeStringToLcid@8 @ 0x4B352FCF (_RtlUnicodeStringToLcid@8.c)
 *     _RtlpCheckMuiMultiStringSafe@8 @ 0x4B3534AE (_RtlpCheckMuiMultiStringSafe@8.c)
 *     _RtlpMuiFreeLangRegistryInfo@4 @ 0x4B36ADA0 (_RtlpMuiFreeLangRegistryInfo@4.c)
 *     _RtlpMuiRegGetFallbackLanguageInfoByLangId@20 @ 0x4B36B3BE (_RtlpMuiRegGetFallbackLanguageInfoByLangId@20.c)
 *     _RtlpMuiRegGetFallbackLanguageInfoByName@20 @ 0x4B36B525 (_RtlpMuiRegGetFallbackLanguageInfoByName@20.c)
 *     _RtlpMuiRegGetFallbackLanguagesAsMultiSZ@20 @ 0x4B36B664 (_RtlpMuiRegGetFallbackLanguagesAsMultiSZ@20.c)
 */

NTSTATUS __cdecl RtlGetUILanguageInfo(
        ULONG Flags,
        PCZZWSTR Languages,
        PZZWSTR FallbackLanguages,
        PULONG NumberOfFallbackLanguages,
        PULONG Attributes)
{
  ULONG v5; // edi
  int v6; // edx
  wchar_t *v7; // eax
  int v8; // eax
  void *v9; // edi
  NTSTATUS FallbackLanguagesAsMultiSZ; // ebx
  ULONG *v11; // esi
  PVOID Heap; // eax
  int InstalledLanguageIndexByLangId; // eax
  _WORD *v15; // eax
  _DWORD *v16; // esi
  const WCHAR *v17; // eax
  _WORD *v18; // edi
  int FallbackLanguageInfoByLangId; // eax
  _WORD *i; // eax
  int v21; // ecx
  bool v22; // zf
  SIZE_T v23; // [esp-4h] [ebp-74h]
  _DWORD *StackCookie; // [esp+Ch] [ebp-64h] BYREF
  char StackCookie_7; // [esp+13h] [ebp-5Dh]
  int v26; // [esp+14h] [ebp-5Ch]
  char v27; // [esp+1Bh] [ebp-55h]
  __int16 v28; // [esp+1Ch] [ebp-54h] BYREF
  LCID Lcid; // [esp+20h] [ebp-50h] BYREF
  PCZZWSTR v30; // [esp+24h] [ebp-4Ch]
  ULONG v31; // [esp+28h] [ebp-48h]
  wchar_t *String1; // [esp+2Ch] [ebp-44h]
  _DWORD *v33; // [esp+30h] [ebp-40h]
  PULONG v34; // [esp+34h] [ebp-3Ch]
  PVOID BaseAddress; // [esp+38h] [ebp-38h]
  _UNICODE_STRING String; // [esp+3Ch] [ebp-34h] BYREF
  ULONG v37; // [esp+44h] [ebp-2Ch]
  _UNICODE_STRING DestinationString; // [esp+48h] [ebp-28h] BYREF
  _BYTE v39[28]; // [esp+50h] [ebp-20h] BYREF

  v34 = Attributes;
  v30 = Languages;
  String1 = (wchar_t *)FallbackLanguages;
  v26 = (int)NumberOfFallbackLanguages;
  StackCookie = 0;
  v28 = -1;
  StackCookie_7 = 0;
  BaseAddress = 0;
  if ( NumberOfFallbackLanguages )
  {
    v5 = *NumberOfFallbackLanguages;
    v31 = *NumberOfFallbackLanguages;
  }
  else
  {
    v5 = 0;
    v31 = 0;
  }
  if ( !Languages || !*Languages || (Flags & 0xC) == 0xC || (Flags & 0xFFFFFF73) != 0 || v5 && !FallbackLanguages )
    return -1073741811;
  v6 = 4;
  Lcid = Flags & 4;
  if ( (Flags & 4) == 0 )
    v6 = 85;
  if ( RtlpCheckMuiMultiStringSafe(Languages, v6) < 0 )
    DbgPrint(
      "*** ASSERT FAILED: Input parameter pwmszLanguage for function RtlGetUILanguageInfo is not a valid multi-string!\n");
  v7 = String1;
  if ( String1 )
  {
    if ( v5 )
      *String1 = 0;
    if ( v5 > 1 )
      v7[1] = 0;
  }
  if ( NumberOfFallbackLanguages )
    *NumberOfFallbackLanguages = 2;
  if ( v34 )
    *v34 = 0;
  v37 = Flags & 0x80;
  if ( (Flags & 0x80) != 0 )
    v8 = RtlpMuiRegCreateAndLoadRegistryInfo(&StackCookie);
  else
    v8 = RtlpCreateProcessRegistryInfo(&StackCookie);
  v9 = StackCookie;
  FallbackLanguagesAsMultiSZ = v8;
  if ( v8 < 0 )
    goto LABEL_29;
  if ( StackCookie )
  {
    v33 = (_DWORD *)StackCookie[5];
    if ( Lcid )
    {
      LODWORD(v23) = 170;
      v27 = 1;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v23);
      BaseAddress = Heap;
      if ( !Heap )
      {
        v9 = StackCookie;
        FallbackLanguagesAsMultiSZ = -1073741801;
        goto LABEL_29;
      }
      String.Buffer = (wchar_t *)Heap;
      *(_DWORD *)&String.Length = 11141120;
      RtlInitUnicodeString(&DestinationString, Languages);
      if ( RtlUnicodeStringToLcid(&DestinationString, &Lcid) < 0 || !RtlLCIDToCultureName(Lcid, &String) )
      {
LABEL_45:
        FallbackLanguagesAsMultiSZ = -1073741811;
LABEL_46:
        v9 = StackCookie;
        goto LABEL_47;
      }
      v9 = StackCookie;
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId((int)StackCookie, Lcid, 1, &v28);
    }
    else
    {
      v27 = 0;
      RtlInitUnicodeString(&String, Languages);
      if ( !RtlCultureNameToLCID(&String, &Lcid) )
      {
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_29;
      }
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName((int)v9, Languages, 1, &v28);
    }
    FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
    if ( InstalledLanguageIndexByLangId < 0 )
    {
      if ( InstalledLanguageIndexByLangId != -1073741823 )
      {
LABEL_47:
        v11 = (ULONG *)v26;
LABEL_48:
        if ( BaseAddress )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
          v9 = StackCookie;
        }
        goto LABEL_30;
      }
LABEL_55:
      FallbackLanguagesAsMultiSZ = -1073741772;
      goto LABEL_47;
    }
    if ( v28 < 0 || v28 >= (int)*((unsigned __int16 *)v33 + 3) )
      goto LABEL_55;
    v15 = v30;
    v16 = (_DWORD *)(v33[3] + 28 * v28);
    v33 = v16;
    while ( *v15 )
      ++v15;
    v17 = v15 + 1;
    qmemcpy(v39, v16, sizeof(v39));
    v18 = v33;
    v30 = v17;
    if ( (*(_WORD *)v33 & 1) != 0 )
    {
      if ( (*(_WORD *)v33 & 6) != 0 )
      {
        FallbackLanguagesAsMultiSZ = -1073741595;
LABEL_64:
        v9 = StackCookie;
        goto LABEL_47;
      }
      if ( *v17 )
      {
        FallbackLanguagesAsMultiSZ = -1073741772;
        goto LABEL_64;
      }
    }
    else if ( *v17 )
    {
      while ( !StackCookie_7 )
      {
        if ( v27 )
        {
          RtlInitUnicodeString(&DestinationString, v17);
          if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Lcid) < 0 )
            goto LABEL_45;
          FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(Lcid, 1, v39);
        }
        else
        {
          FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(v17, 1, (int)v39);
        }
        FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
        if ( FallbackLanguageInfoByLangId < 0 )
          goto LABEL_46;
        if ( (v39[0] & 0x20) != 0 )
          StackCookie_7 = 1;
        for ( i = v30; *i; ++i )
          ;
        v17 = i + 1;
        v30 = v17;
        if ( !*v17 )
          goto LABEL_80;
      }
      FallbackLanguagesAsMultiSZ = -1073741811;
      goto LABEL_64;
    }
LABEL_80:
    if ( v34 )
    {
      v21 = *v18 & 0x419F;
      if ( (*v18 & 0x1000) == 0 )
        v21 |= 0x20u;
      *v34 = v21 | 0x40;
    }
    v11 = (ULONG *)v26;
    v9 = StackCookie;
    if ( v26 )
    {
      v22 = StackCookie_7 == 0;
      *(_DWORD *)v26 = v31;
      if ( v22 )
        FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ((int)v39, (int)v11, String1);
      else
        *v11 = 2;
    }
    goto LABEL_48;
  }
  FallbackLanguagesAsMultiSZ = -1073741823;
LABEL_29:
  v11 = (ULONG *)v26;
LABEL_30:
  if ( v37 && v9 )
    RtlpMuiFreeLangRegistryInfo(v9);
  if ( !FallbackLanguagesAsMultiSZ && v11 && *v11 > v31 )
  {
    if ( String1 )
      return -1073741789;
  }
  return FallbackLanguagesAsMultiSZ;
}
