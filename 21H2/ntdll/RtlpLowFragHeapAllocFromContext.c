/*
 * XREFs of RtlpLowFragHeapAllocFromContext @ 0x18002B650
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpLfhFindClearBitAndSet @ 0x1800043D0 (RtlpLfhFindClearBitAndSet.c)
 *     RtlpSubSegmentInitialize @ 0x18000A090 (RtlpSubSegmentInitialize.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpAllocateUserBlock @ 0x180020A20 (RtlpAllocateUserBlock.c)
 *     RtlpFreeUserBlock @ 0x180020DDC (RtlpFreeUserBlock.c)
 *     RtlpIsSubSegmentReuseable @ 0x180023574 (RtlpIsSubSegmentReuseable.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x1800235A0 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetSubSegmentBlockCount @ 0x18006B46C (RtlpGetSubSegmentBlockCount.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800712E4 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180072784 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetSegmentInfo @ 0x18007A024 (RtlpSetSegmentInfo.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A1210 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A1250 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A12C0 (InterlockedPushListSList.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A22E0 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A4780 (memset.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180109DDC (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x18010A50C (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapFailure @ 0x18010E1BC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpLowFragHeapAllocFromContext(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  __int64 v4; // r12
  unsigned __int16 *v6; // r15
  struct _TEB *v7; // rdi
  __int64 HeapData_low; // rcx
  __int64 UniqueThread_low; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned int v15; // r8d
  int v16; // edx
  signed __int32 v17; // ebx
  __int64 v18; // rbx
  __int64 v19; // r15
  struct _TEB *v20; // r14
  unsigned int v21; // r12d
  unsigned __int16 HeapData_high; // si
  __int16 v23; // ax
  int ClearBitAndSet; // eax
  unsigned __int64 v25; // rbp
  __int64 *v27; // rax
  volatile signed __int32 *v28; // r12
  __int64 v29; // rdi
  volatile signed __int64 *v30; // r13
  __int64 *v31; // rsi
  unsigned int v32; // r15d
  __int64 v33; // rbx
  union _SLIST_HEADER *v34; // rdi
  PSLIST_ENTRY v35; // rbx
  int v36; // ecx
  PSLIST_ENTRY v37; // rsi
  _SLIST_ENTRY *Next; // rcx
  __int16 RandomValue32; // ax
  int v40; // ebx
  unsigned int CurrentProcessorNumber; // eax
  __int64 v42; // rbx
  char *v43; // rcx
  unsigned int v44; // r14d
  _SLIST_ENTRY *v45; // rbx
  unsigned int v46; // r14d
  struct _SLIST_ENTRY *v47; // r15
  union _SLIST_HEADER *v48; // rsi
  PSLIST_ENTRY v49; // rdi
  __int64 v50; // rcx
  __int16 v51; // ax
  signed __int32 v52; // eax
  __int64 *v53; // r8
  __int64 v54; // rcx
  signed __int32 v55; // eax
  __int64 *v56; // r9
  int v57; // r8d
  __int64 v58; // rax
  __int64 **v59; // rdx
  __int64 *v60; // rcx
  signed __int32 v61; // eax
  signed __int32 v62; // ett
  unsigned int v63; // ebx
  unsigned int v64; // r9d
  int v65; // r8d
  signed __int64 v66; // rax
  char v67; // r10
  __int64 v68; // rdi
  unsigned int SubSegmentBlockCount; // eax
  unsigned int v70; // eax
  unsigned int v71; // ecx
  unsigned int v72; // eax
  unsigned int v73; // ecx
  unsigned __int8 v74; // cl
  char v75; // r9
  __int64 UserBlock; // rax
  __int64 v77; // rdi
  unsigned __int64 v78; // rdx
  __int64 v79; // rsi
  PSLIST_ENTRY v80; // rax
  int v81; // r8d
  volatile signed __int32 *v82; // rbx
  signed __int32 v83; // eax
  __int64 *v84; // r8
  __int64 v85; // rcx
  signed __int32 v86; // eax
  __int64 *v87; // r9
  int v88; // r8d
  __int64 v89; // rax
  __int64 *v90; // rcx
  __int64 v91; // rcx
  _QWORD **v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rax
  volatile signed __int32 *v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rcx
  PSLIST_ENTRY v100; // rax
  signed __int32 v101; // eax
  __int64 *v102; // r9
  unsigned int j; // r8d
  __int64 v104; // rax
  __int64 *v105; // rcx
  volatile signed __int32 *v106; // rdx
  __int64 v107; // rcx
  signed __int32 v108; // eax
  __int64 *v109; // r9
  unsigned int k; // r8d
  __int64 v111; // rax
  __int64 *v112; // rcx
  signed __int32 v113; // eax
  __int64 *v114; // r9
  int v115; // r8d
  __int64 v116; // rax
  __int64 **v117; // rdx
  __int64 *v118; // rcx
  int v119; // [rsp+30h] [rbp-88h]
  __int64 i; // [rsp+30h] [rbp-88h]
  __int64 v121; // [rsp+38h] [rbp-80h]
  signed __int64 v122; // [rsp+40h] [rbp-78h]
  int v123; // [rsp+48h] [rbp-70h]
  __int64 v124; // [rsp+48h] [rbp-70h]
  unsigned __int16 *v125; // [rsp+50h] [rbp-68h]
  __int64 v126; // [rsp+60h] [rbp-58h]
  union _SLIST_HEADER *ListHead; // [rsp+68h] [rbp-50h]
  unsigned int v129; // [rsp+C8h] [rbp+10h]

  v4 = 0LL;
  v129 = 0;
  v6 = (unsigned __int16 *)(a1 + 4 * (a2 + 169LL));
  v125 = v6;
  if ( (*(_BYTE *)(a1 + 672) & 1) == 0 && (*((_BYTE *)v6 + 3) & 1) != 0 )
  {
    v7 = NtCurrentTeb();
    HeapData_low = LOBYTE(v7->HeapData);
    UniqueThread_low = LODWORD(v7->ClientId.UniqueThread);
    v4 = (unsigned int)(HeapData_low - 1);
    v129 = v4;
    if ( (int)v4 < 0 || RtlpAffinityState[HeapData_low] != UniqueThread_low )
    {
      v40 = HIDWORD(RtlpAffinityState[0]);
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v4 = v40 & CurrentProcessorNumber;
      v129 = v40 & CurrentProcessorNumber;
      LOBYTE(v7->HeapData) = (v40 & CurrentProcessorNumber) + 1;
      qword_18016A6C8[v4] = UniqueThread_low;
    }
  }
  v10 = 16LL * *v6;
  v126 = v10;
  ListHead = (union _SLIST_HEADER *)(a1 + 48 * (v4 + 68));
  v11 = *((unsigned __int8 *)v6 + 2);
  if ( (_DWORD)v4 )
    v12 = *(_QWORD *)(a1 + 8 * v11 + 2224) - 192LL + 192 * v4;
  else
    v12 = *(_QWORD *)(a1 + 8 * v11 + 1192);
  v121 = v12;
LABEL_8:
  while ( 2 )
  {
    while ( 2 )
    {
      v13 = *(_QWORD *)(v12 + 8);
      if ( v13 )
      {
        v119 = 0;
        v14 = *(_QWORD *)(*(_QWORD *)v12 + 24LL);
        v123 = v14;
        if ( (HIWORD(*(_DWORD *)(v13 + 32)) & 0x8000u) != 0 )
        {
          v119 = 1;
          v42 = v14 + 4LL * *(unsigned __int16 *)(v12 + 172);
          if ( (*(_BYTE *)(v42 + 679) & 1) == 0
            && (int)RtlpAffinitizeSegmentInfoForBucket(v14, *(unsigned __int8 *)(v42 + 678)) >= 0 )
          {
            *(_BYTE *)(v42 + 679) |= 1u;
            v43 = (unsigned int)RtlGetCurrentServiceSessionId()
                ? (char *)NtCurrentPeb()->SharedData + 550
                : (char *)2147353472;
            if ( *v43 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v14 + 24), *(unsigned __int8 *)(v42 + 678));
          }
        }
        v15 = 0;
        if ( MEMORY[0x7FFE036A] > 1u )
          v15 = 100;
        v16 = 0;
        while ( 1 )
        {
          v17 = *(_DWORD *)(v13 + 32);
          if ( (v17 & 0x80000000) == 0 )
          {
            if ( !(_WORD)v17 )
              goto LABEL_20;
            if ( v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 32), v17 | 0x80000000, v17) )
              break;
          }
          if ( ++v16 > v15 )
          {
            v18 = 0LL;
            goto LABEL_28;
          }
        }
        if ( v17 == -1 )
          goto LABEL_20;
        v19 = *(_QWORD *)(v13 + 8);
        if ( !v19 || *(_QWORD *)v13 != v12 || !(_WORD)v17 )
        {
          *(_DWORD *)(v13 + 32) = v17;
LABEL_20:
          v18 = 0LL;
          goto LABEL_28;
        }
        v20 = NtCurrentTeb();
        v21 = RtlpSearchWidth[*(unsigned __int16 *)(v12 + 172)];
        HeapData_high = (unsigned __int8)HIWORD(v20->HeapData);
        if ( HeapData_high == HIBYTE(HIWORD(v20->HeapData)) )
        {
          RandomValue32 = RtlpHeapGenerateRandomValue32();
          v23 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
        }
        else
        {
          v23 = (unsigned __int8)(HIWORD(v20->HeapData) ^ (HeapData_high + 1)) ^ HIWORD(v20->HeapData);
        }
        HIWORD(v20->HeapData) = v23;
        ClearBitAndSet = RtlpLfhFindClearBitAndSet(
                           (unsigned __int64 *)(v19 + 32),
                           v17 >> 16,
                           RtlpLowFragHeapRandomData[HeapData_high],
                           v21);
        *(_DWORD *)(v13 + 32) = (ClearBitAndSet << 16) | ((unsigned __int16)v17 - 1);
        v18 = v19
            + ClearBitAndSet * (((unsigned int)RtlpLFHKey ^ (unsigned int)v19 ^ v123 ^ *(_DWORD *)(v19 + 24)) >> 16)
            + (unsigned __int16)(RtlpLFHKey ^ v19 ^ v123 ^ *(_WORD *)(v19 + 24));
        if ( (*(_BYTE *)(v18 + 15) & 0x3F) != 0 )
        {
          RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL), v18, 0, 0LL, 0LL);
          goto LABEL_20;
        }
LABEL_28:
        if ( v119 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
          _InterlockedCompareExchange(
            (_DWORD *)RtlpAffinityState + 1,
            2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
            SHIDWORD(RtlpAffinityState[0]));
        if ( v18 )
        {
          if ( (a4 & 8) != 0 )
            memset((void *)(v18 + 16), 0, v10 - 8);
          v25 = v10 - a3;
          if ( v25 >= 0x3F )
          {
            *(_QWORD *)(v18 + 16LL * *v125) = v25;
            *(_BYTE *)(v18 + 15) = -65;
          }
          else
          {
            *(_BYTE *)(v18 + 15) = v25 | 0x80;
          }
          return v18 + 16;
        }
      }
      v124 = *(_QWORD *)v12;
      v27 = (__int64 *)(v12 + 16);
      for ( i = v12 + 16; ; v27 = (__int64 *)i )
      {
        v28 = 0LL;
        while ( 1 )
        {
          v29 = 0LL;
          v30 = 0LL;
          v31 = v27;
          v32 = 0;
          do
          {
            v33 = *v31;
            if ( *v31 )
            {
              v44 = *(unsigned __int16 *)(v33 + 32);
              if ( v44 > v32 && !RtlpIsSubSegmentReuseThresholdExceeded(v121, *v31) )
              {
                v28 = (volatile signed __int32 *)v33;
                v30 = (volatile signed __int64 *)(v121 + 16 + 8 * v29);
                v32 = v44;
              }
            }
            v29 = (unsigned int)(v29 + 1);
            ++v31;
          }
          while ( (unsigned int)v29 < 0x10 );
          v10 = v126;
          if ( !v30 )
          {
            v12 = v121;
            v28 = 0LL;
            goto LABEL_66;
          }
          v34 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v124 + 24)
                                                  + 8LL * *(unsigned __int16 *)(v121 + 172)
                                                  + 1192)
                                      + 144LL);
          v35 = RtlpInterlockedPopEntrySList(v34);
          if ( v35 )
          {
            while ( 1 )
            {
              v36 = *((_DWORD *)&v35[-1].Next + 3);
              v37 = v35;
              v35 -= 3;
              if ( (v36 & 1) != 0 )
                break;
              _m_prefetchw((char *)&v35[2].Next + 12);
              if ( _InterlockedAnd((volatile signed __int32 *)&v35[2].Next + 3, 0xFFFFFFFD) == 2 )
              {
                Next = v35->Next->Next;
                v35->Next = 0LL;
                RtlpInterlockedPushEntrySList(Next, v37);
              }
              v35 = RtlpInterlockedPopEntrySList(v34);
              if ( !v35 )
                goto LABEL_46;
            }
            if ( !(unsigned int)RtlpSetSegmentInfo(v35, v121) )
            {
              RtlpInterlockedPushEntrySList(v34, v37);
              v35 = 0LL;
            }
          }
LABEL_46:
          if ( v28 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                   v30,
                                                   (signed __int64)v35,
                                                   (signed __int64)v28) )
            break;
          v27 = (__int64 *)i;
          if ( v35 )
          {
            RtlpInterlockedPushEntrySList(v34, &v35[3]);
            v27 = (__int64 *)i;
          }
        }
        if ( v35 )
        {
          v12 = v121;
        }
        else
        {
          v51 = (unsigned __int8)(((__int64)v30 - v121 - 16) >> 3);
          v12 = v121;
          *(_WORD *)(v121 + 174) = v51;
        }
        if ( !v28 )
          break;
        _m_prefetchw((const void *)(v28 + 11));
        if ( _InterlockedAnd(v28 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_77;
        v97 = **(_QWORD **)v28;
        *(_QWORD *)v28 = 0LL;
        RtlpInterlockedPushEntrySList(v97, v28 + 12);
      }
LABEL_66:
      v45 = 0LL;
      v46 = 0;
      v47 = 0LL;
      v48 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v124 + 24) + 8LL * *(unsigned __int16 *)(v12 + 172) + 1192)
                                  + 144LL);
      v49 = RtlpInterlockedPopEntrySList(v48);
      if ( !v49 )
        goto LABEL_77;
      while ( 1 )
      {
        v28 = (volatile signed __int32 *)&v49[-3];
        if ( (*((_DWORD *)&v49[-1].Next + 3) & 1) != 0 )
          break;
        _m_prefetchw((const void *)(v28 + 11));
        if ( _InterlockedAnd(v28 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_69;
LABEL_70:
        v28 = 0LL;
        v49 = RtlpInterlockedPopEntrySList(v48);
        if ( !v49 )
          goto LABEL_71;
      }
      if ( !(unsigned int)RtlpSetSegmentInfo(&v49[-3], v12) )
      {
        v49->Next = v45;
        v100 = v49;
        v45 = v49;
        if ( v46 )
          v100 = v47;
        ++v46;
        v47 = v100;
        goto LABEL_70;
      }
      _m_prefetchw((const void *)(v28 + 11));
      if ( _InterlockedAnd(v28 + 11, 0xFFFFFFFD) == 2 )
      {
LABEL_69:
        v50 = **(_QWORD **)v28;
        *(_QWORD *)v28 = 0LL;
        RtlpInterlockedPushEntrySList(v50, v49);
        goto LABEL_70;
      }
      if ( !RtlpIsSubSegmentReuseable(v12, (__int64)&v49[-3]) )
        goto LABEL_70;
LABEL_71:
      if ( v46 )
        InterlockedPushListSList(v48, v45, v47, v46);
LABEL_77:
      if ( v28 )
      {
        *((_BYTE *)v28 + 43) = v129;
        do
        {
          v52 = *((_DWORD *)v28 + 11);
          if ( !v52 || (v52 & 6) != 0 )
            goto LABEL_8;
        }
        while ( v52 != _InterlockedCompareExchange(v28 + 11, v52 | 6, v52) );
        v53 = *(__int64 **)v28;
        if ( *(_QWORD *)v28 == v12 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v54 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v54 = 2147353472LL;
          if ( *(_BYTE *)v54 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL), *((_QWORD *)v28 + 1));
          v28 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v12 + 8), (__int64)v28);
          if ( !v28 )
            continue;
          _m_prefetchw((const void *)(v28 + 11));
          if ( _InterlockedAnd(v28 + 11, 0xFFFFFFF9) == 6 )
          {
            v98 = **(_QWORD **)v28;
            *(_QWORD *)v28 = 0LL;
            RtlpInterlockedPushEntrySList(v98, v28 + 12);
            continue;
          }
          if ( !RtlpIsSubSegmentReuseable(v12, (__int64)v28) )
            continue;
          do
          {
            v55 = *((_DWORD *)v28 + 11);
            if ( !v55 || (v55 & 2) != 0 )
              goto LABEL_8;
          }
          while ( v55 != _InterlockedCompareExchange(v28 + 11, v55 | 2, v55) );
          v56 = *(__int64 **)v28;
          v57 = 0;
LABEL_93:
          v58 = ((_BYTE)v57 + (unsigned __int8)*((_WORD *)v56 + 87)) & 0xF;
          v59 = (__int64 **)v56[v58 + 2];
          v60 = &v56[v58];
          if ( !v59 )
          {
            if ( !_InterlockedCompareExchange64(v60 + 2, (signed __int64)v28, 0LL) )
              continue;
LABEL_159:
            if ( (unsigned int)++v57 >= 0x10 )
              goto LABEL_160;
            goto LABEL_93;
          }
          if ( (*((_DWORD *)v59 + 11) & 1) != 0
            || v59 != (__int64 **)_InterlockedCompareExchange64(v60 + 2, (signed __int64)v28, (signed __int64)v59) )
          {
            goto LABEL_159;
          }
          _m_prefetchw((char *)v59 + 44);
          v61 = *((_DWORD *)v59 + 11);
          do
          {
            v62 = v61;
            v61 = _InterlockedCompareExchange((volatile signed __int32 *)v59 + 11, v61 & 0xFFFFFFFD, v61);
          }
          while ( v62 != v61 );
LABEL_141:
          if ( v61 == 2 )
          {
            v91 = **v59;
            *v59 = 0LL;
            v92 = v59 + 6;
            goto LABEL_143;
          }
          continue;
        }
        _m_prefetchw((const void *)(v28 + 11));
        if ( _InterlockedAnd(v28 + 11, 0xFFFFFFF9) == 6 )
        {
          v92 = (_QWORD **)(v28 + 12);
          v91 = **(_QWORD **)v28;
          *(_QWORD *)v28 = 0LL;
LABEL_143:
          RtlpInterlockedPushEntrySList(v91, v92);
          continue;
        }
        if ( !RtlpIsSubSegmentReuseable((__int64)v53, (__int64)v28) )
          continue;
        do
        {
          v101 = *((_DWORD *)v28 + 11);
          if ( !v101 || (v101 & 2) != 0 )
            goto LABEL_8;
        }
        while ( v101 != _InterlockedCompareExchange(v28 + 11, v101 | 2, v101) );
        v102 = *(__int64 **)v28;
        for ( j = 0; j < 0x10; ++j )
        {
          v104 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v102 + 87)) & 0xF;
          v59 = (__int64 **)v102[v104 + 2];
          v105 = &v102[v104];
          if ( v59 )
          {
            if ( (*((_DWORD *)v59 + 11) & 1) == 0
              && v59 == (__int64 **)_InterlockedCompareExchange64(v105 + 2, (signed __int64)v28, (signed __int64)v59) )
            {
              goto LABEL_140;
            }
          }
          else if ( !_InterlockedCompareExchange64(v105 + 2, (signed __int64)v28, 0LL) )
          {
            goto LABEL_8;
          }
        }
LABEL_160:
        v94 = *(_QWORD *)(**(_QWORD **)v28 + 24LL);
        v95 = *(unsigned __int16 *)(*(_QWORD *)v28 + 172LL);
        v96 = v28 + 12;
LABEL_153:
        RtlpInterlockedPushEntrySList(*(_QWORD *)(v94 + 8 * v95 + 1192) + 144LL, v96);
        continue;
      }
      break;
    }
    v63 = *(_DWORD *)(v12 + 160);
    v64 = *((unsigned __int8 *)v125 + 2);
    v65 = *(_DWORD *)(a1 + 672) & 2;
    do
    {
      v66 = *(_QWORD *)(a1 + 80);
      v67 = 0;
      if ( (_DWORD)v66 == v64 )
      {
        HIDWORD(v122) = HIDWORD(v66) + 1;
        if ( HIDWORD(v66) > 7 )
        {
          v67 = 1;
          HIDWORD(v122) = 0;
        }
      }
      else
      {
        v122 = v64 | 0x100000000LL;
      }
    }
    while ( v66 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v122, v66) );
    if ( !v67 || v65 )
      v63 >>= (v65 != 0) + 3;
    v68 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v125 + 2)];
    SubSegmentBlockCount = RtlpGetSubSegmentBlockCount(v68, v63, *((_BYTE *)v125 + 3) & 1, *(unsigned int *)(v12 + 164));
    v70 = ((((unsigned __int64)SubSegmentBlockCount + 31) >> 3) & 0xFFFFFFFC) + 68 + (v68 + 16) * SubSegmentBlockCount;
    if ( v70 >= 0xF0000 )
      v70 = 983040;
    _BitScanReverse(&v71, v70 - 1);
    v72 = 7;
    v73 = v71 + 1;
    if ( v73 > 7 )
      v72 = v73;
    v74 = 18;
    if ( v72 < 0x12 )
      v74 = v72;
    if ( (*((_BYTE *)v125 + 3) & 6) != 0 )
      v74 = 18;
    v75 = v63 >= 0x400 || v74 == 18;
    UserBlock = RtlpAllocateUserBlock(a1, v74, v68 + 16, v75);
    v77 = UserBlock;
    if ( UserBlock )
    {
      v78 = 1LL << *(_BYTE *)(UserBlock + 16);
      if ( v78 > 0xF0000 )
        v78 = 983040LL;
      v79 = v78 + *(unsigned __int16 *)(UserBlock + 18);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
      v80 = RtlpInterlockedPopEntrySList(ListHead);
      if ( v80 )
      {
        v82 = (volatile signed __int32 *)&v80[-3];
LABEL_121:
        if ( v82 )
        {
          *((_BYTE *)v82 + 43) = v129;
          RtlpSubSegmentInitialize(
            a1,
            (__int64)v82,
            v77,
            (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v125 + 2)],
            v79,
            (__int64)v125);
          do
          {
            v83 = *((_DWORD *)v82 + 11);
            if ( !v83 || (v83 & 6) != 0 )
              goto LABEL_193;
          }
          while ( v83 != _InterlockedCompareExchange(v82 + 11, v83 | 6, v83) );
          v84 = *(__int64 **)v82;
          if ( *(_QWORD *)v82 == v12 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              v85 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v85 = 2147353472LL;
            if ( *(_BYTE *)v85 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapSubSegmentActivate(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL),
                *((_QWORD *)v82 + 1));
            v82 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v12 + 8), (__int64)v82);
            if ( !v82 )
              continue;
            _m_prefetchw((const void *)(v82 + 11));
            if ( _InterlockedAnd(v82 + 11, 0xFFFFFFF9) == 6 )
            {
              v99 = **(_QWORD **)v82;
              *(_QWORD *)v82 = 0LL;
              RtlpInterlockedPushEntrySList(v99, v82 + 12);
              continue;
            }
            if ( !RtlpIsSubSegmentReuseable(v12, (__int64)v82) )
              continue;
            do
            {
              v86 = *((_DWORD *)v82 + 11);
              if ( !v86 || (v86 & 2) != 0 )
                goto LABEL_8;
            }
            while ( v86 != _InterlockedCompareExchange(v82 + 11, v86 | 2, v86) );
            v87 = *(__int64 **)v82;
            v88 = 0;
            while ( 1 )
            {
              v89 = ((_BYTE)v88 + (unsigned __int8)*((_WORD *)v87 + 87)) & 0xF;
              v59 = (__int64 **)v87[v89 + 2];
              v90 = &v87[v89];
              if ( v59 )
              {
                if ( (*((_DWORD *)v59 + 11) & 1) == 0
                  && v59 == (__int64 **)_InterlockedCompareExchange64(v90 + 2, (signed __int64)v82, (signed __int64)v59) )
                {
                  goto LABEL_140;
                }
              }
              else if ( !_InterlockedCompareExchange64(v90 + 2, (signed __int64)v82, 0LL) )
              {
                goto LABEL_8;
              }
              if ( (unsigned int)++v88 >= 0x10 )
                goto LABEL_152;
            }
          }
          _m_prefetchw((const void *)(v82 + 11));
          if ( _InterlockedAnd(v82 + 11, 0xFFFFFFF9) == 6 )
          {
            v106 = v82 + 12;
            v107 = **(_QWORD **)v82;
            *(_QWORD *)v82 = 0LL;
            goto LABEL_192;
          }
          if ( RtlpIsSubSegmentReuseable((__int64)v84, (__int64)v82) )
          {
            do
            {
              v113 = *((_DWORD *)v82 + 11);
              if ( !v113 || (v113 & 2) != 0 )
                goto LABEL_193;
            }
            while ( v113 != _InterlockedCompareExchange(v82 + 11, v113 | 2, v113) );
            v114 = *(__int64 **)v82;
            v115 = 0;
            while ( 1 )
            {
              v116 = ((_BYTE)v115 + (unsigned __int8)*((_WORD *)v114 + 87)) & 0xF;
              v117 = (__int64 **)v114[v116 + 2];
              v118 = &v114[v116];
              if ( v117 )
              {
                if ( (*((_DWORD *)v117 + 11) & 1) == 0
                  && v117 == (__int64 **)_InterlockedCompareExchange64(
                                           v118 + 2,
                                           (signed __int64)v82,
                                           (signed __int64)v117) )
                {
                  _m_prefetchw((char *)v117 + 44);
                  if ( _InterlockedAnd((volatile signed __int32 *)v117 + 11, 0xFFFFFFFD) == 2 )
                  {
                    v107 = **v117;
                    *v117 = 0LL;
                    v106 = (volatile signed __int32 *)(v117 + 6);
LABEL_192:
                    RtlpInterlockedPushEntrySList(v107, v106);
                  }
                  goto LABEL_193;
                }
              }
              else if ( !_InterlockedCompareExchange64(v118 + 2, (signed __int64)v82, 0LL) )
              {
                goto LABEL_193;
              }
              if ( (unsigned int)++v115 >= 0x10 )
              {
                v106 = v82 + 12;
                v107 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v82 + 24LL)
                                 + 8LL * *(unsigned __int16 *)(*(_QWORD *)v82 + 172LL)
                                 + 1192)
                     + 144LL;
                goto LABEL_192;
              }
            }
          }
          do
          {
LABEL_193:
            v108 = *((_DWORD *)v82 + 11);
            if ( !v108 || (v108 & 2) != 0 )
              goto LABEL_8;
          }
          while ( v108 != _InterlockedCompareExchange(v82 + 11, v108 | 2, v108) );
          v109 = *(__int64 **)v82;
          for ( k = 0; k < 0x10; ++k )
          {
            v111 = ((_BYTE)k + (unsigned __int8)*((_WORD *)v109 + 87)) & 0xF;
            v59 = (__int64 **)v109[v111 + 2];
            v112 = &v109[v111];
            if ( v59 )
            {
              if ( (*((_DWORD *)v59 + 11) & 1) == 0
                && v59 == (__int64 **)_InterlockedCompareExchange64(v112 + 2, (signed __int64)v82, (signed __int64)v59) )
              {
LABEL_140:
                _m_prefetchw((char *)v59 + 44);
                v61 = _InterlockedAnd((volatile signed __int32 *)v59 + 11, 0xFFFFFFFD);
                goto LABEL_141;
              }
            }
            else if ( !_InterlockedCompareExchange64(v112 + 2, (signed __int64)v82, 0LL) )
            {
              goto LABEL_8;
            }
          }
LABEL_152:
          v94 = *(_QWORD *)(**(_QWORD **)v82 + 24LL);
          v95 = *(unsigned __int16 *)(*(_QWORD *)v82 + 172LL);
          v96 = v82 + 12;
          goto LABEL_153;
        }
      }
      else
      {
        v93 = RtlpLowFragHeapAllocateFromZone(a1, v129);
        v82 = (volatile signed __int32 *)v93;
        if ( v93 )
        {
          *(_QWORD *)(v93 + 8) = 0LL;
          goto LABEL_121;
        }
      }
      RtlpFreeUserBlock(a1, v77, v81);
    }
    return 0LL;
  }
}
