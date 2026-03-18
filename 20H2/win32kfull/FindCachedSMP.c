/*
 * XREFs of FindCachedSMP @ 0x1C010098C
 * Callers:
 *     GetCachedSMP @ 0x1C01007BC (GetCachedSMP.c)
 * Callees:
 *     CreateStandardMonoPattern @ 0x1C0148890 (CreateStandardMonoPattern.c)
 */

__int64 **__fastcall FindCachedSMP(__int64 a1, int a2)
{
  int v2; // r14d
  _QWORD *v5; // r8
  _QWORD *v6; // r9
  _QWORD *v7; // rdi
  __int64 **i; // rcx
  __int64 **result; // rax
  _QWORD *v10; // rax
  unsigned int v11; // eax
  char *v12; // rax
  char *v13; // rbx
  __int16 v14; // ax
  __int16 v15; // cx
  _QWORD *v16; // rbx
  _QWORD *v17; // rsi
  _QWORD *j; // rax
  _QWORD *v19; // rdi
  void *v20; // rcx
  __int16 v21; // [rsp+20h] [rbp-20h] BYREF
  char v22; // [rsp+22h] [rbp-1Eh]
  char v23; // [rsp+23h] [rbp-1Dh]
  __int16 v24; // [rsp+24h] [rbp-1Ch]
  __int64 v25; // [rsp+26h] [rbp-1Ah]
  __int16 v26; // [rsp+2Eh] [rbp-12h]
  char *v27; // [rsp+30h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 28);
  EngAcquireSemaphore(hsem);
  v5 = pv;
  if ( pv )
  {
    v6 = 0LL;
    while ( *(_DWORD *)v5 != v2 )
    {
      v6 = v5;
      v5 = (_QWORD *)v5[1];
      if ( !v5 )
        goto LABEL_11;
    }
    if ( v6 )
    {
      v6[1] = v5[1];
      v5[1] = pv;
      pv = v5;
    }
    v7 = v5 + 2;
    for ( i = (__int64 **)v5[2]; i; i = (__int64 **)*i )
    {
      if ( *((unsigned __int16 *)i + 4) == a2 )
        return i;
    }
  }
  else
  {
LABEL_11:
    if ( (unsigned __int16)word_1C0339FC6 >= 0xAu )
    {
      v16 = pv;
      v17 = 0LL;
      for ( j = (_QWORD *)*((_QWORD *)pv + 1); j; j = (_QWORD *)j[1] )
      {
        v17 = v16;
        v16 = j;
      }
      v19 = (_QWORD *)v16[2];
      while ( 1 )
      {
        v20 = v19;
        if ( !v19 )
          break;
        v19 = (_QWORD *)*v19;
        EngFreeMem(v20);
      }
      EngFreeMem(v16);
      v17[1] = 0LL;
      --word_1C0339FC6;
    }
    v10 = EngAllocMem(0, 0x18u, 0x32305448u);
    if ( !v10 )
      goto LABEL_26;
    v7 = v10 + 2;
    ++word_1C0339FC6;
    v10[1] = pv;
    v10[2] = 0LL;
    *(_DWORD *)v10 = v2;
    pv = v10;
  }
  v25 = 0LL;
  v26 = 0;
  v21 = 1;
  v22 = 1;
  v23 = a2;
  v24 = 3848;
  v27 = 0LL;
  v11 = CreateStandardMonoPattern(a1, &v21);
  if ( v11 + 16 >= v11 )
  {
    v12 = (char *)EngAllocMem(0, v11 + 16, 0x33305448u);
    v13 = v12;
    if ( v12 )
    {
      v27 = v12 + 16;
      CreateStandardMonoPattern(a1, &v21);
      v14 = v25;
      *(_QWORD *)v13 = *v7;
      *((_WORD *)v13 + 5) = WORD1(v25);
      v15 = WORD2(v25);
      *((_WORD *)v13 + 7) = v14;
      result = (__int64 **)v13;
      *((_WORD *)v13 + 6) = v15;
      *((_WORD *)v13 + 4) = a2;
      *v7 = v13;
      return result;
    }
  }
LABEL_26:
  EngReleaseSemaphore(hsem);
  return 0LL;
}
