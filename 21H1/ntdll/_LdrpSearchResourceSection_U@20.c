/*
 * XREFs of _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0
 * Callers:
 *     _LdrpGetRcConfig@16 @ 0x4B2B8818 (_LdrpGetRcConfig@16.c)
 *     _RtlLoadString@32 @ 0x4B2BA030 (_RtlLoadString@32.c)
 *     _LdrFindResource_U@16 @ 0x4B2BB910 (_LdrFindResource_U@16.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _RtlFindMessage@20 @ 0x4B2DFF20 (_RtlFindMessage@20.c)
 *     _LdrFindResourceEx_U@20 @ 0x4B2EBB90 (_LdrFindResourceEx_U@20.c)
 *     _LdrFindResourceDirectory_U@16 @ 0x4B33F160 (_LdrFindResourceDirectory_U@16.c)
 *     _RtlpFileIsWin32WithRCManifest@4 @ 0x4B353DB4 (_RtlpFileIsWin32WithRCManifest@4.c)
 * Callees:
 *     _RtlpImageDirectoryEntryToData64@24 @ 0x4B2A7346 (_RtlpImageDirectoryEntryToData64@24.c)
 *     _LdrpGetParentLangId@8 @ 0x4B2A8888 (_LdrpGetParentLangId@8.c)
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _LdrpResReportResourceAccessInternal@16 @ 0x4B2B0BD2 (_LdrpResReportResourceAccessInternal@16.c)
 *     _LdrpGetRcConfig@16 @ 0x4B2B8818 (_LdrpGetRcConfig@16.c)
 *     _LdrpSetAlternateResourceModuleHandle@32 @ 0x4B2B9366 (_LdrpSetAlternateResourceModuleHandle@32.c)
 *     _LdrpSetThreadPreferredLangList@0 @ 0x4B2BA5F0 (_LdrpSetThreadPreferredLangList@0.c)
 *     _GetLCIDFromLangListNodeWithLICCheck@20 @ 0x4B2BA710 (_GetLCIDFromLangListNodeWithLICCheck@20.c)
 *     _LdrpResGetMappingSize@16 @ 0x4B2BAB30 (_LdrpResGetMappingSize@16.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _LdrpGetFromMUIMemCache@16 @ 0x4B2BD4F0 (_LdrpGetFromMUIMemCache@16.c)
 *     _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0 (_LdrpAccessResourceDataNoMultipleLanguage@16.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrRscIsTypeExist@16 @ 0x4B2BE7B0 (_LdrRscIsTypeExist@16.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _NtQueryDefaultLocale@8 @ 0x4B2F2AB0 (_NtQueryDefaultLocale@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 *     _RtlULongMult@12 @ 0x4B306D00 (_RtlULongMult@12.c)
 *     _ResourceEntryBinarySearch@32 @ 0x4B306E16 (_ResourceEntryBinarySearch@32.c)
 */

int __fastcall LdrpSearchResourceSection_U(PVOID BaseOfImage, int a2, unsigned int a3, ULONG Flags, int a5)
{
  ULONG v6; // ebx
  unsigned int v7; // ecx
  _IMAGE_NT_HEADERS64 *v8; // eax
  unsigned int v9; // ecx
  PVOID v10; // esi
  int v11; // edi
  NTSTATUS v12; // edx
  WORD Magic; // ax
  DWORD VirtualAddress; // esi
  _DWORD *v15; // edx
  unsigned int NumberOfSections; // ebx
  unsigned int i; // ecx
  DWORD v18; // edi
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int result; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // ecx
  unsigned __int16 CurrentLocale; // si
  unsigned int v28; // eax
  unsigned int v29; // edx
  bool v30; // zf
  unsigned int v31; // edx
  int *v32; // ecx
  PVOID Heap; // eax
  PVOID v34; // edx
  NTSTATUS v35; // edi
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  NTSTATUS v40; // esi
  int v41; // ecx
  unsigned int v42; // edi
  _DWORD *RcConfig; // eax
  int v44; // ecx
  int *v45; // edx
  __int16 v46; // ax
  wchar_t *v47; // ecx
  unsigned int v48; // ecx
  NTSTATUS v49; // esi
  int *v50; // edi
  NTSTATUS ResourceFromAlternativeModule; // eax
  int v52; // eax
  PVOID v53; // ebx
  int *v54; // esi
  NTSTATUS v55; // eax
  int v56; // eax
  PVOID v57; // ebx
  ULONG v58; // [esp-8h] [ebp-F8h]
  ULONG v59; // [esp-8h] [ebp-F8h]
  SIZE_T v60; // [esp-4h] [ebp-F4h]
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-E0h] BYREF
  int v62; // [esp+18h] [ebp-D8h] BYREF
  int *v63; // [esp+20h] [ebp-D0h]
  unsigned int v64; // [esp+24h] [ebp-CCh]
  int v65; // [esp+28h] [ebp-C8h] BYREF
  DWORD v66; // [esp+2Ch] [ebp-C4h] BYREF
  DWORD Lcid[2]; // [esp+30h] [ebp-C0h] BYREF
  int v68; // [esp+38h] [ebp-B8h]
  int v69; // [esp+3Ch] [ebp-B4h]
  int Size; // [esp+40h] [ebp-B0h] BYREF
  int v71; // [esp+44h] [ebp-ACh] BYREF
  unsigned int v72; // [esp+48h] [ebp-A8h] BYREF
  DWORD DefaultLocaleId; // [esp+4Ch] [ebp-A4h] BYREF
  unsigned int v74; // [esp+50h] [ebp-A0h]
  PVOID v75; // [esp+54h] [ebp-9Ch]
  bool v76; // [esp+5Bh] [ebp-95h] BYREF
  int *v77; // [esp+5Ch] [ebp-94h]
  int v78; // [esp+60h] [ebp-90h] BYREF
  int v79; // [esp+64h] [ebp-8Ch]
  int v80; // [esp+68h] [ebp-88h] BYREF
  int v81; // [esp+6Ch] [ebp-84h] BYREF
  int v82; // [esp+70h] [ebp-80h]
  int v83; // [esp+74h] [ebp-7Ch] BYREF
  unsigned int v84; // [esp+78h] [ebp-78h]
  PIMAGE_NT_HEADERS OutHeaders; // [esp+7Ch] [ebp-74h] BYREF
  int v86; // [esp+80h] [ebp-70h]
  int v87; // [esp+84h] [ebp-6Ch] BYREF
  int v88; // [esp+88h] [ebp-68h]
  int v89; // [esp+8Ch] [ebp-64h] BYREF
  int *v90; // [esp+90h] [ebp-60h]
  PVOID BaseOfImagea; // [esp+94h] [ebp-5Ch]
  int v92; // [esp+98h] [ebp-58h]
  unsigned int v93; // [esp+9Ch] [ebp-54h]
  unsigned __int16 v94; // [esp+A0h] [ebp-50h]
  char v95; // [esp+A4h] [ebp-4Ch]
  int v96; // [esp+A8h] [ebp-48h] BYREF
  NTSTATUS v97; // [esp+ACh] [ebp-44h]
  _BYTE v98[3]; // [esp+B3h] [ebp-3Dh] BYREF
  const wchar_t *v99; // [esp+B8h] [ebp-38h]
  int v100; // [esp+BCh] [ebp-34h]
  int v101; // [esp+C0h] [ebp-30h]
  wchar_t *v102; // [esp+C4h] [ebp-2Ch] BYREF
  int v103; // [esp+C8h] [ebp-28h]
  int v104; // [esp+CCh] [ebp-24h]
  int v105; // [esp+D0h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+D8h] [ebp-18h]

  v90 = (int *)a2;
  BaseOfImagea = BaseOfImage;
  v77 = (int *)a2;
  v88 = a5;
  v92 = a2;
  v98[0] = 0;
  v72 = 0;
  v74 = 0;
  v6 = Flags;
  if ( a3 < 3 && (Flags & 2) == 0 || a3 > 4 || (Flags & 0x41) != 0 && a3 != 4 )
    return -1073741583;
  if ( a3 != 4 )
  {
    v7 = a3;
    v93 = a3;
    goto LABEL_10;
  }
  if ( (Flags & 0x41) == 0 )
    return -1073741583;
  v7 = 3;
  v93 = 3;
LABEL_10:
  v84 = v7;
  ms_exc.registration.TryLevel = 0;
  v79 = ~Flags;
  if ( (~(_BYTE)Flags & 0x10) == 0 || v7 - 1 > 2 )
    goto LABEL_25;
  if ( v7 == 3 )
    v8 = (_IMAGE_NT_HEADERS64 *)*(unsigned __int16 *)(a2 + 8);
  else
    v8 = 0;
  OutHeaders = v8;
  v94 = (unsigned __int16)v8;
  v9 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 != 16 && v9 != 24 )
  {
    if ( (v9 & 0xFFFF0000) == 0 || _wcsicmp((const wchar_t *)v9, L"MUI") )
      goto LABEL_39;
    LOWORD(v8) = (_WORD)OutHeaders;
  }
  if ( (v79 & 8) != 0 && (!(_WORD)v8 || (_WORD)v8 == 1024 || (_WORD)v8 == 2048) )
  {
    v6 = Flags | 0x10;
    Flags |= 0x10u;
    goto LABEL_25;
  }
LABEL_39:
  v87 = 0;
  v80 = 0;
  v19 = LdrpGetFromMUIMemCache(0, 8);
  v89 = v19;
  if ( v19 == -1 )
  {
LABEL_55:
    v22 = 0x80000;
    goto LABEL_56;
  }
  if ( v19 )
    goto LABEL_49;
  v99 = L"MUI";
  v100 = 1;
  v101 = 0;
  v20 = LdrpSearchResourceSection_U(BaseOfImage, 3, 0x2000030u, (int)&v71);
  v69 = v20;
  if ( v20 < 0 )
  {
    v89 = 0;
    v21 = -1;
    goto LABEL_48;
  }
  v20 = LdrpAccessResourceDataNoMultipleLanguage(BaseOfImage, (int)&v89, (int)&v80);
  v69 = v20;
  if ( v20 < 0 )
    goto LABEL_46;
  v21 = v89;
  if ( *(_DWORD *)v89 != -20054323 )
  {
    v20 = -1073741701;
    v69 = -1073741701;
LABEL_46:
    v89 = 0;
    v21 = -1;
    goto LABEL_48;
  }
  v80 = 0;
LABEL_48:
  LdrpSetAlternateResourceModuleHandle((int)BaseOfImage, 0, 0, v21, 0, 2, v20, 0);
  v19 = v89;
  if ( !v89 )
    goto LABEL_55;
LABEL_49:
  if ( LdrRscIsTypeExist(v19, (wchar_t *)*v90, Flags, (int)&v87) < 0 )
  {
    v22 = 393216;
LABEL_56:
    v87 = v22;
    goto LABEL_57;
  }
  v22 = v87;
  if ( (*(_DWORD *)(v89 + 20) & 0x100) != 0 )
  {
    v22 = v87 | 0x100000;
    v87 |= 0x100000u;
  }
  if ( (*(_BYTE *)(v89 + 16) & 0x10) != 0 )
  {
    v22 |= 0x200000u;
    goto LABEL_56;
  }
LABEL_57:
  v6 = v22 | Flags;
  Flags = v6;
  if ( (v6 & 0x40000) != 0 )
  {
    result = -1073741686;
    v97 = -1073741686;
    if ( (v6 & 0x20000) == 0 )
    {
      v102 = (wchar_t *)*v90;
      if ( v93 < 2 )
        v24 = 0;
      else
        v24 = v90[1];
      v103 = v24;
      if ( v93 == 3 )
        v25 = v90[2];
      else
        v25 = 0;
      v104 = v25;
      if ( a3 == 4 )
        v105 = v90[3];
      result = LdrpLoadResourceFromAlternativeModule(BaseOfImage, (int)&v102, a3, v6, v88);
      v97 = result;
    }
    goto LABEL_68;
  }
LABEL_25:
  v95 = 1;
  v10 = BaseOfImagea;
  v75 = BaseOfImagea;
  OutHeaders = 0;
  v11 = 0;
  v83 = 0;
  if ( ((unsigned __int8)BaseOfImagea & 3) != 0 )
  {
    v95 = ((unsigned __int8)BaseOfImagea & 1) == 0;
    v10 = (PVOID)((unsigned int)BaseOfImagea & 0xFFFFFFFC);
    v75 = (PVOID)((unsigned int)BaseOfImagea & 0xFFFFFFFC);
  }
  v12 = RtlImageNtHeaderEx(1u, v10, 0LL, &OutHeaders);
  if ( !OutHeaders )
    goto LABEL_76;
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic != 267 )
  {
    if ( Magic != 523 )
      goto LABEL_77;
    v12 = RtlpImageDirectoryEntryToData64((char *)v10, v95, 2u, (unsigned int *)&Size, OutHeaders, &v83);
    v11 = v83;
LABEL_76:
    if ( v12 >= 0 )
      goto LABEL_79;
    goto LABEL_77;
  }
  if ( HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) <= 2 )
    goto LABEL_77;
  VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
  if ( !VirtualAddress )
    goto LABEL_77;
  Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
  if ( !v95 && VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
  {
    v15 = (_DWORD *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
    NumberOfSections = OutHeaders->FileHeader.NumberOfSections;
    for ( i = 0; ; ++i )
    {
      v64 = i;
      Lcid[1] = (DWORD)v15;
      if ( i >= NumberOfSections )
        break;
      v18 = v15[3];
      if ( VirtualAddress >= v18 && VirtualAddress < v18 + v15[4] )
      {
        if ( v15 )
        {
          v11 = (int)v75 + VirtualAddress + v15[5] - v15[3];
          goto LABEL_71;
        }
        break;
      }
      v15 += 10;
    }
    v11 = 0;
LABEL_71:
    v83 = v11;
    v6 = Flags;
    v90 = v77;
    if ( v11 )
    {
      v12 = 0;
      goto LABEL_76;
    }
LABEL_77:
    v11 = 0;
    goto LABEL_78;
  }
  v11 = (int)v75 + VirtualAddress;
LABEL_78:
  v83 = v11;
LABEL_79:
  v68 = v11;
  if ( !v11 )
  {
    ms_exc.registration.TryLevel = -2;
    return -1073741687;
  }
  result = LdrpResGetMappingSize((int)BaseOfImagea, &v72, 256, 1);
  v97 = result;
  if ( result < 0 )
  {
LABEL_68:
    ms_exc.registration.TryLevel = -2;
    return result;
  }
  v78 = v11;
  v96 = 61166;
  v86 = 0;
  v26 = 0;
  v81 = 0;
  v82 = 0;
  CurrentLocale = 0;
  *(_WORD *)&v98[1] = 0;
  v94 = 0;
  DefaultLocaleId = 0;
  while ( 1 )
  {
    if ( !v11 )
      goto LABEL_90;
    v28 = v84;
    v29 = --v84;
    if ( !v28 )
      goto LABEL_90;
    v30 = v29 == 0;
    v31 = v93;
    if ( v30 && v93 == 3 )
      v82 = v11;
    if ( v82 )
    {
      CurrentLocale = 0;
      *(_WORD *)&v98[1] = 0;
      v32 = (int *)v92;
      v94 = *(_WORD *)(v92 + 8);
      *(_WORD *)v98 = (v94 & 0x3FF) == 0;
      goto LABEL_107;
    }
LABEL_168:
    v71 = *(unsigned __int16 *)(v11 + 14);
    Size = *(unsigned __int16 *)(v11 + 12);
    result = RtlULongPtrAdd((unsigned __int16)Size, (unsigned __int16)v71, &v65);
    v97 = result;
    if ( result < 0 )
      goto LABEL_68;
    result = RtlULongMult(&v62);
    v97 = result;
    if ( result < 0 )
      goto LABEL_68;
    v45 = (int *)(v11 + 16);
    v63 = (int *)(v11 + 16);
    v80 = v72 + ((unsigned int)BaseOfImagea & 0xFFFFFFFC);
    if ( v11 + 16 + v62 > (unsigned int)v80 )
      goto LABEL_171;
    v46 = Size;
    LOWORD(v79) = Size;
    v47 = (wchar_t *)*v90;
    if ( (*v90 & 0xFFFF0000) == 0 )
    {
      v45 += 2 * (unsigned __int16)Size;
      v63 = v45;
      v46 = v71;
      LOWORD(v79) = v71;
    }
    if ( !v46 )
    {
      v48 = v93;
      switch ( v93 - v84 )
      {
        case 1u:
          v49 = -1073741686;
          break;
        case 2u:
          v49 = -1073741685;
          break;
        case 3u:
          v97 = -1073741308;
          ms_exc.registration.TryLevel = -2;
          return -1073741308;
        default:
          v49 = -1073741811;
          v50 = (int *)v92;
          goto LABEL_189;
      }
      v97 = v49;
      v50 = (int *)v92;
      if ( (v6 & 0x2040000) != 0 || v93 != 3 )
        goto LABEL_190;
      v102 = *(wchar_t **)v92;
      v103 = *(_DWORD *)(v92 + 4);
      v104 = *(_DWORD *)(v92 + 8);
      if ( a3 == 4 )
        v105 = *(_DWORD *)(v92 + 12);
      ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                        BaseOfImagea,
                                        (int)&v102,
                                        a3,
                                        v6 | 0x1000000,
                                        v88);
      v48 = v93;
      if ( ResourceFromAlternativeModule == -1073020927 || ResourceFromAlternativeModule == -1073020922 )
        goto LABEL_190;
      v49 = ResourceFromAlternativeModule;
LABEL_189:
      v97 = v49;
LABEL_190:
      if ( v49 == -1073741686 || v49 == -1073741685 )
      {
        v52 = ~v6;
        if ( (~v6 & 0x80000) != 0 && (v52 & 0x20000) != 0 && (v52 & 0x10) != 0 && v48 == 3 )
        {
          v102 = (wchar_t *)*v50;
          v103 = v50[1];
          v104 = v50[2];
          if ( a3 == 4 )
            v105 = v50[3];
          v58 = v6;
          v53 = BaseOfImagea;
          v49 = LdrpLoadResourceFromAlternativeModule(BaseOfImagea, (int)&v102, a3, v58, v88);
          v97 = v49;
          if ( v49 >= 0 )
            LdrpResReportResourceAccessInternal(v53, 0, (int *)&v102, a3);
        }
      }
      ms_exc.registration.TryLevel = -2;
      return v49;
    }
    if ( v82 && (v6 & 0x20) != 0 )
      break;
    if ( !(unsigned __int8)ResourceEntryBinarySearch(v79, v68, (int)v45, v47, (int)&v78, (int)&v81) )
      goto LABEL_171;
    v77 = ++v90;
    v11 = v78;
    v26 = v81;
  }
  v11 = 0;
  v78 = 0;
  v96 = *v45;
  v26 = v68 + v45[1];
  if ( v26 > v80 )
  {
LABEL_171:
    ms_exc.registration.TryLevel = -2;
    return -1073741701;
  }
  v81 = v68 + v45[1];
LABEL_90:
  if ( v26 && (v6 & 2) == 0 )
  {
    *(_DWORD *)v88 = v26;
    if ( !NtCurrentTeb()->ResourceRetValue )
    {
      v90 = (int *)NtCurrentTeb();
      LODWORD(v60) = 12;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v60);
      v90[1016] = (int)Heap;
    }
    if ( NtCurrentTeb()->ResourceRetValue )
    {
      v34 = BaseOfImagea;
      *(_DWORD *)NtCurrentTeb()->ResourceRetValue = BaseOfImagea;
      *((_DWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v81;
      *((_DWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v34;
    }
    v35 = 0;
    v97 = 0;
    v6 = Flags;
    v31 = v93;
    goto LABEL_210;
  }
  if ( v11 && (v6 & 2) != 0 )
  {
    *(_DWORD *)v88 = v11;
    v35 = 0;
    v31 = v93;
LABEL_209:
    v97 = v35;
    goto LABEL_210;
  }
  v31 = v93;
  if ( v93 - v84 == 1 )
  {
    v35 = -1073741686;
    goto LABEL_209;
  }
  if ( v93 - v84 == 2 )
  {
    v35 = -1073741685;
    goto LABEL_209;
  }
  if ( v93 - v84 != 3 )
  {
    v35 = -1073741811;
    goto LABEL_209;
  }
  v35 = -1073741308;
  v97 = -1073741308;
  if ( v82 )
  {
    v81 = 0;
    while ( 1 )
    {
      v32 = (int *)v92;
LABEL_107:
      v36 = v86++;
      switch ( v36 )
      {
        case 0:
          if ( !v94 )
            goto LABEL_109;
          if ( (v6 & 0x80000) == 0 )
            goto LABEL_138;
          goto LABEL_111;
        case 1:
          v37 = ~v6;
          if ( (~v6 & 0x80000) == 0 || (v37 & 0x20000) == 0 || (v37 & 0x10) == 0 )
            goto LABEL_138;
          v102 = (wchar_t *)*v32;
          if ( v31 < 2 )
            v38 = 0;
          else
            v38 = v32[1];
          v103 = v38;
          if ( v31 == 3 )
            v39 = v32[2];
          else
            v39 = 0;
          v104 = v39;
          if ( a3 == 4 )
            v105 = v32[3];
          v40 = LdrpLoadResourceFromAlternativeModule(BaseOfImagea, (int)&v102, a3, v6, v88);
          v97 = v40;
          if ( v40 < 0 )
            goto LABEL_138;
          LdrpResReportResourceAccessInternal(BaseOfImagea, 0, (int *)&v102, a3);
          ms_exc.registration.TryLevel = -2;
          return v40;
        case 2:
          if ( v98[0] )
          {
            CurrentLocale = v96;
            *(_WORD *)&v98[1] = v96;
          }
          else
          {
LABEL_111:
            CurrentLocale = v94;
            *(_WORD *)&v98[1] = v94;
          }
          goto LABEL_164;
        case 3:
          if ( (v6 & 4) != 0 )
            goto LABEL_128;
          if ( v98[0] )
          {
            CurrentLocale = v96;
            *(_WORD *)&v98[1] = v96;
          }
          else if ( LdrpGetParentLangId(CurrentLocale, &v98[1]) < 0 )
          {
LABEL_109:
            CurrentLocale = 0;
            *(_WORD *)&v98[1] = 0;
          }
          else
          {
            CurrentLocale = *(_WORD *)&v98[1];
            if ( *(_WORD *)&v98[1] )
              --v86;
          }
          goto LABEL_164;
        case 4:
          if ( v98[0] )
          {
            CurrentLocale = v96;
            *(_WORD *)&v98[1] = v96;
          }
          else
          {
            CurrentLocale = v94 & 0x3FF;
            *(_WORD *)&v98[1] = v94 & 0x3FF;
          }
          goto LABEL_164;
        case 5:
          if ( v98[0] )
            goto LABEL_138;
          goto LABEL_128;
        case 6:
          CurrentLocale = v96;
          *(_WORD *)&v98[1] = v96;
          if ( (v6 & 0x20) != 0 )
            goto LABEL_164;
          *(_WORD *)&v98[1] = 0;
          if ( LdrpSetThreadPreferredLangList() )
          {
            if ( v74 >= *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2) )
            {
              *(_WORD *)&v98[1] = 0;
            }
            else
            {
              v42 = v74;
              GetLCIDFromLangListNodeWithLICCheck(
                v41,
                (int)NtCurrentTeb()->MergedPrefLanguages,
                v74,
                (unsigned __int16 *)&v98[1],
                &v76);
              CurrentLocale = *(_WORD *)&v98[1];
              if ( *(_WORD *)&v98[1] )
              {
                v74 = v42 + 1;
                --v86;
                v6 = Flags;
                goto LABEL_164;
              }
            }
            v6 = Flags;
            CurrentLocale = v96;
            *(_WORD *)&v98[1] = v96;
          }
          else
          {
            CurrentLocale = v96;
            *(_WORD *)&v98[1] = v96;
          }
LABEL_164:
          if ( (~(_BYTE)v6 & 0x20) == 0 || CurrentLocale != v96 )
          {
            v96 = CurrentLocale;
            v90 = &v96;
            v77 = &v96;
            v11 = v82;
            v78 = v82;
            goto LABEL_168;
          }
          v31 = v93;
          break;
        case 7:
          if ( (~v6 & 0x80000) != 0
            && (RcConfig = (_DWORD *)LdrpGetRcConfig(BaseOfImagea, 0, 1)) != 0
            && *RcConfig == -20054323
            && (v44 = RcConfig[31]) != 0
            && (RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + v44)),
                RtlCultureNameToLCID(&DestinationString, Lcid)) )
          {
            CurrentLocale = Lcid[0];
            *(_WORD *)&v98[1] = Lcid[0];
          }
          else
          {
LABEL_138:
            CurrentLocale = v96;
            *(_WORD *)&v98[1] = v96;
          }
          goto LABEL_164;
        case 8:
          CurrentLocale = v96;
          *(_WORD *)&v98[1] = v96;
          if ( (~v6 & 0x80000) != 0 )
            goto LABEL_163;
          if ( NtCurrentTeb() )
          {
            CurrentLocale = NtCurrentTeb()->CurrentLocale;
            *(_WORD *)&v98[1] = CurrentLocale;
            v6 = Flags;
          }
          else
          {
            v6 = Flags;
            CurrentLocale = *(_WORD *)&v98[1];
          }
          goto LABEL_164;
        case 9:
          CurrentLocale = v96;
          *(_WORD *)&v98[1] = v96;
          v97 = NtQueryDefaultLocale(1u, &DefaultLocaleId);
          if ( v97 >= 0 )
          {
            CurrentLocale = DefaultLocaleId;
            *(_WORD *)&v98[1] = DefaultLocaleId;
          }
          goto LABEL_164;
        case 10:
          CurrentLocale = v96;
          *(_WORD *)&v98[1] = v96;
          v97 = NtQueryDefaultLocale(0, &v66);
          if ( v97 >= 0 && v66 != DefaultLocaleId )
          {
            CurrentLocale = v66;
            *(_WORD *)&v98[1] = v66;
          }
          goto LABEL_164;
        case 11:
          CurrentLocale = 1033;
          *(_WORD *)&v98[1] = 1033;
          goto LABEL_164;
        case 12:
LABEL_163:
          v6 |= 0x20u;
          Flags = v6;
          goto LABEL_164;
        default:
LABEL_128:
          ms_exc.registration.TryLevel = -2;
          return -1073741308;
      }
    }
  }
LABEL_210:
  if ( (v6 & 0x2040000) == 0 && (v35 == -1073741686 || v35 == -1073741685) )
  {
    v54 = (int *)v92;
    if ( v31 == 3 )
    {
      v102 = *(wchar_t **)v92;
      v103 = *(_DWORD *)(v92 + 4);
      v104 = *(_DWORD *)(v92 + 8);
      if ( a3 == 4 )
        v105 = *(_DWORD *)(v92 + 12);
      v55 = LdrpLoadResourceFromAlternativeModule(BaseOfImagea, (int)&v102, a3, v6 | 0x1000000, v88);
      if ( v55 != -1073020927 && v55 != -1073020922 )
      {
        v35 = v55;
        v97 = v55;
      }
    }
  }
  else
  {
    v54 = (int *)v92;
  }
  if ( v35 != -1073741686 && v35 != -1073741685 )
    goto LABEL_230;
  v56 = ~v6;
  if ( (~v6 & 0x80000) == 0 || (v56 & 0x20000) == 0 || (v56 & 0x10) == 0 || v93 != 3 )
    goto LABEL_230;
  v102 = (wchar_t *)*v54;
  v103 = v54[1];
  v104 = v54[2];
  if ( a3 == 4 )
    v105 = v54[3];
  v59 = v6;
  v57 = BaseOfImagea;
  v35 = LdrpLoadResourceFromAlternativeModule(BaseOfImagea, (int)&v102, a3, v59, v88);
  v97 = v35;
  if ( v35 >= 0 )
  {
    LdrpResReportResourceAccessInternal(v57, 0, (int *)&v102, a3);
    ms_exc.registration.TryLevel = -2;
    return v35;
  }
  else
  {
LABEL_230:
    ms_exc.registration.TryLevel = -2;
    return v35;
  }
}
