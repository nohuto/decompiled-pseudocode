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

NTSTATUS __stdcall RtlpSetPreferredUILanguages(int a1, void *a2, _DWORD *a3)
{
  int v3; // ebx
  NTSTATUS MultiStringLength; // esi
  __int16 *v5; // edi
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
  _DWORD *v19; // edi
  __int16 *v20; // ecx
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
  char *v38; // ecx
  int v39; // eax
  NTSTATUS v40; // eax
  char *v41; // esi
  char *v42; // ecx
  __int16 v43; // ax
  int v44; // eax
  int v45; // edi
  char *v46; // esi
  char *v47; // ecx
  __int16 v48; // ax
  char *v49; // ecx
  SIZE_T v51; // [esp-4h] [ebp-12Ch]
  size_t v52; // [esp-4h] [ebp-12Ch]
  SIZE_T v53; // [esp-4h] [ebp-12Ch]
  uintptr_t StackCookie; // [esp+Ch] [ebp-11Ch] BYREF
  _UNICODE_STRING String; // [esp+14h] [ebp-114h] BYREF
  int v56; // [esp+1Ch] [ebp-10Ch] BYREF
  void *Src; // [esp+20h] [ebp-108h]
  __int16 v58[2]; // [esp+24h] [ebp-104h] BYREF
  PVOID Data; // [esp+28h] [ebp-100h]
  __int16 *v60; // [esp+2Ch] [ebp-FCh]
  __int16 *v61; // [esp+30h] [ebp-F8h] BYREF
  int v62; // [esp+34h] [ebp-F4h]
  HANDLE Handle; // [esp+38h] [ebp-F0h] BYREF
  int v64; // [esp+3Ch] [ebp-ECh] BYREF
  unsigned int v65; // [esp+40h] [ebp-E8h]
  PVOID v66; // [esp+44h] [ebp-E4h] BYREF
  _UNICODE_STRING DestinationString; // [esp+48h] [ebp-E0h] BYREF
  _WORD *i; // [esp+50h] [ebp-D8h]
  HANDLE v69; // [esp+54h] [ebp-D4h] BYREF
  HANDLE v70; // [esp+58h] [ebp-D0h] BYREF
  __int16 *j; // [esp+5Ch] [ebp-CCh]
  LANGID InstallUILanguageId; // [esp+60h] [ebp-C8h] BYREF
  ULONG Value; // [esp+64h] [ebp-C4h] BYREF
  HANDLE CurrentUserKey; // [esp+68h] [ebp-C0h] BYREF
  PVOID v75; // [esp+6Ch] [ebp-BCh]
  int v76; // [esp+70h] [ebp-B8h]
  PVOID BaseAddress; // [esp+74h] [ebp-B4h] BYREF
  int v78; // [esp+78h] [ebp-B0h]
  int v79; // [esp+7Ch] [ebp-ACh]
  int v80; // [esp+80h] [ebp-A8h]
  HANDLE KeyHandle; // [esp+84h] [ebp-A4h] BYREF
  PVOID v82; // [esp+88h] [ebp-A0h]
  _DWORD *v83; // [esp+8Ch] [ebp-9Ch]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+90h] [ebp-98h] BYREF
  _OBJECT_ATTRIBUTES v85; // [esp+A8h] [ebp-80h] BYREF
  _OBJECT_ATTRIBUTES v86; // [esp+C0h] [ebp-68h] BYREF
  _OBJECT_ATTRIBUTES v87; // [esp+D8h] [ebp-50h] BYREF
  _OBJECT_ATTRIBUTES v88; // [esp+F0h] [ebp-38h] BYREF
  _BYTE v89[28]; // [esp+108h] [ebp-20h] BYREF

  Src = a2;
  v62 = 0;
  CurrentUserKey = 0;
  v70 = 0;
  v69 = 0;
  Handle = 0;
  v79 = 0;
  v76 = 0;
  v80 = 0;
  v60 = 0;
  v82 = 0;
  v65 = 0;
  v66 = 0;
  v75 = 0;
  BaseAddress = 0;
  StackCookie = 0LL;
  KeyHandle = 0;
  v3 = a1;
  v83 = a3;
  LOWORD(v64) = 0;
  InstallUILanguageId = 0;
  memset(v89, 0, sizeof(v89));
  if ( !a3 )
    goto LABEL_2;
  if ( !a1 )
    v3 = 18440;
  if ( (v3 & 0xFFFF0363) != 0
    || (v5 = (__int16 *)Src, (v3 & 0x400) != 0) && (!Src || (v3 & 0xFFFFFBF3) != 0)
    || (v3 & 0x8000) != 0 && (!Src || (v3 & 0xFFFF6773) != 0)
    || (v3 & 0xC) == 0xC
    || (v3 & 0x1800) == 0x1800
    || (v3 & 0x10) != 0 && (v3 & 0x7080) != 0 )
  {
LABEL_2:
    MultiStringLength = -1073741811;
LABEL_184:
    if ( (v3 & 0x80u) != 0 && v66 )
      RtlpMuiFreeLangRegistryInfo(v66);
    *v83 = v79 + v80 + v76;
    return MultiStringLength;
  }
  if ( (v3 & 0xC) == 0 )
    LOWORD(v3) = v3 | 8;
  if ( (v3 & 0xE410) == 0 )
    LOWORD(v3) = v3 | 0x4000;
  if ( (v3 & 0x1C00) == 0 )
    LOWORD(v3) = v3 | 0x800;
  if ( (v3 & 0x80u) == 0 )
    v6 = RtlpCreateProcessRegistryInfo(&v66);
  else
    v6 = RtlpMuiRegCreateAndLoadRegistryInfo(&v66);
  MultiStringLength = v6;
  if ( v6 >= 0 )
  {
    if ( !Src )
    {
      v56 = 4;
      v25 = dword_4B298B74;
      v58[1] = 4;
      v33 = 2;
      v78 = 2;
      v58[0] = 2;
      goto LABEL_113;
    }
    v78 = v3 & 4;
    if ( (v3 & 4) != 0 )
      v7 = RtlpCheckMuiMultiStringSafe(Src, 4);
    else
      v7 = RtlpCheckMuiMultiStringSafe(Src, 85);
    if ( v7 < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlpSetPreferredUILanguages is not a valid multi-string!\n");
    if ( (v3 & 0x400) != 0 )
    {
      MultiStringLength = NtQueryInstallUILanguage(&InstallUILanguageId);
      if ( MultiStringLength < 0 )
      {
LABEL_174:
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0;
        }
        if ( v69 )
        {
          NtClose(v69);
          v69 = 0;
        }
        if ( v70 )
        {
          NtClose(v70);
          v70 = 0;
        }
        if ( CurrentUserKey )
        {
          NtClose(CurrentUserKey);
          CurrentUserKey = 0;
        }
        if ( v82 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v82);
        goto LABEL_184;
      }
      LODWORD(v51) = 522;
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v51);
      v5 = (__int16 *)Heap;
      LODWORD(StackCookie) = Heap;
      if ( !Heap )
      {
        MultiStringLength = -1073741801;
        goto LABEL_174;
      }
      String.Buffer = Heap;
      *(_DWORD *)&String.Length = 11141120;
      if ( !RtlLCIDToCultureName(InstallUILanguageId, &String) )
      {
        MultiStringLength = -1073741811;
LABEL_170:
        if ( v5 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
        if ( v75 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v75);
        goto LABEL_174;
      }
      v9 = String.Length >> 1;
      if ( v78 )
      {
        MultiStringLength = RtlpConvertLCIDsToCultureNames((wchar_t *)Src, &BaseAddress);
        if ( MultiStringLength < 0 )
          goto LABEL_167;
        v10 = (const unsigned __int16 *)BaseAddress;
        Src = BaseAddress;
        LOWORD(v3) = v3 & 0xFFF3 | 8;
      }
      else
      {
        v10 = (const unsigned __int16 *)Src;
      }
      MultiStringLength = RtlpGetMultiStringLength(v10, &v61, 0);
      if ( MultiStringLength < 0 )
        goto LABEL_167;
      LODWORD(v52) = 2 * (unsigned __int16)v61 + 2;
      memcpy((void *)(StackCookie + 2 * v9 + 2), Src, v52);
      v5 = (__int16 *)StackCookie;
      MultiStringLength = RtlpAutoCompleteLanguageFallback((int)v66, (const WCHAR *)StackCookie, v51);
      if ( MultiStringLength < 0 )
        goto LABEL_168;
      Src = (void *)StackCookie;
    }
    MultiStringLength = RtlpGetMultiStringLength((const unsigned __int16 *)v5, v58, (_DWORD *)&StackCookie + 1);
    if ( MultiStringLength >= 0 )
    {
      Data = v5;
      v58[0] *= 2;
      v58[1] = v58[0] + 2;
      if ( !HIDWORD(StackCookie) || HIDWORD(StackCookie) > 3 )
        goto LABEL_88;
      j = v5;
      LODWORD(v51) = 170;
      v75 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v51);
      if ( !v75 )
      {
        MultiStringLength = -1073741801;
        goto LABEL_167;
      }
      v78 = 2;
      v61 = 0;
      if ( HIDWORD(StackCookie) )
      {
        v11 = v3 & 4;
        for ( i = (_WORD *)v11; ; v11 = (int)i )
        {
          if ( v11 )
          {
            RtlInitUnicodeString(&DestinationString, v5);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              goto LABEL_88;
            v12 = Value;
            if ( Value == 4096 )
              goto LABEL_88;
            if ( Value == 5120 )
              goto LABEL_88;
            DestinationString.Buffer = (wchar_t *)v75;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
              goto LABEL_88;
            Buffer = DestinationString.Buffer;
            v14 = DestinationString.Buffer;
            v56 = (int)(DestinationString.Buffer + 1);
            do
              v15 = *v14++;
            while ( v15 != (_WORD)v62 );
            v65 += (((int)v14 - v56) >> 1) + 1;
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, v5);
            if ( !RtlCultureNameToLCID(&DestinationString, &Value) )
              goto LABEL_88;
            v12 = Value;
            if ( Value == 4096 || Value == 5120 )
              goto LABEL_88;
            Buffer = DestinationString.Buffer;
          }
          if ( v61 )
          {
            if ( v61 == (__int16 *)1 )
            {
              if ( (v3 & 0x800) != 0 )
                goto LABEL_88;
              if ( (v3 & 0x10) != 0 )
                goto LABEL_88;
              v18 = *v60;
              if ( (*v60 & 1) != 0 )
                goto LABEL_88;
              if ( (v18 & 2) != 0 )
              {
                v16 = &v56;
              }
              else
              {
                if ( (v18 & 4) == 0 || HIDWORD(StackCookie) > 2 )
                  goto LABEL_88;
                v16 = &v64;
              }
            }
            else
            {
              if ( v61 != (__int16 *)2 )
                goto LABEL_81;
              v16 = &v56;
            }
            if ( (int)RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(v12, v89, v16) < 0 )
              goto LABEL_88;
            v17 = (__int16 *)v89;
          }
          else
          {
            v19 = v66;
            if ( RtlpMuiRegGetInstalledLanguageIndexByName((int)v66, (const WCHAR *)Buffer, 1, &v64) < 0 )
              goto LABEL_88;
            v17 = (__int16 *)(*(_DWORD *)(v19[5] + 12) + 28 * (__int16)v64);
          }
          v60 = v17;
LABEL_81:
          if ( j )
          {
            v20 = j;
            do
              v21 = *v20++;
            while ( v21 != (_WORD)v62 );
            v5 = &j[v20 - (j + 1) + 1];
            j = v5;
          }
          else
          {
            v5 = 0;
            j = 0;
          }
          v61 = (__int16 *)((char *)v61 + 1);
          if ( (unsigned int)v61 >= HIDWORD(StackCookie) )
            break;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v22 = v65 + 1;
        v65 = v22;
        if ( v22 > 0xFFFF )
          goto LABEL_88;
        LODWORD(v53) = 2 * v22;
        v23 = (__int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v53);
        v24 = v23;
        v82 = v23;
        if ( !v23 )
        {
LABEL_92:
          MultiStringLength = -1073741670;
          goto LABEL_167;
        }
        v25 = (int *)v23;
        v26 = (const WCHAR *)Src;
        v64 = 2 * v65;
        v58[0] = 2 * v65;
        v56 = 2 * v65;
        v58[1] = 2 * v65;
        v60 = (__int16 *)Src;
        Src = v23;
        v61 = v23;
        for ( j = 0; (unsigned int)j < HIDWORD(StackCookie); j = (__int16 *)((char *)j + 1) )
        {
          RtlInitUnicodeString(&DestinationString, v26);
          if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
            goto LABEL_88;
          DestinationString.Buffer = (wchar_t *)v75;
          *(_DWORD *)&DestinationString.Length = 11141120;
          if ( !RtlLCIDToCultureName(Value, &DestinationString) )
            goto LABEL_88;
          if ( RtlStringCchCatW(v61, v65, (int)DestinationString.Buffer) < 0 )
            goto LABEL_92;
          v27 = v61;
          i = v61 + 1;
          do
            v28 = *v27++;
          while ( v28 != (_WORD)v62 );
          v65 += -1 - (v27 - i);
          if ( v61 )
          {
            v29 = v61;
            i = v61 + 1;
            do
              v30 = *v29++;
            while ( v30 != (_WORD)v62 );
            v24 = &v61[v29 - i + 1];
            v61 = v24;
          }
          else
          {
            v24 = 0;
            v61 = 0;
          }
          v31 = v60;
          if ( v60 )
          {
            i = v60 + 1;
            do
              v32 = *v31++;
            while ( v32 != (_WORD)v62 );
            v60 += v31 - i + 1;
            v26 = v60;
          }
          else
          {
            v26 = 0;
            v60 = 0;
          }
        }
        *v24 = 0;
LABEL_114:
        if ( (v3 & 0x400) != 0 )
        {
          RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
          ObjectAttributes.Length = 24;
          ObjectAttributes.RootDirectory = 0;
          ObjectAttributes.ObjectName = &String;
          ObjectAttributes.Attributes = 64;
          ObjectAttributes.SecurityDescriptor = 0;
          ObjectAttributes.SecurityQualityOfService = 0;
          MultiStringLength = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0, 0, 0);
          if ( MultiStringLength < 0 )
            goto LABEL_167;
          RtlInitUnicodeString(&String, L"InstallLanguageFallback");
          v34 = v25;
          do
          {
            v35 = *(_WORD *)v34;
            v34 = (int *)((char *)v34 + 2);
          }
          while ( v35 != (_WORD)v62 );
          v58[1] = -2 - 2 * (((char *)v34 - ((char *)v25 + 2)) >> 1) + v56;
          if ( v25 )
          {
            v36 = v25;
            do
            {
              v37 = *(_WORD *)v36;
              v36 = (int *)((char *)v36 + 2);
            }
            while ( v37 != (_WORD)v62 );
            v38 = (char *)v25 + 2 * (((char *)v36 - ((char *)v25 + 2)) >> 1) + 2;
          }
          else
          {
            v38 = 0;
          }
          Data = v38;
          v39 = RtlpGetMultiStringLength((const unsigned __int16 *)v38, v58, (_DWORD *)&StackCookie + 1);
          MultiStringLength = v39;
          if ( v39 < 0 )
            goto LABEL_167;
          LOWORD(v39) = v58[0];
          v25 = (int *)Data;
          v64 = v39;
          v40 = ZwSetValueKey(KeyHandle, &String, 0, 7u, Data, 2 * (unsigned __int16)v58[0]);
          MultiStringLength = v40;
          if ( v40 < 0 )
            goto LABEL_167;
          LOWORD(v40) = v58[1];
          v80 = HIDWORD(StackCookie);
          v56 = v40;
        }
        if ( (v3 & 0x10) != 0 )
        {
          MultiStringLength = RtlpSetInstallLanguage(v3, (PCWSTR)Src);
          if ( MultiStringLength < 0 )
            goto LABEL_167;
          v80 = HIDWORD(StackCookie);
        }
        if ( (v3 & 0x4000) != 0 )
        {
          MultiStringLength = OpenGlobalizationUserSettingsKey(0x2000000u, &CurrentUserKey);
          if ( MultiStringLength < 0 )
            goto LABEL_167;
          RtlInitUnicodeString(&String, L"Control Panel\\Desktop");
          v85.RootDirectory = CurrentUserKey;
          v85.ObjectName = &String;
          v85.SecurityDescriptor = 0;
          v85.SecurityQualityOfService = 0;
          v85.Length = 24;
          v85.Attributes = 64;
          MultiStringLength = ZwOpenKey(&v69, 0xF003Fu, &v85);
          if ( MultiStringLength < 0 )
            goto LABEL_167;
          if ( (v3 & 0x800) != 0 )
          {
            RtlInitUnicodeString(&String, L"PreferredUILanguagesPending");
            MultiStringLength = ZwSetValueKey(v69, &String, 0, 7u, v25, (unsigned __int16)v56);
            if ( MultiStringLength < 0 )
              goto LABEL_167;
            v79 = HIDWORD(StackCookie);
          }
          else
          {
            if ( HIDWORD(StackCookie) < 2 )
              goto LABEL_88;
            RtlInitUnicodeString(&String, L"LanguageConfigurationPending");
            v86.RootDirectory = v69;
            v86.ObjectName = &String;
            v86.SecurityDescriptor = 0;
            v86.SecurityQualityOfService = 0;
            v86.Length = 24;
            v86.Attributes = 64;
            MultiStringLength = ZwCreateKey(&Handle, 0xF003Fu, &v86, 0, 0, 0, 0);
            if ( MultiStringLength < 0 )
              goto LABEL_167;
            v41 = (char *)Src;
            RtlInitUnicodeString(&String, (PCWSTR)Src);
            if ( v41 )
            {
              v42 = v41;
              do
              {
                v43 = *(_WORD *)v42;
                v42 += 2;
              }
              while ( v43 != (_WORD)v62 );
              v25 = (int *)&v41[2 * ((v42 - (v41 + 2)) >> 1) + 2];
            }
            else
            {
              v25 = 0;
            }
            v58[0] = v64 - String.MaximumLength;
            HIWORD(v44) = HIWORD(v56);
            LOWORD(v44) = v56 - String.MaximumLength;
            v56 = v44;
            v58[1] = v44;
            MultiStringLength = ZwSetValueKey(Handle, &String, 0, 7u, v25, (unsigned __int16)v44);
            if ( MultiStringLength < 0 )
              goto LABEL_167;
            v79 = HIDWORD(StackCookie);
          }
        }
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0;
        }
        if ( (v3 & 0x8800) == 0x8800 )
        {
          MultiStringLength = RtlpSetMachineUILanguagesImmediate(*(int *)v58, v25);
          v76 = HIDWORD(StackCookie);
        }
        if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
          goto LABEL_163;
        RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
        v87.Length = 24;
        v87.RootDirectory = 0;
        v87.ObjectName = &String;
        v87.Attributes = 64;
        v87.SecurityDescriptor = 0;
        v87.SecurityQualityOfService = 0;
        MultiStringLength = ZwCreateKey(&v70, 0xF003Fu, &v87, 0, 0, 0, 0);
        if ( MultiStringLength < 0 )
          goto LABEL_167;
        if ( (v3 & 0x800) != 0 )
        {
          RtlInitUnicodeString(&String, L"PreferredUILanguages");
          MultiStringLength = ZwSetValueKey(v70, &String, 0, 7u, v25, (unsigned __int16)v56);
          if ( MultiStringLength < 0 )
            goto LABEL_167;
          v76 = HIDWORD(StackCookie);
LABEL_163:
          if ( MultiStringLength >= 0 && (v3 & 0xE410) != 0 )
          {
            NtGetMUIRegistryInfo(8u, 0, 0);
            if ( (v3 & 0x8410) != 0 )
              RtlUpdateProcessRegistryInfo();
          }
          goto LABEL_167;
        }
        v45 = HIDWORD(StackCookie);
        if ( HIDWORD(StackCookie) >= 2 )
        {
          RtlInitUnicodeString(&String, L"LanguageConfiguration");
          v88.RootDirectory = v70;
          v88.ObjectName = &String;
          v88.SecurityDescriptor = 0;
          v88.SecurityQualityOfService = 0;
          Handle = 0;
          v88.Length = 24;
          v88.Attributes = 64;
          MultiStringLength = ZwCreateKey(&Handle, 0xF003Fu, &v88, 0, 0, 0, 0);
          if ( MultiStringLength < 0 )
            goto LABEL_167;
          v46 = (char *)Src;
          RtlInitUnicodeString(&String, (PCWSTR)Src);
          if ( v46 )
          {
            v47 = v46;
            do
            {
              v48 = *(_WORD *)v47;
              v47 += v78;
            }
            while ( v48 != (_WORD)v62 );
            v49 = &v46[2 * ((v47 - (v46 + 2)) >> 1) + 2];
          }
          else
          {
            v49 = 0;
          }
          Data = v49;
          MultiStringLength = ZwSetValueKey(
                                Handle,
                                &String,
                                0,
                                7u,
                                v49,
                                (unsigned __int16)(v58[1] - String.MaximumLength));
          if ( MultiStringLength < 0 )
            goto LABEL_167;
          v76 = v45;
          goto LABEL_163;
        }
LABEL_88:
        MultiStringLength = -1073741811;
        goto LABEL_167;
      }
      v33 = (unsigned __int16)v58[1];
      v25 = (int *)Data;
      v56 = (unsigned __int16)v58[1];
      LOWORD(v33) = v58[0];
LABEL_113:
      v64 = v33;
      goto LABEL_114;
    }
LABEL_167:
    v5 = (__int16 *)StackCookie;
LABEL_168:
    if ( BaseAddress )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    goto LABEL_170;
  }
  return MultiStringLength;
}
