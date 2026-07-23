/*
 * XREFs of SdbpSearchDB @ 0x140769830
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1407696C8 (SdbGetDatabaseMatch.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14073C2C8 (SdbpFindNextIndexedWildCardTag.c)
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x14073F050 (SdbGetStringTagPtr.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140742258 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x1407426D0 (SdbFindFirstStringIndexedTag.c)
 *     SdbFindFirstTag @ 0x140742C54 (SdbFindFirstTag.c)
 *     SdbGetIndex @ 0x1407430E4 (SdbGetIndex.c)
 *     SdbFindNextStringIndexedTag @ 0x1407AB87C (SdbFindNextStringIndexedTag.c)
 *     SdbFindFirstNamedTag @ 0x1407AC4EC (SdbFindFirstNamedTag.c)
 *     SdbpCheckExe @ 0x1407BC55C (SdbpCheckExe.c)
 *     SdbpFindNextNamedTag @ 0x1409616EC (SdbpFindNextNamedTag.c)
 */

__int64 __fastcall SdbpSearchDB(int a1, _RTL_RUN_ONCE *a2, __int64 a3, __int64 a4, unsigned int *a5, int a6)
{
  unsigned int *v6; // r15
  unsigned int v9; // edi
  wchar_t *Str1; // r14
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r12
  int FirstStringIndexedTag; // eax
  int v16; // r14d
  __int64 v17; // r8
  int v19; // eax
  unsigned int v20; // eax
  int i; // eax
  int v22; // eax
  int FirstTag; // eax
  __int64 v24; // r12
  int FirstNamedTag; // eax
  int v26; // eax
  int v27; // r14d
  int j; // eax
  int v29; // eax
  wchar_t *v30; // [rsp+40h] [rbp-30h]
  _OWORD v31[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v32; // [rsp+68h] [rbp-8h]
  int v34; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a5;
  LODWORD(v35) = 0;
  a6 = 0;
  v32 = 0LL;
  v9 = 0;
  v34 = 0;
  memset(v31, 0, sizeof(v31));
  memset(a5, 0, 0x80uLL);
  Str1 = *(wchar_t **)(a4 + 40);
  v30 = Str1;
  v13 = 16LL;
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24587, 0LL) )
  {
    for ( i = SdbpFindFirstIndexedWildCardTag(a2, 28679LL, v12, (__int64)Str1, (unsigned int *)v31);
          i;
          i = SdbpFindNextIndexedWildCardTag((__int64)a2, (unsigned int *)v31) )
    {
      v22 = SdbpCheckExe(a1, (int)a2, i, (int)&v34, a4, 1, (__int64)&v35, v6);
      v9 = v34;
      if ( v22 )
      {
        if ( (_DWORD)v35 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_15;
      }
    }
  }
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24577, 0LL) )
  {
    v14 = 1LL;
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag(a2, 28679LL, 24577, (__int64)Str1, (unsigned int *)v31);
    goto LABEL_4;
  }
  v14 = 0LL;
  FirstTag = SdbFindFirstTag((__int64)a2, 0LL, 28673);
  a6 = FirstTag;
  if ( !FirstTag )
    goto LABEL_28;
  FirstStringIndexedTag = SdbFindFirstNamedTag((int)a2, FirstTag, 28679, 24577, Str1);
LABEL_4:
  while ( 1 )
  {
    v16 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
      break;
    v19 = SdbpCheckExe(a1, (int)a2, FirstStringIndexedTag, (int)&v34, a4, 0, (__int64)&v35, v6);
    v9 = v34;
    if ( v19 )
    {
      if ( (_DWORD)v35 != 2 )
        goto LABEL_7;
    }
    else if ( (unsigned int)v34 > 0x10 )
    {
      goto LABEL_15;
    }
    if ( v14 )
      FirstStringIndexedTag = SdbFindNextStringIndexedTag(a2, v31);
    else
      FirstStringIndexedTag = SdbpFindNextNamedTag((int)a2, a6, v16, 24577, v30);
  }
  if ( *(_QWORD *)(a4 + 48) )
  {
    if ( (unsigned int)SdbGetIndex(a2, 28679, 24608, 0LL) )
    {
      v24 = 1LL;
      FirstNamedTag = SdbFindFirstStringIndexedTag(a2, 28679LL, 24608, *(_QWORD *)(a4 + 48), (unsigned int *)v31);
      goto LABEL_42;
    }
    v24 = 0LL;
    a6 = SdbFindFirstTag((__int64)a2, 0LL, 28673);
    if ( a6 )
    {
LABEL_28:
      AslLogCallPrintf(1LL);
      goto LABEL_7;
    }
    FirstNamedTag = SdbFindFirstNamedTag((int)a2, 0, 28679, 24608, *(wchar_t **)(a4 + 48));
LABEL_42:
    while ( 1 )
    {
      v27 = FirstNamedTag;
      if ( !FirstNamedTag )
        break;
      v26 = SdbpCheckExe(a1, (int)a2, FirstNamedTag, (int)&v34, a4, 0, (__int64)&v35, v6);
      v9 = v34;
      if ( v26 )
      {
        if ( (_DWORD)v35 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_15;
      }
      if ( v24 )
        FirstNamedTag = SdbFindNextStringIndexedTag(a2, v31);
      else
        FirstNamedTag = SdbpFindNextNamedTag((int)a2, a6, v27, 24608, *(wchar_t **)(a4 + 48));
    }
  }
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24587, 0LL) )
  {
    for ( j = SdbpFindFirstIndexedWildCardTag(a2, 28679LL, v17, (__int64)v30, (unsigned int *)v31);
          j;
          j = SdbpFindNextIndexedWildCardTag((__int64)a2, (unsigned int *)v31) )
    {
      v29 = SdbpCheckExe(a1, (int)a2, j, (int)&v34, a4, 2, (__int64)&v35, v6);
      v9 = v34;
      if ( v29 )
      {
        if ( (_DWORD)v35 != 2 )
          break;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_15;
      }
    }
  }
LABEL_7:
  if ( v9 > 0x10 || (v13 = v9) != 0 )
  {
    do
    {
LABEL_15:
      v20 = SdbFindFirstTag((__int64)a2, *v6, 24582);
      if ( v20 )
        SdbGetStringTagPtr((__int64)a2, v20);
      v6 += 2;
      --v13;
    }
    while ( v13 );
  }
  return v9;
}
