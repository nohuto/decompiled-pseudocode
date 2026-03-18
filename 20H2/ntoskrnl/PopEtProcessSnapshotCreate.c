/*
 * XREFs of PopEtProcessSnapshotCreate @ 0x1406CA2FC
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x140666648 (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     PopEtStringSet @ 0x140666E30 (PopEtStringSet.c)
 *     PopEtAggregateKeyCleanup @ 0x1406678B8 (PopEtAggregateKeyCleanup.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1406CA5A8 (PopEtAggregateKeyCopyFromProcess.c)
 *     PopEtBucketsAllocate @ 0x14076FC1C (PopEtBucketsAllocate.c)
 *     PopEtBucketsFree @ 0x14076FCDC (PopEtBucketsFree.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtProcessSnapshotCreate(__int64 a1, __int64 **a2)
{
  __int64 v2; // r15
  __int64 **v3; // r12
  __int64 v4; // rdi
  __int64 *PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // r14
  unsigned __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rbx
  char *v13; // rax
  char v14; // cl
  unsigned __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // r10
  __int64 v18; // r12
  _QWORD *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // edi
  __int64 v25; // rcx
  __int64 v26; // [rsp+60h] [rbp+40h]
  __int64 v27; // [rsp+60h] [rbp+40h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x1F0uLL, 0x54456F50u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1F0uLL);
    v9[1] = v4;
    PopEtAggregateKeyCopyFromProcess(v9 + 2, v4, v2 + 32);
    PopEtStringSet(v9 + 3, 0LL);
    v10 = v2 + 64;
    v11 = *(_DWORD *)(v2 + 68);
    v12 = 2 * (v11 >> 5);
    if ( *(_DWORD *)(v2 + 64) < (unsigned int)v12 )
      goto LABEL_21;
    if ( (unsigned int)v12 < 4 )
      v12 = 4LL;
    v13 = (char *)PopEtBucketsAllocate(8LL * (unsigned int)v12);
    v8 = 0LL;
    v7 = (__int64)v13;
    if ( v13 )
    {
      if ( (((_DWORD)v12 - 1) & (unsigned int)v12) != 0 )
      {
        v14 = -1;
        do
        {
          ++v14;
          LODWORD(v12) = (unsigned int)v12 >> 1;
        }
        while ( (_DWORD)v12 );
        v12 = (unsigned int)(1 << v14);
      }
      if ( (unsigned int)v12 > 0x4000000 )
        v12 = 0x4000000LL;
      v15 = (unsigned int)v12;
      if ( v13 > &v13[8 * v12] )
        v15 = 0LL;
      if ( v15 )
        memset64(v13, v10 | 1, v15);
      v16 = 0;
      v17 = -1LL << (*(_BYTE *)(v2 + 68) & 0x1F);
      if ( (*(_DWORD *)(v2 + 68) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v18 = *(_QWORD *)(v2 + 72);
          while ( 1 )
          {
            v19 = *(_QWORD **)(v18 + 8LL * v16);
            if ( ((unsigned __int8)v19 & 1) != 0 )
              break;
            *(_QWORD *)(v18 + 8LL * v16) = *v19;
            v26 = v17 & v19[1];
            v20 = (37
                 * (BYTE6(v26)
                  + 37
                  * (BYTE5(v26)
                   + 37
                   * (BYTE4(v26)
                    + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                 + HIBYTE(v26)) & (unsigned int)(v12 - 1);
            *v19 = *(_QWORD *)&v13[8 * v20];
            *(_QWORD *)&v13[8 * v20] = v19;
          }
          ++v16;
        }
        while ( v16 < *(_DWORD *)(v2 + 68) >> 5 );
        v3 = a2;
      }
      v25 = *(_QWORD *)(v2 + 72);
      v11 = (32 * v12) | *(_DWORD *)(v2 + 68) & 0x1F;
      *(_QWORD *)(v2 + 72) = v7;
      *(_DWORD *)(v2 + 68) = v11;
      if ( v25 )
      {
        PopEtBucketsFree(v25, 0LL);
        v11 = *(_DWORD *)(v2 + 68);
      }
      goto LABEL_21;
    }
    v11 = *(_DWORD *)(v2 + 68);
    if ( v11 >= 0x20 )
    {
LABEL_21:
      *v3 = v9;
      v27 = v9[1] & (-1LL << (v11 & 0x1F));
      v21 = *(_QWORD *)(v2 + 72);
      v22 = (37
           * (BYTE6(v27)
            + 37
            * (BYTE5(v27)
             + 37
             * (BYTE4(v27)
              + 37 * (BYTE3(v27) + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
           + HIBYTE(v27)) & ((v11 >> 5) - 1);
      *v9 = *(_QWORD *)(v21 + 8 * v22);
      *(_QWORD *)(v21 + 8 * v22) = v9;
      ++*(_DWORD *)v10;
      return 0;
    }
  }
  ++*(_DWORD *)(v2 + 612);
  v23 = -1073741670;
  if ( v9 )
  {
    PopEtAggregateKeyCleanup(v9 + 2, v6, v7, v8);
    ExFreePoolWithTag(v9, 0x54456F50u);
  }
  return v23;
}
