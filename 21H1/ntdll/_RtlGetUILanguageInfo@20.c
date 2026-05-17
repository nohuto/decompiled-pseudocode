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

int __stdcall RtlGetUILanguageInfo(int a1, PCWSTR SourceString, wchar_t *a3, unsigned int *a4, int *a5)
{
  unsigned int v5; // edi
  int v6; // edx
  wchar_t *v7; // eax
  int v8; // eax
  int v9; // edi
  int FallbackLanguagesAsMultiSZ; // ebx
  unsigned int *v11; // esi
  wchar_t *Heap; // eax
  int InstalledLanguageIndexByLangId; // eax
  _WORD *v15; // eax
  _DWORD *v16; // esi
  const WCHAR *v17; // eax
  _WORD *v18; // edi
  int FallbackLanguageInfoByLangId; // eax
  _WORD *i; // eax
  int v21; // ecx
  bool v22; // zf
  int v23; // [esp+Ch] [ebp-64h] BYREF
  char v24; // [esp+13h] [ebp-5Dh]
  int v25; // [esp+14h] [ebp-5Ch]
  char v26; // [esp+1Bh] [ebp-55h]
  __int16 v27; // [esp+1Ch] [ebp-54h] BYREF
  int v28; // [esp+20h] [ebp-50h] BYREF
  PCWSTR v29; // [esp+24h] [ebp-4Ch]
  unsigned int v30; // [esp+28h] [ebp-48h]
  wchar_t *String1; // [esp+2Ch] [ebp-44h]
  _DWORD *v32; // [esp+30h] [ebp-40h]
  int *v33; // [esp+34h] [ebp-3Ch]
  wchar_t *v34; // [esp+38h] [ebp-38h]
  UNICODE_STRING v35; // [esp+3Ch] [ebp-34h] BYREF
  int v36; // [esp+44h] [ebp-2Ch]
  UNICODE_STRING DestinationString; // [esp+48h] [ebp-28h] BYREF
  _BYTE v38[28]; // [esp+50h] [ebp-20h] BYREF

  v33 = a5;
  v29 = SourceString;
  String1 = a3;
  v25 = (int)a4;
  v23 = 0;
  v27 = -1;
  v24 = 0;
  v34 = 0;
  if ( a4 )
  {
    v5 = *a4;
    v30 = *a4;
  }
  else
  {
    v5 = 0;
    v30 = 0;
  }
  if ( !SourceString || !*SourceString || (a1 & 0xC) == 0xC || (a1 & 0xFFFFFF73) != 0 || v5 && !a3 )
    return -1073741811;
  v6 = 4;
  v28 = a1 & 4;
  if ( (a1 & 4) == 0 )
    v6 = 85;
  if ( RtlpCheckMuiMultiStringSafe(SourceString, v6) < 0 )
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
  if ( a4 )
    *a4 = 2;
  if ( v33 )
    *v33 = 0;
  v36 = a1 & 0x80;
  if ( (a1 & 0x80) != 0 )
    v8 = RtlpMuiRegCreateAndLoadRegistryInfo(&v23);
  else
    v8 = RtlpCreateProcessRegistryInfo(&v23);
  v9 = v23;
  FallbackLanguagesAsMultiSZ = v8;
  if ( v8 < 0 )
    goto LABEL_29;
  if ( v23 )
  {
    v32 = *(_DWORD **)(v23 + 20);
    if ( v28 )
    {
      v26 = 1;
      Heap = (wchar_t *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 170);
      v34 = Heap;
      if ( !Heap )
      {
        v9 = v23;
        FallbackLanguagesAsMultiSZ = -1073741801;
        goto LABEL_29;
      }
      v35.Buffer = Heap;
      *(_DWORD *)&v35.Length = 11141120;
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( RtlUnicodeStringToLcid(&DestinationString, &v28) < 0 || !RtlLCIDToCultureName(v28, &v35.Length) )
      {
LABEL_45:
        FallbackLanguagesAsMultiSZ = -1073741811;
LABEL_46:
        v9 = v23;
        goto LABEL_47;
      }
      v9 = v23;
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v23, v28, 1, &v27);
    }
    else
    {
      v26 = 0;
      RtlInitUnicodeString(&v35, SourceString);
      if ( !RtlCultureNameToLCID(&v35.Length, &v28) )
      {
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_29;
      }
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName(v9, SourceString, 1, &v27);
    }
    FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
    if ( InstalledLanguageIndexByLangId < 0 )
    {
      if ( InstalledLanguageIndexByLangId != -1073741823 )
      {
LABEL_47:
        v11 = (unsigned int *)v25;
LABEL_48:
        if ( v34 )
        {
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v34);
          v9 = v23;
        }
        goto LABEL_30;
      }
LABEL_55:
      FallbackLanguagesAsMultiSZ = -1073741772;
      goto LABEL_47;
    }
    if ( v27 < 0 || v27 >= (int)*((unsigned __int16 *)v32 + 3) )
      goto LABEL_55;
    v15 = v29;
    v16 = (_DWORD *)(v32[3] + 28 * v27);
    v32 = v16;
    while ( *v15 )
      ++v15;
    v17 = v15 + 1;
    qmemcpy(v38, v16, sizeof(v38));
    v18 = v32;
    v29 = v17;
    if ( (*(_WORD *)v32 & 1) != 0 )
    {
      if ( (*(_WORD *)v32 & 6) != 0 )
      {
        FallbackLanguagesAsMultiSZ = -1073741595;
LABEL_64:
        v9 = v23;
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
      while ( !v24 )
      {
        if ( v26 )
        {
          RtlInitUnicodeString(&DestinationString, v17);
          if ( RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, &v28) < 0 )
            goto LABEL_45;
          FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(v28, 1, v38);
        }
        else
        {
          FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(v17, 1, (int)v38);
        }
        FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
        if ( FallbackLanguageInfoByLangId < 0 )
          goto LABEL_46;
        if ( (v38[0] & 0x20) != 0 )
          v24 = 1;
        for ( i = v29; *i; ++i )
          ;
        v17 = i + 1;
        v29 = v17;
        if ( !*v17 )
          goto LABEL_80;
      }
      FallbackLanguagesAsMultiSZ = -1073741811;
      goto LABEL_64;
    }
LABEL_80:
    if ( v33 )
    {
      v21 = *v18 & 0x419F;
      if ( (*v18 & 0x1000) == 0 )
        v21 |= 0x20u;
      *v33 = v21 | 0x40;
    }
    v11 = (unsigned int *)v25;
    v9 = v23;
    if ( v25 )
    {
      v22 = v24 == 0;
      *(_DWORD *)v25 = v30;
      if ( v22 )
        FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ((int)v38, (int)v11, String1);
      else
        *v11 = 2;
    }
    goto LABEL_48;
  }
  FallbackLanguagesAsMultiSZ = -1073741823;
LABEL_29:
  v11 = (unsigned int *)v25;
LABEL_30:
  if ( v36 && v9 )
    RtlpMuiFreeLangRegistryInfo(v9);
  if ( !FallbackLanguagesAsMultiSZ && v11 && *v11 > v30 )
  {
    if ( String1 )
      return -1073741789;
  }
  return FallbackLanguagesAsMultiSZ;
}
