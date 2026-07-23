/*
 * XREFs of AslEnvGetSysNativeDirPathForGuestBuf @ 0x14096A4C4
 * Callers:
 *     SdbpGetPathAppraiser @ 0x140967230 (SdbpGetPathAppraiser.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1409689F4 (AslPathCombine.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x14096A730 (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall AslEnvGetSysNativeDirPathForGuestBuf(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _WORD *a3,
        __int16 a4,
        _WORD *a5)
{
  __int64 v8; // r8
  wchar_t *v9; // rdx
  wchar_t v10; // ax
  wchar_t *v11; // rax
  signed int v12; // ebx
  __int64 v13; // rdx
  wchar_t *v14; // rax
  signed int v15; // ebx
  __int64 v16; // rax
  wchar_t *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char *v20; // r9
  wchar_t v21; // ax
  wchar_t *v22; // rax
  wchar_t pszSrc[64]; // [rsp+30h] [rbp-B8h] BYREF

  *pszDest = 0;
  if ( a5 && *a5 != a4 )
  {
    memset(pszSrc, 0, sizeof(pszSrc));
    v8 = 64LL;
    v9 = pszSrc;
    do
    {
      if ( v8 == -2147483582 )
        break;
      v10 = *(wchar_t *)((char *)v9 + (char *)L"\\SystemRoot" - (char *)pszSrc);
      if ( !v10 )
        break;
      *v9++ = v10;
      --v8;
    }
    while ( v8 );
    v11 = v9 - 1;
    if ( v8 )
      v11 = v9;
    *v11 = 0;
    v12 = v8 == 0 ? 0x80000005 : 0;
    if ( v8 )
    {
      v13 = 64LL;
      v14 = pszSrc;
      do
      {
        if ( !*v14 )
          break;
        ++v14;
        --v13;
      }
      while ( v13 );
      v15 = v13 == 0 ? 0xC000000D : 0;
      if ( v13 )
        v16 = 64 - v13;
      else
        v16 = 0LL;
      if ( v13 )
      {
        v17 = &pszSrc[v16];
        v18 = 64 - v16;
        if ( 64 != v16 )
        {
          v19 = 2147483646LL;
          v20 = (char *)((char *)L"\\SysNative" - (char *)v17);
          do
          {
            if ( !v19 )
              break;
            v21 = *(wchar_t *)((char *)v17 + (_QWORD)v20);
            if ( !v21 )
              break;
            *v17 = v21;
            --v19;
            ++v17;
            --v18;
          }
          while ( v18 );
        }
        v22 = v17 - 1;
        if ( v18 )
          v22 = v17;
        v15 = v18 == 0 ? 0x80000005 : 0;
        *v22 = 0;
      }
      if ( v15 >= 0 )
      {
LABEL_29:
        if ( a3 && *a3 )
        {
          v12 = AslPathCombine(pszSrc, (__int64)a3, pszDest, cchDest);
          if ( v12 < 0 )
            goto LABEL_34;
          return (unsigned int)v12;
        }
        v12 = RtlStringCchCopyW(pszDest, cchDest, pszSrc);
        if ( v12 >= 0 )
          return (unsigned int)v12;
LABEL_34:
        AslLogCallPrintf(1LL);
        return (unsigned int)v12;
      }
      AslLogCallPrintf(1LL);
      v12 = -1073741811;
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
    if ( v12 < 0 )
      goto LABEL_34;
    goto LABEL_29;
  }
  return AslEnvGetSystem32DirPathBuf(pszDest, cchDest, (__int64)a5);
}
