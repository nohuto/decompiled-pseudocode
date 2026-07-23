/*
 * XREFs of RtlpHpVsContextFree @ 0x14028A9F0
 * Callers:
 *     RtlpHpSegFree @ 0x1402538BC (RtlpHpSegFree.c)
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     RtlpFreeHeapInternal @ 0x1402DB3D4 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x14028AFA0 (RtlpHpVsChunkComputeCost.c)
 *     RtlpHpVsChunkCoalesce @ 0x14028B080 (RtlpHpVsChunkCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x14028C090 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14028EF10 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentFree @ 0x1402D8220 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1402D8268 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsChunkAlignSplit @ 0x1402DBEE0 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1402DBFD0 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1402DC140 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402DC3C0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1403FF070 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFailure @ 0x14058E080 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextFree(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  char v6; // di
  int v9; // edx
  __int64 v10; // rbx
  unsigned int v11; // ecx
  PSLIST_ENTRY v12; // rax
  _QWORD *v13; // r13
  int v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // r14
  _QWORD *v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  int v20; // edx
  int v21; // ecx
  unsigned __int64 v22; // rbx
  unsigned int i; // r15d
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // edi
  int v29; // r12d
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r15
  __int16 v32; // ax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  BOOLEAN v35; // al
  unsigned __int64 v36; // rax
  _SLIST_HEADER *v38; // rcx
  int v39; // ecx
  int v40; // ecx
  __int64 v41; // r8
  int v42; // edi
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // [rsp+30h] [rbp-40h] BYREF
  __int128 v45; // [rsp+38h] [rbp-38h] BYREF
  __int64 v46; // [rsp+48h] [rbp-28h]
  int v47; // [rsp+A0h] [rbp+30h]
  unsigned int v48; // [rsp+A8h] [rbp+38h] BYREF
  unsigned __int64 v49; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v50; // [rsp+B8h] [rbp+48h]

  v50 = a4;
  v6 = a4;
  v9 = *(_DWORD *)(a1 + 176);
  v10 = a3 - 16;
  if ( (v9 & 1) != 0 && (a3 & 0xFFF) == 0 )
    v10 = a3 - 32;
  if ( !a2 )
  {
    v39 = DWORD1(RtlpHpHeapGlobals) ^ HIDWORD(v10) ^ HIDWORD(*(_QWORD *)v10);
    if ( (v39 & 0xFF0000) != 0 )
    {
      v40 = (unsigned __int8)(RtlpHpHeapGlobals ^ v10 ^ *(_BYTE *)(v10 + 8));
    }
    else
    {
      if ( (_WORD)v39 )
      {
        v41 = v10 - 16LL * (unsigned __int16)((v10 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)v10) >> 32);
        v42 = DWORD1(RtlpHpHeapGlobals) ^ HIDWORD(v41) ^ HIDWORD(*(_QWORD *)v41);
        if ( (v42 & 0xFF0000) != 0 )
        {
          v40 = (unsigned __int8)(RtlpHpHeapGlobals ^ v41 ^ *(_BYTE *)(v41 + 8));
        }
        else if ( (_WORD)v42 )
        {
          v41 -= 16LL * (unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ v41 ^ *(_QWORD *)v41) >> 32);
          v40 = (unsigned __int8)(RtlpHpHeapGlobals ^ v41 ^ *(_BYTE *)(v41 + 8));
        }
        else
        {
          v40 = 0;
        }
        v6 = v50;
        goto LABEL_64;
      }
      v40 = 0;
    }
    v41 = v10;
LABEL_64:
    a2 = (v41 - (unsigned int)(v40 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, a1 ^ *(_DWORD *)(a1 + 128), a2, 0, 0LL, 0LL);
    return 0LL;
  }
  else if ( ((v10 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)v10) & 0xFF000000000000LL) != 0 )
  {
    v11 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v10) ^ *(unsigned __int16 *)(v10 + 2)) - 16;
    *a5 = v11;
    v12 = 0LL;
    if ( (v9 & 4) != 0 && v11 < 0x1000 )
    {
      v38 = (_SLIST_HEADER *)(a1 + 64);
      if ( *(_WORD *)(a1 + 64) < 0x20u )
      {
        RtlpInterlockedPushEntrySList(v38, (PSLIST_ENTRY)(v10 + 16));
        return 1LL;
      }
      v12 = RtlpInterlockedFlushSList(v38);
    }
    v13 = (_QWORD *)(v10 + 16);
    *(_QWORD *)(v10 + 16) = v12;
    v14 = v6 & 1;
    v46 = 0LL;
    v47 = v14;
    v45 = 0LL;
    if ( (v6 & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), &v45);
    if ( v10 != -16 )
    {
      do
      {
        v15 = *(v13 - 2);
        v16 = (__int64)(v13 - 2);
        v17 = v13;
        v13 = (_QWORD *)*v13;
        v18 = v16;
        v19 = ((unsigned __int64)RtlpHpHeapGlobals ^ v16 ^ v15) >> 32;
        v20 = v19 & 0xFF0000;
        if ( (v19 & 0xFF0000) != 0 )
        {
          v21 = (unsigned __int8)(RtlpHpHeapGlobals ^ v16 ^ *((_BYTE *)v17 - 8));
        }
        else
        {
          if ( !(_WORD)v19 )
            goto LABEL_84;
          v18 = v16 - 16LL * (unsigned __int16)v19;
          v43 = ((unsigned __int64)RtlpHpHeapGlobals ^ v18 ^ *(_QWORD *)v18) >> 32;
          if ( (v43 & 0xFF0000) != 0 )
          {
            v21 = (unsigned __int8)(RtlpHpHeapGlobals ^ v18 ^ *(_BYTE *)(v18 + 8));
          }
          else
          {
            if ( !(_WORD)v43 )
            {
LABEL_84:
              v21 = 0;
              goto LABEL_14;
            }
            v18 -= 16LL * (unsigned __int16)v43;
            v21 = (unsigned __int8)(RtlpHpHeapGlobals ^ v18 ^ *(_BYTE *)(v18 + 8));
          }
        }
LABEL_14:
        v22 = (v18 - (unsigned int)(v21 << 12)) & 0xFFFFFFFFFFFFF000uLL;
        if ( (((unsigned __int16)(*(_WORD *)(v22 + 32) ^ *(_WORD *)(v22 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
        {
          RtlpLogHeapFailure(18, a1 ^ *(_DWORD *)(a1 + 128), v22, 0, 0LL, 0LL);
        }
        else if ( v20 )
        {
          v48 = 0;
          for ( i = 0; ; i = v28 )
          {
            v24 = RtlpHpVsChunkCoalesce(a1, v22, v16, &v48);
            v28 = v48;
            v16 = v24;
            if ( v48 == *(unsigned __int16 *)(v22 + 32) )
            {
              RtlpHpVsSubsegmentCleanup(a1, v22, v26, v27);
              if ( !v14 )
                RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), &v45);
              RtlpHpVsSubsegmentFree(a1, v22, v50);
              if ( !v14 )
                RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), &v45);
              goto LABEL_46;
            }
            if ( v48 <= i )
              break;
            LODWORD(v49) = 0;
            v44 = 0LL;
            RtlpHpVsChunkComputeCost(v24, v22, &v49, &v44);
            if ( !(_DWORD)v49 )
              break;
            v29 = v44;
            if ( !v44 )
              goto LABEL_26;
            v30 = v44 - ((v44 >> 1) & 0x5555555555555555LL);
            v25 = v30 & 0x3333333333333333LL;
            v31 = (0x101010101010101LL
                 * (((v30 & 0x3333333333333333LL)
                   + ((v30 >> 2) & 0x3333333333333333LL)
                   + (((v30 & 0x3333333333333333LL) + ((v30 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            if ( *(__int16 *)(v22 + 34) < 0 )
              goto LABEL_26;
            if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
            {
              v25 = *(_QWORD *)(a1 + 48) >> 7;
              if ( v25 <= 8 )
                v25 = 8LL;
              if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v31 <= v25 )
              {
LABEL_26:
                v14 = v47;
                break;
              }
            }
            v49 = 0x1000000000000LL;
            *(_BYTE *)(v16 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v16) ^ 1;
            *(_DWORD *)(v16 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v16 ^ ((unsigned int)(v16 - v22) >> 12)) | 0x200;
            if ( !v47 )
              RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), &v45);
            RtlpHpVsSubsegmentCommitPages(a1, v22, v29, v31, 0);
            v14 = v47;
            if ( !v47 )
              RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), &v45);
            *(_DWORD *)(v16 + 8) &= ~0x200u;
          }
          if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((v16 + 32) & 0xFFF) != 0 && RtlpHpVsChunkAlignSplit(v25, v22, v16) )
            RtlpHpVsFreeChunkInsert(a1, v22);
          v48 = 0;
          v49 = 0LL;
          v32 = RtlpHpVsChunkComputeCost(v16, v22, &v48, &v49);
          v33 = ((v49 - ((v49 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((v49 - ((v49 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
          *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL * ((v33 + (v33 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          *(_WORD *)v16 = RtlpHpHeapGlobals ^ v16 ^ (v48
                                                   + v32
                                                   - ((0x101010101010101LL * ((v33 + (v33 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
          v34 = *(_QWORD *)(a1 + 16);
          if ( (*(_QWORD *)(a1 + 24) & 1) != 0 && v34 )
            v34 ^= a1 + 16;
          v35 = 0;
          if ( v34 )
          {
            while ( 1 )
            {
              if ( ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v16 ^ *(_DWORD *)v16) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v34 - 8) ^ *(_DWORD *)(v34 - 8)) )
              {
                v36 = *(_QWORD *)v34;
                if ( (*(_QWORD *)(a1 + 24) & 1) != 0 )
                {
                  if ( !v36 )
                    goto LABEL_43;
                  v36 ^= v34;
                }
                if ( !v36 )
                {
LABEL_43:
                  v35 = 0;
                  break;
                }
              }
              else
              {
                v36 = *(_QWORD *)(v34 + 8);
                if ( (*(_QWORD *)(a1 + 24) & 1) != 0 )
                {
                  if ( !v36 )
                    goto LABEL_44;
                  v36 ^= v34;
                }
                if ( !v36 )
                {
LABEL_44:
                  v35 = 1;
                  break;
                }
              }
              v34 = v36;
            }
          }
          RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)v34, v35, (PRTL_BALANCED_NODE)(v16 + 8));
        }
        else
        {
          RtlpLogHeapFailure(8, a1 ^ *(_DWORD *)(a1 + 128), v16, 0, 0LL, 0LL);
        }
LABEL_46:
        ;
      }
      while ( v13 );
    }
    if ( !v14 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), &v45);
    return 1LL;
  }
  else
  {
    RtlpLogHeapFailure(8, a1 ^ *(_DWORD *)(a1 + 128), a3, v10, 0LL, 0LL);
    return 0LL;
  }
}
