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
 *     RtlpGetSubSegmentBlockCount @ 0x180069F7C (RtlpGetSubSegmentBlockCount.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800702B4 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180071754 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetSegmentInfo @ 0x180078FF4 (RtlpSetSegmentInfo.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A0C40 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A0C80 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A0CF0 (InterlockedPushListSList.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A1D00 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180109F3C (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x18010A66C (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
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
  _SLIST_HEADER *v34; // rdi
  PSLIST_ENTRY v35; // rbx
  __int64 v36; // r8
  _QWORD *v37; // r9
  int v38; // ecx
  PSLIST_ENTRY v39; // rsi
  _SLIST_ENTRY *Next; // rcx
  __int16 RandomValue32; // ax
  int v42; // ebx
  ULONG CurrentProcessorNumber; // eax
  __int64 v44; // rbx
  char *v45; // rcx
  unsigned int v46; // r14d
  _SLIST_ENTRY *v47; // rbx
  unsigned int v48; // r14d
  _SLIST_ENTRY *v49; // r15
  _SLIST_HEADER *v50; // rsi
  PSLIST_ENTRY v51; // rdi
  __int64 v52; // r8
  __int64 v53; // rcx
  __int16 v54; // ax
  signed __int32 v55; // eax
  __int64 v56; // r8
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  signed __int32 v60; // eax
  __int64 v61; // rax
  __int64 **v62; // rdx
  _QWORD *v63; // rcx
  signed __int32 v64; // eax
  signed __int32 v65; // ett
  unsigned int v66; // ebx
  unsigned int v67; // r9d
  int v68; // r8d
  signed __int64 v69; // rax
  char v70; // r10
  __int64 v71; // rdi
  unsigned int SubSegmentBlockCount; // eax
  unsigned int v73; // eax
  unsigned int v74; // ecx
  unsigned int v75; // eax
  unsigned int v76; // ecx
  unsigned __int8 v77; // cl
  char v78; // r9
  __int64 *UserBlock; // rax
  __int64 *v80; // rdi
  unsigned __int64 v81; // rdx
  __int64 v82; // rsi
  PSLIST_ENTRY v83; // rax
  ULONG v84; // r8d
  __int64 v85; // r9
  volatile signed __int32 *v86; // rbx
  _QWORD *v87; // r9
  signed __int32 v88; // eax
  __int64 v89; // r8
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rcx
  signed __int32 v93; // eax
  __int64 v94; // rax
  _QWORD *v95; // rcx
  __int64 v96; // rcx
  _QWORD **v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  volatile signed __int32 *v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rcx
  PSLIST_ENTRY v105; // rax
  signed __int32 v106; // eax
  __int64 v107; // rax
  _QWORD *v108; // rcx
  volatile signed __int32 *v109; // rdx
  __int64 v110; // rcx
  signed __int32 v111; // eax
  __int64 v112; // rax
  _QWORD *v113; // rcx
  signed __int32 v114; // eax
  __int64 v115; // rax
  __int64 **v116; // rdx
  _QWORD *v117; // rcx
  int v118; // [rsp+30h] [rbp-88h]
  __int64 i; // [rsp+30h] [rbp-88h]
  __int64 v120; // [rsp+38h] [rbp-80h]
  signed __int64 v121; // [rsp+40h] [rbp-78h]
  int v122; // [rsp+48h] [rbp-70h]
  __int64 v123; // [rsp+48h] [rbp-70h]
  unsigned __int16 *v124; // [rsp+50h] [rbp-68h]
  __int64 v125; // [rsp+60h] [rbp-58h]
  _SLIST_HEADER *ListHead; // [rsp+68h] [rbp-50h]
  char v128; // [rsp+C8h] [rbp+10h]

  v4 = 0LL;
  v128 = 0;
  v6 = (unsigned __int16 *)(a1 + 4 * (a2 + 169LL));
  v124 = v6;
  if ( (*(_BYTE *)(a1 + 672) & 1) == 0 && (*((_BYTE *)v6 + 3) & 1) != 0 )
  {
    v7 = NtCurrentTeb();
    HeapData_low = LOBYTE(v7->HeapData);
    UniqueThread_low = LODWORD(v7->ClientId.UniqueThread);
    v4 = (unsigned int)(HeapData_low - 1);
    v128 = HeapData_low - 1;
    if ( (int)v4 < 0 || RtlpAffinityState[HeapData_low] != UniqueThread_low )
    {
      v42 = HIDWORD(RtlpAffinityState[0]);
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v4 = v42 & CurrentProcessorNumber;
      v128 = v42 & CurrentProcessorNumber;
      LOBYTE(v7->HeapData) = (v42 & CurrentProcessorNumber) + 1;
      qword_18016A6C8[v4] = UniqueThread_low;
    }
  }
  v10 = 16LL * *v6;
  v125 = v10;
  ListHead = (_SLIST_HEADER *)(a1 + 48 * (v4 + 68));
  v11 = *((unsigned __int8 *)v6 + 2);
  if ( (_DWORD)v4 )
    v12 = *(_QWORD *)(a1 + 8 * v11 + 2224) - 192LL + 192 * v4;
  else
    v12 = *(_QWORD *)(a1 + 8 * v11 + 1192);
  v120 = v12;
LABEL_8:
  while ( 2 )
  {
    while ( 2 )
    {
      v13 = *(_QWORD *)(v12 + 8);
      if ( v13 )
      {
        v118 = 0;
        v14 = *(_QWORD *)(*(_QWORD *)v12 + 24LL);
        v122 = v14;
        if ( (HIWORD(*(_DWORD *)(v13 + 32)) & 0x8000u) != 0 )
        {
          v118 = 1;
          v44 = v14 + 4LL * *(unsigned __int16 *)(v12 + 172);
          if ( (*(_BYTE *)(v44 + 679) & 1) == 0
            && (int)RtlpAffinitizeSegmentInfoForBucket(v14, *(unsigned __int8 *)(v44 + 678)) >= 0 )
          {
            *(_BYTE *)(v44 + 679) |= 1u;
            v45 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
            if ( *v45 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v14 + 24), *(unsigned __int8 *)(v44 + 678));
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
            + ClearBitAndSet * (((unsigned int)RtlpLFHKey ^ (unsigned int)v19 ^ v122 ^ *(_DWORD *)(v19 + 24)) >> 16)
            + (unsigned __int16)(RtlpLFHKey ^ v19 ^ v122 ^ *(_WORD *)(v19 + 24));
        if ( (*(_BYTE *)(v18 + 15) & 0x3F) != 0 )
        {
          RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL), v18, 0, 0LL, 0LL);
          goto LABEL_20;
        }
LABEL_28:
        if ( v118 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
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
            *(_QWORD *)(v18 + 16LL * *v124) = v25;
            *(_BYTE *)(v18 + 15) = -65;
          }
          else
          {
            *(_BYTE *)(v18 + 15) = v25 | 0x80;
          }
          return v18 + 16;
        }
      }
      v123 = *(_QWORD *)v12;
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
              v46 = *(unsigned __int16 *)(v33 + 32);
              if ( v46 > v32 && !RtlpIsSubSegmentReuseThresholdExceeded(v120, *v31) )
              {
                v28 = (volatile signed __int32 *)v33;
                v30 = (volatile signed __int64 *)(v120 + 16 + 8 * v29);
                v32 = v46;
              }
            }
            v29 = (unsigned int)(v29 + 1);
            ++v31;
          }
          while ( (unsigned int)v29 < 0x10 );
          v10 = v125;
          if ( !v30 )
          {
            v12 = v120;
            v28 = 0LL;
            goto LABEL_66;
          }
          v34 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v123 + 24) + 8LL * *(unsigned __int16 *)(v120 + 172) + 1192)
                                + 144LL);
          v35 = RtlpInterlockedPopEntrySList(v34);
          if ( v35 )
          {
            while ( 1 )
            {
              v38 = *((_DWORD *)&v35[-1].Next + 3);
              v39 = v35;
              v35 -= 3;
              if ( (v38 & 1) != 0 )
                break;
              _m_prefetchw((char *)&v35[2].Next + 12);
              if ( _InterlockedAnd((volatile signed __int32 *)&v35[2].Next + 3, 0xFFFFFFFD) == 2 )
              {
                Next = v35->Next->Next;
                v35->Next = 0LL;
                RtlpInterlockedPushEntrySList(Next, v39, v36, v37);
              }
              v35 = RtlpInterlockedPopEntrySList(v34);
              if ( !v35 )
                goto LABEL_46;
            }
            if ( !(unsigned int)RtlpSetSegmentInfo(v35, v120) )
            {
              RtlpInterlockedPushEntrySList(v34, v39, v36, v37);
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
            RtlpInterlockedPushEntrySList(v34, &v35[3], v36, v37);
            v27 = (__int64 *)i;
          }
        }
        if ( v35 )
        {
          v12 = v120;
        }
        else
        {
          v54 = (unsigned __int8)(((__int64)v30 - v120 - 16) >> 3);
          v12 = v120;
          *(_WORD *)(v120 + 174) = v54;
        }
        if ( !v28 )
          break;
        _m_prefetchw((const void *)(v28 + 11));
        if ( _InterlockedAnd(v28 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_77;
        v102 = **(_QWORD **)v28;
        *(_QWORD *)v28 = 0LL;
        RtlpInterlockedPushEntrySList(v102, v28 + 12, v36, v37);
      }
LABEL_66:
      v47 = 0LL;
      v48 = 0;
      v49 = 0LL;
      v50 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v123 + 24) + 8LL * *(unsigned __int16 *)(v12 + 172) + 1192) + 144LL);
      v51 = RtlpInterlockedPopEntrySList(v50);
      if ( !v51 )
        goto LABEL_77;
      while ( 1 )
      {
        v28 = (volatile signed __int32 *)&v51[-3];
        if ( (*((_DWORD *)&v51[-1].Next + 3) & 1) != 0 )
          break;
        _m_prefetchw((const void *)(v28 + 11));
        if ( _InterlockedAnd(v28 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_69;
LABEL_70:
        v28 = 0LL;
        v51 = RtlpInterlockedPopEntrySList(v50);
        if ( !v51 )
          goto LABEL_71;
      }
      if ( !(unsigned int)RtlpSetSegmentInfo(&v51[-3], v12) )
      {
        v51->Next = v47;
        v105 = v51;
        v47 = v51;
        if ( v48 )
          v105 = v49;
        ++v48;
        v49 = v105;
        goto LABEL_70;
      }
      _m_prefetchw((const void *)(v28 + 11));
      if ( _InterlockedAnd(v28 + 11, 0xFFFFFFFD) == 2 )
      {
LABEL_69:
        v53 = **(_QWORD **)v28;
        *(_QWORD *)v28 = 0LL;
        RtlpInterlockedPushEntrySList(v53, v51, v52, v37);
        goto LABEL_70;
      }
      if ( !RtlpIsSubSegmentReuseable(v12, (__int64)&v51[-3]) )
        goto LABEL_70;
LABEL_71:
      if ( v48 )
        InterlockedPushListSList(v50, v47, v49, v48);
LABEL_77:
      if ( v28 )
      {
        *((_BYTE *)v28 + 43) = v128;
        do
        {
          v55 = *((_DWORD *)v28 + 11);
          if ( !v55 || (v55 & 6) != 0 )
            goto LABEL_8;
        }
        while ( v55 != _InterlockedCompareExchange(v28 + 11, v55 | 6, v55) );
        v56 = *(_QWORD *)v28;
        if ( *(_QWORD *)v28 == v12 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v59 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v59 = 2147353472LL;
          if ( *(_BYTE *)v59 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL), *((_QWORD *)v28 + 1));
          v28 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v12 + 8), (__int64)v28);
          if ( !v28 )
            continue;
          _m_prefetchw((const void *)(v28 + 11));
          if ( _InterlockedAnd(v28 + 11, 0xFFFFFFF9) == 6 )
          {
            v103 = **(_QWORD **)v28;
            *(_QWORD *)v28 = 0LL;
            RtlpInterlockedPushEntrySList(v103, v28 + 12, v57, v58);
            continue;
          }
          if ( !RtlpIsSubSegmentReuseable(v12, (__int64)v28) )
            continue;
          do
          {
            v60 = *((_DWORD *)v28 + 11);
            if ( !v60 || (v60 & 2) != 0 )
              goto LABEL_8;
          }
          while ( v60 != _InterlockedCompareExchange(v28 + 11, v60 | 2, v60) );
          v37 = *(_QWORD **)v28;
          v56 = 0LL;
LABEL_93:
          v61 = ((_BYTE)v56 + (unsigned __int8)*((_WORD *)v37 + 87)) & 0xF;
          v62 = (__int64 **)v37[v61 + 2];
          v63 = &v37[v61];
          if ( !v62 )
          {
            if ( !_InterlockedCompareExchange64(v63 + 2, (signed __int64)v28, 0LL) )
              continue;
LABEL_159:
            v56 = (unsigned int)(v56 + 1);
            if ( (unsigned int)v56 >= 0x10 )
              goto LABEL_160;
            goto LABEL_93;
          }
          if ( (*((_DWORD *)v62 + 11) & 1) != 0
            || v62 != (__int64 **)_InterlockedCompareExchange64(v63 + 2, (signed __int64)v28, (signed __int64)v62) )
          {
            goto LABEL_159;
          }
          _m_prefetchw((char *)v62 + 44);
          v64 = *((_DWORD *)v62 + 11);
          do
          {
            v65 = v64;
            v64 = _InterlockedCompareExchange((volatile signed __int32 *)v62 + 11, v64 & 0xFFFFFFFD, v64);
          }
          while ( v65 != v64 );
LABEL_141:
          if ( v64 == 2 )
          {
            v96 = **v62;
            *v62 = 0LL;
            v97 = v62 + 6;
            goto LABEL_143;
          }
          continue;
        }
        _m_prefetchw((const void *)(v28 + 11));
        if ( _InterlockedAnd(v28 + 11, 0xFFFFFFF9) == 6 )
        {
          v97 = (_QWORD **)(v28 + 12);
          v96 = **(_QWORD **)v28;
          *(_QWORD *)v28 = 0LL;
LABEL_143:
          RtlpInterlockedPushEntrySList(v96, v97, v56, v37);
          continue;
        }
        if ( !RtlpIsSubSegmentReuseable(v56, (__int64)v28) )
          continue;
        do
        {
          v106 = *((_DWORD *)v28 + 11);
          if ( !v106 || (v106 & 2) != 0 )
            goto LABEL_8;
        }
        while ( v106 != _InterlockedCompareExchange(v28 + 11, v106 | 2, v106) );
        v37 = *(_QWORD **)v28;
        v56 = 0LL;
        do
        {
          v107 = ((_BYTE)v56 + (unsigned __int8)*((_WORD *)v37 + 87)) & 0xF;
          v62 = (__int64 **)v37[v107 + 2];
          v108 = &v37[v107];
          if ( v62 )
          {
            if ( (*((_DWORD *)v62 + 11) & 1) == 0
              && v62 == (__int64 **)_InterlockedCompareExchange64(v108 + 2, (signed __int64)v28, (signed __int64)v62) )
            {
              goto LABEL_140;
            }
          }
          else if ( !_InterlockedCompareExchange64(v108 + 2, (signed __int64)v28, 0LL) )
          {
            goto LABEL_8;
          }
          v56 = (unsigned int)(v56 + 1);
        }
        while ( (unsigned int)v56 < 0x10 );
LABEL_160:
        v99 = *(_QWORD *)(**(_QWORD **)v28 + 24LL);
        v100 = *(unsigned __int16 *)(*(_QWORD *)v28 + 172LL);
        v101 = v28 + 12;
LABEL_153:
        RtlpInterlockedPushEntrySList(*(_QWORD *)(v99 + 8 * v100 + 1192) + 144LL, v101, v56, v37);
        continue;
      }
      break;
    }
    v66 = *(_DWORD *)(v12 + 160);
    v67 = *((unsigned __int8 *)v124 + 2);
    v68 = *(_DWORD *)(a1 + 672) & 2;
    do
    {
      v69 = *(_QWORD *)(a1 + 80);
      v70 = 0;
      if ( (_DWORD)v69 == v67 )
      {
        HIDWORD(v121) = HIDWORD(v69) + 1;
        if ( HIDWORD(v69) > 7 )
        {
          v70 = 1;
          HIDWORD(v121) = 0;
        }
      }
      else
      {
        v121 = v67 | 0x100000000LL;
      }
    }
    while ( v69 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v121, v69) );
    if ( !v70 || v68 )
      v66 >>= (v68 != 0) + 3;
    v71 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v124 + 2)];
    SubSegmentBlockCount = RtlpGetSubSegmentBlockCount(v71, v66, *((_BYTE *)v124 + 3) & 1, *(unsigned int *)(v12 + 164));
    v73 = ((((unsigned __int64)SubSegmentBlockCount + 31) >> 3) & 0xFFFFFFFC) + 68 + (v71 + 16) * SubSegmentBlockCount;
    if ( v73 >= 0xF0000 )
      v73 = 983040;
    _BitScanReverse(&v74, v73 - 1);
    v75 = 7;
    v76 = v74 + 1;
    if ( v76 > 7 )
      v75 = v76;
    v77 = 18;
    if ( v75 < 0x12 )
      v77 = v75;
    if ( (*((_BYTE *)v124 + 3) & 6) != 0 )
      v77 = 18;
    v78 = v66 >= 0x400 || v77 == 18;
    UserBlock = (__int64 *)RtlpAllocateUserBlock(a1, v77, v71 + 16, v78);
    v80 = UserBlock;
    if ( UserBlock )
    {
      v81 = 1LL << *((_BYTE *)UserBlock + 16);
      if ( v81 > 0xF0000 )
        v81 = 983040LL;
      v82 = v81 + *((unsigned __int16 *)UserBlock + 9);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
      v83 = RtlpInterlockedPopEntrySList(ListHead);
      if ( v83 )
      {
        v86 = (volatile signed __int32 *)&v83[-3];
LABEL_121:
        if ( v86 )
        {
          *((_BYTE *)v86 + 43) = v128;
          RtlpSubSegmentInitialize(
            a1,
            (__int64)v86,
            (__int64)v80,
            (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v124 + 2)],
            v82,
            (__int64)v124);
          do
          {
            v88 = *((_DWORD *)v86 + 11);
            if ( !v88 || (v88 & 6) != 0 )
              goto LABEL_193;
          }
          while ( v88 != _InterlockedCompareExchange(v86 + 11, v88 | 6, v88) );
          v89 = *(_QWORD *)v86;
          if ( *(_QWORD *)v86 == v12 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v92 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v92 = 2147353472LL;
            if ( *(_BYTE *)v92 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapSubSegmentActivate(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL),
                *((_QWORD *)v86 + 1));
            v86 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v12 + 8), (__int64)v86);
            if ( !v86 )
              continue;
            _m_prefetchw((const void *)(v86 + 11));
            if ( _InterlockedAnd(v86 + 11, 0xFFFFFFF9) == 6 )
            {
              v104 = **(_QWORD **)v86;
              *(_QWORD *)v86 = 0LL;
              RtlpInterlockedPushEntrySList(v104, v86 + 12, v90, v91);
              continue;
            }
            if ( !RtlpIsSubSegmentReuseable(v12, (__int64)v86) )
              continue;
            do
            {
              v93 = *((_DWORD *)v86 + 11);
              if ( !v93 || (v93 & 2) != 0 )
                goto LABEL_8;
            }
            while ( v93 != _InterlockedCompareExchange(v86 + 11, v93 | 2, v93) );
            v37 = *(_QWORD **)v86;
            v56 = 0LL;
            while ( 1 )
            {
              v94 = ((_BYTE)v56 + (unsigned __int8)*((_WORD *)v37 + 87)) & 0xF;
              v62 = (__int64 **)v37[v94 + 2];
              v95 = &v37[v94];
              if ( v62 )
              {
                if ( (*((_DWORD *)v62 + 11) & 1) == 0
                  && v62 == (__int64 **)_InterlockedCompareExchange64(v95 + 2, (signed __int64)v86, (signed __int64)v62) )
                {
                  goto LABEL_140;
                }
              }
              else if ( !_InterlockedCompareExchange64(v95 + 2, (signed __int64)v86, 0LL) )
              {
                goto LABEL_8;
              }
              v56 = (unsigned int)(v56 + 1);
              if ( (unsigned int)v56 >= 0x10 )
                goto LABEL_152;
            }
          }
          _m_prefetchw((const void *)(v86 + 11));
          if ( _InterlockedAnd(v86 + 11, 0xFFFFFFF9) == 6 )
          {
            v109 = v86 + 12;
            v110 = **(_QWORD **)v86;
            *(_QWORD *)v86 = 0LL;
            goto LABEL_192;
          }
          if ( RtlpIsSubSegmentReuseable(v89, (__int64)v86) )
          {
            do
            {
              v114 = *((_DWORD *)v86 + 11);
              if ( !v114 || (v114 & 2) != 0 )
                goto LABEL_193;
            }
            while ( v114 != _InterlockedCompareExchange(v86 + 11, v114 | 2, v114) );
            v87 = *(_QWORD **)v86;
            v89 = 0LL;
            while ( 1 )
            {
              v115 = ((_BYTE)v89 + (unsigned __int8)*((_WORD *)v87 + 87)) & 0xF;
              v116 = (__int64 **)v87[v115 + 2];
              v117 = &v87[v115];
              if ( v116 )
              {
                if ( (*((_DWORD *)v116 + 11) & 1) == 0
                  && v116 == (__int64 **)_InterlockedCompareExchange64(
                                           v117 + 2,
                                           (signed __int64)v86,
                                           (signed __int64)v116) )
                {
                  _m_prefetchw((char *)v116 + 44);
                  if ( _InterlockedAnd((volatile signed __int32 *)v116 + 11, 0xFFFFFFFD) == 2 )
                  {
                    v110 = **v116;
                    *v116 = 0LL;
                    v109 = (volatile signed __int32 *)(v116 + 6);
LABEL_192:
                    RtlpInterlockedPushEntrySList(v110, v109, v89, v87);
                  }
                  goto LABEL_193;
                }
              }
              else if ( !_InterlockedCompareExchange64(v117 + 2, (signed __int64)v86, 0LL) )
              {
                goto LABEL_193;
              }
              v89 = (unsigned int)(v89 + 1);
              if ( (unsigned int)v89 >= 0x10 )
              {
                v109 = v86 + 12;
                v110 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v86 + 24LL)
                                 + 8LL * *(unsigned __int16 *)(*(_QWORD *)v86 + 172LL)
                                 + 1192)
                     + 144LL;
                goto LABEL_192;
              }
            }
          }
          do
          {
LABEL_193:
            v111 = *((_DWORD *)v86 + 11);
            if ( !v111 || (v111 & 2) != 0 )
              goto LABEL_8;
          }
          while ( v111 != _InterlockedCompareExchange(v86 + 11, v111 | 2, v111) );
          v37 = *(_QWORD **)v86;
          v56 = 0LL;
          do
          {
            v112 = ((_BYTE)v56 + (unsigned __int8)*((_WORD *)v37 + 87)) & 0xF;
            v62 = (__int64 **)v37[v112 + 2];
            v113 = &v37[v112];
            if ( v62 )
            {
              if ( (*((_DWORD *)v62 + 11) & 1) == 0
                && v62 == (__int64 **)_InterlockedCompareExchange64(v113 + 2, (signed __int64)v86, (signed __int64)v62) )
              {
LABEL_140:
                _m_prefetchw((char *)v62 + 44);
                v64 = _InterlockedAnd((volatile signed __int32 *)v62 + 11, 0xFFFFFFFD);
                goto LABEL_141;
              }
            }
            else if ( !_InterlockedCompareExchange64(v113 + 2, (signed __int64)v86, 0LL) )
            {
              goto LABEL_8;
            }
            v56 = (unsigned int)(v56 + 1);
          }
          while ( (unsigned int)v56 < 0x10 );
LABEL_152:
          v99 = *(_QWORD *)(**(_QWORD **)v86 + 24LL);
          v100 = *(unsigned __int16 *)(*(_QWORD *)v86 + 172LL);
          v101 = v86 + 12;
          goto LABEL_153;
        }
      }
      else
      {
        v98 = RtlpLowFragHeapAllocateFromZone((PRTL_SRWLOCK)a1);
        v86 = (volatile signed __int32 *)v98;
        if ( v98 )
        {
          *(_QWORD *)(v98 + 8) = 0LL;
          goto LABEL_121;
        }
      }
      RtlpFreeUserBlock(a1, v80, v84, v85);
    }
    return 0LL;
  }
}
