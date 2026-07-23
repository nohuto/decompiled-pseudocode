/*
 * XREFs of PopEtProcessSnapshotCreate @ 0x1405F7D4C
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x140682D28 (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1405F7FF8 (PopEtAggregateKeyCopyFromProcess.c)
 *     PopEtAggregateKeyCleanup @ 0x1405F805C (PopEtAggregateKeyCleanup.c)
 *     PopEtStringSet @ 0x140683510 (PopEtStringSet.c)
 *     PopEtBucketsAllocate @ 0x140773CEC (PopEtBucketsAllocate.c)
 *     PopEtBucketsFree @ 0x140773D6C (PopEtBucketsFree.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopEtProcessSnapshotCreate(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  _QWORD *v3; // r12
  __int64 v4; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // rbx
  char *v10; // rax
  _QWORD *v11; // r9
  char *v12; // r8
  char v13; // cl
  unsigned __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r10
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 v23; // rcx
  __int64 v24; // [rsp+60h] [rbp+40h]
  __int64 v25; // [rsp+60h] [rbp+40h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1F0uLL, 0x54456F50u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1F0uLL);
    v6[1] = v4;
    PopEtAggregateKeyCopyFromProcess(v6 + 2, v4, v2 + 32);
    PopEtStringSet(v6 + 3, 0LL);
    v7 = v2 + 64;
    v8 = *(_DWORD *)(v2 + 68);
    v9 = 2 * (v8 >> 5);
    if ( *(_DWORD *)(v2 + 64) < (unsigned int)v9 )
      goto LABEL_21;
    if ( (unsigned int)v9 < 4 )
      v9 = 4LL;
    v10 = (char *)PopEtBucketsAllocate(8LL * (unsigned int)v9);
    v11 = 0LL;
    v12 = v10;
    if ( v10 )
    {
      if ( (((_DWORD)v9 - 1) & (unsigned int)v9) != 0 )
      {
        v13 = -1;
        do
        {
          ++v13;
          LODWORD(v9) = (unsigned int)v9 >> 1;
        }
        while ( (_DWORD)v9 );
        v9 = (unsigned int)(1 << v13);
      }
      if ( (unsigned int)v9 > 0x4000000 )
        v9 = 0x4000000LL;
      v14 = (unsigned int)v9;
      if ( v10 > &v10[8 * v9] )
        v14 = 0LL;
      if ( v14 )
        memset64(v10, v7 | 1, v14);
      v15 = 0;
      v16 = -1LL << (*(_BYTE *)(v2 + 68) & 0x1F);
      if ( (*(_DWORD *)(v2 + 68) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v17 = *(_QWORD *)(v2 + 72);
          while ( 1 )
          {
            v11 = *(_QWORD **)(v17 + 8LL * v15);
            if ( ((unsigned __int8)v11 & 1) != 0 )
              break;
            *(_QWORD *)(v17 + 8LL * v15) = *v11;
            v24 = v16 & v11[1];
            v18 = (37
                 * (BYTE6(v24)
                  + 37
                  * (BYTE5(v24)
                   + 37
                   * (BYTE4(v24)
                    + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
                 + HIBYTE(v24)) & (unsigned int)(v9 - 1);
            *v11 = *(_QWORD *)&v10[8 * v18];
            *(_QWORD *)&v10[8 * v18] = v11;
          }
          ++v15;
        }
        while ( v15 < *(_DWORD *)(v2 + 68) >> 5 );
        v3 = a2;
      }
      v23 = *(_QWORD *)(v2 + 72);
      v8 = (32 * v9) | *(_DWORD *)(v2 + 68) & 0x1F;
      *(_QWORD *)(v2 + 72) = v12;
      *(_DWORD *)(v2 + 68) = v8;
      if ( v23 )
      {
        PopEtBucketsFree(v23, 0LL, v12, v11);
        v8 = *(_DWORD *)(v2 + 68);
      }
      goto LABEL_21;
    }
    v8 = *(_DWORD *)(v2 + 68);
    if ( v8 >= 0x20 )
    {
LABEL_21:
      *v3 = v6;
      v25 = v6[1] & (-1LL << (v8 & 0x1F));
      v19 = *(_QWORD *)(v2 + 72);
      v20 = (37
           * (BYTE6(v25)
            + 37
            * (BYTE5(v25)
             + 37
             * (BYTE4(v25)
              + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
           + HIBYTE(v25)) & ((v8 >> 5) - 1);
      *v6 = *(_QWORD *)(v19 + 8 * v20);
      *(_QWORD *)(v19 + 8 * v20) = v6;
      ++*(_DWORD *)v7;
      return 0;
    }
  }
  ++*(_DWORD *)(v2 + 612);
  v21 = -1073741670;
  if ( v6 )
  {
    PopEtAggregateKeyCleanup(v6 + 2);
    ExFreePoolWithTag(v6, 0x54456F50u);
  }
  return v21;
}
