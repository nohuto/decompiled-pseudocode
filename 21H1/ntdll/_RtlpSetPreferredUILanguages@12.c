/*
 * XREFs of _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0
 * Callers:
 *     _RtlpSetInstallLanguage@8 @ 0x4B354A70 (_RtlpSetInstallLanguage@8.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpMuiRegCreateAndLoadRegistryInfo@4 @ 0x4B2AC270 (_RtlpMuiRegCreateAndLoadRegistryInfo@4.c)
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0 (_RtlUnicodeStringToInteger@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 *     _NtGetMUIRegistryInfo@12 @ 0x4B2F38E0 (_NtGetMUIRegistryInfo@12.c)
 *     _NtQueryInstallUILanguage@4 @ 0x4B2F3E80 (_NtQueryInstallUILanguage@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlStringCchCatW@12 @ 0x4B352F81 (_RtlStringCchCatW@12.c)
 *     _RtlUpdateProcessRegistryInfo@0 @ 0x4B3530B9 (_RtlUpdateProcessRegistryInfo@0.c)
 *     _RtlpAutoCompleteLanguageFallback@12 @ 0x4B35338F (_RtlpAutoCompleteLanguageFallback@12.c)
 *     _RtlpCheckMuiMultiStringSafe@8 @ 0x4B3534AE (_RtlpCheckMuiMultiStringSafe@8.c)
 *     _RtlpConvertLCIDsToCultureNames@8 @ 0x4B353B60 (_RtlpConvertLCIDsToCultureNames@8.c)
 *     _RtlpGetMultiStringLength@12 @ 0x4B354569 (_RtlpGetMultiStringLength@12.c)
 *     _RtlpSetInstallLanguage@8 @ 0x4B354A70 (_RtlpSetInstallLanguage@8.c)
 *     _RtlpSetMachineUILanguagesImmediate@8 @ 0x4B35519D (_RtlpSetMachineUILanguagesImmediate@8.c)
 *     _RtlpMuiFreeLangRegistryInfo@4 @ 0x4B36ADA0 (_RtlpMuiFreeLangRegistryInfo@4.c)
 *     _RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId@20 @ 0x4B36B1EE (_RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId@20.c)
 */

int __stdcall RtlpSetPreferredUILanguages(int a1, void *a2, _DWORD *a3)
{
  int v3; // ebx
  int InstallUILanguage; // esi
  const unsigned __int16 *v5; // edi
  int v6; // eax
  int v7; // eax
  wchar_t *Heap; // eax
  int v9; // edi
  const unsigned __int16 *v10; // eax
  int v11; // eax
  __int16 v12; // di
  wchar_t *Buffer; // edx
  wchar_t *v14; // ecx
  __int16 v15; // ax
  int *v16; // eax
  __int16 *v17; // eax
  __int16 v18; // ax
  int v19; // edi
  const unsigned __int16 *v20; // ecx
  __int16 v21; // ax
  unsigned int v22; // eax
  __int16 *v23; // eax
  __int16 *v24; // edx
  int *v25; // edi
  const WCHAR *v26; // ecx
  __int16 *v27; // ecx
  __int16 v28; // ax
  __int16 *v29; // ecx
  __int16 v30; // ax
  __int16 *v31; // ecx
  __int16 v32; // ax
  int v33; // eax
  int *v34; // ecx
  __int16 v35; // ax
  int *v36; // ecx
  __int16 v37; // ax
  const unsigned __int16 *v38; // ecx
  int MultiStringLength; // eax
  int v40; // eax
  char *v41; // esi
  char *v42; // ecx
  __int16 v43; // ax
  int v44; // eax
  unsigned int v45; // edi
  char *v46; // esi
  char *v47; // ecx
  __int16 v48; // ax
  int v49; // ecx
  int v51; // [esp-4h] [ebp-12Ch]
  WCHAR *v52; // [esp+Ch] [ebp-11Ch]
  unsigned int v53; // [esp+10h] [ebp-118h] BYREF
  UNICODE_STRING v54; // [esp+14h] [ebp-114h] BYREF
  int v55; // [esp+1Ch] [ebp-10Ch] BYREF
  void *Src; // [esp+20h] [ebp-108h]
  int v57; // [esp+24h] [ebp-104h] BYREF
  unsigned __int16 *v58; // [esp+28h] [ebp-100h]
  __int16 *v59; // [esp+2Ch] [ebp-FCh]
  __int16 *v60; // [esp+30h] [ebp-F8h] BYREF
  int v61; // [esp+34h] [ebp-F4h]
  HANDLE Handle; // [esp+38h] [ebp-F0h] BYREF
  int v63; // [esp+3Ch] [ebp-ECh] BYREF
  unsigned int v64; // [esp+40h] [ebp-E8h]
  int v65; // [esp+44h] [ebp-E4h] BYREF
  UNICODE_STRING DestinationString; // [esp+48h] [ebp-E0h] BYREF
  _WORD *i; // [esp+50h] [ebp-D8h]
  HANDLE v68; // [esp+54h] [ebp-D4h] BYREF
  HANDLE v69; // [esp+58h] [ebp-D0h] BYREF
  const unsigned __int16 *j; // [esp+5Ch] [ebp-CCh]
  unsigned __int16 v71; // [esp+60h] [ebp-C8h] BYREF
  int v72; // [esp+64h] [ebp-C4h] BYREF
  HANDLE v73; // [esp+68h] [ebp-C0h] BYREF
  wchar_t *v74; // [esp+6Ch] [ebp-BCh]
  unsigned int v75; // [esp+70h] [ebp-B8h]
  int v76; // [esp+74h] [ebp-B4h] BYREF
  int v77; // [esp+78h] [ebp-B0h]
  unsigned int v78; // [esp+7Ch] [ebp-ACh]
  unsigned int v79; // [esp+80h] [ebp-A8h]
  int v80; // [esp+84h] [ebp-A4h] BYREF
  int v81; // [esp+88h] [ebp-A0h]
  _DWORD *v82; // [esp+8Ch] [ebp-9Ch]
  _DWORD v83[6]; // [esp+90h] [ebp-98h] BYREF
  _DWORD v84[6]; // [esp+A8h] [ebp-80h] BYREF
  _DWORD v85[6]; // [esp+C0h] [ebp-68h] BYREF
  _DWORD v86[6]; // [esp+D8h] [ebp-50h] BYREF
  _DWORD v87[6]; // [esp+F0h] [ebp-38h] BYREF
  _BYTE v88[28]; // [esp+108h] [ebp-20h] BYREF

  Src = a2;
  v61 = 0;
  v73 = 0;
  v69 = 0;
  v68 = 0;
  Handle = 0;
  v78 = 0;
  v75 = 0;
  v79 = 0;
  v53 = 0;
  v59 = 0;
  v81 = 0;
  v64 = 0;
  v65 = 0;
  v74 = 0;
  v76 = 0;
  v52 = 0;
  v80 = 0;
  v3 = a1;
  v82 = a3;
  LOWORD(v63) = 0;
  v71 = 0;
  memset(v88, 0, sizeof(v88));
  if ( !a3 )
    goto LABEL_2;
  if ( !a1 )
    v3 = 18440;
  if ( (v3 & 0xFFFF0363) != 0
    || (v5 = (const unsigned __int16 *)Src, (v3 & 0x400) != 0) && (!Src || (v3 & 0xFFFFFBF3) != 0)
    || (v3 & 0x8000) != 0 && (!Src || (v3 & 0xFFFF6773) != 0)
    || (v3 & 0xC) == 0xC
    || (v3 & 0x1800) == 0x1800
    || (v3 & 0x10) != 0 && (v3 & 0x7080) != 0 )
  {
LABEL_2:
    InstallUILanguage = -1073741811;
LABEL_184:
    if ( (v3 & 0x80u) != 0 && v65 )
      RtlpMuiFreeLangRegistryInfo(v65);
    *v82 = v78 + v79 + v75;
    return InstallUILanguage;
  }
  if ( (v3 & 0xC) == 0 )
    LOWORD(v3) = v3 | 8;
  if ( (v3 & 0xE410) == 0 )
    LOWORD(v3) = v3 | 0x4000;
  if ( (v3 & 0x1C00) == 0 )
    LOWORD(v3) = v3 | 0x800;
  if ( (v3 & 0x80u) == 0 )
    v6 = RtlpCreateProcessRegistryInfo(&v65);
  else
    v6 = RtlpMuiRegCreateAndLoadRegistryInfo(&v65);
  InstallUILanguage = v6;
  if ( v6 >= 0 )
  {
    if ( !Src )
    {
      v55 = 4;
      v25 = dword_4B298B74;
      v33 = 2;
      v77 = 2;
      v57 = 262146;
      goto LABEL_113;
    }
    v77 = v3 & 4;
    if ( (v3 & 4) != 0 )
      v7 = RtlpCheckMuiMultiStringSafe(Src, 4);
    else
      v7 = RtlpCheckMuiMultiStringSafe(Src, 85);
    if ( v7 < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlpSetPreferredUILanguages is not a valid multi-string!\n");
    if ( (v3 & 0x400) != 0 )
    {
      InstallUILanguage = NtQueryInstallUILanguage((int)&v71);
      if ( InstallUILanguage < 0 )
      {
LABEL_174:
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0;
        }
        if ( v68 )
        {
          NtClose(v68);
          v68 = 0;
        }
        if ( v69 )
        {
          NtClose(v69);
          v69 = 0;
        }
        if ( v73 )
        {
          NtClose(v73);
          v73 = 0;
        }
        if ( v81 )
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v81);
        goto LABEL_184;
      }
      Heap = (wchar_t *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 522);
      v5 = Heap;
      v52 = Heap;
      if ( !Heap )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_174;
      }
      v54.Buffer = Heap;
      *(_DWORD *)&v54.Length = 11141120;
      if ( !RtlLCIDToCultureName(v71, &v54.Length) )
      {
        InstallUILanguage = -1073741811;
LABEL_170:
        if ( v5 )
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v5);
        if ( v74 )
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v74);
        goto LABEL_174;
      }
      v9 = v54.Length >> 1;
      if ( v77 )
      {
        InstallUILanguage = RtlpConvertLCIDsToCultureNames((wchar_t *)Src, &v76);
        if ( InstallUILanguage < 0 )
          goto LABEL_167;
        v10 = (const unsigned __int16 *)v76;
        Src = (void *)v76;
        LOWORD(v3) = v3 & 0xFFF3 | 8;
      }
      else
      {
        v10 = (const unsigned __int16 *)Src;
      }
      InstallUILanguage = RtlpGetMultiStringLength(v10, &v60, 0);
      if ( InstallUILanguage < 0 )
        goto LABEL_167;
      memcpy(&v52[v9 + 1], Src, 2 * (unsigned __int16)v60 + 2);
      v5 = v52;
      InstallUILanguage = RtlpAutoCompleteLanguageFallback(v65, v52, v51);
      if ( InstallUILanguage < 0 )
        goto LABEL_168;
      Src = v52;
    }
    InstallUILanguage = RtlpGetMultiStringLength(v5, &v57, &v53);
    if ( InstallUILanguage >= 0 )
    {
      v58 = (unsigned __int16 *)v5;
      LOWORD(v57) = 2 * v57;
      HIWORD(v57) = v57 + 2;
      if ( !v53 || v53 > 3 )
        goto LABEL_88;
      j = v5;
      v74 = (wchar_t *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 170);
      if ( !v74 )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_167;
      }
      v77 = 2;
      v60 = 0;
      if ( v53 )
      {
        v11 = v3 & 4;
        for ( i = (_WORD *)v11; ; v11 = (int)i )
        {
          if ( v11 )
          {
            RtlInitUnicodeString(&DestinationString, v5);
            if ( RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, &v72) < 0 )
              goto LABEL_88;
            v12 = v72;
            if ( v72 == 4096 )
              goto LABEL_88;
            if ( v72 == 5120 )
              goto LABEL_88;
            DestinationString.Buffer = v74;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v72, &DestinationString.Length) )
              goto LABEL_88;
            Buffer = DestinationString.Buffer;
            v14 = DestinationString.Buffer;
            v55 = (int)(DestinationString.Buffer + 1);
            do
              v15 = *v14++;
            while ( v15 != (_WORD)v61 );
            v64 += (((int)v14 - v55) >> 1) + 1;
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, v5);
            if ( !RtlCultureNameToLCID(&DestinationString.Length, &v72) )
              goto LABEL_88;
            v12 = v72;
            if ( v72 == 4096 || v72 == 5120 )
              goto LABEL_88;
            Buffer = DestinationString.Buffer;
          }
          if ( v60 )
          {
            if ( v60 == (__int16 *)1 )
            {
              if ( (v3 & 0x800) != 0 )
                goto LABEL_88;
              if ( (v3 & 0x10) != 0 )
                goto LABEL_88;
              v18 = *v59;
              if ( (*v59 & 1) != 0 )
                goto LABEL_88;
              if ( (v18 & 2) != 0 )
              {
                v16 = &v55;
              }
              else
              {
                if ( (v18 & 4) == 0 || v53 > 2 )
                  goto LABEL_88;
                v16 = &v63;
              }
            }
            else
            {
              if ( v60 != (__int16 *)2 )
                goto LABEL_81;
              v16 = &v55;
            }
            if ( (int)RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(v12, v88, v16) < 0 )
              goto LABEL_88;
            v17 = (__int16 *)v88;
          }
          else
          {
            v19 = v65;
            if ( RtlpMuiRegGetInstalledLanguageIndexByName(v65, Buffer, 1, &v63) < 0 )
              goto LABEL_88;
            v17 = (__int16 *)(*(_DWORD *)(*(_DWORD *)(v19 + 20) + 12) + 28 * (__int16)v63);
          }
          v59 = v17;
LABEL_81:
          if ( j )
          {
            v20 = j;
            do
              v21 = *v20++;
            while ( v21 != (_WORD)v61 );
            v5 = &j[v20 - (j + 1) + 1];
            j = v5;
          }
          else
          {
            v5 = 0;
            j = 0;
          }
          v60 = (__int16 *)((char *)v60 + 1);
          if ( (unsigned int)v60 >= v53 )
            break;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v22 = v64 + 1;
        v64 = v22;
        if ( v22 > 0xFFFF )
          goto LABEL_88;
        v23 = (__int16 *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 2 * v22);
        v24 = v23;
        v81 = (int)v23;
        if ( !v23 )
        {
LABEL_92:
          InstallUILanguage = -1073741670;
          goto LABEL_167;
        }
        v25 = (int *)v23;
        v26 = (const WCHAR *)Src;
        v63 = 2 * v64;
        LOWORD(v57) = 2 * v64;
        v55 = 2 * v64;
        HIWORD(v57) = 2 * v64;
        v59 = (__int16 *)Src;
        Src = v23;
        v60 = v23;
        for ( j = 0; (unsigned int)j < v53; j = (const unsigned __int16 *)((char *)j + 1) )
        {
          RtlInitUnicodeString(&DestinationString, v26);
          if ( RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, &v72) < 0 )
            goto LABEL_88;
          DestinationString.Buffer = v74;
          *(_DWORD *)&DestinationString.Length = 11141120;
          if ( !RtlLCIDToCultureName(v72, &DestinationString.Length) )
            goto LABEL_88;
          if ( RtlStringCchCatW(v60, v64, (int)DestinationString.Buffer) < 0 )
            goto LABEL_92;
          v27 = v60;
          i = v60 + 1;
          do
            v28 = *v27++;
          while ( v28 != (_WORD)v61 );
          v64 += -1 - (v27 - i);
          if ( v60 )
          {
            v29 = v60;
            i = v60 + 1;
            do
              v30 = *v29++;
            while ( v30 != (_WORD)v61 );
            v24 = &v60[v29 - i + 1];
            v60 = v24;
          }
          else
          {
            v24 = 0;
            v60 = 0;
          }
          v31 = v59;
          if ( v59 )
          {
            i = v59 + 1;
            do
              v32 = *v31++;
            while ( v32 != (_WORD)v61 );
            v59 += v31 - i + 1;
            v26 = (const WCHAR *)v59;
          }
          else
          {
            v26 = 0;
            v59 = 0;
          }
        }
        *v24 = 0;
LABEL_114:
        if ( (v3 & 0x400) != 0 )
        {
          RtlInitUnicodeString(&v54, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
          v83[0] = 24;
          v83[1] = 0;
          v83[2] = &v54;
          v83[3] = 64;
          v83[4] = 0;
          v83[5] = 0;
          InstallUILanguage = ZwCreateKey((int)&v80, 131078, (int)v83, 0, 0, 0, 0);
          if ( InstallUILanguage < 0 )
            goto LABEL_167;
          RtlInitUnicodeString(&v54, L"InstallLanguageFallback");
          v34 = v25;
          do
          {
            v35 = *(_WORD *)v34;
            v34 = (int *)((char *)v34 + 2);
          }
          while ( v35 != (_WORD)v61 );
          HIWORD(v57) = -2 - 2 * (((char *)v34 - ((char *)v25 + 2)) >> 1) + v55;
          if ( v25 )
          {
            v36 = v25;
            do
            {
              v37 = *(_WORD *)v36;
              v36 = (int *)((char *)v36 + 2);
            }
            while ( v37 != (_WORD)v61 );
            v38 = (const unsigned __int16 *)v25 + (((char *)v36 - ((char *)v25 + 2)) >> 1) + 1;
          }
          else
          {
            v38 = 0;
          }
          v58 = (unsigned __int16 *)v38;
          MultiStringLength = RtlpGetMultiStringLength(v38, &v57, &v53);
          InstallUILanguage = MultiStringLength;
          if ( MultiStringLength < 0 )
            goto LABEL_167;
          LOWORD(MultiStringLength) = v57;
          v25 = (int *)v58;
          v63 = MultiStringLength;
          v40 = ZwSetValueKey(v80, (int)&v54, 0, 7, (int)v58, 2 * (unsigned __int16)v57);
          InstallUILanguage = v40;
          if ( v40 < 0 )
            goto LABEL_167;
          LOWORD(v40) = HIWORD(v57);
          v79 = v53;
          v55 = v40;
        }
        if ( (v3 & 0x10) != 0 )
        {
          InstallUILanguage = RtlpSetInstallLanguage(v3, (PCWSTR)Src);
          if ( InstallUILanguage < 0 )
            goto LABEL_167;
          v79 = v53;
        }
        if ( (v3 & 0x4000) != 0 )
        {
          InstallUILanguage = OpenGlobalizationUserSettingsKey((void *)0x2000000, (int)&v73);
          if ( InstallUILanguage < 0 )
            goto LABEL_167;
          RtlInitUnicodeString(&v54, L"Control Panel\\Desktop");
          v84[1] = v73;
          v84[2] = &v54;
          v84[4] = 0;
          v84[5] = 0;
          v84[0] = 24;
          v84[3] = 64;
          InstallUILanguage = ZwOpenKey((int)&v68, 983103, (int)v84);
          if ( InstallUILanguage < 0 )
            goto LABEL_167;
          if ( (v3 & 0x800) != 0 )
          {
            RtlInitUnicodeString(&v54, L"PreferredUILanguagesPending");
            InstallUILanguage = ZwSetValueKey((int)v68, (int)&v54, 0, 7, (int)v25, (unsigned __int16)v55);
            if ( InstallUILanguage < 0 )
              goto LABEL_167;
            v78 = v53;
          }
          else
          {
            if ( v53 < 2 )
              goto LABEL_88;
            RtlInitUnicodeString(&v54, L"LanguageConfigurationPending");
            v85[1] = v68;
            v85[2] = &v54;
            v85[4] = 0;
            v85[5] = 0;
            v85[0] = 24;
            v85[3] = 64;
            InstallUILanguage = ZwCreateKey((int)&Handle, 983103, (int)v85, 0, 0, 0, 0);
            if ( InstallUILanguage < 0 )
              goto LABEL_167;
            v41 = (char *)Src;
            RtlInitUnicodeString(&v54, (PCWSTR)Src);
            if ( v41 )
            {
              v42 = v41;
              do
              {
                v43 = *(_WORD *)v42;
                v42 += 2;
              }
              while ( v43 != (_WORD)v61 );
              v25 = (int *)&v41[2 * ((v42 - (v41 + 2)) >> 1) + 2];
            }
            else
            {
              v25 = 0;
            }
            LOWORD(v57) = v63 - v54.MaximumLength;
            HIWORD(v44) = HIWORD(v55);
            LOWORD(v44) = v55 - v54.MaximumLength;
            v55 = v44;
            HIWORD(v57) = v44;
            InstallUILanguage = ZwSetValueKey((int)Handle, (int)&v54, 0, 7, (int)v25, (unsigned __int16)v44);
            if ( InstallUILanguage < 0 )
              goto LABEL_167;
            v78 = v53;
          }
        }
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0;
        }
        if ( (v3 & 0x8800) == 0x8800 )
        {
          InstallUILanguage = RtlpSetMachineUILanguagesImmediate(v57, (int)v25);
          v75 = v53;
        }
        if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
          goto LABEL_163;
        RtlInitUnicodeString(&v54, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
        v86[0] = 24;
        v86[1] = 0;
        v86[2] = &v54;
        v86[3] = 64;
        v86[4] = 0;
        v86[5] = 0;
        InstallUILanguage = ZwCreateKey((int)&v69, 983103, (int)v86, 0, 0, 0, 0);
        if ( InstallUILanguage < 0 )
          goto LABEL_167;
        if ( (v3 & 0x800) != 0 )
        {
          RtlInitUnicodeString(&v54, L"PreferredUILanguages");
          InstallUILanguage = ZwSetValueKey((int)v69, (int)&v54, 0, 7, (int)v25, (unsigned __int16)v55);
          if ( InstallUILanguage < 0 )
            goto LABEL_167;
          v75 = v53;
LABEL_163:
          if ( InstallUILanguage >= 0 && (v3 & 0xE410) != 0 )
          {
            NtGetMUIRegistryInfo(8, 0, 0);
            if ( (v3 & 0x8410) != 0 )
              RtlUpdateProcessRegistryInfo();
          }
          goto LABEL_167;
        }
        v45 = v53;
        if ( v53 >= 2 )
        {
          RtlInitUnicodeString(&v54, L"LanguageConfiguration");
          v87[1] = v69;
          v87[2] = &v54;
          v87[4] = 0;
          v87[5] = 0;
          Handle = 0;
          v87[0] = 24;
          v87[3] = 64;
          InstallUILanguage = ZwCreateKey((int)&Handle, 983103, (int)v87, 0, 0, 0, 0);
          if ( InstallUILanguage < 0 )
            goto LABEL_167;
          v46 = (char *)Src;
          RtlInitUnicodeString(&v54, (PCWSTR)Src);
          if ( v46 )
          {
            v47 = v46;
            do
            {
              v48 = *(_WORD *)v47;
              v47 += v77;
            }
            while ( v48 != (_WORD)v61 );
            v49 = (int)&v46[2 * ((v47 - (v46 + 2)) >> 1) + 2];
          }
          else
          {
            v49 = 0;
          }
          v58 = (unsigned __int16 *)v49;
          InstallUILanguage = ZwSetValueKey(
                                (int)Handle,
                                (int)&v54,
                                0,
                                7,
                                v49,
                                (unsigned __int16)(HIWORD(v57) - v54.MaximumLength));
          if ( InstallUILanguage < 0 )
            goto LABEL_167;
          v75 = v45;
          goto LABEL_163;
        }
LABEL_88:
        InstallUILanguage = -1073741811;
        goto LABEL_167;
      }
      v33 = HIWORD(v57);
      v25 = (int *)v58;
      v55 = HIWORD(v57);
      LOWORD(v33) = v57;
LABEL_113:
      v63 = v33;
      goto LABEL_114;
    }
LABEL_167:
    v5 = v52;
LABEL_168:
    if ( v76 )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v76);
    goto LABEL_170;
  }
  return InstallUILanguage;
}
