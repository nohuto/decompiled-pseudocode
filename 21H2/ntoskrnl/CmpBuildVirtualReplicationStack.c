/*
 * XREFs of CmpBuildVirtualReplicationStack @ 0x14086FD8C
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140870B24 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpBuildVirtualReplicationStack(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  int v5; // eax
  __int64 v7; // rdi
  SIZE_T v9; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rbx
  __int64 result; // rax
  __int64 v13; // r8
  _WORD *v14; // rdx
  __int16 v15; // cx
  _WORD *v16; // rdx
  __int16 v17; // cx
  __int64 v18; // r9
  __int16 v19; // ax

  v5 = (*(_DWORD *)(a1 + 8) >> 21) & 0x3FF;
  *a4 = 0LL;
  v7 = a1;
  v9 = (unsigned int)(48 * v5);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x20204D43u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v9);
  LODWORD(v13) = 4;
  v14 = *(_WORD **)(a2 + 8);
  v15 = *(_OWORD *)a2;
  while ( 1 )
  {
    if ( *v14 == 92 )
    {
      LODWORD(v13) = v13 - 1;
      if ( !(_DWORD)v13 )
        break;
    }
    v15 -= 2;
    if ( !v15 )
    {
LABEL_21:
      ExFreePoolWithTag(v11, 0);
      return 3221225485LL;
    }
    ++v14;
  }
  v16 = v14 + 1;
  v17 = v15 - 2;
  while ( v17 )
  {
    v18 = 6LL * (unsigned int)v13;
    *(_QWORD *)&v11[12 * (unsigned int)v13 + 2] = v16;
    do
    {
      if ( *v16 == 92 )
        break;
      LOWORD(v11[12 * (unsigned int)v13]) += 2;
      ++v16;
      v17 -= 2;
    }
    while ( v17 );
    v19 = v11[12 * (unsigned int)v13];
    LODWORD(v13) = v13 + 1;
    HIWORD(v11[2 * v18]) = v19;
    if ( !v17 )
      break;
    do
    {
      if ( *v16 != 92 )
        break;
      ++v16;
      v17 -= 2;
    }
    while ( v17 );
  }
  *a3 = v13;
  while ( (unsigned int)v13 > 1 )
  {
    if ( !v7 )
      goto LABEL_21;
    v13 = (unsigned int)(v13 - 1);
    v11[12 * v13 + 10] = *(_DWORD *)(v7 + 40) >> 31;
    v7 = *(_QWORD *)(v7 + 72);
  }
  v11[10] = 0;
  result = 0LL;
  *a4 = v11;
  return result;
}
