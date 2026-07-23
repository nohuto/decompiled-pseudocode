/*
 * XREFs of MiConfigureMemoryRemoval @ 0x1408C5C48
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1408C60EC (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 */

__int64 __fastcall MiConfigureMemoryRemoval(_QWORD *a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // r9
  char v4; // bl
  unsigned int *v7; // rdi
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r15
  __int64 v10; // r10
  unsigned __int64 v11; // rbp
  __int64 v12; // rsi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  SIZE_T v15; // rdx
  _QWORD *Pool; // rax
  char *v18; // rdx
  unsigned int v19; // ecx
  unsigned __int64 *v20; // r11
  __int64 v21; // r10
  _QWORD *v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // [rsp+50h] [rbp+8h]

  v3 = *a2;
  v4 = 0;
  *a1 = 0LL;
  if ( *a3 )
    v7 = &a2[4 * v3 + 4];
  else
    v7 = 0LL;
  v8 = a2 + 6;
  v9 = a3[2];
  v10 = 0LL;
  v26 = a3[3];
  v11 = v26 + v9;
  v12 = -2LL;
  while ( 1 )
  {
    v13 = *(v8 - 1);
    v14 = v13 + *v8;
    if ( v9 >= v13 && v11 <= v14 )
      break;
    ++v10;
    v8 += 2;
    if ( v10 == v3 )
      goto LABEL_15;
  }
  if ( v9 != v13 )
  {
    if ( v11 != v14 )
    {
      v12 = 1LL;
      goto LABEL_15;
    }
LABEL_14:
    v12 = 0LL;
    goto LABEL_15;
  }
  if ( v11 != v14 )
    goto LABEL_14;
  v12 = -1LL;
LABEL_15:
  v15 = 16 * (v12 + (unsigned int)(v3 - 1) + 3LL);
  if ( v7 )
    v15 += 8 * (v12 + v3);
  Pool = MiAllocatePool(64, v15, 0x20206D4Du);
  if ( !Pool )
    return 3221225626LL;
  Pool[1] = 1LL;
  *Pool = &MiSystemPartition;
  v18 = (char *)(Pool + 4);
  v19 = v12 + *a2;
  v20 = (unsigned __int64 *)(a2 + 4);
  v21 = 0LL;
  *((_DWORD *)Pool + 4) = v19;
  v22 = &Pool[2 * v19 + 4];
  Pool[3] = *((_QWORD *)a2 + 1) - v26;
  do
  {
    v23 = *v20;
    v24 = *v20 + v20[1];
    if ( (v4 & 1) != 0 || v9 < v23 || v11 > v24 )
    {
      *(_OWORD *)v18 = *(_OWORD *)v20;
      goto LABEL_33;
    }
    v4 |= 1u;
    if ( v9 == v23 )
    {
      if ( v11 == v24 )
        goto LABEL_35;
      v23 += v26;
LABEL_26:
      *(_QWORD *)v18 = v23;
      *((_QWORD *)v18 + 1) = v20[1] - v26;
LABEL_33:
      v18 += 16;
      if ( v7 )
        *v22++ = *(_QWORD *)&v7[2 * v21];
      goto LABEL_35;
    }
    if ( v11 == v24 )
      goto LABEL_26;
    *(_QWORD *)v18 = v23;
    *((_QWORD *)v18 + 1) = v9 - v23;
    if ( v7 )
    {
      v25 = 2LL;
      do
      {
        *v22++ = *(_QWORD *)&v7[2 * v21];
        --v25;
      }
      while ( v25 );
    }
    *((_QWORD *)v18 + 2) = v11;
    *((_QWORD *)v18 + 3) = v24 - v11;
    v18 += 32;
LABEL_35:
    ++v21;
    v20 += 2;
  }
  while ( v21 != *a2 );
  *a1 = Pool + 2;
  return 0LL;
}
