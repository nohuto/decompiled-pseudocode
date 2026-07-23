/*
 * XREFs of SdbpGetProcessHistory @ 0x1409618D8
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x14073C444 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     NLS_UPCASE @ 0x14025C2B0 (NLS_UPCASE.c)
 *     _wcsnicmp @ 0x1403CDDD0 (_wcsnicmp.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlGetNtSystemRoot @ 0x1406E62F0 (RtlGetNtSystemRoot.c)
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x140743A84 (AslAlloc.c)
 */

_WORD *__fastcall SdbpGetProcessHistory(unsigned __int16 *a1, _WORD *a2, _WORD *a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int16 *v4; // rdi
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int16 *v7; // rbx
  __int64 v8; // rcx
  PWSTR NtSystemRoot; // rax
  __int64 v10; // rbx
  unsigned __int16 *v11; // rbp
  unsigned __int16 *v12; // r10
  unsigned __int16 v13; // r11
  unsigned __int16 v14; // ax
  __int16 v15; // r9
  int v16; // r8d
  unsigned __int16 *v17; // rdx
  int v18; // ebp
  __int64 v19; // rbx
  SIZE_T v20; // rbx
  _WORD *v21; // r14
  _WORD *v22; // r15
  _WORD *result; // rax
  SIZE_T v24; // rbx
  PWSTR v25; // rax
  PWSTR v26; // rdx
  _WORD *v27; // rax
  _WORD *v28; // r14
  unsigned __int16 *v29; // r11
  const wchar_t *v30; // r10
  unsigned __int16 *v31; // r10
  unsigned __int16 v32; // ax
  __int16 v33; // r9
  int v34; // r8d
  unsigned __int16 *v35; // rdx
  __int64 v36; // rcx
  _WORD *v37; // r14

  v3 = -1LL;
  v4 = a1;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  v7 = a1;
  if ( wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    if ( v4 && *v4 )
    {
      do
      {
        v11 = v7;
        v12 = L"__PROCESS_HISTORY";
        do
        {
          if ( !*v7 )
            break;
          NLS_UPCASE(*v12);
          v14 = NLS_UPCASE(v13);
          if ( v14 != v15 )
            break;
          ++v7;
          ++v12;
        }
        while ( v12 < L"" );
        if ( v12 == L"" && *v7 == 61 )
        {
          v16 = 1;
LABEL_18:
          v17 = v7;
          if ( *v7 )
          {
            v8 = 0LL;
            do
            {
              if ( (__int64)(v8 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
                break;
              ++v7;
              v8 += 2LL;
            }
            while ( *v7 );
          }
          if ( v16 )
          {
            v10 = v7 - (v17 + 1);
            goto LABEL_34;
          }
        }
        else
        {
          v16 = 0;
          while ( *v7 )
          {
            if ( *v7 == 61 && v7 != v11 )
              goto LABEL_18;
            ++v7;
          }
        }
        ++v7;
      }
      while ( *v7 );
    }
    v18 = -1073741568;
    v19 = (unsigned int)(v6 + v5 + 1);
  }
  else
  {
    NtSystemRoot = RtlGetNtSystemRoot();
    v10 = -1LL;
    do
      ++v10;
    while ( NtSystemRoot[v10] );
LABEL_34:
    v8 = (unsigned int)(v6 + v5 + 2);
    v18 = -1073741789;
    v19 = v8 + v10 + 1;
  }
  v20 = 2 * v19;
  v21 = AslAlloc(v8, v20);
  v22 = v21;
  if ( !v21 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  *v21 = 0;
  if ( v18 != -1073741789 )
    goto LABEL_69;
  v24 = v20 >> 1;
  if ( !wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    v25 = RtlGetNtSystemRoot();
    do
      ++v3;
    while ( v25[v3] );
    if ( v3 >= v24 )
      goto LABEL_67;
    v26 = v25;
    goto LABEL_41;
  }
  if ( !v4 || !*v4 )
    goto LABEL_69;
  while ( 1 )
  {
    v29 = v4;
    v30 = L"__PROCESS_HISTORY";
    do
    {
      if ( !*v4 )
        break;
      NLS_UPCASE(*v4);
      v32 = NLS_UPCASE(*v31);
      if ( v33 != v32 )
        break;
      ++v4;
      ++v30;
    }
    while ( v30 < L"" );
    if ( v30 != L"" || *v4 != 61 )
    {
      v34 = 0;
      while ( *v4 )
      {
        if ( *v4 == 61 && v4 != v29 )
          goto LABEL_53;
        ++v4;
      }
      goto LABEL_58;
    }
    v34 = 1;
LABEL_53:
    v35 = v4;
    if ( *v4 )
    {
      v36 = 0LL;
      do
      {
        if ( (__int64)(v36 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
          break;
        ++v4;
        v36 += 2LL;
      }
      while ( *v4 );
    }
    if ( v34 )
      break;
LABEL_58:
    if ( !*++v4 )
      goto LABEL_69;
  }
  v26 = v35 + 1;
  v3 = v4 - v26;
  if ( v3 < v24 )
  {
LABEL_41:
    memmove(v21, v26, 2 * v3);
    v27 = &v21[v3];
    *v27 = 0;
    v28 = v27 - 1;
    if ( *(v27 - 1) != 59 )
    {
      v28 = &v22[v3];
      *v27 = 59;
    }
    v21 = v28 + 1;
    goto LABEL_69;
  }
LABEL_67:
  if ( v24 )
    *v21 = 0;
LABEL_69:
  memmove(v21, a2, 2LL * (unsigned int)v5);
  v37 = &v21[(unsigned int)v5];
  memmove(v37, a3, 2LL * (unsigned int)v6);
  result = v22;
  v37[(unsigned int)v6] = 0;
  return result;
}
