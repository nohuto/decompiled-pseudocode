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
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180071654 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetSegmentInfo @ 0x180078EF4 (RtlpSetSegmentInfo.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A09A0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A09E0 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A0A50 (InterlockedPushListSList.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180109A2C (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x18010A15C (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapFailure @ 0x18010DE0C (RtlpLogHeapFailure.c)
 */

__int64 *__fastcall RtlpLocalInfoAllocFromCache(_QWORD *a1, char a2, __int64 *a3, __int64 a4)
{
  _SLIST_ENTRY *v4; // r12
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  signed __int32 v10; // ebx
  __int64 v11; // r12
  struct _TEB *v12; // r15
  unsigned int v13; // r13d
  unsigned __int16 HeapData_high; // ax
  __int64 v15; // rcx
  unsigned __int16 v16; // bp
  __int16 v17; // ax
  int ClearBitAndSet; // eax
  __int64 v19; // r8
  __int64 v20; // rax
  volatile signed __int32 *v22; // rdi
  _QWORD *v23; // rax
  _QWORD *v24; // r15
  unsigned int v25; // ebp
  volatile signed __int64 *v26; // rsi
  unsigned int v27; // r13d
  __int64 v28; // rbx
  unsigned int v29; // r12d
  _SLIST_HEADER *v30; // rbp
  __int64 v31; // rcx
  PSLIST_ENTRY v32; // rax
  _QWORD **v33; // rbx
  PSLIST_ENTRY v34; // r15
  signed __int32 v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // ebp
  _SLIST_ENTRY *v38; // rbx
  _SLIST_HEADER *v39; // r15
  PSLIST_ENTRY v40; // rsi
  __int16 RandomValue32; // ax
  __int64 v42; // rbx
  char *v43; // rcx
  __int64 v44; // rcx
  PSLIST_ENTRY v45; // rax
  __int64 v46; // rcx
  signed __int32 v47; // eax
  __int64 v48; // rcx
  _QWORD **v49; // rdx
  __int64 v50; // rcx
  _QWORD **v51; // rdx
  signed __int32 v52; // eax
  __int64 v53; // rcx
  int v54; // [rsp+70h] [rbp+8h]
  __int64 v55; // [rsp+70h] [rbp+8h]

  v4 = 0LL;
  while ( 1 )
  {
LABEL_2:
    v6 = a1[1];
    if ( v6 )
    {
      v54 = 0;
      v7 = *(_QWORD *)(*a1 + 24LL);
      if ( (HIWORD(*(_DWORD *)(v6 + 32)) & 0x8000u) != 0 )
      {
        v42 = *((unsigned __int16 *)a1 + 86);
        v54 = 1;
        if ( (*(_BYTE *)(v7 + 4 * v42 + 679) & 1) == 0
          && (int)RtlpAffinitizeSegmentInfoForBucket(v7, *(unsigned __int8 *)(v7 + 4 * v42 + 678)) >= 0 )
        {
          *(_BYTE *)(v7 + 4 * v42 + 679) |= 1u;
          v43 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
          if ( *v43 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v7 + 24), *(unsigned __int8 *)(v7 + 4 * v42 + 678));
        }
      }
      v8 = 0LL;
      v9 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      while ( 1 )
      {
        v10 = *(_DWORD *)(v6 + 32);
        if ( v10 >= 0 )
        {
          if ( !(_WORD)v10 )
            goto LABEL_20;
          if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 32), v10 | 0x80000000, v10) )
            break;
        }
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 > (unsigned int)v9 )
        {
          v10 = -1;
          break;
        }
      }
      if ( v10 == -1 )
        goto LABEL_20;
      v11 = *(_QWORD *)(v6 + 8);
      if ( !v11 || *(_QWORD **)v6 != a1 || !(_WORD)v10 )
      {
        *(_DWORD *)(v6 + 32) = v10;
        v4 = 0LL;
        goto LABEL_20;
      }
      v12 = NtCurrentTeb();
      v13 = RtlpSearchWidth[*((unsigned __int16 *)a1 + 86)];
      HeapData_high = HIWORD(v12->HeapData);
      v15 = HeapData_high;
      v16 = (unsigned __int8)HeapData_high;
      if ( (unsigned __int8)HeapData_high == HIBYTE(HeapData_high) )
      {
        LOWORD(v15) = HIBYTE(HeapData_high);
        RandomValue32 = RtlpHeapGenerateRandomValue32(v15, v8, v9);
        v17 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
      }
      else
      {
        v17 = (unsigned __int8)(HeapData_high ^ (HeapData_high + 1)) ^ HeapData_high;
      }
      HIWORD(v12->HeapData) = v17;
      ClearBitAndSet = RtlpLfhFindClearBitAndSet(
                         v11 + 32,
                         (unsigned int)(v10 >> 16),
                         *((unsigned __int8 *)&RtlpLowFragHeapRandomData + v16),
                         v13);
      *(_DWORD *)(v6 + 32) = (ClearBitAndSet << 16) | ((unsigned __int16)v10 - 1);
      v19 = (unsigned __int16)(RtlpLFHKey ^ v7 ^ v11 ^ *(_WORD *)(v11 + 24));
      v20 = v11
          + ClearBitAndSet
          * (((unsigned int)RtlpLFHKey ^ (unsigned int)v7 ^ (unsigned int)v11 ^ *(_DWORD *)(v11 + 24)) >> 16);
      v4 = 0LL;
      a3 = (__int64 *)(v20 + v19);
      if ( (*((_BYTE *)a3 + 15) & 0x3F) != 0 )
      {
        RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*a1 + 24LL) + 24LL), (_DWORD)a3, 0, 0LL, 0LL);
LABEL_20:
        a3 = 0LL;
      }
      if ( v54 && HIDWORD(RtlpAffinityState) + 1 < (unsigned int)RtlpAffinityState )
        _InterlockedCompareExchange(
          (_DWORD *)&RtlpAffinityState + 1,
          2 * (HIDWORD(RtlpAffinityState) + 1) - 1,
          SHIDWORD(RtlpAffinityState));
      if ( a3 )
        return a3;
    }
    v55 = *a1;
    while ( 1 )
    {
      v22 = 0LL;
LABEL_23:
      v23 = a1 + 2;
      while ( 1 )
      {
        v24 = v23;
        v25 = 0;
        v26 = 0LL;
        v27 = 0;
        do
        {
          v28 = *v24;
          if ( *v24 )
          {
            v29 = *(unsigned __int16 *)(v28 + 32);
            if ( v29 > v27 && !(unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(a1, *v24) )
            {
              v22 = (volatile signed __int32 *)v28;
              v27 = v29;
              v26 = &a1[v25 + 2];
            }
            v4 = 0LL;
          }
          ++v25;
          ++v24;
        }
        while ( v25 < 0x10 );
        if ( !v26 )
        {
          v22 = 0LL;
          goto LABEL_43;
        }
        v30 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v55 + 24) + 8LL * *((unsigned __int16 *)a1 + 86) + 1192) + 144LL);
        while ( 1 )
        {
          v32 = RtlpInterlockedPopEntrySList(v30);
          v33 = (_QWORD **)v32;
          if ( !v32 )
            break;
          v33 = (_QWORD **)&v32[-3];
          v34 = v32;
          if ( (*((_DWORD *)&v32[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)RtlpSetSegmentInfo(v33, a1) )
            {
              RtlpInterlockedPushEntrySList(v30, v34, a3, a4);
              v33 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)v33 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v33 + 11, 0xFFFFFFFD) == 2 )
          {
            v31 = **v33;
            *v33 = 0LL;
            RtlpInterlockedPushEntrySList(v31, v32, a3, a4);
          }
        }
        if ( v22 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 v26,
                                                 (signed __int64)v33,
                                                 (signed __int64)v22) )
          break;
        v23 = a1 + 2;
        if ( v33 )
        {
          RtlpInterlockedPushEntrySList(v30, v33 + 6, a3, a4);
          goto LABEL_23;
        }
      }
      if ( !v33 )
        *((_WORD *)a1 + 87) = (unsigned __int8)(((char *)v26 - (char *)a1 - 16) >> 3);
LABEL_43:
      if ( !v22 )
        break;
      _m_prefetchw((const void *)(v22 + 11));
      if ( _InterlockedAnd(v22 + 11, 0xFFFFFFFD) != 2 )
        goto LABEL_45;
      v44 = **(_QWORD **)v22;
      *(_QWORD *)v22 = 0LL;
      RtlpInterlockedPushEntrySList(v44, v22 + 12, a3, a4);
    }
    v37 = 0;
    v38 = 0LL;
    v39 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v55 + 24) + 8LL * *((unsigned __int16 *)a1 + 86) + 1192) + 144LL);
    v40 = RtlpInterlockedPopEntrySList(v39);
    if ( !v40 )
      return 0LL;
    do
    {
      v22 = (volatile signed __int32 *)&v40[-3];
      if ( (*((_DWORD *)&v40[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((const void *)(v22 + 11));
        if ( _InterlockedAnd(v22 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_85;
LABEL_84:
        v46 = **(_QWORD **)v22;
        *(_QWORD *)v22 = 0LL;
        RtlpInterlockedPushEntrySList(v46, v40, a3, a4);
        goto LABEL_85;
      }
      if ( (unsigned int)RtlpSetSegmentInfo(&v40[-3], a1) )
      {
        _m_prefetchw((const void *)(v22 + 11));
        if ( _InterlockedAnd(v22 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_84;
        if ( (unsigned __int8)RtlpIsSubSegmentReuseable(a1, &v40[-3], a3, a4) )
          break;
      }
      else
      {
        v40->Next = v38;
        v45 = v40;
        v38 = v40;
        if ( v37 )
          v45 = v4;
        ++v37;
        v4 = v45;
      }
LABEL_85:
      v22 = 0LL;
      v40 = RtlpInterlockedPopEntrySList(v39);
    }
    while ( v40 );
    if ( v37 )
      InterlockedPushListSList(v39, v38, v4, v37);
    v4 = 0LL;
LABEL_45:
    if ( !v22 )
      return 0LL;
    *((_BYTE *)v22 + 43) = a2;
    do
    {
      v35 = *((_DWORD *)v22 + 11);
      if ( !v35 || (v35 & 6) != 0 )
        goto LABEL_2;
    }
    while ( v35 != _InterlockedCompareExchange(v22 + 11, v35 | 6, v35) );
    a3 = *(__int64 **)v22;
    if ( *(_QWORD **)v22 == a1 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v36 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v36 = 2147353472LL;
      if ( *(_BYTE *)v36 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*a1 + 24LL) + 24LL), *((_QWORD *)v22 + 1));
      v22 = (volatile signed __int32 *)_InterlockedExchange64(a1 + 1, (__int64)v22);
      if ( v22 )
      {
        _m_prefetchw((const void *)(v22 + 11));
        if ( _InterlockedAnd(v22 + 11, 0xFFFFFFF9) == 6 )
        {
LABEL_101:
          v50 = **(_QWORD **)v22;
          *(_QWORD *)v22 = 0LL;
LABEL_99:
          v51 = (_QWORD **)(v22 + 12);
LABEL_100:
          RtlpInterlockedPushEntrySList(v50, v51, a3, a4);
        }
        else if ( (unsigned __int8)RtlpIsSubSegmentReuseable(a1, v22, a3, a4) )
        {
          while ( 1 )
          {
            v52 = *((_DWORD *)v22 + 11);
            if ( !v52 || (v52 & 2) != 0 )
              break;
            if ( v52 == _InterlockedCompareExchange(v22 + 11, v52 | 2, v52) )
            {
              a3 = *(__int64 **)v22;
              a4 = 0LL;
              while ( 1 )
              {
                v53 = ((_BYTE)a4 + (unsigned __int8)*((_WORD *)a3 + 87)) & 0xF;
                v49 = (_QWORD **)a3[v53 + 2];
                if ( v49 )
                {
                  if ( (*((_DWORD *)v49 + 11) & 1) == 0
                    && v49 == (_QWORD **)_InterlockedCompareExchange64(
                                           &a3[v53 + 2],
                                           (signed __int64)v22,
                                           (signed __int64)v49) )
                  {
                    goto LABEL_104;
                  }
                }
                else if ( !_InterlockedCompareExchange64(&a3[v53 + 2], (signed __int64)v22, 0LL) )
                {
                  goto LABEL_2;
                }
                a4 = (unsigned int)(a4 + 1);
                if ( (unsigned int)a4 >= 0x10 )
                  goto LABEL_98;
              }
            }
          }
        }
      }
    }
    else
    {
      _m_prefetchw((const void *)(v22 + 11));
      if ( _InterlockedAnd(v22 + 11, 0xFFFFFFF9) == 6 )
        goto LABEL_101;
      if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(a3, v22, a3, a4) )
        continue;
      do
      {
        v47 = *((_DWORD *)v22 + 11);
        if ( !v47 || (v47 & 2) != 0 )
          goto LABEL_2;
      }
      while ( v47 != _InterlockedCompareExchange(v22 + 11, v47 | 2, v47) );
      a3 = *(__int64 **)v22;
      a4 = 0LL;
      while ( 1 )
      {
        v48 = ((_BYTE)a4 + (unsigned __int8)*((_WORD *)a3 + 87)) & 0xF;
        v49 = (_QWORD **)a3[v48 + 2];
        if ( !v49 )
        {
          if ( !_InterlockedCompareExchange64(&a3[v48 + 2], (signed __int64)v22, 0LL) )
            goto LABEL_2;
          goto LABEL_97;
        }
        if ( (*((_DWORD *)v49 + 11) & 1) == 0
          && v49 == (_QWORD **)_InterlockedCompareExchange64(&a3[v48 + 2], (signed __int64)v22, (signed __int64)v49) )
        {
          break;
        }
LABEL_97:
        a4 = (unsigned int)(a4 + 1);
        if ( (unsigned int)a4 >= 0x10 )
        {
LABEL_98:
          v50 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v22 + 24LL)
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v22 + 172LL)
                          + 1192)
              + 144LL;
          goto LABEL_99;
        }
      }
LABEL_104:
      _m_prefetchw((char *)v49 + 44);
      if ( _InterlockedAnd((volatile signed __int32 *)v49 + 11, 0xFFFFFFFD) == 2 )
      {
        v50 = **v49;
        *v49 = 0LL;
        v51 = v49 + 6;
        goto LABEL_100;
      }
    }
  }
}
