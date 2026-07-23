/*
 * XREFs of RtlpHpVsContextAllocateInternal @ 0x180028CD0
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x180007230 (RtlpHpVsContextAllocate.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x180029280 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180064E18 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCreate @ 0x180071268 (RtlpHpVsSubsegmentCreate.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkAlignSplit @ 0x18010FA00 (RtlpHpVsChunkAlignSplit.c)
 */

char *__fastcall RtlpHpVsContextAllocateInternal(
        PRTL_SRWLOCK SRWLock,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned int v6; // eax
  unsigned int v9; // r14d
  unsigned int v10; // edi
  char *v11; // rsi
  unsigned __int64 v12; // r15
  unsigned __int64 Value; // rax
  unsigned __int64 v14; // rbx
  _QWORD *v15; // r9
  int v16; // r8d
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // rcx
  int v21; // r9d
  int v22; // edx
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // r8
  int v27; // r9d
  __int16 v28; // ax
  __int16 v29; // cx
  __int64 v31; // rbx
  __int64 v32; // r9
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v37; // [rsp+80h] [rbp+18h]

  v6 = a3 + 2;
  if ( a2 == a3 )
    v6 = a3;
  v37 = v6;
  v9 = ((v6 + 15) >> 4) + 1;
  if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 )
    v9 = ((v6 + 15) >> 4) + 2;
  v10 = v9 << 16;
  v11 = 0LL;
  if ( !*a6 )
  {
    *a6 = 1;
    if ( (a4 & 1) == 0 )
    {
      *(_QWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive(SRWLock);
    }
  }
  v12 = (unsigned __int64)&SRWLock[2];
  while ( 1 )
  {
    Value = SRWLock[3].Value;
    v14 = *(_QWORD *)v12;
    if ( (Value & 1) != 0 )
    {
      if ( v14 )
        v14 ^= v12;
      else
        v14 = 0LL;
    }
    v15 = 0LL;
    v16 = Value & 1;
    while ( v14 )
    {
      v17 = *(_DWORD *)(v14 - 8) ^ RtlpHpHeapGlobals ^ (v14 - 8);
      if ( v10 < v17 )
      {
        v18 = *(_QWORD *)v14;
        v15 = (_QWORD *)v14;
        if ( v16 && v18 )
          goto LABEL_38;
      }
      else
      {
        if ( v10 <= v17 )
          goto LABEL_20;
        v18 = *(_QWORD *)(v14 + 8);
        if ( v16 && v18 )
        {
LABEL_38:
          v14 ^= v18;
          continue;
        }
      }
      v14 = v18;
    }
    v14 = (unsigned __int64)v15;
LABEL_20:
    if ( v14 )
      break;
    if ( (a4 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    *a6 = 0;
    v31 = RtlpHpVsSubsegmentCreate(SRWLock, v37, a4, v15);
    if ( !v31 )
      return 0LL;
    *a6 = 1;
    if ( (a4 & 1) == 0 )
    {
      *(_QWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive(SRWLock);
    }
    v33 = (unsigned __int64)&SRWLock[4] ^ SRWLock[5].Value;
    if ( (PRTL_SRWLOCK)(v33 ^ *(_QWORD *)v33) != &SRWLock[4] )
      __fastfail(3u);
    v34 = v31 ^ (unsigned __int64)&SRWLock[4];
    *(_QWORD *)v31 = v34;
    *(_QWORD *)(v31 + 8) = v31 ^ v33;
    *(_QWORD *)v33 = v31 ^ v33;
    SRWLock[5].Value = v34;
    if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 && ((v31 + 80) & 0xFFF) != 0 )
    {
      v35 = RtlpHpVsChunkAlignSplit(v34, v31, v31 + 48, v32);
      if ( v35 )
        RtlpHpVsFreeChunkInsert(SRWLock, v31, v35);
    }
    RtlpHpVsFreeChunkInsert(SRWLock, v31, v31 + 48);
    v11 = 0LL;
  }
  v19 = *(_QWORD *)(v14 - 8);
  v20 = v14 - 8;
  if ( ((HIDWORD(v19) ^ DWORD1(RtlpHpHeapGlobals) ^ ((v14 - 8) >> 32)) & 0xFF0000) != 0 )
  {
    v22 = (unsigned __int8)(*(_BYTE *)v14 ^ RtlpHpHeapGlobals ^ (v14 - 8));
  }
  else
  {
    if ( !(WORD2(v19) ^ (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ ((v14 - 8) >> 32))) )
      goto LABEL_43;
    v20 = v14 - 8 - 16LL * (unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ v19 ^ (v14 - 8)) >> 32);
    v21 = DWORD1(RtlpHpHeapGlobals) ^ HIDWORD(v20) ^ HIDWORD(*(_QWORD *)v20);
    if ( (v21 & 0xFF0000) != 0 )
    {
      v22 = (unsigned __int8)(RtlpHpHeapGlobals ^ v20 ^ *(_BYTE *)(v20 + 8));
      goto LABEL_25;
    }
    if ( (_WORD)v21 )
    {
      v20 -= 16LL * (unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ v20 ^ *(_QWORD *)v20) >> 32);
      v22 = (unsigned __int8)(RtlpHpHeapGlobals ^ v20 ^ *(_BYTE *)(v20 + 8));
    }
    else
    {
LABEL_43:
      v22 = 0;
    }
  }
LABEL_25:
  v23 = (v20 - (unsigned int)(v22 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v23 + 32) ^ *(_WORD *)(v23 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, (unsigned int)SRWLock ^ SRWLock[16].Value, v23, v14 - 8, 0LL, 0LL);
  }
  else if ( (unsigned int)RtlpHpVsChunkSplit(SRWLock, a4, a5) )
  {
    v11 = (char *)(v14 + 8);
    v24 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)(v14 - 8) >> 16) ^ *(unsigned __int16 *)(v14 - 6)) - 16;
    if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 && ((v14 + 24) & 0xFFF) == 0 )
    {
      v11 = (char *)(v14 + 24);
      v24 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)(v14 - 8) >> 16) ^ *(unsigned __int16 *)(v14 - 6)) - 32;
    }
    v25 = *(_DWORD *)v14;
    if ( a2 >= (unsigned int)v24 )
    {
      *(_DWORD *)v14 = v25 & 0xFFFFFEFF;
    }
    else
    {
      v26 = (unsigned int)v24;
      v27 = v24 - a2;
      *(_DWORD *)v14 = v25 | 0x100;
      v11[v24 - 1] = 0;
      v28 = *(_WORD *)&v11[v24 - 2];
      v29 = v28 ^ ((v24 - a2) ^ v28) & 0x1FFF;
      if ( v27 == 1 )
        v29 = v28 | 0x8000;
      *(_WORD *)&v11[v26 - 2] = v29;
    }
    if ( (a4 & 2) != 0 )
    {
      if ( (a4 & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
        *(_QWORD *)(a5 + 8) = 0LL;
      }
      *a6 = 0;
      memset(v11, 0, a2);
    }
  }
  return v11;
}
