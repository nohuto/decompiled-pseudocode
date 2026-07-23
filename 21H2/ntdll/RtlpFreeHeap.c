/*
 * XREFs of RtlpFreeHeap @ 0x180025C00
 * Callers:
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHeapRemoveListEntry @ 0x18000A774 (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x18000ED0C (RtlpCommitBlock.c)
 *     RtlLogStackBackTraceEx @ 0x180011AA0 (RtlLogStackBackTraceEx.c)
 *     RtlpHeapAddListEntry @ 0x18001E1AC (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x18001E25C (RtlpFindEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x18001E2D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18001E940 (RtlpInsertFreeBlock.c)
 *     RtlTryEnterCriticalSection @ 0x1800207E0 (RtlTryEnterCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlBackoff @ 0x18005E2E8 (RtlBackoff.c)
 *     RtlpWakeByAddress @ 0x18006471C (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180065030 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpHeapListCompare @ 0x18006EB28 (RtlpHeapListCompare.c)
 *     RtlpUpdateHeapRates @ 0x18007CD4C (RtlpUpdateHeapRates.c)
 *     RtlpUpdateHeapWatermarks @ 0x180087C38 (RtlpUpdateHeapWatermarks.c)
 *     ZwSetEvent @ 0x18009D7C0 (ZwSetEvent.c)
 *     RtlCompareMemoryUlong @ 0x1800A2030 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E90D0 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x1800F4CF0 (RtlpUpdateTagEntry.c)
 *     RtlDebugFreeHeap @ 0x1800F93AC (RtlDebugFreeHeap.c)
 *     RtlpBreakPointHeap @ 0x1800FA5AC (RtlpBreakPointHeap.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107E64 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x180108384 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x180109FF8 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x18010A288 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpFreeHeap(unsigned __int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  char v6; // r12
  int v8; // edi
  __int64 v9; // r8
  _DWORD *SharedData; // rcx
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // edx
  __int64 **v16; // rcx
  int v17; // edx
  _BYTE *v18; // r8
  char v19; // al
  unsigned __int16 *v20; // rdi
  unsigned __int64 v21; // rax
  _WORD *v22; // rdx
  bool v23; // zf
  int v24; // r8d
  int v25; // edx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  int v29; // edx
  unsigned __int64 v30; // r10
  __int64 v31; // r14
  __int64 *v32; // r15
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // r14
  int v40; // edx
  char v41; // al
  SIZE_T v42; // rsi
  SIZE_T v43; // r14
  unsigned __int64 v44; // r8
  __int64 v45; // r15
  __int64 *v46; // r12
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // rdx
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rcx
  __int64 v52; // rax
  char v53; // al
  SIZE_T v54; // rdi
  SIZE_T v55; // r15
  __int64 v56; // r8
  unsigned int v57; // edi
  unsigned __int64 v58; // rdx
  _QWORD *v59; // rax
  __int64 *v60; // r13
  unsigned __int64 v61; // rcx
  unsigned int v62; // r15d
  unsigned int v63; // r15d
  __int64 v64; // r9
  _QWORD *v65; // r14
  _QWORD *v66; // r12
  _QWORD *v67; // rax
  int v68; // edi
  __int64 v69; // r8
  int v70; // edi
  __int64 v71; // rcx
  _QWORD *v72; // rdi
  __int64 v73; // rdi
  unsigned int v74; // r9d
  unsigned int *v75; // r8
  unsigned int v76; // edx
  int v77; // ecx
  __int64 v78; // rdi
  int v79; // ecx
  _QWORD *v80; // rcx
  __int64 *v81; // rax
  __int64 *v82; // rdi
  unsigned __int64 v83; // r14
  unsigned __int64 v84; // rcx
  unsigned int v85; // ecx
  unsigned int v86; // r15d
  __int64 v87; // r12
  __int64 v88; // r13
  unsigned int v89; // esi
  int v90; // r14d
  unsigned __int64 v91; // r14
  _DWORD *v92; // r8
  unsigned __int64 v93; // rdx
  _QWORD *v94; // rdi
  _QWORD *Entry; // r8
  int v96; // ecx
  int v97; // eax
  _QWORD *v98; // r14
  __int64 *v99; // rax
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // rdi
  int v102; // eax
  int v103; // edx
  unsigned __int16 v104; // cx
  unsigned __int64 v105; // rdi
  unsigned __int64 v106; // rsi
  __int64 v107; // rax
  __int64 *v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // r9
  __int64 v111; // r8
  __int64 v112; // rdi
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rdi
  __int64 v116; // rcx
  unsigned __int64 v117; // rcx
  __int64 v118; // rsi
  signed __int32 v119; // ebx
  void *DeferredCriticalSectionEvent; // r9
  int v121; // eax
  signed __int32 v122[8]; // [rsp+0h] [rbp-1A8h] BYREF
  char v123[8]; // [rsp+20h] [rbp-188h]
  char v124; // [rsp+40h] [rbp-168h]
  char v125; // [rsp+41h] [rbp-167h]
  __int16 updated; // [rsp+44h] [rbp-164h]
  char v127; // [rsp+48h] [rbp-160h]
  ULONG_PTR v128; // [rsp+50h] [rbp-158h] BYREF
  int v129[2]; // [rsp+58h] [rbp-150h]
  unsigned __int64 v130; // [rsp+60h] [rbp-148h]
  unsigned __int8 v131; // [rsp+68h] [rbp-140h]
  __int16 v132; // [rsp+6Ah] [rbp-13Eh]
  __int16 v133; // [rsp+6Ch] [rbp-13Ch]
  unsigned int v134; // [rsp+70h] [rbp-138h]
  unsigned int v135; // [rsp+74h] [rbp-134h]
  int v136; // [rsp+78h] [rbp-130h] BYREF
  __int64 v137; // [rsp+80h] [rbp-128h]
  unsigned __int64 v138; // [rsp+88h] [rbp-120h] BYREF
  unsigned __int64 v139; // [rsp+90h] [rbp-118h]
  int v140[2]; // [rsp+98h] [rbp-110h]
  unsigned int v141; // [rsp+A0h] [rbp-108h]
  unsigned int NtGlobalFlag; // [rsp+A4h] [rbp-104h]
  __int64 v143; // [rsp+A8h] [rbp-100h]
  SIZE_T v144; // [rsp+B0h] [rbp-F8h]
  unsigned __int64 v145; // [rsp+B8h] [rbp-F0h]
  __int64 v146; // [rsp+D0h] [rbp-D8h]
  SIZE_T v147; // [rsp+D8h] [rbp-D0h]
  unsigned int *v148; // [rsp+E0h] [rbp-C8h]
  __int64 v149; // [rsp+E8h] [rbp-C0h]
  unsigned __int64 v150; // [rsp+F0h] [rbp-B8h]
  __int64 v151; // [rsp+F8h] [rbp-B0h]
  __int64 v152; // [rsp+100h] [rbp-A8h]
  struct _TEB *v153; // [rsp+108h] [rbp-A0h]
  struct _TEB *v154; // [rsp+110h] [rbp-98h]
  unsigned __int64 v155; // [rsp+118h] [rbp-90h]
  int v156; // [rsp+128h] [rbp-80h]
  int v157; // [rsp+138h] [rbp-70h]
  int v158; // [rsp+148h] [rbp-60h]
  int v159; // [rsp+158h] [rbp-50h]
  unsigned int v160; // [rsp+168h] [rbp-40h]
  int v161; // [rsp+178h] [rbp-30h]
  unsigned __int64 v162; // [rsp+1C0h] [rbp+18h]

  v162 = a3;
  v6 = 1;
  v125 = 1;
  v124 = 0;
  v135 = 1;
  v138 = 0LL;
  updated = 0;
  if ( a1 == a3 )
  {
    RtlpLogHeapFailure(9, a1, a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v8 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v8 & 0x7D010F60) != 0 )
  {
    v6 = 0;
    v125 = 0;
    v9 = 4LL;
    if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
      return RtlDebugFreeHeap((void *)a1);
  }
  else
  {
    v9 = 3LL;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    v12 = 2147353472LL;
  }
  else
  {
    v12 = 2147353472LL;
    v11 = 2147353472LL;
  }
  if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v13 = v162;
    if ( ((*(_BYTE *)(v162 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
      RtlpLogHeapFreeEvent(a1, a4, v9, a4);
  }
  else
  {
    v13 = v162;
  }
  if ( (v8 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v17 = *(_DWORD *)(v13 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v13 + 8) = v17;
      if ( HIBYTE(v17) != ((unsigned __int8)v17 ^ (unsigned __int8)(BYTE1(v17) ^ BYTE2(v17))) )
        RtlpAnalyzeHeapFailure(a1, v13);
    }
  }
  else
  {
    if ( RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
    {
      ++*(_DWORD *)(a1 + 616);
    }
    else
    {
      if ( byte_18016C508 )
      {
        v153 = NtCurrentTeb();
        v153->LastStatusValue = -1073741420;
        v154 = NtCurrentTeb();
        v154->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        v135 = 0;
LABEL_275:
        v57 = 256;
        v56 = 0xFFFFFFFFLL;
        goto LABEL_276;
      }
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      RtlpUpdateHeapRates(a1, 1LL);
    }
    v124 = 1;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v15 = *(_DWORD *)(v13 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v13 + 8) = v15;
      if ( HIBYTE(v15) != ((unsigned __int8)v15 ^ (unsigned __int8)(BYTE1(v15) ^ BYTE2(v15))) )
        RtlpAnalyzeHeapFailure(a1, v13);
    }
    v16 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *(unsigned __int16 *)(v13 + 8) < (unsigned __int64)*((unsigned int *)v16 + 2) )
        break;
      v16 = (__int64 **)*v16;
    }
    while ( v16 );
  }
  v18 = (_BYTE *)(v13 + 10);
  v19 = *(_BYTE *)(v13 + 10);
  if ( (v19 & 8) != 0 )
    *v18 = v19 & 0xF7;
  if ( *(_BYTE *)(v13 + 15) == 4 )
  {
    v106 = v13 - 48;
    *(_QWORD *)v129 = v106;
    *(_QWORD *)v140 = *(_QWORD *)(v106 + 32);
    v138 = v106 & 0xFFFFFFFFFFFF0000uLL;
    *(_QWORD *)(a1 + 592) -= *(_QWORD *)v140;
    v107 = *(_QWORD *)v106;
    v108 = *(__int64 **)(v106 + 8);
    v109 = *v108;
    v110 = *(_QWORD *)(*(_QWORD *)v106 + 8LL);
    if ( *v108 == v110 && v109 == v106 )
    {
      *v108 = v107;
      *(_QWORD *)(v107 + 8) = v108;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, v106, v110, v109, 0LL);
    }
    if ( !v6 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v111 = *(_QWORD *)(v106 + 32) >> 4;
        v106 = *(_QWORD *)v129;
        RtlpUpdateTagEntry(a1, *(unsigned __int16 *)(*(_QWORD *)v129 + 18LL), v111, 0, 3);
      }
      else
      {
        v106 = *(_QWORD *)v129;
      }
    }
    if ( v124 )
    {
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v124 = 0;
    }
    v112 = *(_QWORD *)(v106 + 40);
    v152 = v112;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v113 = (__int64)NtCurrentPeb()->SharedData + 558;
      LODWORD(v106) = v129[0];
      v112 = v152;
    }
    else
    {
      v113 = 2147353480LL;
    }
    if ( *(_BYTE *)v113 )
      RtlpHeapLogRangeRelease(a1, v138, v112);
    v128 = 0LL;
    RtlpSecMemFreeVirtualMemory(v113, (PVOID *)&v138, &v128, 0x8000u);
    if ( RtlGetCurrentServiceSessionId() )
    {
      v114 = (__int64)NtCurrentPeb()->SharedData + 550;
      LODWORD(v106) = v129[0];
    }
    else
    {
      v114 = 2147353472LL;
    }
    if ( *(_BYTE *)v114 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v12 = (__int64)NtCurrentPeb()->SharedData + 550;
        LODWORD(v106) = v129[0];
        RtlpLogHeapContractEvent(
          a1,
          v129[0],
          v140[0],
          16 * *(_QWORD *)(a1 + 192),
          0,
          0LL,
          (HANDLE)*(unsigned __int8 *)v12);
      }
      else
      {
        LODWORD(v106) = v129[0];
      }
    }
    v115 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v116 = (__int64)NtCurrentPeb()->SharedData + 560;
      LODWORD(v106) = v129[0];
    }
    else
    {
      v116 = 2147353482LL;
    }
    if ( *(_BYTE *)v116 )
    {
      if ( RtlGetCurrentServiceSessionId() )
      {
        v115 = (__int64)NtCurrentPeb()->SharedData + 560;
        LODWORD(v106) = v129[0];
      }
      RtlpLogHeapContractEvent(a1, v106, v140[0], 16 * *(_QWORD *)(a1 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v115);
    }
    goto LABEL_275;
  }
  v20 = (unsigned __int16 *)(v13 + 8);
  v21 = *(unsigned __int16 *)(v13 + 8);
  if ( (unsigned __int16)v21 < *(_WORD *)(a1 + 432) )
  {
    if ( ((unsigned __int8)(1 << (*(_WORD *)(v13 + 8) & 7)) & *(_BYTE *)((v21 >> 3) + a1 + 434)) == 0 )
    {
      v22 = (_WORD *)(*(_QWORD *)(a1 + 424) + 2LL * *v20);
      if ( *v22 > 1u )
        --*v22;
    }
    v13 = v162;
  }
  if ( !v6 )
  {
    v141 = NtCurrentPeb()->NtGlobalFlag;
    v13 = v162;
    if ( (v141 & 0x800) != 0 )
    {
      *(_DWORD *)v123 = 2;
      v23 = (*v18 & 2) == 0;
      v24 = *(unsigned __int16 *)(a3 + 8);
      if ( v23 )
      {
        v131 = *(_BYTE *)(v162 + 11);
        v25 = v131;
      }
      else
      {
        v25 = *(unsigned __int16 *)(v162 + 16LL * *(unsigned __int16 *)(a3 + 8) - 14);
      }
      updated = RtlpUpdateTagEntry(a1, v25, v24, 0, *(_DWORD *)v123);
    }
  }
  v26 = *v20;
  v128 = v26;
  if ( *(char *)(a1 + 112) >= 0 )
  {
    v127 = 0;
    v145 = v13;
    v27 = 16 * (*(unsigned __int16 *)(v13 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140));
    v28 = v13 - v27;
    if ( v13 - v27 != v13
      && ((*(_BYTE *)(v28 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v29 = *(_DWORD *)(v28 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v28 + 8) = v29;
        if ( HIBYTE(v29) != ((unsigned __int8)v29 ^ (unsigned __int8)(BYTE1(v29) ^ BYTE2(v29))) )
          RtlpAnalyzeHeapFailure(a1, v28);
      }
      v30 = v28 + 16;
      v31 = *(_QWORD *)(v28 + 16);
      v32 = *(__int64 **)(v28 + 24);
      v33 = *v32;
      v34 = *(_QWORD *)(v31 + 8);
      if ( *v32 == v34 && v33 == v30 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v28 + 8);
        v35 = *(_QWORD *)(a1 + 312);
        if ( v35 )
        {
          v36 = *(unsigned __int16 *)(v28 + 8);
          while ( 1 )
          {
            v37 = *(unsigned int *)(v35 + 8);
            if ( v36 < v37 )
            {
              v38 = *(unsigned __int16 *)(v28 + 8);
              goto LABEL_61;
            }
            if ( !*(_QWORD *)v35 )
              break;
            v35 = *(_QWORD *)v35;
          }
          v38 = (unsigned int)(v37 - 1);
LABEL_61:
          v143 = v38;
          RtlpHeapRemoveListEntry(a1, v35, 1, (__int64 *)(v28 + 16), v38, v36);
        }
        *v32 = v31;
        *(_QWORD *)(v31 + 8) = v32;
        if ( (*(_BYTE *)(v28 + 10) & 8) == 0 || RtlpCommitBlock(a1, v28) )
        {
          v41 = *(_BYTE *)(v28 + 10);
          if ( (v41 & 4) != 0 )
          {
            v42 = 16LL * *(unsigned __int16 *)(v28 + 8) - 32;
            v144 = v42;
            if ( (v41 & 2) != 0 && v42 > 4 )
            {
              v42 -= 4LL;
              v144 = v42;
            }
            v43 = RtlCompareMemoryUlong((PVOID)(v28 + 32), v42, 0xFEEEFEEE);
            if ( v43 != v42 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v28,
                (const void *)(v43 + v28 + 32));
              RtlpBreakPointHeap();
            }
          }
          *(_BYTE *)(v28 + 10) = 0;
          *(_BYTE *)(v28 + 15) = 0;
          v13 = v28;
          v145 = v28;
          v128 += *(unsigned __int16 *)(v28 + 8);
          *(_WORD *)(v28 + 8) = v128;
          *(_WORD *)(v28 + 16 * v128 + 12) = v128 ^ *(_WORD *)(a1 + 140);
        }
        else
        {
          RtlpDeCommitFreeBlock(a1, v28, *(unsigned __int16 *)(v28 + 8), 1);
        }
        v26 = v128;
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v30, v34, v33, 0LL);
        v26 = v128;
      }
    }
    v39 = v13 + 16 * v26;
    if ( !*(_DWORD *)(a1 + 124) )
      goto LABEL_70;
    v156 = *(_DWORD *)(v39 + 8) ^ *(_DWORD *)(a1 + 136);
    if ( HIBYTE(v156) != ((unsigned __int8)v156 ^ (unsigned __int8)(BYTE1(v156) ^ BYTE2(v156))) )
      RtlpLogHeapFailure(3, a1, v13 + 16 * v26, 0, 0LL, 0LL);
    while ( 1 )
    {
      v26 = v128;
LABEL_70:
      if ( ((*(_BYTE *)(v39 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
        break;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v40 = *(_DWORD *)(v39 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v39 + 8) = v40;
        if ( HIBYTE(v40) != ((unsigned __int8)v40 ^ (unsigned __int8)(BYTE1(v40) ^ BYTE2(v40))) )
          RtlpAnalyzeHeapFailure(a1, v39);
      }
      v44 = v39 + 16;
      v45 = *(_QWORD *)(v39 + 16);
      v46 = *(__int64 **)(v39 + 24);
      v47 = *v46;
      v48 = *(_QWORD *)(v45 + 8);
      if ( *v46 == v48 && v47 == v44 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v39 + 8);
        v49 = *(_QWORD *)(a1 + 312);
        if ( v49 )
        {
          v50 = *(unsigned __int16 *)(v39 + 8);
          while ( 1 )
          {
            v51 = *(unsigned int *)(v49 + 8);
            if ( v50 < v51 )
            {
              v52 = *(unsigned __int16 *)(v39 + 8);
              goto LABEL_95;
            }
            if ( !*(_QWORD *)v49 )
              break;
            v49 = *(_QWORD *)v49;
          }
          v52 = (unsigned int)(v51 - 1);
LABEL_95:
          v146 = v52;
          RtlpHeapRemoveListEntry(a1, v49, 1, (__int64 *)(v39 + 16), v52, v50);
        }
        *v46 = v45;
        *(_QWORD *)(v45 + 8) = v46;
        if ( (*(_BYTE *)(v39 + 10) & 8) == 0 || RtlpCommitBlock(a1, v39) )
        {
          v53 = *(_BYTE *)(v39 + 10);
          if ( (v53 & 4) != 0 )
          {
            v54 = 16LL * *(unsigned __int16 *)(v39 + 8) - 32;
            v147 = v54;
            if ( (v53 & 2) != 0 && v54 > 4 )
            {
              v54 -= 4LL;
              v147 = v54;
            }
            v55 = RtlCompareMemoryUlong((PVOID)(v39 + 32), v54, 0xFEEEFEEE);
            if ( v55 != v54 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v39,
                (const void *)(v55 + v39 + 32));
              RtlpBreakPointHeap();
            }
          }
          *(_BYTE *)(v13 + 10) = 0;
          *(_BYTE *)(v13 + 15) = 0;
          v128 += *(unsigned __int16 *)(v39 + 8);
          *(_WORD *)(v13 + 8) = v128;
          *(_WORD *)(v13 + 16 * v128 + 12) = v128 ^ *(_WORD *)(a1 + 140);
          v26 = v128;
          break;
        }
        RtlpDeCommitFreeBlock(a1, v39, *(unsigned __int16 *)(v39 + 8), 1);
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v44, v48, v47, 0LL);
      }
    }
    v162 = v13;
    v6 = v125;
  }
  if ( v26 < *(_QWORD *)(a1 + 176) || v26 + *(_QWORD *)(a1 + 192) < *(_QWORD *)(a1 + 184) )
  {
    if ( v26 + *(_QWORD *)(a1 + 192) > *(_QWORD *)(a1 + 184) )
    {
      v57 = 256;
      if ( v26 >= 0x100 && *(_WORD *)(a1 + 140) == *(_WORD *)(v13 + 12) )
      {
        RtlpDeCommitFreeBlock(a1, v13, v26, 0);
        updated = 0;
        v56 = 0xFFFFFFFFLL;
        goto LABEL_276;
      }
    }
    if ( v26 > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v13, v26);
      v56 = 0xFFFFFFFFLL;
      goto LABEL_235;
    }
    if ( v6 )
    {
      v58 = (unsigned __int16)v26;
      v130 = (unsigned __int16)v26;
      *(_BYTE *)(v13 + 10) = 0;
      *(_BYTE *)(v13 + 15) = 0;
      v59 = (_QWORD *)(a1 + 336);
      v60 = *(__int64 **)(a1 + 312);
      if ( v60 )
      {
        while ( 1 )
        {
          v61 = *((unsigned int *)v60 + 2);
          if ( (unsigned __int16)v26 < v61 )
          {
            v62 = (unsigned __int16)v26;
            v137 = (unsigned __int16)v26;
            goto LABEL_127;
          }
          if ( !*v60 )
            break;
          v60 = (__int64 *)*v60;
        }
        v62 = v61 - 1;
        v137 = (unsigned int)(v61 - 1);
        while ( 1 )
        {
LABEL_127:
          v63 = v62 - *((_DWORD *)v60 + 6);
          v64 = 0LL;
          v65 = 0LL;
          v66 = (_QWORD *)v60[4];
          v67 = (_QWORD *)v66[1];
          if ( v66 == v67 )
          {
            v65 = (_QWORD *)v60[4];
          }
          else
          {
            v68 = *((_DWORD *)v67 - 2);
            v157 = v68;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v68 ^= *(_DWORD *)(a1 + 136);
              v157 = v68;
              if ( HIBYTE(v68) != ((unsigned __int8)v68 ^ (unsigned __int8)(BYTE1(v68) ^ BYTE2(v68))) )
              {
                RtlpLogHeapFailure(3, a1, (_DWORD)v67 - 16, 0, 0LL, 0LL);
                v58 = v130;
                v64 = 0LL;
              }
            }
            if ( (int)(v58 - (unsigned __int16)v68) <= 0 )
            {
              v69 = *v66 - 16LL;
              v70 = *(_DWORD *)(v69 + 8);
              v158 = v70;
              if ( *(_DWORD *)(a1 + 124) )
              {
                v70 ^= *(_DWORD *)(a1 + 136);
                v158 = v70;
                if ( HIBYTE(v70) != ((unsigned __int8)v70 ^ (unsigned __int8)(BYTE1(v70) ^ BYTE2(v70))) )
                {
                  RtlpLogHeapFailure(3, a1, v69, 0, 0LL, 0LL);
                  v58 = v130;
                }
              }
              if ( (int)(v58 - (unsigned __int16)v70) > 0 )
              {
                if ( *v60 || (_DWORD)v137 != *((_DWORD *)v60 + 2) - 1 )
                {
                  v73 = v63 >> 5;
                  v134 = v63 >> 5;
                  v74 = ((unsigned int)(*((_DWORD *)v60 + 2) - *((_DWORD *)v60 + 6)) >> 5) - 1;
                  v75 = (unsigned int *)(v60[5] + 4 * v73);
                  v148 = v75;
                  v76 = *v75 & (-1 << (v63 & 0x1F));
                  while ( !v76 )
                  {
                    if ( (unsigned int)v73 > v74 )
                    {
                      v13 = v162;
                      goto LABEL_168;
                    }
                    v148 = ++v75;
                    v76 = *v75;
                    LODWORD(v73) = v73 + 1;
                    v134 = v73;
                  }
                  if ( (_WORD)v76 )
                  {
                    if ( (_BYTE)v76 )
                      v77 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v76];
                    else
                      v77 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v76)] + 8;
                  }
                  else if ( (v76 & 0xFF0000) != 0 )
                  {
                    v77 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v76)] + 16;
                  }
                  else
                  {
                    v77 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v76 >> 24] + 24;
                  }
                  v78 = (unsigned int)(v77 + 32 * v73);
                  v134 = v78;
                  if ( *((_DWORD *)v60 + 3) )
                    v78 = (unsigned int)(2 * v78);
                  v65 = *(_QWORD **)(v60[6] + 8 * v78);
LABEL_163:
                  v58 = v130;
                }
                else
                {
                  v71 = 2 * v63;
                  if ( !*((_DWORD *)v60 + 3) )
                    v71 = v63;
                  v72 = *(_QWORD **)(v60[6] + 8 * v71);
                  while ( v66 != v72 )
                  {
                    LOBYTE(v64) = 1;
                    if ( (int)RtlpHeapListCompare(a1, v72, v58, v64) <= 0 )
                    {
                      v65 = v72;
                      goto LABEL_163;
                    }
                    v72 = (_QWORD *)*v72;
                    v58 = v130;
                  }
                }
              }
              else
              {
                v65 = (_QWORD *)*v66;
              }
            }
            else
            {
              v65 = v66;
            }
            v13 = v162;
          }
          if ( v65 )
            break;
LABEL_168:
          v60 = (__int64 *)*v60;
          v62 = *((_DWORD *)v60 + 6);
          v137 = v62;
          v58 = v130;
        }
        v59 = (_QWORD *)(a1 + 336);
      }
      else
      {
        v65 = (_QWORD *)*v59;
      }
      while ( v59 != v65 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v79 = *((_DWORD *)v65 - 2);
          v159 = v79;
          if ( (v79 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v159 = v79 ^ *(_DWORD *)(a1 + 136);
            LOWORD(v79) = v159;
          }
          v13 = v162;
        }
        else
        {
          LOWORD(v79) = *((_WORD *)v65 - 4);
        }
        v132 = v79;
        if ( v58 <= (unsigned __int16)v79 )
          break;
        v65 = (_QWORD *)*v65;
        v59 = (_QWORD *)(a1 + 336);
      }
      v80 = (_QWORD *)(v13 + 16);
      v130 = v13 + 16;
      v81 = (__int64 *)v65[1];
      v14 = *v81;
      if ( (_QWORD *)*v81 == v65 )
      {
        *v80 = v65;
        *(_QWORD *)(v13 + 24) = v81;
        *v81 = (__int64)v80;
        v65[1] = v80;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v65, 0, v14, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v13 + 8);
      v82 = *(__int64 **)(a1 + 312);
      if ( v82 )
      {
        v83 = *(unsigned __int16 *)(v13 + 8);
        while ( 1 )
        {
          v84 = *((unsigned int *)v82 + 2);
          if ( v83 < v84 )
          {
            v149 = *(unsigned __int16 *)(v13 + 8);
            v85 = v83;
            goto LABEL_188;
          }
          if ( !*v82 )
            break;
          v82 = (__int64 *)*v82;
        }
        v85 = v84 - 1;
        v149 = v85;
LABEL_188:
        v155 = v83;
        v86 = v85 - *((_DWORD *)v82 + 6);
        ++*((_DWORD *)v82 + 4);
        v87 = 2 * v86;
        if ( !*((_DWORD *)v82 + 3) )
          v87 = v86;
        v88 = *(_QWORD *)(v82[6] + 8 * v87);
        if ( v85 == *((_DWORD *)v82 + 2) - 1 )
          ++*((_DWORD *)v82 + 5);
        if ( !v88 )
          goto LABEL_197;
        v89 = *(_DWORD *)(v88 - 16 + 8);
        v160 = v89;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v89 ^= *(_DWORD *)(a1 + 136);
          v160 = v89;
          v14 = HIWORD(v89);
          LOBYTE(v14) = v89 ^ BYTE1(v89) ^ BYTE2(v89);
          if ( HIBYTE(v89) != (_BYTE)v14 )
            RtlpLogHeapFailure(3, a1, v88 - 16, 0, 0LL, 0LL);
        }
        v90 = v83 - (unsigned __int16)v89;
        v13 = v162;
        if ( v90 <= 0 )
LABEL_197:
          *(_QWORD *)(v82[6] + 8 * v87) = v130;
        if ( !v88 )
        {
          v14 = (unsigned int)(1 << (v86 & 0x1F));
          *(_DWORD *)(v82[5] + 4LL * (v86 >> 5)) |= v14;
        }
      }
LABEL_200:
      v56 = 0xFFFFFFFFLL;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
        *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
      }
LABEL_235:
      if ( !updated )
      {
        v57 = 256;
        goto LABEL_276;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        v103 = *(_DWORD *)(v13 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v13 + 8) = v103;
        if ( HIBYTE(v103) != ((unsigned __int8)v103 ^ (unsigned __int8)(BYTE1(v103) ^ BYTE2(v103))) )
          RtlpAnalyzeHeapFailure(a1, v13);
      }
      *(_BYTE *)(v13 + 10) |= 2u;
      v104 = *(_WORD *)(v13 + 8);
      v14 = v104;
      LOWORD(v14) = HIBYTE(v104);
      v105 = 16LL * v104 + v13;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v13 + 11) = v104 ^ HIBYTE(v104) ^ *(_BYTE *)(v13 + 10);
        *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      *(_WORD *)(v105 - 4) = updated;
      *(_WORD *)(v105 - 2) = 0;
      if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
      {
        *(_WORD *)(v105 - 2) = RtlLogStackBackTraceEx(1u);
        v56 = 0xFFFFFFFFLL;
        v57 = 256;
        goto LABEL_276;
      }
      goto LABEL_114;
    }
    v91 = (unsigned __int16)v26;
    *(_BYTE *)(v13 + 10) &= 0xF0u;
    *(_BYTE *)(v13 + 15) = 0;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_211:
      v94 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, v91);
      else
        Entry = (_QWORD *)*v94;
      while ( v94 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v96 = *((_DWORD *)Entry - 2);
          v161 = v96;
          if ( (v96 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v97 = v96 ^ *(_DWORD *)(a1 + 136);
            v161 = v97;
          }
          else
          {
            LOWORD(v97) = v96;
          }
          v13 = v162;
        }
        else
        {
          LOWORD(v97) = *((_WORD *)Entry - 4);
        }
        v133 = v97;
        if ( v91 <= (unsigned __int16)v97 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v98 = (_QWORD *)(v13 + 16);
      v99 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v99 == Entry )
      {
        *v98 = Entry;
        *(_QWORD *)(v13 + 24) = v99;
        *v99 = (__int64)v98;
        Entry[1] = v98;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v99, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v13 + 8);
      v14 = *(_QWORD *)(a1 + 312);
      if ( v14 )
      {
        v100 = *(unsigned __int16 *)(v13 + 8);
        while ( 1 )
        {
          v101 = *(unsigned int *)(v14 + 8);
          if ( v100 < v101 )
          {
            v102 = *(unsigned __int16 *)(v13 + 8);
            v151 = *(unsigned __int16 *)(v13 + 8);
            goto LABEL_232;
          }
          if ( !*(_QWORD *)v14 )
            break;
          v14 = *(_QWORD *)v14;
        }
        v102 = v101 - 1;
        v151 = (unsigned int)(v101 - 1);
LABEL_232:
        RtlpHeapAddListEntry(a1, v14, 1, v13 + 16, v102, v100);
      }
      goto LABEL_200;
    }
    v92 = (_DWORD *)(v13 + 32);
    v150 = v13 + 32;
    v93 = (16 * (unsigned __int64)(unsigned int)v91 - 32) >> 2;
    v139 = v93;
    if ( v93 )
    {
      if ( ((unsigned __int8)v92 & 4) == 0 )
        goto LABEL_208;
      *v92 = -17891602;
      v139 = --v93;
      if ( v93 )
      {
        v92 = (_DWORD *)(v13 + 36);
        v150 = v13 + 36;
LABEL_208:
        memset64(v92, 0xFEEEFEEEFEEEFEEEuLL, v93 >> 1);
        if ( (v93 & 1) != 0 )
          v92[v93 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v13 + 10) |= 4u;
    goto LABEL_211;
  }
  RtlpDeCommitFreeBlock(a1, v13, v26, 0);
LABEL_114:
  v56 = 0xFFFFFFFFLL;
  v57 = 256;
LABEL_276:
  if ( v124 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      ++*(_DWORD *)(a1 + 640);
      v14 = *(unsigned int *)(a1 + 648);
      if ( *(_DWORD *)(a1 + 640) > (unsigned int)v14 )
      {
        *(_DWORD *)(a1 + 640) = 0;
        v117 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
        if ( v117 > *(_QWORD *)(a1 + 672) )
          *(_QWORD *)(a1 + 672) = v117;
        *(_QWORD *)(a1 + 680) = v117;
      }
      if ( ++*(_DWORD *)(a1 + 652) >= 0x1000u )
      {
        if ( *(_BYTE *)(a1 + 418) != 2 || *(_DWORD *)(a1 + 656) <= 0x10u )
          v57 = 16;
        if ( *(_DWORD *)(a1 + 644) > v57 && (unsigned int)v14 < 0x10000 )
          *(_DWORD *)(a1 + 648) = 2 * v14;
        *(_DWORD *)(a1 + 644) = 0;
        *(_DWORD *)(a1 + 652) = 0;
      }
    }
    v118 = *(_QWORD *)(a1 + 352);
    v23 = (*(_DWORD *)(v118 + 12))-- == 1;
    if ( v23 )
    {
      *(_QWORD *)(v118 + 16) = 0LL;
      v119 = _InterlockedCompareExchange((volatile signed __int32 *)(v118 + 8), -1, -2);
      if ( v119 != -2 )
      {
        if ( (*(_BYTE *)(v118 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v118, v14, 0xFFFFFFFFLL);
        DeferredCriticalSectionEvent = *(void **)(v118 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v118, v14, v56);
        v136 = 0;
        while ( v119 != _InterlockedCompareExchange((volatile signed __int32 *)(v118 + 8), v119 + (v119 & 2 | 1), v119) )
        {
          RtlBackoff(&v136);
          _m_prefetchw((const void *)(v118 + 8));
          v119 = *(_DWORD *)(v118 + 8);
        }
        if ( (v119 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (void *)-1LL )
          {
            _InterlockedOr(v122, 0);
            RtlpWakeByAddress(v118 + 8, 0LL);
          }
          else
          {
            v121 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
            if ( v121 < 0 )
              RtlRaiseStatus(v121);
          }
        }
      }
    }
  }
  return v135;
}
