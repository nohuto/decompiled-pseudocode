/*
 * XREFs of sub_18003F4AC @ 0x18003F4AC
 * Callers:
 *     sub_180042BDC @ 0x180042BDC (sub_180042BDC.c)
 * Callees:
 *     sub_180001A2C @ 0x180001A2C (sub_180001A2C.c)
 *     sub_1800022EC @ 0x1800022EC (sub_1800022EC.c)
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_1800032A0 @ 0x1800032A0 (sub_1800032A0.c)
 *     sub_180040C3C @ 0x180040C3C (sub_180040C3C.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_18003F4AC(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // edx
  _WORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  _WORD *v12; // rax
  __int64 v13; // rdx
  _WORD *v14; // rcx
  _WORD *v15; // rbx
  HANDLE FileW; // rax
  char *v17; // r14
  void *v18; // rsi
  DWORD LastError; // ebx
  __int64 v20; // r9
  int v21; // edx
  int v22; // edx
  int v23; // eax
  void *v24; // rax
  void *v25; // rdx
  void *v26; // rbx
  unsigned int v27; // eax
  __int64 nFileSizeLow; // rdx
  int v29; // eax
  DWORD NumberOfBytesRead; // [rsp+48h] [rbp-19h] BYREF
  _BY_HANDLE_FILE_INFORMATION FileInformation; // [rsp+50h] [rbp-11h] BYREF
  __int64 retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( !a2 )
  {
    v4 = -2147467261;
    v5 = 225;
LABEL_3:
    sub_180003268(
      retaddr,
      v5,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v4);
    return (unsigned int)v4;
  }
  v7 = (_WORD *)a2;
  v8 = 0x7FFFFFFFLL;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v8;
  }
  while ( v8 );
  v4 = v8 == 0 ? 0x80070057 : 0;
  if ( v8 )
    v9 = 0x7FFFFFFF - v8;
  else
    v9 = 0LL;
  if ( !v8 )
  {
    v5 = 227;
    goto LABEL_3;
  }
  v10 = v9 + 1;
  v11 = 2 * (v9 + 1);
  if ( !is_mul_ok(v9 + 1, 2uLL) )
    v11 = -1LL;
  v12 = operator new(v11, (const struct std::nothrow_t *)&unk_18005AF88);
  v14 = *(_WORD **)(a1 + 16);
  v15 = v12;
  if ( v12 != v14 )
  {
    j_j__o_free(v14, v13);
    v14 = v15;
    *(_QWORD *)(a1 + 16) = v15;
  }
  if ( !v14 )
  {
    v4 = -2147024882;
    v5 = 230;
    goto LABEL_3;
  }
  v4 = sub_180001A2C(v14, v10, a2);
  if ( v4 < 0 )
  {
    v5 = 232;
    goto LABEL_3;
  }
  FileW = CreateFileW(*(LPCWSTR *)(a1 + 16), 0x80000000, 1u, 0LL, 3u, 0x80u, 0LL);
  v17 = *(char **)(a1 + 24);
  v18 = FileW;
  if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v17);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 24) = v18;
  if ( v18 == (void *)-1LL )
    return sub_1800022EC();
  if ( !GetFileInformationByHandle(v18, &FileInformation) )
  {
    v21 = 238;
    return sub_1800032A0(
             retaddr,
             v21,
             (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v20);
  }
  if ( FileInformation.nFileSizeHigh )
  {
    v22 = 241;
LABEL_29:
    sub_180003268(
      retaddr,
      v22,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147024809);
    return 2147942487LL;
  }
  if ( !ReadFile(*(HANDLE *)(a1 + 24), (LPVOID)(a1 + 32), 0x18u, &NumberOfBytesRead, 0LL) )
  {
    v21 = 243;
    return sub_1800032A0(
             retaddr,
             v21,
             (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v20);
  }
  if ( NumberOfBytesRead != 24 )
  {
    v22 = 244;
    goto LABEL_29;
  }
  v23 = *(_DWORD *)(a1 + 36);
  if ( !v23 )
  {
    v22 = 248;
    goto LABEL_29;
  }
  if ( v23 == 1 )
  {
    if ( *(_DWORD *)(a1 + 32) != 24 )
    {
      v22 = 251;
      goto LABEL_29;
    }
  }
  else
  {
    if ( !ReadFile(*(HANDLE *)(a1 + 24), (LPVOID)(a1 + 56), 8u, &NumberOfBytesRead, 0LL) )
    {
      v21 = 257;
      return sub_1800032A0(
               retaddr,
               v21,
               (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
               v20);
    }
    if ( NumberOfBytesRead != 8 )
    {
      v22 = 258;
      goto LABEL_29;
    }
    if ( *(_DWORD *)(a1 + 36) >= 3u )
    {
      if ( !ReadFile(*(HANDLE *)(a1 + 24), (LPVOID)(a1 + 64), 0x298u, &NumberOfBytesRead, 0LL) )
      {
        v21 = 262;
        return sub_1800032A0(
                 retaddr,
                 v21,
                 (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                 v20);
      }
      if ( NumberOfBytesRead != 664 )
      {
        v22 = 263;
        goto LABEL_29;
      }
      if ( *(_DWORD *)(a1 + 36) >= 4u )
      {
        if ( !ReadFile(*(HANDLE *)(a1 + 24), (LPVOID)(a1 + 728), 8u, &NumberOfBytesRead, 0LL) )
        {
          v21 = 267;
          return sub_1800032A0(
                   retaddr,
                   v21,
                   (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                   v20);
        }
        if ( NumberOfBytesRead != 8 )
        {
          v22 = 268;
          goto LABEL_29;
        }
        if ( *(_DWORD *)(a1 + 36) >= 5u )
        {
          if ( !ReadFile(*(HANDLE *)(a1 + 24), (LPVOID)(a1 + 736), 4u, &NumberOfBytesRead, 0LL) )
          {
            v21 = 272;
            return sub_1800032A0(
                     retaddr,
                     v21,
                     (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                     v20);
          }
          if ( NumberOfBytesRead != 4 )
          {
            v22 = 273;
            goto LABEL_29;
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 48) >= FileInformation.nFileSizeLow )
  {
    v22 = 279;
    goto LABEL_29;
  }
  if ( !*(_DWORD *)(a1 + 52) )
  {
    v22 = 280;
    goto LABEL_29;
  }
  if ( SetFilePointer(*(HANDLE *)(a1 + 24), *(_DWORD *)(a1 + 44), 0LL, 0) == -1 )
  {
    v4 = -2147418113;
    v5 = 283;
    goto LABEL_3;
  }
  v24 = operator new(*(unsigned int *)(a1 + 48), (const struct std::nothrow_t *)&unk_18005AF88);
  v25 = *(void **)(a1 + 744);
  v26 = v24;
  if ( v24 != v25 )
  {
    if ( v25 )
      j_j__o_free(*(_QWORD *)(a1 + 744), v25);
    *(_QWORD *)(a1 + 744) = v26;
    v25 = v26;
  }
  if ( !v25 )
  {
    v4 = -2147024882;
    v5 = 286;
    goto LABEL_3;
  }
  if ( !ReadFile(*(HANDLE *)(a1 + 24), v25, *(_DWORD *)(a1 + 48), &NumberOfBytesRead, 0LL) )
  {
    v21 = 289;
    return sub_1800032A0(
             retaddr,
             v21,
             (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v20);
  }
  v27 = *(_DWORD *)(a1 + 48);
  if ( NumberOfBytesRead != v27 )
  {
    v22 = 290;
    goto LABEL_29;
  }
  nFileSizeLow = FileInformation.nFileSizeLow;
  *(_DWORD *)(a1 + 800) = v27 / *(_DWORD *)(a1 + 52);
  v29 = sub_180040C3C(a1, nFileSizeLow);
  v4 = v29;
  if ( v29 == -2147024809 )
    return 2147942487LL;
  if ( v29 < 0 )
  {
    v5 = 296;
    goto LABEL_3;
  }
  return 0LL;
}
