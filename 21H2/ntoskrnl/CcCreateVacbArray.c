/*
 * XREFs of CcCreateVacbArray @ 0x1405FA200
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1402D2E10 (CcInitializeCacheMapEx.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcCreateVacbArray(__int64 a1, __int64 a2)
{
  int v2; // r12d
  int v3; // r15d
  __int64 v6; // rdi
  size_t v7; // r14
  char *PoolWithTag; // rsi
  __int64 result; // rax
  unsigned int v10; // edx
  int v11; // ecx
  char *v12; // rcx
  char *v13; // r8
  char **v14; // rax
  char *i; // rdx
  char *v16; // r9

  v2 = 0;
  v3 = 0;
  if ( HIDWORD(a2) )
  {
    LODWORD(v6) = -1;
  }
  else if ( (unsigned int)a2 > 0x100000 )
  {
    LODWORD(v6) = 8 * ((unsigned int)a2 >> 18);
  }
  else
  {
    LODWORD(v6) = HIDWORD(a2) + 32;
  }
  v7 = (unsigned int)v6;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (_DWORD)v6 == 32 )
  {
    PoolWithTag = (char *)(a1 + 56);
  }
  else
  {
    if ( (unsigned int)v6 > 0x400 )
    {
      v10 = 0;
      v7 = 1024LL;
      LODWORD(v6) = 1032;
      v11 = 25;
      v3 = 1;
      do
      {
        v11 += 7;
        ++v10;
      }
      while ( a2 > 1LL << v11 );
      if ( v10 >= CcMaxVacbLevelsSeen )
        CcMaxVacbLevelsSeen = v10 + 1;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 && a2 > 0x200000 )
      {
        v2 = 1;
        LODWORD(v6) = ((v6 + 15) & 0xFFFFFFF0) + v6;
      }
      if ( (_DWORD)v7 == 1024 )
      {
        LODWORD(v6) = v6 + 8;
        v3 = 1;
      }
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v6, 0x70566343u);
    if ( !PoolWithTag )
    {
      result = 3221225626LL;
      *(_DWORD *)(a1 + 156) = -1073741670;
      return result;
    }
  }
  memset(PoolWithTag, 0, v7);
  if ( v3 )
  {
    v6 = (unsigned int)(v6 - 8);
    *(_QWORD *)&PoolWithTag[v6] = 0LL;
  }
  if ( v2 )
  {
    v12 = &PoolWithTag[v7];
    v13 = &PoolWithTag[(unsigned int)v6];
    if ( &PoolWithTag[v7] < v13 )
    {
      v14 = (char **)(a1 + 16);
      for ( i = *(char **)(a1 + 16); ; i = v16 )
      {
        v16 = v12;
        if ( *((char ***)i + 1) != v14 )
          __fastfail(3u);
        *(_QWORD *)v12 = i;
        *((_QWORD *)v12 + 1) = v14;
        *((_QWORD *)i + 1) = v12;
        *v14 = v12;
        v12 += 16;
        if ( v12 >= v13 )
          break;
      }
    }
  }
  *(_QWORD *)(a1 + 88) = PoolWithTag;
  result = 0LL;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}
