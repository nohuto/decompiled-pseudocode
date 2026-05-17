/*
 * XREFs of RtlpSetPreferredUILanguages @ 0x1800F0ED0
 * Callers:
 *     RtlpSetInstallLanguage @ 0x1800F0820 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18003F034 (RtlpCheckMuiMultiStringSafe.c)
 *     DbgPrint @ 0x180050960 (DbgPrint.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18006EC10 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18006EED0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006EF00 (RtlpMuiFreeLangRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18006F3B4 (OpenGlobalizationUserSettingsKey.c)
 *     RtlUnicodeStringToInteger @ 0x1800754D0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 *     ZwCreateKey @ 0x18009D1B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x18009DA00 (ZwSetValueKey.c)
 *     ZwGetMUIRegistryInfo @ 0x18009ECC0 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x18009F800 (NtQueryInstallUILanguage.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     RtlStringCchCatW @ 0x1800EF2A0 (RtlStringCchCatW.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x1800EF77C (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800EFFD0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetMultiStringLength @ 0x1800F0650 (RtlpGetMultiStringLength.c)
 *     RtlpSetInstallLanguage @ 0x1800F0820 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F0D08 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x1801043DC (RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId.c)
 */

__int64 __fastcall RtlpSetPreferredUILanguages(int a1, WCHAR *a2, _DWORD *a3)
{
  __int16 v3; // di
  WCHAR *v4; // r12
  unsigned int v5; // r15d
  int v6; // r14d
  unsigned int v7; // r13d
  int InstallUILanguage; // ebx
  int v9; // eax
  __int16 v10; // dx
  __int16 v11; // cx
  __int16 v12; // si
  int v13; // eax
  __int64 Buffer; // rdx
  __int64 v15; // rdx
  wchar_t *Heap; // rax
  const WCHAR *v17; // r13
  unsigned __int64 v18; // r15
  const WCHAR *v19; // r14
  int v20; // eax
  unsigned __int16 v21; // si
  __int64 v22; // rax
  int v23; // ecx
  int FallbackInstalledLanguageInfoByLangId; // eax
  __int128 *v25; // rax
  _WORD *v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned int v30; // esi
  __int64 v31; // rax
  int v32; // r13d
  __int16 v33; // r15
  WCHAR *v34; // r14
  _WORD *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int16 v39; // si
  __int64 v40; // rcx
  __int64 v41; // rax
  WCHAR *v42; // rcx
  __int64 v43; // rax
  bool v44; // sf
  __int64 v45; // rax
  unsigned int v46; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v47[2]; // [rsp+44h] [rbp-BCh] BYREF
  int v48; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v49; // [rsp+4Ch] [rbp-B4h]
  UNICODE_STRING v50; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v51; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v52; // [rsp+70h] [rbp-90h]
  unsigned int v53; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v54; // [rsp+78h] [rbp-88h]
  unsigned int v55; // [rsp+7Ch] [rbp-84h]
  HANDLE Handle; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v59[4]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v60; // [rsp+A4h] [rbp-5Ch]
  __int128 *v61; // [rsp+A8h] [rbp-58h]
  HANDLE v62; // [rsp+B0h] [rbp-50h]
  HANDLE v63; // [rsp+B8h] [rbp-48h]
  WCHAR *v64; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t *v65; // [rsp+C8h] [rbp-38h]
  HANDLE v66; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t *v67; // [rsp+D8h] [rbp-28h]
  __int128 v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  _DWORD *v71; // [rsp+100h] [rbp+0h]
  int v72; // [rsp+108h] [rbp+8h]
  __int64 v73; // [rsp+110h] [rbp+10h]
  UNICODE_STRING *v74; // [rsp+118h] [rbp+18h]
  int v75; // [rsp+120h] [rbp+20h]
  __int128 v76; // [rsp+128h] [rbp+28h]
  int v77; // [rsp+138h] [rbp+38h]
  HANDLE v78; // [rsp+140h] [rbp+40h]
  UNICODE_STRING *v79; // [rsp+148h] [rbp+48h]
  int v80; // [rsp+150h] [rbp+50h]
  __int128 v81; // [rsp+158h] [rbp+58h]
  int v82; // [rsp+168h] [rbp+68h]
  HANDLE v83; // [rsp+170h] [rbp+70h]
  UNICODE_STRING *v84; // [rsp+178h] [rbp+78h]
  int v85; // [rsp+180h] [rbp+80h]
  __int128 v86; // [rsp+188h] [rbp+88h]
  int v87; // [rsp+198h] [rbp+98h]
  __int64 v88; // [rsp+1A0h] [rbp+A0h]
  UNICODE_STRING *v89; // [rsp+1A8h] [rbp+A8h]
  int v90; // [rsp+1B0h] [rbp+B0h]
  __int128 v91; // [rsp+1B8h] [rbp+B8h]
  int v92; // [rsp+1C8h] [rbp+C8h]
  HANDLE v93; // [rsp+1D0h] [rbp+D0h]
  UNICODE_STRING *v94; // [rsp+1D8h] [rbp+D8h]
  int v95; // [rsp+1E0h] [rbp+E0h]
  __int128 v96; // [rsp+1E8h] [rbp+E8h]
  __int128 v97; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v98; // [rsp+208h] [rbp+108h]
  int v99; // [rsp+210h] [rbp+110h]

  v71 = a3;
  LOBYTE(v3) = a1;
  v66 = 0LL;
  v63 = 0LL;
  v62 = 0LL;
  Handle = 0LL;
  v4 = a2;
  v55 = 0;
  v5 = 0;
  v54 = 0;
  v6 = 0;
  v60 = 0;
  v7 = 0;
  v46 = 0;
  v47[0] = 0;
  v61 = 0LL;
  v98 = 0LL;
  v99 = 0;
  v70 = 0LL;
  v49 = 0;
  v57 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  v52 = 0;
  v67 = 0LL;
  v69 = 0LL;
  v97 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  v9 = 18440;
  if ( a1 )
    v9 = a1;
  if ( (LOBYTE(v3) = v9, (v9 & 0xFFFF0363) != 0)
    || (v9 & 0x400) != 0 && (!a2 || (v9 & 0xFFFFFBF3) != 0)
    || (v9 & 0x8000) != 0 && (!a2 || (v9 & 0xFFFF6773) != 0)
    || (v9 & 0xC) == 0xC
    || (v9 & 0x1800) == 0x1800
    || (v9 & 0x10) != 0 && (v9 & 0x7080) != 0 )
  {
LABEL_2:
    InstallUILanguage = -1073741811;
LABEL_103:
    if ( (v3 & 0x80u) != 0 && v57 )
      RtlpMuiFreeLangRegistryInfo(v57);
    *v71 = v5 + v6 + v60;
    return (unsigned int)InstallUILanguage;
  }
  v10 = v9 | 8;
  if ( (v9 & 0xC) != 0 )
    v10 = v9;
  v11 = v10 | 0x4000;
  if ( (v10 & 0xE410) != 0 )
    v11 = v10;
  v12 = v11 | 0x800;
  if ( (v11 & 0x1C00) != 0 )
    v12 = v11;
  if ( (v12 & 0x80u) == 0 )
    v13 = RtlpCreateProcessRegistryInfo(&v57);
  else
    v13 = RtlpInitializeLangRegistryInfo(&v57);
  InstallUILanguage = v13;
  if ( v13 >= 0 )
  {
    if ( !v4 )
    {
      v33 = 2;
      LODWORD(v51) = 262146;
      v34 = (WCHAR *)&unk_18013736C;
      v3 = v12;
      *((_QWORD *)&v51 + 1) = &unk_18013736C;
      v39 = 4;
      goto LABEL_133;
    }
    v15 = 4LL;
    if ( (v12 & 4) == 0 )
      v15 = 85LL;
    if ( (int)RtlpCheckMuiMultiStringSafe(v4, v15) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlpSetPreferredUILanguages is not a valid multi-string!\n");
    v3 = v12;
    if ( (v12 & 0x400) != 0 )
    {
      InstallUILanguage = NtQueryInstallUILanguage();
      if ( InstallUILanguage < 0 )
      {
LABEL_92:
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0LL;
        }
        if ( v62 )
        {
          NtClose(v62);
          v62 = 0LL;
        }
        if ( v63 )
        {
          NtClose(v63);
          v63 = 0LL;
        }
        if ( v66 )
        {
          NtClose(v66);
          v66 = 0LL;
        }
        if ( v70 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v70);
        v5 = v55;
        v6 = v54;
        goto LABEL_103;
      }
      Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 522LL);
      v67 = Heap;
      v17 = Heap;
      if ( !Heap )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_92;
      }
      v50.Buffer = Heap;
      *(_DWORD *)&v50.Length = 11141120;
      if ( !RtlLCIDToCultureName(v52, (__int64)&v50) )
      {
        InstallUILanguage = -1073741811;
LABEL_88:
        if ( v17 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v17);
        if ( v65 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v65);
        goto LABEL_92;
      }
      v18 = (unsigned __int64)v50.Length >> 1;
      if ( (v12 & 4) != 0 )
      {
        InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, (__int64 *)&v64);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v4 = v64;
        v3 = v12 & 0xFFF3 | 8;
      }
      InstallUILanguage = RtlpGetMultiStringLength(v4, &v48, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      memmove((void *)&v17[v18 + 1], v4, 2LL * ((unsigned int)(unsigned __int16)v48 + 1));
      InstallUILanguage = RtlpAutoCompleteLanguageFallback(v57, v17);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      v4 = (WCHAR *)v17;
    }
    InstallUILanguage = RtlpGetMultiStringLength(v4, &v51, &v46);
    if ( InstallUILanguage >= 0 )
    {
      *((_QWORD *)&v51 + 1) = v4;
      LOWORD(v51) = 2 * v51;
      WORD1(v51) = v51 + 2;
      if ( v46 - 1 > 2 )
      {
        InstallUILanguage = -1073741811;
        goto LABEL_85;
      }
      v19 = v4;
      v65 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
      if ( !v65 )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_85;
      }
      v7 = v46;
      v48 = 0;
      if ( v46 )
      {
        v20 = v3 & 4;
        LODWORD(v68) = v20;
        while ( 1 )
        {
          if ( v20 )
          {
            RtlInitUnicodeString(&DestinationString, v19);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v53) < 0 )
              goto LABEL_84;
            v21 = v53;
            if ( ((v53 - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            DestinationString.Buffer = v65;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v53, (__int64)&DestinationString) )
              goto LABEL_84;
            Buffer = (__int64)DestinationString.Buffer;
            v22 = -1LL;
            do
              ++v22;
            while ( DestinationString.Buffer[v22] );
            v49 += v22 + 1;
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, v19);
            if ( !RtlCultureNameToLCID(&DestinationString.Length, &v53) )
              goto LABEL_84;
            v21 = v53;
            if ( ((v53 - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            Buffer = (__int64)DestinationString.Buffer;
          }
          v23 = v48;
          if ( v48 )
          {
            if ( v48 == 1 )
            {
              if ( (v3 & 0x800) != 0 || (v3 & 0x10) != 0 || (*(_BYTE *)v61 & 1) != 0 )
                goto LABEL_84;
              if ( (*(_BYTE *)v61 & 2) != 0 )
              {
                v26 = v59;
              }
              else
              {
                if ( (*(_BYTE *)v61 & 4) == 0 || v7 > 2 )
                  goto LABEL_84;
                v26 = v47;
              }
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        v57,
                                                        (_DWORD)v61,
                                                        v21,
                                                        (unsigned int)&v97,
                                                        (__int64)v26);
            }
            else
            {
              if ( v48 != 2 )
                goto LABEL_77;
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        v57,
                                                        (_DWORD)v61,
                                                        v21,
                                                        (unsigned int)&v97,
                                                        (__int64)v59);
            }
            if ( FallbackInstalledLanguageInfoByLangId < 0 )
              goto LABEL_84;
            v25 = &v97;
          }
          else
          {
            v27 = v57;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v57, (const WCHAR *)Buffer, 1, v47) < 0 )
              goto LABEL_84;
            v25 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v27 + 24) + 16LL) + 28LL * v47[0]);
          }
          v23 = v48;
          v61 = v25;
LABEL_77:
          if ( v19 )
          {
            v28 = -1LL;
            Buffer = 0LL;
            do
              ++v28;
            while ( v19[v28] );
            v19 += v28 + 1;
          }
          else
          {
            v19 = 0LL;
          }
          v48 = v23 + 1;
          if ( v23 + 1 >= v7 )
            break;
          v20 = v68;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v30 = v49 + 1;
        v49 = v30;
        if ( v30 > 0xFFFF )
          goto LABEL_84;
        v31 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v30);
        v32 = 0;
        v70 = v31;
        if ( !v31 )
        {
          InstallUILanguage = -1073741670;
          goto LABEL_85;
        }
        *((_QWORD *)&v51 + 1) = v31;
        v33 = 2 * v30;
        v34 = (WCHAR *)v31;
        LOWORD(v51) = 2 * v30;
        *(_QWORD *)&v68 = (unsigned __int16)(2 * v30);
        v35 = (_WORD *)v31;
        WORD1(v51) = v68;
        if ( v46 )
        {
          do
          {
            RtlInitUnicodeString(&DestinationString, v4);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v53) < 0 )
              goto LABEL_84;
            DestinationString.Buffer = v65;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v53, (__int64)&DestinationString) )
              goto LABEL_84;
            if ( (int)RtlStringCchCatW(v35, v49, (__int64)DestinationString.Buffer) < 0 )
            {
              InstallUILanguage = -1073741670;
              goto LABEL_85;
            }
            Buffer = -1LL;
            v36 = -1LL;
            do
              ++v36;
            while ( v35[v36] );
            v49 += -1 - v36;
            if ( v35 )
            {
              v37 = -1LL;
              do
                ++v37;
              while ( v35[v37] );
              v35 += v37 + 1;
            }
            if ( v4 )
            {
              v38 = -1LL;
              do
                ++v38;
              while ( v4[v38] );
              v4 += v38 + 1;
            }
            else
            {
              v4 = 0LL;
            }
          }
          while ( ++v32 < v46 );
        }
        v7 = v46;
        *v35 = 0;
        v4 = v34;
        v39 = v68;
      }
      else
      {
        v34 = (WCHAR *)*((_QWORD *)&v51 + 1);
        v39 = WORD1(v51);
        v33 = v51;
      }
LABEL_133:
      if ( (v3 & 0x400) != 0 )
      {
        RtlInitUnicodeString(&v50, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
        v72 = 48;
        v73 = 0LL;
        v75 = 64;
        v74 = &v50;
        v76 = 0LL;
        InstallUILanguage = ZwCreateKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        RtlInitUnicodeString(&v50, L"InstallLanguageFallback");
        v40 = -1LL;
        do
          ++v40;
        while ( v34[v40] );
        WORD1(v51) = -2 - 2 * v40 + v39;
        if ( v34 )
        {
          v41 = -1LL;
          do
            ++v41;
          while ( v34[v41] );
          v42 = &v34[v41 + 1];
        }
        else
        {
          v42 = 0LL;
        }
        *((_QWORD *)&v51 + 1) = v42;
        InstallUILanguage = RtlpGetMultiStringLength(v42, &v51, &v46);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v33 = v51;
        InstallUILanguage = ZwSetValueKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v7 = v46;
        v39 = WORD1(v51);
        v60 = v46;
      }
      if ( (v3 & 0x10) != 0 )
      {
        InstallUILanguage = RtlpSetInstallLanguage(v3, v4);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v60 = v7;
      }
      if ( (v3 & 0x4000) != 0 )
      {
        InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000u, Buffer, (__int64)&v66);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        RtlInitUnicodeString(&v50, L"Control Panel\\Desktop");
        v78 = v66;
        v77 = 48;
        v79 = &v50;
        v80 = 64;
        v81 = 0LL;
        InstallUILanguage = NtOpenKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        if ( (v3 & 0x800) != 0 )
        {
          RtlInitUnicodeString(&v50, L"PreferredUILanguagesPending");
        }
        else
        {
          if ( v7 < 2 )
            goto LABEL_84;
          RtlInitUnicodeString(&v50, L"LanguageConfigurationPending");
          v83 = v62;
          v82 = 48;
          v84 = &v50;
          v85 = 64;
          v86 = 0LL;
          InstallUILanguage = ZwCreateKey();
          if ( InstallUILanguage < 0 )
            goto LABEL_85;
          RtlInitUnicodeString(&v50, v4);
          if ( v4 )
          {
            v43 = -1LL;
            do
              ++v43;
            while ( v4[v43] );
            *((_QWORD *)&v51 + 1) = &v4[v43 + 1];
          }
          else
          {
            *((_QWORD *)&v51 + 1) = 0LL;
          }
          WORD1(v51) = v39 - v50.MaximumLength;
          LOWORD(v51) = v33 - v50.MaximumLength;
        }
        InstallUILanguage = ZwSetValueKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v55 = v7;
      }
      if ( Handle )
      {
        NtClose(Handle);
        Handle = 0LL;
      }
      if ( (v3 & 0x8800) == 0x8800 )
      {
        v68 = v51;
        InstallUILanguage = RtlpSetMachineUILanguagesImmediate();
        v54 = v7;
      }
      if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
        goto LABEL_180;
      RtlInitUnicodeString(&v50, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v87 = 48;
      v88 = 0LL;
      v90 = 64;
      v89 = &v50;
      v91 = 0LL;
      InstallUILanguage = ZwCreateKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      if ( (v3 & 0x800) != 0 )
      {
        RtlInitUnicodeString(&v50, L"PreferredUILanguages");
        InstallUILanguage = ZwSetValueKey();
        v44 = InstallUILanguage < 0;
LABEL_178:
        if ( v44 )
          goto LABEL_85;
        v54 = v7;
LABEL_180:
        if ( InstallUILanguage >= 0 && (v3 & 0xE410) != 0 )
        {
          ZwGetMUIRegistryInfo();
          if ( (v3 & 0x8410) != 0 )
            RtlUpdateProcessRegistryInfo();
        }
        goto LABEL_85;
      }
      if ( v7 >= 2 )
      {
        RtlInitUnicodeString(&v50, L"LanguageConfiguration");
        v93 = v63;
        v92 = 48;
        v94 = &v50;
        v95 = 64;
        v96 = 0LL;
        Handle = 0LL;
        InstallUILanguage = ZwCreateKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        RtlInitUnicodeString(&v50, v4);
        if ( v4 )
        {
          v45 = -1LL;
          do
            ++v45;
          while ( v4[v45] );
        }
        InstallUILanguage = ZwSetValueKey();
        v44 = InstallUILanguage < 0;
        goto LABEL_178;
      }
LABEL_84:
      InstallUILanguage = -1073741811;
    }
LABEL_85:
    if ( v64 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v64);
    v17 = v67;
    goto LABEL_88;
  }
  return (unsigned int)InstallUILanguage;
}
