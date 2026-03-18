/*
 * XREFs of SdbpCreateSearchDBContext @ 0x140745430
 * Callers:
 *     SdbpCheckKObject @ 0x14073F328 (SdbpCheckKObject.c)
 *     SdbGetDatabaseMatch @ 0x14076BAA8 (SdbGetDatabaseMatch.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14036F060 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x14036F320 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x140745604 (AslAlloc.c)
 *     AslPathSplit @ 0x14076CEB8 (AslPathSplit.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpCreateSearchDBContext(_QWORD *a1, const wchar_t **a2)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rsi
  __int64 v6; // rcx
  const wchar_t *v7; // r14
  __int64 v8; // rax
  unsigned int v9; // r15d
  wchar_t *v10; // rbp
  __int64 v11; // rcx
  wchar_t *v12; // rax
  __int64 v14; // rax
  char *v15; // rdx
  __int64 v16; // r8
  _WORD *v17; // rcx
  __int16 v18; // ax
  _WORD *v19; // rax
  __int64 v20; // rcx
  _WORD *v21; // rax
  int v22; // [rsp+20h] [rbp-488h]
  wchar_t pszSrc[264]; // [rsp+40h] [rbp-468h] BYREF
  wchar_t v24[264]; // [rsp+250h] [rbp-258h] BYREF

  v4 = 0;
  memset(v24, 0, 0x208uLL);
  v5 = 0LL;
  memset(pszSrc, 0, 0x208uLL);
  if ( !a2 )
  {
    v14 = AslAlloc(v6, 4LL);
    v15 = (char *)L"." - v14;
    v10 = (wchar_t *)v14;
    v16 = 2LL;
    v17 = (_WORD *)v14;
    do
    {
      if ( v16 == -2147483644 )
        break;
      v18 = *(_WORD *)((char *)v17 + (_QWORD)v15);
      if ( !v18 )
        break;
      *v17++ = v18;
      --v16;
    }
    while ( v16 );
    v19 = v17 - 1;
    if ( v16 )
      v19 = v17;
    *v19 = 0;
    v5 = (wchar_t *)AslAlloc(v17, 2LL);
    *v5 = 0;
    v21 = (_WORD *)AslAlloc(v20, 2LL);
    *v21 = 0;
    a1[3] = v21;
    goto LABEL_9;
  }
  v7 = *a2;
  v8 = -1LL;
  do
    ++v8;
  while ( v7[v8] );
  v9 = v8 + 1;
  v10 = (wchar_t *)AslAlloc(v6, 2LL * (unsigned int)(v8 + 1));
  if ( !v10 )
  {
    AslLogCallPrintf(1LL);
    return v4;
  }
  if ( (int)AslPathSplit(v7, v10, v9, pszSrc, v22, v24) >= 0
    && (v12 = (wchar_t *)AslAlloc(v11, 520LL), (v5 = v12) != 0LL) )
  {
    if ( RtlStringCchCopyW(v12, 0x104uLL, pszSrc) >= 0 && RtlStringCchCatW(v5, 0x104uLL, v24) >= 0 )
    {
LABEL_9:
      a1[7] = 0LL;
      a1[6] = 0LL;
      a1[9] = 0LL;
      a1[8] = 0LL;
      a1[11] = 0LL;
      v4 = 1;
      a1[1] = a2;
      a1[4] = v10;
      a1[5] = v5;
      return v4;
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  ExFreePoolWithTag(v10, 0x74705041u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x74705041u);
  return v4;
}
