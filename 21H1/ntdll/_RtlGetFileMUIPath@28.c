/*
 * XREFs of _RtlGetFileMUIPath@28 @ 0x4B3519E0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpCalcAllocSize@8 @ 0x4B2AA0E1 (_LdrpCalcAllocSize@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlIntegerToUnicode@16 @ 0x4B2D3B50 (_RtlIntegerToUnicode@16.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0 (_RtlUnicodeStringToInteger@12.c)
 *     _RtlGetFullPathName_U@16 @ 0x4B2ECAC0 (_RtlGetFullPathName_U@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpFileIsWin32WithRCManifest@4 @ 0x4B353DB4 (_RtlpFileIsWin32WithRCManifest@4.c)
 *     _RtlpGetMUIRedirectedFilePath@32 @ 0x4B35421A (_RtlpGetMUIRedirectedFilePath@32.c)
 *     _RtlpMUIEnumerateFolder@12 @ 0x4B354614 (_RtlpMUIEnumerateFolder@12.c)
 *     _RtlpMUIGetAllInstalledLang@12 @ 0x4B354922 (_RtlpMUIGetAllInstalledLang@12.c)
 *     _RtlpSafewcslen@12 @ 0x4B354A42 (_RtlpSafewcslen@12.c)
 */

NTSTATUS __cdecl RtlGetFileMUIPath(
        ULONG Flags,
        PCWSTR FilePath,
        PWSTR Language,
        PULONG LanguageLength,
        PWSTR FileMUIPath,
        PULONG FileMUIPathLength,
        PULONGLONG Enumerator)
{
  WCHAR *v7; // ecx
  NTSTATUS v8; // esi
  PVOID Heap; // eax
  ULONG FullPathName_U; // eax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  __int16 v13; // si
  unsigned int v14; // edx
  unsigned int i; // ebx
  unsigned int v16; // eax
  __int16 v17; // cx
  ULONG v19; // ebx
  unsigned int v20; // edi
  ULONG v21; // ecx
  unsigned int v22; // ecx
  ULONG v23; // eax
  const WCHAR *v24; // eax
  int v25; // eax
  WCHAR *v26; // eax
  NTSTATUS ThreadPreferredUILanguages; // eax
  PCWSTR v28; // ebx
  int v29; // eax
  WCHAR *v30; // eax
  const WCHAR *v31; // esi
  unsigned int j; // edx
  const WCHAR *v33; // ecx
  __int16 v34; // ax
  ULONG v35; // edi
  char v36; // al
  ULONG v37; // ebx
  PULONGLONG v38; // edx
  int v39; // eax
  int MUIRedirectedFilePath; // eax
  const WCHAR *v41; // ecx
  __int16 v42; // ax
  PCWSTR v43; // ebx
  const WCHAR *v44; // esi
  unsigned int k; // edx
  const WCHAR *v46; // ecx
  __int16 v47; // ax
  int v48; // eax
  const WCHAR *v49; // ecx
  __int16 v50; // ax
  const WCHAR *v51; // edi
  PVOID v52; // eax
  BOOLEAN v53; // al
  const WCHAR *v54; // esi
  ULONG m; // edx
  const WCHAR *v56; // ecx
  __int16 v57; // ax
  int v58; // eax
  const WCHAR *v59; // ecx
  __int16 v60; // ax
  WCHAR *v61; // ebx
  unsigned int *v62; // ecx
  char v63; // bl
  unsigned int v64; // esi
  SIZE_T v65; // [esp-4h] [ebp-A4h]
  SIZE_T v66; // [esp-4h] [ebp-A4h]
  char v67; // [esp+13h] [ebp-8Dh]
  ULONG v68; // [esp+14h] [ebp-8Ch] BYREF
  unsigned int v69; // [esp+18h] [ebp-88h]
  PCWSTR SourceString; // [esp+1Ch] [ebp-84h]
  char v71; // [esp+23h] [ebp-7Dh]
  _UNICODE_STRING DestinationString; // [esp+24h] [ebp-7Ch] BYREF
  PVOID BaseAddress; // [esp+2Ch] [ebp-74h]
  NTSTATUS v74; // [esp+30h] [ebp-70h]
  ULONG ReturnLength; // [esp+34h] [ebp-6Ch] BYREF
  int v76; // [esp+38h] [ebp-68h]
  PULONG v77; // [esp+3Ch] [ebp-64h]
  wchar_t *String1; // [esp+40h] [ebp-60h] BYREF
  PCWSTR FileName; // [esp+44h] [ebp-5Ch]
  ULONG NumberOfLanguages; // [esp+48h] [ebp-58h] BYREF
  PWSTR FilePart; // [esp+4Ch] [ebp-54h] BYREF
  int v82; // [esp+50h] [ebp-50h]
  PWSTR v83; // [esp+54h] [ebp-4Ch]
  PCWSTR v84; // [esp+58h] [ebp-48h]
  ULONG v85; // [esp+5Ch] [ebp-44h]
  int v86; // [esp+60h] [ebp-40h] BYREF
  int v87; // [esp+64h] [ebp-3Ch]
  PULONG v88; // [esp+68h] [ebp-38h]
  ULONG Value; // [esp+6Ch] [ebp-34h] BYREF
  PULONGLONG v90; // [esp+70h] [ebp-30h]
  PVOID v91; // [esp+74h] [ebp-2Ch]
  unsigned int v92; // [esp+78h] [ebp-28h]
  DWORD Lcid; // [esp+7Ch] [ebp-24h] BYREF
  char v94[4]; // [esp+80h] [ebp-20h] BYREF
  _UNICODE_STRING String; // [esp+88h] [ebp-18h] BYREF
  _DWORD v96[2]; // [esp+90h] [ebp-10h] BYREF
  __int16 v97; // [esp+98h] [ebp-8h]

  v84 = Language;
  v77 = LanguageLength;
  v83 = FileMUIPath;
  v7 = 0;
  v88 = FileMUIPathLength;
  v85 = 0;
  v76 = 0;
  v96[0] = 0;
  v69 = 0;
  v68 = 0;
  v82 = 0;
  v96[1] = 0;
  v71 = 0;
  String1 = 0;
  NumberOfLanguages = 0;
  v97 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  v91 = 0;
  BaseAddress = 0;
  FilePart = 0;
  v86 = 0;
  FileName = FilePath;
  v90 = Enumerator;
  SourceString = 0;
  LOBYTE(v87) = (Flags & 0x400) != 0;
  if ( !FilePath || !Enumerator )
  {
    v8 = -1073741811;
LABEL_153:
    if ( !v91 )
      goto LABEL_156;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v91);
LABEL_155:
    v7 = (WCHAR *)SourceString;
LABEL_156:
    if ( v7 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    goto LABEL_158;
  }
  v8 = RtlpCreateProcessRegistryInfo(&v86);
  v74 = v8;
  if ( v8 < 0 )
    return v8;
  LODWORD(v65) = 522;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v65);
  BaseAddress = Heap;
  if ( !Heap )
    return -1073741801;
  FullPathName_U = RtlGetFullPathName_U(FileName, 0x208u, (PWSTR)Heap, &FilePart);
  if ( !FullPathName_U
    || FullPathName_U >= 0x208
    || !FilePart
    || FilePart <= BaseAddress
    || FilePart >= (PWSTR)((char *)BaseAddress + 520) )
  {
    goto LABEL_150;
  }
  *(FilePart - 1) = 0;
  v11 = *((_DWORD *)v90 + 1);
  if ( *v90 )
  {
    v12 = *v90 >> 4;
    v82 = *(_DWORD *)v90 & 0xF;
    v13 = v82;
    v14 = v11 >> 4;
    for ( i = 0; i < 4; ++i )
    {
      v13 ^= v12 & 0xFFF;
      if ( i )
      {
        if ( i == 2 )
        {
          v16 = v12 & 0xFFF;
          v68 = v16;
        }
        else
        {
          v16 = v68;
          if ( i == 3 )
            v69 = v12 & 0xFFF;
        }
      }
      else
      {
        v16 = v68;
        v85 = v12 & 0xFFF;
      }
      v12 = __PAIR64__(v14, v12) >> 12;
      v14 >>= 12;
    }
    v17 = v13 ^ v12;
    v8 = v74;
    if ( (v17 & 0xFFF) != 0 )
    {
      v8 = -1073741776;
      goto LABEL_22;
    }
    v19 = v69;
    if ( v69 > v16 )
    {
      v8 = -2147483642;
      goto LABEL_22;
    }
    if ( (v85 & 0x20) != 0 )
      v20 = 2;
    else
      v20 = (v85 & 0x40 | 0x20) >> 5;
    v21 = v85 >> 2;
    LOBYTE(v21) = ~(unsigned __int8)(v85 >> 2);
    v22 = v21 & 0xFFFFFF01;
    FileName = (PCWSTR)v22;
    LOBYTE(v74) = v82 & 1;
LABEL_57:
    if ( v20 == 1 )
    {
      v28 = SourceString;
      if ( !SourceString )
      {
        ReturnLength = 0;
        RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0, &ReturnLength);
        if ( !ReturnLength )
          goto LABEL_64;
        v29 = LdrpCalcAllocSize(ReturnLength, 2u);
        if ( !v29 )
        {
          v8 = -1073741675;
LABEL_158:
          if ( String1 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String1);
          goto LABEL_22;
        }
        LODWORD(v66) = v29;
        v30 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v66);
        v28 = v30;
        SourceString = v30;
        if ( !v30 || RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, v30, &ReturnLength) < 0 )
LABEL_64:
          v69 = v68;
      }
      v31 = v28;
      v19 = v69;
      for ( j = 0; j < v69; v31 += v33 - (v31 + 1) + 1 )
      {
        if ( !v31 )
          break;
        if ( !*v31 )
          break;
        v33 = v31;
        ++j;
        do
          v34 = *v33++;
        while ( v34 != (_WORD)v76 );
      }
      v35 = v68;
      if ( v69 >= v68 )
        goto LABEL_72;
      do
      {
        if ( !*v31 )
          break;
        RtlInitUnicodeString(&DestinationString, v31);
        MUIRedirectedFilePath = RtlpGetMUIRedirectedFilePath(
                                  v88,
                                  v74,
                                  v87,
                                  v83,
                                  *(_DWORD *)&DestinationString.Length,
                                  DestinationString.Buffer);
        if ( MUIRedirectedFilePath >= 0 )
          break;
        if ( MUIRedirectedFilePath == -1073741789 )
          break;
        v41 = v31;
        v69 = ++v19;
        do
          v42 = *v41++;
        while ( v42 != (_WORD)v76 );
        v31 += v41 - (v31 + 1) + 1;
      }
      while ( v19 < v35 );
      goto LABEL_130;
    }
    if ( v20 == 2 )
    {
      v43 = SourceString;
      if ( !SourceString )
      {
        RtlpMUIGetAllInstalledLang(v94);
        v43 = SourceString;
      }
      v44 = v43;
      v19 = v69;
      for ( k = 0; k < v69; v44 += v46 - (v44 + 1) + 1 )
      {
        if ( !v44 )
          break;
        if ( !*v44 )
          break;
        v46 = v44;
        ++k;
        do
          v47 = *v46++;
        while ( v47 != (_WORD)v76 );
      }
      v35 = v68;
      if ( v69 >= v68 )
        goto LABEL_72;
      do
      {
        if ( !v44 )
          break;
        if ( !*v44 )
          break;
        RtlInitUnicodeString(&DestinationString, v44);
        v48 = RtlpGetMUIRedirectedFilePath(
                v88,
                v74,
                v87,
                v83,
                *(_DWORD *)&DestinationString.Length,
                DestinationString.Buffer);
        if ( v48 >= 0 )
          break;
        if ( v48 == -1073741789 )
          break;
        v49 = v44;
        v69 = ++v19;
        do
          v50 = *v49++;
        while ( v50 != (_WORD)v76 );
        v44 += v49 - (v44 + 1) + 1;
      }
      while ( v19 < v35 );
LABEL_130:
      if ( v19 < v35 )
      {
        v61 = (WCHAR *)v84;
        v62 = v77;
        if ( v84 || v77 )
        {
          if ( !(_BYTE)FileName )
          {
            v63 = RtlCultureNameToLCID(&DestinationString, &Lcid);
            if ( v63 )
              v63 = RtlIntegerToUnicode((unsigned __int16)Lcid, 0x10u, -4, (char *)v96) >= 0;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)v96);
            v62 = v77;
            if ( !v63 )
              goto LABEL_143;
            v61 = (WCHAR *)v84;
          }
          if ( v62 )
          {
            if ( v61 )
            {
              v64 = DestinationString.Length >> 1;
              if ( *v62 > v64 )
              {
                LODWORD(v66) = DestinationString.Length;
                memcpy(v61, DestinationString.Buffer, v66);
                v62 = v77;
                v61[v64] = 0;
              }
            }
            else
            {
              *v62 = 85;
            }
          }
        }
LABEL_143:
        if ( v83 && (v84 || !v62) )
          v36 = 1;
        else
          v36 = v71;
        v19 = v69;
        v8 = 0;
        goto LABEL_73;
      }
LABEL_72:
      v8 = -2147483642;
      v36 = 1;
LABEL_73:
      if ( v36 )
      {
        v37 = v19 + 1;
        v38 = v90;
        v39 = (((((((unsigned __int64)(((unsigned __int16)(v37 ^ v35 ^ v82 ^ v85) ^ 0xFCB7) & 0xFFF) << 12) | v37) << 12) | v35) << 24) | v85 | 0xCB7000) >> 28;
        *(_DWORD *)v90 = v82 | (16
                              * (v85 | 0xCB7000 | ((v35 | ((v37 | ((((unsigned __int16)(v37 ^ v35 ^ v82 ^ v85) ^ 0xFCB7) & 0xFFF) << 12)) << 12)) << 24)));
        *((_DWORD *)v38 + 1) = v39;
      }
      v7 = (WCHAR *)SourceString;
      goto LABEL_153;
    }
    if ( !String1 && !(unsigned __int8)RtlpMUIEnumerateFolder((PCWSTR)BaseAddress, (int)&String1) )
    {
      v19 = v68;
      v69 = v68;
    }
    v67 = 0;
    if ( !v19 )
    {
      if ( *v77 )
      {
        v51 = v84;
        if ( v84 )
        {
          if ( (unsigned __int8)RtlpSafewcslen(v22) )
          {
            if ( (_BYTE)FileName )
            {
              RtlInitUnicodeString(&DestinationString, v51);
              v53 = RtlCultureNameToLCID(&DestinationString, &Value);
LABEL_113:
              if ( v53 )
                v67 = 1;
              goto LABEL_115;
            }
            RtlInitUnicodeString(&String, v51);
            if ( RtlUnicodeStringToInteger(&String, 0x10u, &Value) >= 0 )
            {
              LODWORD(v66) = 170;
              v52 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v66);
              v91 = v52;
              if ( !v52 )
                goto LABEL_155;
              DestinationString.Buffer = (wchar_t *)v52;
              *(_DWORD *)&DestinationString.Length = 11141120;
              v53 = RtlLCIDToCultureName(Value, &DestinationString);
              goto LABEL_113;
            }
          }
        }
      }
    }
LABEL_115:
    v54 = (const WCHAR *)String1;
    for ( m = 0; m < v19; v54 += v56 - (v54 + 1) + 1 )
    {
      if ( !v54 )
        break;
      if ( !*v54 )
        break;
      v56 = v54;
      ++m;
      do
        v57 = *v56++;
      while ( v57 != (_WORD)v76 );
    }
    v35 = v68;
    if ( v19 >= v68 )
      goto LABEL_72;
    while ( 1 )
    {
      if ( !v67 || !_wcsicmp((const wchar_t *)v54, DestinationString.Buffer) )
      {
        RtlInitUnicodeString(&DestinationString, v54);
        v58 = RtlpGetMUIRedirectedFilePath(
                v88,
                v74,
                v87,
                v83,
                *(_DWORD *)&DestinationString.Length,
                DestinationString.Buffer);
        if ( v58 >= 0 || v58 == -1073741789 )
          goto LABEL_130;
      }
      v59 = v54;
      do
        v60 = *v59++;
      while ( v60 != (_WORD)v76 );
      v69 = ++v19;
      v54 += v59 - (v54 + 1) + 1;
      if ( v19 >= v35 )
      {
        v69 = v19;
        goto LABEL_130;
      }
    }
  }
  if ( (Flags & 0xC) == 0xC
    || (Flags & 0x30) == 0x30
    || (Flags & 0x50) == 0x50
    || (Flags & 0x60) == 0x60
    || (v22 = 768, LOBYTE(v22) = (Flags & 0x70) == 112 || (Flags & 0x300) == 768, (_BYTE)v22) )
  {
LABEL_150:
    v8 = -1073741811;
  }
  else
  {
    v85 = Flags;
    if ( (Flags & 0x20) != 0 )
      v20 = 2;
    else
      v20 = (Flags & 0x40 | 0x20) >> 5;
    v23 = Flags >> 2;
    LOBYTE(v23) = ~(unsigned __int8)(Flags >> 2);
    v92 = v23 & 0xFFFFFF01;
    if ( (Flags & 0x200) == 0 && ((Flags & 0x100) != 0 || (unsigned __int8)RtlpFileIsWin32WithRCManifest(FileName)) )
    {
      LOBYTE(v74) = 1;
      v19 = 0;
      v82 = 1;
    }
    else
    {
      v19 = 0;
      LOBYTE(v74) = 0;
    }
    if ( v20 != 1 )
    {
      if ( v20 == 2 )
      {
        v24 = (const WCHAR *)RtlpMUIGetAllInstalledLang(&v68);
      }
      else
      {
        v24 = (const WCHAR *)(v20 - 3);
        if ( v20 == 3 )
          v24 = (const WCHAR *)RtlpMUIEnumerateFolder((PCWSTR)BaseAddress, (int)&String1);
      }
LABEL_56:
      LOBYTE(v24) = v92;
      v69 = 0;
      FileName = v24;
      goto LABEL_57;
    }
    ReturnLength = 0;
    RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0, &ReturnLength);
    if ( ReturnLength )
    {
      v25 = LdrpCalcAllocSize(ReturnLength, 2u);
      if ( v25 )
      {
        LODWORD(v66) = v25;
        v26 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v66);
        SourceString = v26;
        if ( v26 )
        {
          ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, v26, &ReturnLength);
          if ( ThreadPreferredUILanguages < 0 )
          {
            v8 = ThreadPreferredUILanguages;
            goto LABEL_155;
          }
          v24 = (const WCHAR *)NumberOfLanguages;
          v68 = NumberOfLanguages;
          goto LABEL_56;
        }
        v8 = -1073741801;
      }
      else
      {
        v8 = -1073741675;
      }
    }
  }
LABEL_22:
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return v8;
}
