/*
 * XREFs of RtlpHpSegAlloc @ 0x180029B70
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1800076C4 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegLfhAllocate @ 0x180029AC0 (RtlpHpSegLfhAllocate.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 *     RtlpHpSegSubAllocate @ 0x180077458 (RtlpHpSegSubAllocate.c)
 * Callees:
 *     RtlpHpSegSegmentAllocate @ 0x180006258 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x180006874 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800069A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegHeapAddSegment @ 0x1800071E4 (RtlpHpSegHeapAddSegment.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWakeSRWLock @ 0x180015200 (RtlpWakeSRWLock.c)
 *     RtlpHpSegPageRangeCommit @ 0x180023180 (RtlpHpSegPageRangeCommit.c)
 *     RtlRbInsertNodeEx @ 0x180027DC0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002A0A0 (RtlRbRemoveNode.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     RtlpHpTlLogMemStats @ 0x18010B300 (RtlpHpTlLogMemStats.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x18010EA88 (RtlpHpSegLargeRangeAllocate.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x18010F0DC (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

void *__fastcall RtlpHpSegAlloc(__int64 a1, size_t a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // r8
  int v7; // edx
  int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // r13d
  unsigned int v11; // edi
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rdx
  int v16; // ecx
  unsigned __int16 v17; // ax
  int v18; // ecx
  int v19; // ecx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int16 v22; // dx
  unsigned __int64 v23; // r8
  __int16 v24; // cx
  char v25; // dl
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rax
  BOOLEAN v29; // cl
  __int64 v30; // rcx
  unsigned int v31; // edi
  volatile signed __int64 *v32; // rcx
  signed __int64 v33; // rax
  int v34; // edi
  int v35; // esi
  void *v36; // rbx
  char *v38; // rcx
  char v39; // al
  unsigned int v40; // eax
  int v41; // r8d
  __int64 v42; // rax
  unsigned __int64 v43; // rdi
  __int64 v44; // rdx
  signed __int64 v45; // r8
  signed __int64 v46; // rdx
  signed __int64 v47; // rtt
  int v48; // eax
  unsigned __int64 v49; // [rsp+30h] [rbp-48h]
  int v51; // [rsp+98h] [rbp+20h]

  v5 = (unsigned __int64)(a3 + 4095) >> 12;
  v49 = (unsigned __int64)(a4 + 4095) >> 12;
  v7 = v5 + 1;
  if ( (a5 & 4) == 0 )
    v7 = v5;
  v51 = v7;
  v8 = a5 & 0x800000;
  if ( (a5 & 0x800000) == 0 || (unsigned int)-*(_DWORD *)a1 <= 0x200000 )
  {
    v9 = 1;
    v10 = (unsigned int)(v7 + (1 << *(_BYTE *)(a1 + 9)) - 1) >> *(_BYTE *)(a1 + 9);
    v11 = v10 << 24;
    if ( (a5 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v12 = *(_QWORD *)(a1 + 104);
    v13 = a1 + 96;
    v14 = *(_QWORD *)(a1 + 96);
    v15 = 0LL;
    if ( (v12 & 1) != 0 )
    {
      if ( v14 )
        v14 ^= v13;
      else
        v14 = 0LL;
    }
    v16 = v12 & 1;
    while ( v14 )
    {
      if ( v11 < *(_DWORD *)(v14 + 28) )
      {
        v28 = *(_QWORD *)v14;
        v15 = v14;
        if ( v16 && v28 )
        {
          v14 ^= v28;
          continue;
        }
      }
      else
      {
        if ( v11 <= *(_DWORD *)(v14 + 28) )
          goto LABEL_13;
        v28 = *(_QWORD *)(v14 + 8);
        if ( v16 && v28 )
        {
          v14 ^= v28;
          continue;
        }
      }
      v14 = v28;
    }
    v14 = v15;
LABEL_13:
    if ( !v14 )
      goto LABEL_67;
    if ( v8 )
    {
      v14 = RtlpHpSegLargeRangeAllocate(a1, v14, v10, 1LL);
    }
    else
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v14);
      *(_OWORD *)v14 = 0LL;
      *(_QWORD *)(v14 + 16) = 0LL;
      v17 = ~(unsigned __int16)*(_DWORD *)(v14 + 28);
      *(_DWORD *)v14 = -857879331;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v17);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    }
    if ( !v14 )
    {
LABEL_67:
      if ( (a5 & 1) == 0 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
      v36 = 0LL;
      v41 = 0;
      if ( v8 )
        v41 = 2;
      v42 = RtlpHpSegSegmentAllocate(a1, 0, v41);
      v43 = v42;
      if ( !v42 )
        return v36;
      RtlpHpSegSegmentInitialize((_BYTE *)a1, v42, 0);
      v14 = v43 + 32LL * *(unsigned __int8 *)(a1 + 10);
      if ( (a5 & 1) == 0 )
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
      RtlpHpSegHeapAddSegment(a1, v43);
      if ( v8 )
        v14 = RtlpHpSegLargeRangeAllocate(a1, v14, v10, 0LL);
    }
    v18 = *(unsigned __int8 *)(v14 + 31);
    if ( v18 != v10 )
    {
      v19 = v18 - v10;
      v20 = v14 + 32LL * v10;
      *(_BYTE *)(v20 + 24) |= 2u;
      v21 = v20;
      *(_BYTE *)(32LL * (unsigned int)(v19 - 1) + v20 + 31) = v19 - 1;
      v22 = 0;
      *(_BYTE *)(v20 + 31) = v19;
      v23 = v20 + 32LL * (unsigned __int8)v19;
      if ( v20 < v23 )
      {
        do
        {
          v24 = *(unsigned __int8 *)(v21 + 25);
          v21 += 32LL;
          v22 += v24;
        }
        while ( v21 < v23 );
      }
      *(_DWORD *)v20 = -857879331;
      *(_WORD *)(v20 + 28) = ~v22;
      *(_BYTE *)(32LL * (v10 - 1) + v14 + 31) = v10 - 1;
      *(_BYTE *)(v14 + 31) = v10;
      *(_WORD *)(v14 + 28) = ~(*(_WORD *)(v20 + 28) - *(_WORD *)(v14 + 28));
      v25 = *(_BYTE *)(a1 + 13);
      if ( (v25 & 0x10) != 0 && *(unsigned __int8 *)(v20 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
      {
        *(_DWORD *)v20 = -857879297;
      }
      else
      {
        if ( (v25 & 7) != 0 )
          v26 = RtlpHpSegPageRangeComputeLargePageCost(
                  a1,
                  (v20 & *(_QWORD *)a1) + ((__int64)(v20 - (v20 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)),
                  *(unsigned __int8 *)(v20 + 31) << *(_BYTE *)(a1 + 8));
        else
          v26 = 4;
        *(_BYTE *)(v20 + 30) = v26;
        v27 = *(_QWORD *)v13;
        if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
        {
          if ( v27 )
            v27 ^= v13;
          else
            v27 = 0LL;
        }
        v29 = 0;
        if ( v27 )
        {
          while ( 1 )
          {
            if ( *(_DWORD *)(v20 + 28) < *(_DWORD *)(v27 + 28) )
            {
              v30 = *(_QWORD *)v27;
              if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
              {
                if ( !v30 )
                  goto LABEL_48;
                v30 ^= v27;
              }
              if ( !v30 )
              {
LABEL_48:
                v29 = 0;
                break;
              }
            }
            else
            {
              v30 = *(_QWORD *)(v27 + 8);
              if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
              {
                if ( !v30 )
                  goto LABEL_49;
                v30 ^= v27;
              }
              if ( !v30 )
              {
LABEL_49:
                v29 = 1;
                break;
              }
            }
            v27 = v30;
          }
        }
        RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v27, v29, (PRTL_BALANCED_NODE)(v14 + 32LL * v10));
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
          (unsigned __int16)~*(_WORD *)(v20 + 28));
        if ( (RtlpHpHeapFeatures & 8) != 0 )
          RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
      }
    }
    v31 = v10 - 1;
    *(_BYTE *)(v14 + 24) |= HIBYTE(a5) & 0xC | 1;
    *(_BYTE *)(32LL * (v10 - 1) + v14 + 24) |= 1u;
    if ( (a5 & 1) == 0 )
    {
      v32 = (volatile signed __int64 *)(a1 + 64);
      v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), 0LL, 1LL);
      if ( v33 != 1 )
      {
        do
        {
          v44 = 3LL;
          v45 = v33 & 6;
          if ( v45 != 2 )
            v44 = -1LL;
          v46 = v33 + v44;
          v47 = v33;
          v33 = _InterlockedCompareExchange64(v32, v46, v33);
        }
        while ( v47 != v33 );
        if ( v45 == 2 )
          RtlpWakeSRWLock(v32, v46, 0);
      }
    }
    if ( v31 > 1 )
    {
      v38 = (char *)(v14 + 56);
      do
      {
        v38[7] = v9++;
        v39 = *v38;
        v38 += 32;
        *(v38 - 32) = v39 | 1;
      }
      while ( v9 < v31 );
    }
    v34 = *(unsigned __int8 *)(v14 + 31);
    v35 = (unsigned __int16)~*(_WORD *)(v14 + 28);
    if ( (_DWORD)v49 )
    {
      v40 = a5 & 0xFFFFFFFD;
      if ( *(_WORD *)(v14 + 28) == 0xFFFF )
        v40 = a5;
      if ( (int)RtlpHpSegPageRangeCommit(a1, v14, 0, v49, v40, 0LL) < 0 )
      {
        RtlpHpSegPageRangeShrink(a1, v14, 0, a5);
        return 0LL;
      }
    }
    if ( (a5 & 4) != 0 )
      RtlpHpSegPageRangeCommit(a1, v14, v51 - 1, v51 - (v34 << *(_BYTE *)(a1 + 9)) - 1, 0, 0LL);
    *(_DWORD *)(v14 + 4) = (v34 << *(_BYTE *)(a1 + 8)) - a2;
    v36 = (void *)((v14 & *(_QWORD *)a1) + ((v14 - (v14 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)));
    if ( (a5 & 2) != 0 )
    {
      if ( v35
        || BYTE1(*(_QWORD *)(a1 + 40)) >= 2u
        || (*(_BYTE *)(a1 + 13) & 7) != 0
        && (v48 = RtlpHpSegPageRangeComputeLargePageCost(a1, v36, (unsigned int)a2), v48 <= 2) )
      {
        memset(v36, 0, a2);
      }
    }
    return v36;
  }
  return 0LL;
}
