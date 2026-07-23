/*
 * XREFs of PopEtAggregateGet @ 0x140683B08
 * Callers:
 *     PopEtEnergyTrackerUpdateAggregate @ 0x140682FF4 (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     PopEtAggregateKeyCleanup @ 0x1405F805C (PopEtAggregateKeyCleanup.c)
 *     PopEtAggregateKeyCopy @ 0x1405F80A4 (PopEtAggregateKeyCopy.c)
 *     PopEtAggregateFind @ 0x140683E04 (PopEtAggregateFind.c)
 *     PopEtBucketsAllocate @ 0x140773CEC (PopEtBucketsAllocate.c)
 *     PopEtBucketsFree @ 0x140773D6C (PopEtBucketsFree.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopEtAggregateGet(__int64 a1, _OWORD *a2, __int64 *a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 *PoolWithTag; // rax
  __int64 *v9; // r15
  unsigned int v10; // ecx
  __int64 v11; // rbx
  char *v12; // rax
  char *v13; // r8
  char v14; // cl
  unsigned __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // r10
  __int64 v18; // r12
  _QWORD *v19; // r9
  __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // edi
  __int64 v25; // rax
  _QWORD *v26; // r8
  int v27; // eax
  unsigned int v28; // edi
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // [rsp+68h] [rbp+48h] BYREF

  v31 = 0LL;
  v6 = PopEtAggregateFind(a1, a2, &v31);
  if ( v6 )
  {
    *a3 = v6;
    return;
  }
  v7 = a1 + 48;
  if ( *(_DWORD *)(a1 + 48) >= *(_DWORD *)(a1 + 32) )
  {
    ++*(_DWORD *)(a1 + 616);
LABEL_34:
    ++*(_DWORD *)(a1 + 604);
    v26 = (_QWORD *)(a1 + 80);
    v27 = *(_DWORD *)(a1 + 636);
    *a3 = a1 + 80;
    if ( (v27 & 4) == 0 )
    {
      *(_DWORD *)(a1 + 636) = v27 | 4;
      v28 = *(_DWORD *)(a1 + 52);
      v31 = *(_QWORD *)(a1 + 88) & (-1LL << (v28 & 0x1F));
      v29 = *(_QWORD *)(a1 + 56);
      v30 = (37
           * (BYTE6(v31)
            + 37
            * (BYTE5(v31)
             + 37
             * (BYTE4(v31)
              + 37 * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
           + HIBYTE(v31)) & ((v28 >> 5) - 1);
      *v26 = *(_QWORD *)(v29 + 8 * v30);
      *(_QWORD *)(v29 + 8 * v30) = v26;
      ++*(_DWORD *)v7;
    }
    return;
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x54456F50u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_34;
  memset(PoolWithTag, 0, 0x200uLL);
  PopEtAggregateKeyCopy(v9 + 2, a2);
  v9[1] = v31;
  v10 = *(_DWORD *)(a1 + 52);
  v11 = 2 * (v10 >> 5);
  if ( *(_DWORD *)v7 < (unsigned int)v11 )
    goto LABEL_23;
  if ( (unsigned int)v11 < 4 )
    v11 = 4LL;
  v12 = (char *)PopEtBucketsAllocate(8LL * (unsigned int)v11);
  v13 = v12;
  if ( v12 )
  {
    if ( (((_DWORD)v11 - 1) & (unsigned int)v11) != 0 )
    {
      v14 = -1;
      do
      {
        ++v14;
        LODWORD(v11) = (unsigned int)v11 >> 1;
      }
      while ( (_DWORD)v11 );
      v11 = (unsigned int)(1 << v14);
    }
    if ( (unsigned int)v11 > 0x4000000 )
      v11 = 0x4000000LL;
    v15 = (unsigned int)v11;
    if ( v12 > &v12[8 * v11] )
      v15 = 0LL;
    if ( v15 )
      memset64(v12, v7 | 1, v15);
    v16 = 0;
    v17 = -1LL << (*(_BYTE *)(a1 + 52) & 0x1F);
    if ( (*(_DWORD *)(a1 + 52) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v18 = *(_QWORD *)(a1 + 56);
        while ( 1 )
        {
          v19 = *(_QWORD **)(v18 + 8LL * v16);
          if ( ((unsigned __int8)v19 & 1) != 0 )
            break;
          *(_QWORD *)(v18 + 8LL * v16) = *v19;
          v31 = v17 & v19[1];
          v20 = (37
               * (BYTE6(v31)
                + 37
                * (BYTE5(v31)
                 + 37
                 * (BYTE4(v31)
                  + 37 * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
               + HIBYTE(v31)) & (unsigned int)(v11 - 1);
          *v19 = *(_QWORD *)&v12[8 * v20];
          *(_QWORD *)&v12[8 * v20] = v19;
        }
        ++v16;
      }
      while ( v16 < *(_DWORD *)(a1 + 52) >> 5 );
    }
    v25 = *(_QWORD *)(a1 + 56);
    v10 = (32 * v11) | *(_DWORD *)(a1 + 52) & 0x1F;
    *(_QWORD *)(a1 + 56) = v13;
    *(_DWORD *)(a1 + 52) = v10;
    if ( v25 )
    {
      PopEtBucketsFree(v25, 0LL, v13, 0LL);
      v10 = *(_DWORD *)(a1 + 52);
    }
    goto LABEL_23;
  }
  v10 = *(_DWORD *)(a1 + 52);
  if ( v10 >= 0x20 )
  {
LABEL_23:
    v21 = v10;
    *a3 = (__int64)v9;
    v31 = v9[1] & (-1LL << (v10 & 0x1F));
    v22 = *(_QWORD *)(a1 + 56);
    v23 = (37
         * (BYTE6(v31)
          + 37
          * (BYTE5(v31)
           + 37
           * (BYTE4(v31)
            + 37 * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
         + HIBYTE(v31)) & ((v21 >> 5) - 1);
    *v9 = *(_QWORD *)(v22 + 8 * v23);
    *(_QWORD *)(v22 + 8 * v23) = v9;
    v9 = 0LL;
    ++*(_DWORD *)v7;
    v24 = 0;
    goto LABEL_24;
  }
  v24 = -1073741670;
LABEL_24:
  if ( v9 )
  {
    PopEtAggregateKeyCleanup(v9 + 2);
    ExFreePoolWithTag(v9, 0x54456F50u);
  }
  if ( v24 < 0 )
    goto LABEL_34;
}
