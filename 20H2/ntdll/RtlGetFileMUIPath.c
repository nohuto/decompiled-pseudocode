/*
 * XREFs of RtlGetFileMUIPath @ 0x180046930
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetFullPathName_UEx @ 0x18001D800 (RtlGetFullPathName_UEx.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlIntegerToUnicode @ 0x180037440 (RtlIntegerToUnicode.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180046810 (RtlpGetMUIRedirectedFilePath.c)
 *     LdrpCalcAllocSize @ 0x180047404 (LdrpCalcAllocSize.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18004BDF8 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlUnicodeStringToInteger @ 0x1800755D0 (RtlUnicodeStringToInteger.c)
 *     RtlpMUIEnumerateFolder @ 0x180086DAC (RtlpMUIEnumerateFolder.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008DD70 (_wcsicmp.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800F0BD4 (RtlpMUIGetAllInstalledLang.c)
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
  wchar_t *v7; // r11
  ULONGLONG v9; // rsi
  ULONGLONG v10; // r13
  const WCHAR *v11; // r14
  ULONG v12; // eax
  ULONGLONG v13; // rdi
  NTSTATUS v14; // ebx
  WCHAR *v15; // r14
  NTSTATUS FullPathName_UEx; // eax
  ULONG v17; // ecx
  ULONGLONG v18; // rax
  int v20; // edi
  char IsWin32WithRCManifest; // al
  int v22; // ecx
  ULONG v23; // esi
  SIZE_T v24; // rax
  PVOID v25; // rax
  NTSTATUS v26; // eax
  ULONGLONG v27; // r15
  ULONGLONG v28; // rcx
  const WCHAR *k; // rbx
  int v30; // eax
  WCHAR *v31; // rdi
  int *v32; // r12
  bool v33; // al
  unsigned __int64 Length; // rbx
  __int64 v35; // rax
  char v36; // di
  ULONG v37; // eax
  PCWSTR v38; // rcx
  BOOLEAN v39; // al
  wchar_t *v40; // rbx
  ULONGLONG v41; // rcx
  int v42; // eax
  int v43; // eax
  ULONGLONG v44; // r10
  unsigned __int16 v45; // r8
  ULONGLONG v46; // rax
  unsigned __int64 i; // r9
  SIZE_T v48; // rax
  PVOID v49; // rax
  NTSTATUS ThreadPreferredUILanguages; // eax
  __int64 v51; // rax
  ULONGLONG v52; // rcx
  const WCHAR *j; // rbx
  __int64 v54; // rax
  int MUIRedirectedFilePath; // eax
  __int64 v56; // rax
  char v57; // al
  NTSTATUS v58; // eax
  PVOID v59; // rax
  BOOLEAN v60; // al
  __int64 v61; // rax
  __int64 v62; // rax
  char v63; // bl
  char v64; // [rsp+40h] [rbp-C0h]
  bool v65; // [rsp+41h] [rbp-BFh]
  ULONG ReturnLength; // [rsp+44h] [rbp-BCh] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  ULONGLONG v68; // [rsp+50h] [rbp-B0h] BYREF
  ULONG NumberOfLanguages; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR *Heap; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  ULONG v72; // [rsp+80h] [rbp-80h]
  wchar_t *String1; // [rsp+88h] [rbp-78h] BYREF
  DWORD Lcid; // [rsp+90h] [rbp-70h] BYREF
  PWSTR FilePart; // [rsp+98h] [rbp-68h] BYREF
  PWSTR v76; // [rsp+A0h] [rbp-60h]
  ULONG BytesRequired; // [rsp+A8h] [rbp-58h] BYREF
  DWORD v78; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-50h] BYREF
  PULONG v80; // [rsp+B8h] [rbp-48h]
  PULONG v81; // [rsp+C0h] [rbp-40h]
  __int64 v82; // [rsp+C8h] [rbp-38h]
  PCWSTR SourceString; // [rsp+D0h] [rbp-30h]
  PVOID v84; // [rsp+D8h] [rbp-28h]
  PULONGLONG v85; // [rsp+E0h] [rbp-20h]
  char v86[8]; // [rsp+E8h] [rbp-18h] BYREF
  char v87[16]; // [rsp+F0h] [rbp-10h] BYREF
  _UNICODE_STRING v88; // [rsp+100h] [rbp+0h] BYREF
  _UNICODE_STRING v89; // [rsp+110h] [rbp+10h] BYREF
  _UNICODE_STRING String; // [rsp+120h] [rbp+20h] BYREF
  _UNICODE_STRING v91; // [rsp+130h] [rbp+30h] BYREF
  WCHAR v92[4]; // [rsp+140h] [rbp+40h] BYREF
  __int16 v93; // [rsp+148h] [rbp+48h]

  v7 = 0LL;
  v76 = FileMUIPath;
  v9 = 0LL;
  v80 = FileMUIPathLength;
  v10 = 0LL;
  v81 = LanguageLength;
  *(_QWORD *)v92 = 0LL;
  v11 = 0LL;
  v93 = 0;
  v12 = Flags >> 10;
  LOBYTE(v12) = (Flags & 0x400) != 0;
  SourceString = Language;
  v13 = Flags;
  v85 = Enumerator;
  v68 = 0LL;
  v82 = 0LL;
  BaseAddress = 0LL;
  String1 = 0LL;
  NumberOfLanguages = 0;
  v84 = 0LL;
  Heap = 0LL;
  FilePart = 0LL;
  v79 = 0LL;
  v72 = v12;
  DestinationString = 0LL;
  if ( !FilePath || !Enumerator )
  {
    v14 = -1073741811;
LABEL_169:
    if ( !v84 )
      goto LABEL_88;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v84);
    v7 = 0LL;
LABEL_171:
    v11 = (const WCHAR *)BaseAddress;
LABEL_88:
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      v7 = 0LL;
    }
    goto LABEL_90;
  }
  v14 = RtlpCreateProcessRegistryInfo(&v79);
  if ( v14 < 0 )
    return v14;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
  v15 = Heap;
  if ( !Heap )
    return -1073741801;
  FullPathName_UEx = RtlGetFullPathName_UEx(FilePath, 0x208u, Heap, &FilePart, &BytesRequired);
  v7 = 0LL;
  v17 = 0;
  if ( FullPathName_UEx >= 0 )
    v17 = BytesRequired;
  if ( v17 - 1 > 0x206 || !FilePart || FilePart <= Heap || FilePart >= Heap + 260 )
    goto LABEL_13;
  *(FilePart - 1) = 0;
  v18 = *Enumerator;
  if ( *Enumerator )
  {
    v27 = v68;
    v44 = *Enumerator & 0xF;
    v82 = v44;
    v45 = v18 & 0xF;
    v46 = v18 >> 4;
    for ( i = 0LL; i < 4; ++i )
    {
      v45 ^= v46 & 0xFFF;
      if ( i )
      {
        if ( i == 2 )
        {
          v27 = v46 & 0xFFF;
        }
        else if ( i == 3 )
        {
          v9 = v46 & 0xFFF;
        }
      }
      else
      {
        v10 = v46 & 0xFFF;
      }
      v46 >>= 12;
    }
    v15 = Heap;
    v68 = v27;
    if ( (((unsigned __int16)v46 ^ v45) & 0xFFF) != 0 )
    {
      v14 = -1073741776;
    }
    else
    {
      if ( v9 <= v27 )
      {
        if ( (v10 & 0x20) != 0 )
          v20 = 2;
        else
          v20 = (v10 & 0x40 | 0x20) >> 5;
        v11 = (const WCHAR *)BaseAddress;
        v65 = (v10 & 4) == 0;
        v64 = v44 & 1;
LABEL_31:
        if ( v20 != 1 )
        {
          if ( v20 == 2 )
          {
            if ( !v11 )
            {
              RtlpMUIGetAllInstalledLang(v79, &BaseAddress, v86);
              v11 = (const WCHAR *)BaseAddress;
              v7 = 0LL;
            }
            v52 = 0LL;
            for ( j = v11; v52 < v9; j += v54 + 1 )
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              ++v52;
              v54 = -1LL;
              do
                ++v54;
              while ( j[v54] );
            }
            if ( v9 >= v27 )
              goto LABEL_60;
            do
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              RtlInitUnicodeString(&DestinationString, j);
              v89 = DestinationString;
              MUIRedirectedFilePath = RtlpGetMUIRedirectedFilePath((__m128i *)&v89, Heap, FilePart, v80, v64, v72, v76);
              v7 = 0LL;
              if ( MUIRedirectedFilePath >= 0 )
                break;
              if ( MUIRedirectedFilePath == -1073741789 )
                break;
              ++v9;
              v56 = -1LL;
              do
                ++v56;
              while ( j[v56] );
              j += v56 + 1;
            }
            while ( v9 < v27 );
          }
          else
          {
            if ( !String1 )
            {
              v57 = RtlpMUIEnumerateFolder(Heap, v87, &String1);
              v7 = 0LL;
              if ( !v57 )
                v9 = v27;
            }
            v36 = 0;
            if ( !v9 )
            {
              v37 = *v81;
              if ( *v81 )
              {
                if ( SourceString )
                {
                  v38 = SourceString;
                  do
                  {
                    if ( !*v38 )
                      break;
                    ++v38;
                    --v37;
                  }
                  while ( v37 );
                  if ( v37 )
                  {
                    if ( v65 )
                    {
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      v39 = RtlCultureNameToLCID(&DestinationString, &Lcid);
                      v7 = 0LL;
                      if ( v39 )
                        v36 = 1;
                    }
                    else
                    {
                      RtlInitUnicodeString(&String, SourceString);
                      v58 = RtlUnicodeStringToInteger(&String, 0x10u, &Lcid);
                      v7 = 0LL;
                      if ( v58 >= 0 )
                      {
                        v59 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
                        v7 = 0LL;
                        v84 = v59;
                        if ( !v59 )
                          goto LABEL_171;
                        DestinationString.Buffer = (wchar_t *)v59;
                        *(_DWORD *)&DestinationString.Length = 11141120;
                        v60 = RtlLCIDToCultureName(Lcid, &DestinationString);
                        v27 = v68;
                        v7 = 0LL;
                        v11 = (const WCHAR *)BaseAddress;
                        if ( v60 )
                          v36 = 1;
                      }
                    }
                  }
                }
              }
            }
            v40 = String1;
            v41 = 0LL;
            if ( v9 )
            {
              do
              {
                if ( !v40 )
                  break;
                if ( !*v40 )
                  break;
                ++v41;
                v61 = -1LL;
                do
                  ++v61;
                while ( v40[v61] );
                v40 += v61 + 1;
              }
              while ( v41 < v9 );
              v11 = (const WCHAR *)BaseAddress;
            }
            if ( v9 >= v27 )
              goto LABEL_60;
            do
            {
              if ( !v36 || (v42 = wcsicmp(v40, DestinationString.Buffer), v7 = 0LL, !v42) )
              {
                RtlInitUnicodeString(&DestinationString, v40);
                v91 = DestinationString;
                v43 = RtlpGetMUIRedirectedFilePath((__m128i *)&v91, Heap, FilePart, v80, v64, v72, v76);
                v7 = 0LL;
                if ( (int)(v43 + 0x80000000) < 0 || v43 == -1073741789 )
                  break;
              }
              ++v9;
              v62 = -1LL;
              do
                ++v62;
              while ( v40[v62] );
              v40 += v62 + 1;
            }
            while ( v9 < v27 );
          }
          goto LABEL_37;
        }
        if ( v11 )
        {
LABEL_33:
          v28 = 0LL;
          for ( k = v11; v28 < v9; k += v51 + 1 )
          {
            if ( !k )
              break;
            if ( !*k )
              break;
            ++v28;
            v51 = -1LL;
            do
              ++v51;
            while ( k[v51] );
          }
          if ( v9 >= v27 )
            goto LABEL_60;
          do
          {
            if ( !*k )
              break;
            RtlInitUnicodeString(&DestinationString, k);
            v88 = DestinationString;
            v30 = RtlpGetMUIRedirectedFilePath((__m128i *)&v88, Heap, FilePart, v80, v64, v72, v76);
            v7 = 0LL;
            if ( v30 >= 0 )
              break;
            if ( v30 == -1073741789 )
              break;
            ++v9;
            v35 = -1LL;
            do
              ++v35;
            while ( k[v35] );
            k += v35 + 1;
          }
          while ( v9 < v27 );
LABEL_37:
          if ( v9 < v27 )
          {
            v31 = (WCHAR *)SourceString;
            v32 = (int *)v81;
            if ( SourceString || v81 )
            {
              if ( v65 )
                goto LABEL_41;
              v63 = RtlCultureNameToLCID(&DestinationString, &v78);
              if ( v63 )
                v63 = (int)RtlIntegerToUnicode((unsigned __int16)v78, 0x10u, -4, (char *)v92) >= 0;
              RtlInitUnicodeString(&DestinationString, v92);
              v7 = 0LL;
              if ( v63 )
              {
LABEL_41:
                if ( v32 )
                {
                  if ( v31 )
                  {
                    if ( *v32 > (unsigned int)(DestinationString.Length >> 1) )
                    {
                      Length = DestinationString.Length;
                      memmove(v31, DestinationString.Buffer, DestinationString.Length);
                      v7 = 0LL;
                      v31[Length >> 1] = 0;
                    }
                  }
                  else
                  {
                    *v32 = 85;
                  }
                }
              }
            }
            v33 = v76 && (v31 || !v32);
            v14 = 0;
            goto LABEL_49;
          }
LABEL_60:
          v14 = -2147483642;
          v33 = 1;
LABEL_49:
          if ( v33 )
            *v85 = v82 | (((v9 + 1) ^ v27 ^ v82 ^ v10) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                       * (v10 | ((v27 | ((v9 + 1) << 12)) << 24) | 0xCB7000));
          goto LABEL_169;
        }
        ReturnLength = 0;
        RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
        v7 = 0LL;
        if ( ReturnLength )
        {
          v48 = LdrpCalcAllocSize(ReturnLength, 2LL);
          if ( !v48 )
          {
            v14 = -1073741675;
LABEL_90:
            if ( String1 != v7 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String1);
            goto LABEL_92;
          }
          v49 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v48);
          v7 = 0LL;
          BaseAddress = v49;
          v11 = (const WCHAR *)v49;
          if ( v49 )
          {
            ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(
                                           0x30u,
                                           &NumberOfLanguages,
                                           (PZZWSTR)v49,
                                           &ReturnLength);
            v7 = 0LL;
            if ( ThreadPreferredUILanguages >= 0 )
            {
              v27 = v68;
              goto LABEL_33;
            }
          }
          v27 = v68;
        }
        v9 = v27;
        goto LABEL_33;
      }
      v14 = -2147483642;
    }
    goto LABEL_14;
  }
  if ( (v13 & 0xC) == 0xC
    || (v13 & 0x30) == 0x30
    || (v13 & 0x50) == 0x50
    || (v13 & 0x60) == 0x60
    || (v13 & 0x70) == 112
    || (v13 & 0x300) == 768 )
  {
LABEL_13:
    v14 = -1073741811;
    goto LABEL_14;
  }
  v10 = v13;
  if ( (v13 & 0x20) != 0 )
    v20 = 2;
  else
    v20 = (v13 & 0x40 | 0x20) >> 5;
  v65 = (v10 & 4) == 0;
  if ( (v10 & 0x200) == 0
    && ((v10 & 0x100) != 0
     || (IsWin32WithRCManifest = RtlpFileIsWin32WithRCManifest(FilePath), v7 = 0LL, IsWin32WithRCManifest)) )
  {
    v64 = 1;
    v82 = 1LL;
  }
  else
  {
    v64 = 0;
  }
  v22 = v20 - 1;
  if ( v20 != 1 )
  {
    if ( v20 == 2 )
    {
      RtlpMUIGetAllInstalledLang(v79, &BaseAddress, &v68);
    }
    else
    {
      if ( v20 != 3 )
      {
        v27 = v68;
        v11 = (const WCHAR *)BaseAddress;
        goto LABEL_30;
      }
      RtlpMUIEnumerateFolder(v15, &v68, &String1);
    }
    v27 = v68;
    v7 = 0LL;
    v11 = (const WCHAR *)BaseAddress;
LABEL_30:
    v9 = 0LL;
    goto LABEL_31;
  }
  v23 = v22 + 48;
  ReturnLength = 0;
  RtlGetThreadPreferredUILanguages(v22 + 48, &NumberOfLanguages, 0LL, &ReturnLength);
  if ( !ReturnLength )
    goto LABEL_14;
  v24 = LdrpCalcAllocSize(ReturnLength, 2LL);
  if ( v24 )
  {
    v25 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v23 - 40, v24);
    BaseAddress = v25;
    v11 = (const WCHAR *)v25;
    if ( !v25 )
    {
      v14 = -1073741801;
LABEL_92:
      v15 = Heap;
      goto LABEL_14;
    }
    v26 = RtlGetThreadPreferredUILanguages(v23, &NumberOfLanguages, (PZZWSTR)v25, &ReturnLength);
    v7 = 0LL;
    if ( v26 < 0 )
    {
      v14 = v26;
      goto LABEL_88;
    }
    v27 = NumberOfLanguages;
    v68 = NumberOfLanguages;
    goto LABEL_30;
  }
  v14 = -1073741675;
LABEL_14:
  if ( v15 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  return v14;
}
