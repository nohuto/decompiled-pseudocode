/*
 * XREFs of PfpFileBuildReadList @ 0x140678798
 * Callers:
 *     PfpFileBuildReadSupport @ 0x140676ED0 (PfpFileBuildReadSupport.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpFileBuildReadList(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // rcx
  int v11; // eax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  unsigned int i; // r11d
  __int64 v15; // r8
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  _DWORD *PoolWithTag; // rax

  if ( (*(_DWORD *)a2 & 1) != 0 && !a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x4C526650u);
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = 0LL;
      PoolWithTag[3] = 0;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      PoolWithTag[2] = 1;
      *a4 = PoolWithTag;
      return 0LL;
    }
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 16);
    v8 = 0LL;
    if ( v7 )
    {
      v9 = v7;
      v10 = (_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
      do
      {
        v11 = *v10 >> 12;
        v10 += 4;
        v8 = (unsigned int)(v11 + v8 + 2);
        --v9;
      }
      while ( v9 );
    }
    v12 = 8 * v8 + 16;
    if ( v12 > 0xFFFFFFFF )
      return 3221225621LL;
    v13 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v12, 0x4C526650u);
    if ( v13 )
    {
      *(_OWORD *)v13 = 0LL;
      if ( (*(_DWORD *)a2 & 1) != 0 )
        v13[3] = 1;
      for ( i = 0; i < *(_DWORD *)(a2 + 16); ++i )
      {
        v15 = *(_QWORD *)(a2 + 24) + 16LL * i;
        v16 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFF000uLL;
        if ( (*(_DWORD *)(*(_QWORD *)a1 + 80LL) & 2) == 0 )
          v16 = *(_QWORD *)v15;
        v17 = *(_QWORD *)v15 + *(unsigned int *)(v15 + 8);
        while ( v16 < v17 )
        {
          *(_QWORD *)&v13[2 * v13[2]++ + 4] = v16;
          v16 += 4096LL;
        }
      }
      *a4 = v13;
      return 0LL;
    }
  }
  return 3221225626LL;
}
