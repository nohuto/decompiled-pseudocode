/*
 * XREFs of RtlpHpVsContextFree @ 0x180028500
 * Callers:
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegFree @ 0x1800279F0 (RtlpHpSegFree.c)
 * Callees:
 *     RtlpHpVsSubsegmentFree @ 0x180004520 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180004568 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x180027DC0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002A0A0 (RtlRbRemoveNode.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180066308 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsFreeChunkRemove @ 0x180066448 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsChunkComputeCost @ 0x1800664B4 (RtlpHpVsChunkComputeCost.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18006EA58 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A1210 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A1250 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkAlignSplit @ 0x18010F860 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsContextFree(
        PRTL_SRWLOCK SRWLock,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  char v6; // di
  __int64 v8; // r15
  __int64 Value_low; // rdx
  __int64 v10; // rbx
  __int64 v11; // r9
  unsigned int v12; // ecx
  __int64 v13; // rax
  int v14; // esi
  _QWORD *v15; // r12
  _RTL_SRWLOCK *v16; // rbx
  __int64 v17; // rcx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r9
  _QWORD *v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // r12
  int v24; // edx
  int v25; // r8d
  unsigned __int64 v26; // r12
  unsigned int v27; // r13d
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rbx
  unsigned int v30; // edi
  __int64 v31; // rsi
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r15
  __int64 v34; // rsi
  int v35; // eax
  int v36; // ecx
  unsigned __int16 v37; // dx
  unsigned __int64 v38; // r8
  unsigned int v39; // r8d
  __int64 v40; // r9
  unsigned __int64 v41; // r11
  unsigned int v42; // r8d
  unsigned int v43; // r9d
  __int16 v44; // r11
  unsigned int v45; // r10d
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  BOOLEAN v49; // al
  unsigned __int64 v50; // rax
  unsigned int v52; // edx
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rsi
  int v56; // ecx
  int v57; // ecx
  __int64 v58; // r8
  int v59; // r11d
  __int64 v60; // rcx
  unsigned __int64 v61; // r9
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // r8
  __int64 v64; // rsi
  __int64 v65; // rax
  _RTL_SRWLOCK *SRWLocka; // [rsp+30h] [rbp-41h]
  __int64 v67; // [rsp+38h] [rbp-39h]
  __int64 v68; // [rsp+40h] [rbp-31h]
  int v69; // [rsp+48h] [rbp-29h]
  __int64 v70; // [rsp+50h] [rbp-21h]
  __int64 v71; // [rsp+58h] [rbp-19h]
  _RTL_SRWLOCK *v72; // [rsp+60h] [rbp-11h]
  _QWORD *v73; // [rsp+68h] [rbp-9h]
  char v74[24]; // [rsp+70h] [rbp-1h] BYREF
  int v76; // [rsp+D8h] [rbp+67h]
  int v77; // [rsp+E0h] [rbp+6Fh] BYREF
  unsigned int v78; // [rsp+E8h] [rbp+77h]

  v78 = a4;
  v6 = a4;
  v8 = (__int64)SRWLock;
  Value_low = LODWORD(SRWLock[22].Value);
  v10 = a3 - 16;
  if ( (Value_low & 1) != 0 && (a3 & 0xFFF) == 0 )
    v10 = a3 - 32;
  v11 = RtlpHpHeapGlobals;
  if ( !a2 )
  {
    v56 = DWORD1(RtlpHpHeapGlobals) ^ HIDWORD(v10) ^ HIDWORD(*(_QWORD *)v10);
    if ( (v56 & 0xFF0000) != 0 )
    {
      v57 = (unsigned __int8)(RtlpHpHeapGlobals ^ v10 ^ *(_BYTE *)(v10 + 8));
    }
    else
    {
      if ( (_WORD)v56 )
      {
        v58 = v10 - 16LL * (unsigned __int16)((v10 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)v10) >> 32);
        v59 = DWORD1(RtlpHpHeapGlobals) ^ HIDWORD(v58) ^ HIDWORD(*(_QWORD *)v58);
        if ( (v59 & 0xFF0000) != 0 )
        {
          v57 = (unsigned __int8)(RtlpHpHeapGlobals ^ v58 ^ *(_BYTE *)(v58 + 8));
        }
        else if ( (_WORD)v59 )
        {
          v58 -= 16LL * (unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ v58 ^ *(_QWORD *)v58) >> 32);
          v57 = (unsigned __int8)(RtlpHpHeapGlobals ^ v58 ^ *(_BYTE *)(v58 + 8));
        }
        else
        {
          v57 = 0;
        }
        goto LABEL_87;
      }
      v57 = 0;
    }
    v58 = v10;
LABEL_87:
    v6 = v78;
    a2 = (v58 - (unsigned int)(v57 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, v8 ^ *(_DWORD *)(v8 + 128), a2, 0, 0LL, 0LL);
    return 0LL;
  }
  else
  {
    if ( ((v10 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)v10) & 0xFF000000000000LL) != 0 )
    {
      v12 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v10) ^ *(unsigned __int16 *)(v10 + 2)) - 16;
      *a5 = v12;
      v13 = 0LL;
      if ( (Value_low & 4) != 0 && v12 < 0x1000 )
      {
        v60 = v8 + 64;
        if ( *(_WORD *)(v8 + 64) < 0x20u )
        {
          RtlpInterlockedPushEntrySList(v60, v10 + 16, a2, v11);
          return 1LL;
        }
        v13 = RtlpInterlockedFlushSList(v60, Value_low);
      }
      v14 = v6 & 1;
      v15 = (_QWORD *)(v10 + 16);
      v76 = v14;
      *(_QWORD *)(v10 + 16) = v13;
      if ( (v6 & 1) != 0 )
      {
        v16 = SRWLock;
        SRWLocka = SRWLock;
      }
      else
      {
        v16 = (_RTL_SRWLOCK *)v8;
        SRWLocka = (_RTL_SRWLOCK *)v8;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v8);
      }
      if ( !v15 )
      {
LABEL_46:
        if ( !v14 )
          RtlReleaseSRWLockExclusive(v16);
        return 1LL;
      }
      while ( 1 )
      {
        v17 = RtlpHpHeapGlobals;
        v18 = (unsigned __int64)(v15 - 2);
        v19 = *(v15 - 2);
        v20 = v15;
        v73 = (_QWORD *)*v15;
        v21 = ((unsigned __int64)RtlpHpHeapGlobals ^ (unsigned __int64)(v15 - 2) ^ v19) >> 32;
        v22 = RtlpHpHeapGlobals ^ (unsigned __int64)(v15 - 2);
        v23 = (unsigned __int64)(v15 - 2);
        v24 = v21 & 0xFF0000;
        if ( v24 )
        {
          v25 = (unsigned __int8)(RtlpHpHeapGlobals ^ v18 ^ *((_BYTE *)v20 - 8));
        }
        else
        {
          v61 = (v22 ^ v19) >> 32;
          if ( !(_WORD)v61 )
            goto LABEL_99;
          v23 -= 16LL * (unsigned __int16)v61;
          if ( (((unsigned __int64)RtlpHpHeapGlobals ^ v23 ^ *(_QWORD *)v23) & 0xFF000000000000LL) != 0 )
          {
            v25 = (unsigned __int8)(RtlpHpHeapGlobals ^ v23 ^ *(_BYTE *)(v23 + 8));
          }
          else
          {
            v62 = (*(_QWORD *)v23 ^ (unsigned __int64)RtlpHpHeapGlobals ^ v23) >> 32;
            if ( !(_WORD)v62 )
            {
LABEL_99:
              v25 = 0;
              goto LABEL_11;
            }
            v23 -= 16LL * (unsigned __int16)v62;
            v25 = (unsigned __int8)(RtlpHpHeapGlobals ^ v23 ^ *(_BYTE *)(v23 + 8));
          }
        }
LABEL_11:
        v26 = (v23 - (unsigned int)(v25 << 12)) & 0xFFFFFFFFFFFFF000uLL;
        if ( (((unsigned __int16)(*(_WORD *)(v26 + 32) ^ *(_WORD *)(v26 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
        {
          RtlpLogHeapFailure(18, v8 ^ *(_DWORD *)(v8 + 128), v26, 0, 0LL, 0LL);
        }
        else if ( v24 )
        {
          v27 = 0;
          while ( 1 )
          {
            v28 = v26 + 48;
            HIDWORD(v68) &= 0xFF00FFFF;
            v72 = v16;
            v29 = v17 ^ v18 ^ *(_QWORD *)v18;
            v30 = ((unsigned int)v17 ^ (unsigned int)v18 ^ *(_DWORD *)v18) >> 16;
            v68 ^= v17 ^ v18;
            *(_BYTE *)(v18 + 6) = BYTE6(v68);
            if ( WORD2(v29) )
            {
              v31 = RtlpHpHeapGlobals ^ (v18 - 16LL * WORD2(v29)) ^ *(_QWORD *)(v18 - 16LL * WORD2(v29));
              if ( (v31 & 0xFF000000000000LL) == 0 )
              {
                RtlpHpVsFreeChunkRemove(SRWLock, v26, v18 - 16LL * WORD2(v29));
                v28 = v26 + 48;
                v30 += WORD1(v31);
                v18 -= 16LL * WORD2(v29);
              }
            }
            v32 = *(unsigned __int16 *)(v26 + 32);
            v33 = v18 + 16LL * v30;
            if ( v33 >= v28 + 16 * v32
              || (v34 = RtlpHpHeapGlobals ^ *(_QWORD *)v33 ^ v33, (v34 & 0xFF000000000000LL) != 0) )
            {
              v8 = (__int64)SRWLock;
            }
            else
            {
              RtlRbRemoveNode((PRTL_RB_TREE)&SRWLock[2], (PRTL_BALANCED_NODE)(v33 + 8));
              v35 = RtlpHpVsChunkComputeCost(v18 + 16LL * v30, v26, &v77, v74);
              v28 = v26 + 48;
              v36 = (unsigned __int16)(RtlpHpHeapGlobals ^ *(_WORD *)v33 ^ v33);
              v8 = (__int64)SRWLock;
              SRWLock[7].Value -= (unsigned int)(v77 - v36 + v35);
              v32 = *(unsigned __int16 *)(v26 + 32);
              v30 += WORD1(v34);
            }
            v37 = v32;
            if ( (*(_BYTE *)(v8 + 176) & 1) != 0 )
            {
              v63 = v18 + 16LL * v30;
              if ( v63 < v28 + 16LL * (unsigned __int16)v32 )
              {
                v64 = RtlpHpHeapGlobals ^ v63 ^ *(_QWORD *)v63;
                if ( (v64 & 0xFF000000000000LL) == 0 )
                {
                  RtlpHpVsFreeChunkRemove(v8, v26, v63);
                  v37 = *(_WORD *)(v26 + 32);
                  v28 = v26 + 48;
                  v30 += WORD1(v64);
                }
              }
            }
            if ( WORD1(v29) != v30 )
            {
              v32 = (v30 << 16) | (unsigned __int16)v69;
              v38 = v18 + 16LL * v30;
              v69 = RtlpHpHeapGlobals ^ v18 ^ ((v30 << 16) | (unsigned __int16)v69);
              *(_WORD *)(v18 + 2) = HIWORD(v69);
              v37 = *(_WORD *)(v26 + 32);
              if ( v38 < v28 + 16LL * v37 )
              {
                v32 = (unsigned int)(unsigned __int16)(v30 ^ WORD2(v70)) ^ HIDWORD(v70);
                HIDWORD(v70) ^= (unsigned __int16)(v30 ^ WORD2(v70));
                v70 ^= RtlpHpHeapGlobals ^ v38;
                *(_WORD *)(v38 + 4) = WORD2(v70);
                v37 = *(_WORD *)(v26 + 32);
              }
            }
            if ( v30 == v37 )
            {
              RtlpHpVsSubsegmentCleanup(v8, v26);
              v14 = v76;
              if ( !v76 )
                RtlReleaseSRWLockExclusive(SRWLocka);
              RtlpHpVsSubsegmentFree(v8, v26, v78);
              v16 = 0LL;
              if ( v76 )
                v16 = v72;
              SRWLocka = v16;
              if ( !v76 )
              {
                v16 = (_RTL_SRWLOCK *)v8;
                SRWLocka = (_RTL_SRWLOCK *)v8;
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v8);
              }
              goto LABEL_45;
            }
            if ( v30 <= v27 )
              break;
            v28 = ((_DWORD)v18 - (_DWORD)v26 + 4127) & 0xFFFFF000;
            v39 = (v18 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v18) ^ *(unsigned __int16 *)(v18 + 2)) - v26) & 0xFFFFF000;
            if ( (unsigned int)v28 >= v39 )
              break;
            v52 = v39 - v28;
            v28 = (unsigned int)v28 >> 12;
            v32 = (unsigned __int8)v28;
            v53 = *(_QWORD *)(v26 + 16) & (-1LL << v28) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                   - (unsigned __int8)((unsigned __int64)(v39 - 1) >> 12)));
            if ( v52 < 0x1000 )
              break;
            if ( !v53 )
              break;
            v54 = v53 - ((v53 >> 1) & 0x5555555555555555LL);
            v32 = v54 & 0x3333333333333333LL;
            v55 = (0x101010101010101LL
                 * (((v54 & 0x3333333333333333LL)
                   + ((v54 >> 2) & 0x3333333333333333LL)
                   + (((v54 & 0x3333333333333333LL) + ((v54 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            if ( *(__int16 *)(v26 + 34) < 0 )
              break;
            if ( (*(_BYTE *)(v8 + 176) & 2) == 0 )
            {
              v32 = *(_QWORD *)(v8 + 48) >> 7;
              if ( v32 <= 8 )
                v32 = 8LL;
              if ( *(_QWORD *)(v8 + 56) + (unsigned __int64)(unsigned int)v55 <= v32 )
                break;
            }
            HIDWORD(v71) = HIDWORD(v71) & 0xFF00FFFF | 0x10000;
            v71 ^= RtlpHpHeapGlobals ^ v18;
            *(_BYTE *)(v18 + 6) = BYTE6(v71);
            *(_DWORD *)(v18 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v18 ^ ((unsigned int)(v18 - v26) >> 12)) | 0x200;
            if ( !v76 )
              RtlReleaseSRWLockExclusive(SRWLocka);
            RtlpHpVsSubsegmentCommitPages(v8, v26, v53, v55, 0);
            v16 = 0LL;
            if ( v76 )
              v16 = v72;
            SRWLocka = v16;
            if ( !v76 )
            {
              v16 = (_RTL_SRWLOCK *)v8;
              SRWLocka = (_RTL_SRWLOCK *)v8;
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v8);
            }
            *(_DWORD *)(v18 + 8) &= ~0x200u;
            v27 = v30;
            v17 = RtlpHpHeapGlobals;
          }
          if ( (*(_BYTE *)(v8 + 176) & 1) != 0 && ((v18 + 32) & 0xFFF) != 0 )
          {
            v65 = RtlpHpVsChunkAlignSplit(v32, v26, v18, v28);
            if ( v65 )
              RtlpHpVsFreeChunkInsert(v8, v26, v65);
          }
          v40 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v18) ^ *(unsigned __int16 *)(v18 + 2));
          v41 = v40 + (v18 & 0xFFF) + 4095;
          v42 = (v18 - v26 + 4127) & 0xFFFFF000;
          v43 = (v18 + v40 - v26) & 0xFFFFF000;
          v44 = (v41 >> 12)
              - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v18) ^ *(unsigned __int16 *)(v18 + 2)))
                + 4095) >> 12);
          if ( v42 < v43 )
          {
            v45 = v43 - v42;
            v46 = *(_QWORD *)(v26 + 16) & (-1LL << (v42 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                           - (unsigned __int8)((unsigned __int64)(v43 - 1) >> 12)));
          }
          else
          {
            v45 = 0;
            v46 = 0LL;
          }
          *(_QWORD *)(v8 + 56) += (unsigned int)((0x101010101010101LL
                                                * ((((v46 - ((v46 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                  + (((v46 - ((v46 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                  + ((((v46 - ((v46 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((v46 - ((v46 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          LODWORD(v67) = (unsigned __int16)(v67 ^ (v44
                                                 + (v45 >> 12)
                                                 - ((unsigned int)((0x101010101010101LL
                                                                  * ((((v46 - ((v46 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                                    + (((v46 - ((v46 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                                    + ((((v46 - ((v46 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                                      + (((v46 - ((v46 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24))) ^ (unsigned int)v67;
          v47 = RtlpHpHeapGlobals ^ v18 ^ v67;
          *(_WORD *)v18 = v47;
          v48 = *(_QWORD *)(v8 + 16);
          v67 = v47;
          if ( (*(_QWORD *)(v8 + 24) & 1) != 0 && v48 )
            v48 ^= v8 + 16;
          v49 = 0;
          if ( v48 )
          {
            while ( 1 )
            {
              if ( ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v18 ^ *(_DWORD *)v18) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v48 - 8) ^ *(_DWORD *)(v48 - 8)) )
              {
                v50 = *(_QWORD *)v48;
                if ( (*(_QWORD *)(v8 + 24) & 1) != 0 )
                {
                  if ( !v50 )
                    goto LABEL_42;
                  v50 ^= v48;
                }
                if ( !v50 )
                {
LABEL_42:
                  v49 = 0;
                  break;
                }
              }
              else
              {
                v50 = *(_QWORD *)(v48 + 8);
                if ( (*(_QWORD *)(v8 + 24) & 1) != 0 )
                {
                  if ( !v50 )
                    goto LABEL_43;
                  v50 ^= v48;
                }
                if ( !v50 )
                {
LABEL_43:
                  v49 = 1;
                  break;
                }
              }
              v48 = v50;
            }
          }
          RtlRbInsertNodeEx((PRTL_RB_TREE)(v8 + 16), (PRTL_BALANCED_NODE)v48, v49, (PRTL_BALANCED_NODE)(v18 + 8));
          v16 = SRWLocka;
          v14 = v76;
        }
        else
        {
          RtlpLogHeapFailure(8, v8 ^ *(_DWORD *)(v8 + 128), v18, 0, 0LL, 0LL);
        }
LABEL_45:
        v15 = v73;
        if ( !v73 )
          goto LABEL_46;
      }
    }
    RtlpLogHeapFailure(8, v8 ^ *(_DWORD *)(v8 + 128), a3, v10, 0LL, 0LL);
    return 0LL;
  }
}
