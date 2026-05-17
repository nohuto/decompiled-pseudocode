/*
 * XREFs of RtlpLocalInfoAllocFromCache @ 0x180003FA4
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180003888 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlpLfhFindClearBitAndSet @ 0x1800043D0 (RtlpLfhFindClearBitAndSet.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpIsSubSegmentReuseable @ 0x180023574 (RtlpIsSubSegmentReuseable.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x1800235A0 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180071754 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetSegmentInfo @ 0x180078FF4 (RtlpSetSegmentInfo.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A0C40 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A0C80 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A0CF0 (InterlockedPushListSList.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180109F3C (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x18010A66C (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpLocalInfoAllocFromCache(_QWORD *a1, signed __int64 a2)
{
  struct _SLIST_ENTRY *v2; // r12
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r8
  signed __int32 v7; // ebx
  __int64 v8; // r12
  struct _TEB *v9; // r15
  unsigned int v10; // r13d
  unsigned __int16 HeapData_high; // ax
  __int64 v12; // rcx
  unsigned __int16 v13; // bp
  __int16 v14; // ax
  int ClearBitAndSet; // eax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  volatile signed __int32 *v20; // rdi
  _QWORD *v21; // rax
  _QWORD *v22; // r15
  unsigned int v23; // ebp
  volatile signed __int64 *v24; // rsi
  unsigned int v25; // r13d
  __int64 v26; // rbx
  unsigned int v27; // r12d
  union _SLIST_HEADER *v28; // rbp
  __int64 v29; // rcx
  PSLIST_ENTRY v30; // rax
  _QWORD **v31; // rbx
  PSLIST_ENTRY v32; // r15
  signed __int32 v33; // eax
  __int64 v34; // rcx
  __int64 *v35; // r8
  __int64 v36; // rcx
  unsigned int v37; // ebp
  _SLIST_ENTRY *v38; // rbx
  union _SLIST_HEADER *v39; // r15
  PSLIST_ENTRY v40; // rsi
  __int16 RandomValue32; // ax
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  char *v45; // rcx
  __int64 v46; // rcx
  PSLIST_ENTRY v47; // rax
  __int64 v48; // rcx
  signed __int32 v49; // eax
  __int64 *v50; // r8
  int v51; // r9d
  __int64 v52; // rcx
  __int64 v53; // rcx
  _QWORD **v54; // rdx
  signed __int32 v55; // eax
  __int64 *v56; // r8
  int v57; // r9d
  __int64 v58; // rcx
  int v59; // [rsp+70h] [rbp+8h]
  __int64 v60; // [rsp+70h] [rbp+8h]
  char v61; // [rsp+78h] [rbp+10h]

  v61 = a2;
  v2 = 0LL;
  while ( 1 )
  {
LABEL_2:
    v4 = a1[1];
    if ( v4 )
    {
      v59 = 0;
      v5 = *(_QWORD *)(*a1 + 24LL);
      if ( (HIWORD(*(_DWORD *)(v4 + 32)) & 0x8000u) != 0 )
      {
        v42 = *((unsigned __int16 *)a1 + 86);
        v59 = 1;
        if ( (*(_BYTE *)(v5 + 4 * v42 + 679) & 1) == 0
          && (int)RtlpAffinitizeSegmentInfoForBucket(v5, *(unsigned __int8 *)(v5 + 4 * v42 + 678)) >= 0 )
        {
          *(_BYTE *)(v5 + 4 * v42 + 679) |= 1u;
          v45 = (unsigned int)RtlGetCurrentServiceSessionId(v44, v43)
              ? (char *)NtCurrentPeb()->SharedData + 550
              : (char *)2147353472;
          if ( *v45 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v5 + 24), *(unsigned __int8 *)(v5 + 4 * v42 + 678));
        }
      }
      a2 = 0LL;
      v6 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      while ( 1 )
      {
        v7 = *(_DWORD *)(v4 + 32);
        if ( v7 >= 0 )
        {
          if ( !(_WORD)v7 )
            goto LABEL_20;
          if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 32), v7 | 0x80000000, v7) )
            break;
        }
        a2 = (unsigned int)(a2 + 1);
        if ( (unsigned int)a2 > (unsigned int)v6 )
        {
          v7 = -1;
          break;
        }
      }
      if ( v7 == -1 )
        goto LABEL_20;
      v8 = *(_QWORD *)(v4 + 8);
      if ( !v8 || *(_QWORD **)v4 != a1 || !(_WORD)v7 )
      {
        *(_DWORD *)(v4 + 32) = v7;
        v2 = 0LL;
        goto LABEL_20;
      }
      v9 = NtCurrentTeb();
      v10 = RtlpSearchWidth[*((unsigned __int16 *)a1 + 86)];
      HeapData_high = HIWORD(v9->HeapData);
      v12 = HeapData_high;
      v13 = (unsigned __int8)HeapData_high;
      if ( (unsigned __int8)HeapData_high == HIBYTE(HeapData_high) )
      {
        LOWORD(v12) = HIBYTE(HeapData_high);
        RandomValue32 = RtlpHeapGenerateRandomValue32(v12, a2, v6);
        v14 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
      }
      else
      {
        v14 = (unsigned __int8)(HeapData_high ^ (HeapData_high + 1)) ^ HeapData_high;
      }
      HIWORD(v9->HeapData) = v14;
      ClearBitAndSet = RtlpLfhFindClearBitAndSet(
                         v8 + 32,
                         (unsigned int)(v7 >> 16),
                         *((unsigned __int8 *)&RtlpLowFragHeapRandomData + v13),
                         v10);
      a2 = (ClearBitAndSet << 16) | ((unsigned int)(unsigned __int16)v7 - 1);
      *(_DWORD *)(v4 + 32) = a2;
      v16 = (unsigned __int16)(RtlpLFHKey ^ v5 ^ v8 ^ *(_WORD *)(v8 + 24));
      v17 = v8
          + ClearBitAndSet
          * (((unsigned int)RtlpLFHKey ^ (unsigned int)v5 ^ (unsigned int)v8 ^ *(_DWORD *)(v8 + 24)) >> 16);
      v2 = 0LL;
      v18 = v17 + v16;
      if ( (*(_BYTE *)(v18 + 15) & 0x3F) != 0 )
      {
        RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*a1 + 24LL) + 24LL), v18, 0, 0LL, 0LL);
LABEL_20:
        v18 = 0LL;
      }
      if ( v59 && HIDWORD(RtlpAffinityState) + 1 < (unsigned int)RtlpAffinityState )
        _InterlockedCompareExchange(
          (_DWORD *)&RtlpAffinityState + 1,
          2 * (HIDWORD(RtlpAffinityState) + 1) - 1,
          SHIDWORD(RtlpAffinityState));
      if ( v18 )
        return v18;
    }
    v60 = *a1;
    while ( 1 )
    {
      v20 = 0LL;
LABEL_23:
      v21 = a1 + 2;
      while ( 1 )
      {
        v22 = v21;
        v23 = 0;
        v24 = 0LL;
        v25 = 0;
        do
        {
          v26 = *v22;
          if ( *v22 )
          {
            v27 = *(unsigned __int16 *)(v26 + 32);
            if ( v27 > v25 && !(unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(a1, *v22) )
            {
              v20 = (volatile signed __int32 *)v26;
              v25 = v27;
              v24 = &a1[v23 + 2];
            }
            v2 = 0LL;
          }
          ++v23;
          ++v22;
        }
        while ( v23 < 0x10 );
        if ( !v24 )
        {
          v20 = 0LL;
          goto LABEL_43;
        }
        v28 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v60 + 24) + 8LL * *((unsigned __int16 *)a1 + 86) + 1192)
                                    + 144LL);
        while ( 1 )
        {
          v30 = RtlpInterlockedPopEntrySList(v28);
          v31 = (_QWORD **)v30;
          if ( !v30 )
            break;
          v31 = (_QWORD **)&v30[-3];
          v32 = v30;
          if ( (*((_DWORD *)&v30[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)RtlpSetSegmentInfo(v31, a1) )
            {
              RtlpInterlockedPushEntrySList(v28, v32);
              v31 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)v31 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v31 + 11, 0xFFFFFFFD) == 2 )
          {
            v29 = **v31;
            *v31 = 0LL;
            RtlpInterlockedPushEntrySList(v29, v30);
          }
        }
        if ( v20 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 v24,
                                                 (signed __int64)v31,
                                                 (signed __int64)v20) )
          break;
        v21 = a1 + 2;
        if ( v31 )
        {
          RtlpInterlockedPushEntrySList(v28, v31 + 6);
          goto LABEL_23;
        }
      }
      if ( !v31 )
        *((_WORD *)a1 + 87) = (unsigned __int8)(((char *)v24 - (char *)a1 - 16) >> 3);
LABEL_43:
      if ( !v20 )
        break;
      _m_prefetchw((const void *)(v20 + 11));
      if ( _InterlockedAnd(v20 + 11, 0xFFFFFFFD) != 2 )
        goto LABEL_45;
      v46 = **(_QWORD **)v20;
      *(_QWORD *)v20 = 0LL;
      RtlpInterlockedPushEntrySList(v46, v20 + 12);
    }
    v37 = 0;
    v38 = 0LL;
    v39 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v60 + 24) + 8LL * *((unsigned __int16 *)a1 + 86) + 1192)
                                + 144LL);
    v40 = RtlpInterlockedPopEntrySList(v39);
    if ( !v40 )
      return 0LL;
    do
    {
      v20 = (volatile signed __int32 *)&v40[-3];
      if ( (*((_DWORD *)&v40[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((const void *)(v20 + 11));
        if ( _InterlockedAnd(v20 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_85;
LABEL_84:
        v48 = **(_QWORD **)v20;
        *(_QWORD *)v20 = 0LL;
        RtlpInterlockedPushEntrySList(v48, v40);
        goto LABEL_85;
      }
      if ( (unsigned int)RtlpSetSegmentInfo(&v40[-3], a1) )
      {
        _m_prefetchw((const void *)(v20 + 11));
        if ( _InterlockedAnd(v20 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_84;
        if ( (unsigned __int8)RtlpIsSubSegmentReuseable(a1, &v40[-3]) )
          break;
      }
      else
      {
        v40->Next = v38;
        v47 = v40;
        v38 = v40;
        if ( v37 )
          v47 = v2;
        ++v37;
        v2 = v47;
      }
LABEL_85:
      v20 = 0LL;
      v40 = RtlpInterlockedPopEntrySList(v39);
    }
    while ( v40 );
    if ( v37 )
      InterlockedPushListSList(v39, v38, v2, v37);
    v2 = 0LL;
LABEL_45:
    if ( !v20 )
      return 0LL;
    *((_BYTE *)v20 + 43) = v61;
    do
    {
      v33 = *((_DWORD *)v20 + 11);
      if ( !v33 || (v33 & 6) != 0 )
        goto LABEL_2;
      v34 = v33 | 6u;
    }
    while ( v33 != _InterlockedCompareExchange(v20 + 11, v34, v33) );
    v35 = *(__int64 **)v20;
    if ( *(_QWORD **)v20 == a1 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v34, a2) )
        v36 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v36 = 2147353472LL;
      if ( *(_BYTE *)v36 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*a1 + 24LL) + 24LL), *((_QWORD *)v20 + 1));
      v20 = (volatile signed __int32 *)_InterlockedExchange64(a1 + 1, (__int64)v20);
      if ( v20 )
      {
        _m_prefetchw((const void *)(v20 + 11));
        if ( _InterlockedAnd(v20 + 11, 0xFFFFFFF9) == 6 )
        {
LABEL_101:
          v53 = **(_QWORD **)v20;
          *(_QWORD *)v20 = 0LL;
LABEL_99:
          v54 = (_QWORD **)(v20 + 12);
LABEL_100:
          RtlpInterlockedPushEntrySList(v53, v54);
        }
        else if ( (unsigned __int8)RtlpIsSubSegmentReuseable(a1, v20) )
        {
          while ( 1 )
          {
            v55 = *((_DWORD *)v20 + 11);
            if ( !v55 || (v55 & 2) != 0 )
              break;
            if ( v55 == _InterlockedCompareExchange(v20 + 11, v55 | 2, v55) )
            {
              v56 = *(__int64 **)v20;
              v57 = 0;
              while ( 1 )
              {
                v58 = ((_BYTE)v57 + (unsigned __int8)*((_WORD *)v56 + 87)) & 0xF;
                a2 = v56[v58 + 2];
                if ( a2 )
                {
                  if ( (*(_DWORD *)(a2 + 44) & 1) == 0
                    && a2 == _InterlockedCompareExchange64(&v56[v58 + 2], (signed __int64)v20, a2) )
                  {
                    goto LABEL_104;
                  }
                }
                else if ( !_InterlockedCompareExchange64(&v56[v58 + 2], (signed __int64)v20, 0LL) )
                {
                  goto LABEL_2;
                }
                if ( (unsigned int)++v57 >= 0x10 )
                  goto LABEL_98;
              }
            }
          }
        }
      }
    }
    else
    {
      _m_prefetchw((const void *)(v20 + 11));
      if ( _InterlockedAnd(v20 + 11, 0xFFFFFFF9) == 6 )
        goto LABEL_101;
      if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v35, v20) )
        continue;
      do
      {
        v49 = *((_DWORD *)v20 + 11);
        if ( !v49 || (v49 & 2) != 0 )
          goto LABEL_2;
      }
      while ( v49 != _InterlockedCompareExchange(v20 + 11, v49 | 2, v49) );
      v50 = *(__int64 **)v20;
      v51 = 0;
      while ( 1 )
      {
        v52 = ((_BYTE)v51 + (unsigned __int8)*((_WORD *)v50 + 87)) & 0xF;
        a2 = v50[v52 + 2];
        if ( !a2 )
        {
          if ( !_InterlockedCompareExchange64(&v50[v52 + 2], (signed __int64)v20, 0LL) )
            goto LABEL_2;
          goto LABEL_97;
        }
        if ( (*(_DWORD *)(a2 + 44) & 1) == 0
          && a2 == _InterlockedCompareExchange64(&v50[v52 + 2], (signed __int64)v20, a2) )
        {
          break;
        }
LABEL_97:
        if ( (unsigned int)++v51 >= 0x10 )
        {
LABEL_98:
          v53 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v20 + 24LL)
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v20 + 172LL)
                          + 1192)
              + 144LL;
          goto LABEL_99;
        }
      }
LABEL_104:
      _m_prefetchw((const void *)(a2 + 44));
      if ( _InterlockedAnd((volatile signed __int32 *)(a2 + 44), 0xFFFFFFFD) == 2 )
      {
        v53 = **(_QWORD **)a2;
        *(_QWORD *)a2 = 0LL;
        v54 = (_QWORD **)(a2 + 48);
        goto LABEL_100;
      }
    }
  }
}
