/*
 * XREFs of PopEtProcessSnapshotCreate @ 0x14069905C
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1406190C8 (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     PopEtStringSet @ 0x1406198B0 (PopEtStringSet.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x140699308 (PopEtAggregateKeyCopyFromProcess.c)
 *     PopEtAggregateKeyCleanup @ 0x14069936C (PopEtAggregateKeyCleanup.c)
 *     PopEtBucketsAllocate @ 0x140773B2C (PopEtBucketsAllocate.c)
 *     PopEtBucketsFree @ 0x140773BAC (PopEtBucketsFree.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  char *v10; // r8
  char v11; // cl
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // r10
  __int64 v15; // r12
  _QWORD *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // edi
  __int64 v22; // rcx
  __int64 v23; // [rsp+60h] [rbp+40h]
  __int64 v24; // [rsp+60h] [rbp+40h]

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
    if ( v10 )
    {
      if ( (((_DWORD)v9 - 1) & (unsigned int)v9) != 0 )
      {
        v11 = -1;
        do
        {
          ++v11;
          LODWORD(v9) = (unsigned int)v9 >> 1;
        }
        while ( (_DWORD)v9 );
        v9 = (unsigned int)(1 << v11);
      }
      if ( (unsigned int)v9 > 0x4000000 )
        v9 = 0x4000000LL;
      v12 = (unsigned int)v9;
      if ( v10 > &v10[8 * v9] )
        v12 = 0LL;
      if ( v12 )
        memset64(v10, v7 | 1, v12);
      v13 = 0;
      v14 = -1LL << (*(_BYTE *)(v2 + 68) & 0x1F);
      if ( (*(_DWORD *)(v2 + 68) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v15 = *(_QWORD *)(v2 + 72);
          while ( 1 )
          {
            v16 = *(_QWORD **)(v15 + 8LL * v13);
            if ( ((unsigned __int8)v16 & 1) != 0 )
              break;
            *(_QWORD *)(v15 + 8LL * v13) = *v16;
            v23 = v14 & v16[1];
            v17 = (37
                 * (BYTE6(v23)
                  + 37
                  * (BYTE5(v23)
                   + 37
                   * (BYTE4(v23)
                    + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
                 + HIBYTE(v23)) & (unsigned int)(v9 - 1);
            *v16 = *(_QWORD *)&v10[8 * v17];
            *(_QWORD *)&v10[8 * v17] = v16;
          }
          ++v13;
        }
        while ( v13 < *(_DWORD *)(v2 + 68) >> 5 );
        v3 = a2;
      }
      v22 = *(_QWORD *)(v2 + 72);
      v8 = (32 * v9) | *(_DWORD *)(v2 + 68) & 0x1F;
      *(_QWORD *)(v2 + 72) = v10;
      *(_DWORD *)(v2 + 68) = v8;
      if ( v22 )
      {
        PopEtBucketsFree(v22, 0LL);
        v8 = *(_DWORD *)(v2 + 68);
      }
      goto LABEL_21;
    }
    v8 = *(_DWORD *)(v2 + 68);
    if ( v8 >= 0x20 )
    {
LABEL_21:
      *v3 = v6;
      v24 = v6[1] & (-1LL << (v8 & 0x1F));
      v18 = *(_QWORD *)(v2 + 72);
      v19 = (37
           * (BYTE6(v24)
            + 37
            * (BYTE5(v24)
             + 37
             * (BYTE4(v24)
              + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
           + HIBYTE(v24)) & ((v8 >> 5) - 1);
      *v6 = *(_QWORD *)(v18 + 8 * v19);
      *(_QWORD *)(v18 + 8 * v19) = v6;
      ++*(_DWORD *)v7;
      return 0;
    }
  }
  ++*(_DWORD *)(v2 + 612);
  v20 = -1073741670;
  if ( v6 )
  {
    PopEtAggregateKeyCleanup(v6 + 2);
    ExFreePoolWithTag(v6, 0x54456F50u);
  }
  return v20;
}
