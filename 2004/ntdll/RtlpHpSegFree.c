/*
 * XREFs of RtlpHpSegFree @ 0x1800279F0
 * Callers:
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegLfhVsFree @ 0x1800279D0 (RtlpHpSegLfhVsFree.c)
 * Callees:
 *     RtlpHpSegSegmentFree @ 0x180004B70 (RtlpHpSegSegmentFree.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x180007294 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpWakeSRWLock @ 0x180015200 (RtlpWakeSRWLock.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180024FE0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlRbInsertNodeEx @ 0x180027DC0 (RtlRbInsertNodeEx.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800281F0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsContextFree @ 0x180028500 (RtlpHpVsContextFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpLogHeapFreeEvent @ 0x180109F18 (RtlpLogHeapFreeEvent.c)
 *     RtlpHpTlLogMemStats @ 0x18010B300 (RtlpHpTlLogMemStats.c)
 *     RtlpLogHeapFailure @ 0x18010DE0C (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010EA18 (RtlpHpSegGetDescriptorValidateSafe.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x18010F0DC (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

__int64 __fastcall RtlpHpSegFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v3; // r12d
  unsigned __int64 v7; // r9
  __int64 DescriptorValidateSafe; // rbx
  char v9; // dl
  unsigned int v10; // ebp
  unsigned __int8 v11; // dl
  char v12; // cl
  __int64 v13; // rax
  int v14; // r15d
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r9
  char v18; // dl
  __int64 v19; // r14
  char v20; // al
  __int64 v21; // rdx
  BOOLEAN v22; // cl
  __int64 v23; // rcx
  _QWORD *v24; // rbx
  volatile signed __int64 *v25; // rcx
  signed __int64 v26; // rax
  _DWORD *v27; // rcx
  __int64 v28; // rcx
  __int64 v30; // r9
  _DWORD *SharedData; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  char v34; // dl
  char *v35; // rcx
  __int64 v36; // rdx
  char v37; // al
  __int64 v38; // rcx
  __int64 v39; // rdx
  signed __int64 v40; // r8
  signed __int64 v41; // rdx
  signed __int64 v42; // rtt
  __int64 v43; // rax
  _QWORD *v44; // rcx
  unsigned int v45; // [rsp+30h] [rbp-38h] BYREF
  int v46; // [rsp+34h] [rbp-34h]
  __int64 v47; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(a1, a2);
  }
  else
  {
    v7 = a2 & *(_QWORD *)a1;
    if ( (a1 ^ v7 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)(v7 + 0x10)) == 0xA2E64EADA2E64EADuLL )
      DescriptorValidateSafe = v7 + 32 * ((unsigned __int64)(unsigned int)(a2 - v7) >> *(_BYTE *)(a1 + 8));
    else
      DescriptorValidateSafe = 0LL;
  }
  if ( !DescriptorValidateSafe )
    goto LABEL_87;
  v9 = *(_BYTE *)(DescriptorValidateSafe + 24);
  if ( (v9 & 1) == 0 )
    goto LABEL_87;
  v10 = 1;
  if ( (v9 & 2) != 0 )
  {
    v11 = v9 & 0xC;
    if ( v11 < 8u && (((1 << *(_BYTE *)(a1 + 8)) - 1) & a2) != 0 )
    {
LABEL_87:
      RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 56), a2, 0, 0LL, 0LL);
      return 0;
    }
  }
  else
  {
    DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
    v34 = *(_BYTE *)(DescriptorValidateSafe + 24);
    if ( (v34 & 3) != 3 )
      goto LABEL_87;
    v11 = v34 & 0xC;
    if ( v11 < 8u )
      goto LABEL_87;
  }
  v12 = *(_BYTE *)(a1 + 8);
  v13 = DescriptorValidateSafe & *(_QWORD *)a1;
  if ( a2 > v13 + ((DescriptorValidateSafe - v13) >> 5 << v12) )
  {
    if ( v11 == 8 )
    {
      v10 = RtlpHpLfhSubsegmentFreeBlock(
              *(_QWORD *)(a1 + 24),
              v13 + ((DescriptorValidateSafe - v13) >> 5 << v12),
              a2,
              a3);
    }
    else
    {
      v10 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(a1 + 32), (__int64)&v45);
      if ( v10 )
      {
        v38 = *(_QWORD *)(a1 + 24);
        if ( v45 <= (unsigned int)*(unsigned __int16 *)(v38 + 60) - 16 )
          RtlpHpLfhBucketUpdateStats(v38, v45, 0);
      }
    }
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v32 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v32 = 2147353472LL;
    if ( *(_BYTE *)v32 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v10 )
    {
      LOBYTE(v3) = (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) != 8;
      RtlpLogHeapFreeEvent(*(_QWORD *)(a1 + 56), a2, (unsigned int)(v3 + 2), v30);
    }
  }
  else
  {
    v14 = *(unsigned __int8 *)(DescriptorValidateSafe + 31);
    if ( (unsigned int)(v14 - 1) > 1 )
    {
      v35 = (char *)(DescriptorValidateSafe + 56);
      v36 = (unsigned int)(v14 - 2);
      do
      {
        v37 = *v35;
        v35 += 32;
        *(v35 - 32) = v37 & 0xFE;
        --v36;
      }
      while ( v36 );
    }
    v46 = a3 & 1;
    if ( (a3 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v15 = *(_DWORD *)(DescriptorValidateSafe + 28);
    LOBYTE(v47) = -1;
    if ( HIBYTE(v15) != v14 )
    {
      *(_BYTE *)(DescriptorValidateSafe + 31) = 0;
      *(_WORD *)(DescriptorValidateSafe + 28) = -1;
    }
    *(_BYTE *)(DescriptorValidateSafe + 24) |= 2u;
    *(_BYTE *)(32LL * (unsigned int)(v14 - 1) + DescriptorValidateSafe + 31) = v14 - 1;
    *(_WORD *)(DescriptorValidateSafe + 28) = v15;
    *(_BYTE *)(DescriptorValidateSafe + 31) = v14;
    *(_DWORD *)DescriptorValidateSafe = -857879331;
    *(_BYTE *)(DescriptorValidateSafe + 24) &= 0xF3u;
    v16 = RtlpHpSegPageRangeCoalesce(a1, (__int64)&v47);
    v18 = *(_BYTE *)(a1 + 13);
    v19 = v16;
    if ( (v18 & 0x10) != 0 && *(unsigned __int8 *)(v16 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
    {
      v24 = (_QWORD *)(v16 & *(_QWORD *)a1);
      *(_DWORD *)v16 = -857879297;
      if ( v24 )
      {
        v43 = *v24;
        if ( *(_QWORD **)(*v24 + 8LL) != v24 || (v44 = (_QWORD *)v24[1], (_QWORD *)*v44 != v24) )
          __fastfail(3u);
        *v44 = v43;
        *(_QWORD *)(v43 + 8) = v44;
        --*(_QWORD *)(a1 + 88);
      }
    }
    else
    {
      if ( (v18 & 7) != 0 )
        v20 = RtlpHpSegPageRangeComputeLargePageCost(
                a1,
                (v16 & *(_QWORD *)a1) + ((v16 - (v16 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)),
                *(unsigned __int8 *)(v16 + 31) << *(_BYTE *)(a1 + 8));
      else
        v20 = 4;
      *(_BYTE *)(v19 + 30) = v20;
      if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
      {
        v33 = *(_QWORD *)(a1 + 96);
        if ( v33 )
          v21 = v33 ^ (a1 + 96);
        else
          v21 = 0LL;
      }
      else
      {
        v21 = *(_QWORD *)(a1 + 96);
      }
      v22 = 0;
      if ( v21 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v19 + 28) < *(_DWORD *)(v21 + 28) )
          {
            v23 = *(_QWORD *)v21;
            if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_30;
              v23 ^= v21;
            }
            if ( !v23 )
            {
LABEL_30:
              v22 = 0;
              break;
            }
          }
          else
          {
            v23 = *(_QWORD *)(v21 + 8);
            if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_32;
              v23 ^= v21;
            }
            if ( !v23 )
            {
LABEL_32:
              v22 = 1;
              break;
            }
          }
          v21 = v23;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v21, v22, (PRTL_BALANCED_NODE)v19);
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
        (unsigned __int16)~*(_WORD *)(v19 + 28));
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
      v24 = 0LL;
    }
    if ( !v46 )
    {
      v25 = (volatile signed __int64 *)(a1 + 64);
      v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), 0LL, 1LL);
      if ( v26 != 1 )
      {
        v17 = -1LL;
        do
        {
          v39 = 3LL;
          v40 = v26 & 6;
          if ( v40 != 2 )
            v39 = -1LL;
          v41 = v26 + v39;
          v42 = v26;
          v26 = _InterlockedCompareExchange64(v25, v41, v26);
        }
        while ( v42 != v26 );
        if ( v40 == 2 )
          RtlpWakeSRWLock(v25, v41, 0);
      }
    }
    if ( v24 )
      RtlpHpSegSegmentFree(a1, (__int64)v24, 0x7FFFFFFF, 1);
    v27 = NtCurrentPeb()->SharedData;
    if ( v27 && *v27 )
      v28 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v28 = 2147353472LL;
    if ( *(_BYTE *)v28 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapFreeEvent(*(_QWORD *)(a1 + 56), a2, 3LL, v17);
  }
  return v10;
}
