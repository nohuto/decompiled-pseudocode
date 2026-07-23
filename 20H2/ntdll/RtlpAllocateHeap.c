/*
 * XREFs of RtlpAllocateHeap @ 0x18002D160
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x1800024B0 (RtlpGetExtraStuffPointer.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180003748 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHeapRemoveListEntry @ 0x18000A774 (RtlpHeapRemoveListEntry.c)
 *     RtlpExtendHeap @ 0x18000E348 (RtlpExtendHeap.c)
 *     RtlpCommitBlock @ 0x18000ED0C (RtlpCommitBlock.c)
 *     RtlLogStackBackTraceEx @ 0x180011AA0 (RtlLogStackBackTraceEx.c)
 *     RtlpHeapAddListEntry @ 0x18001E1AC (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x18001E25C (RtlpFindEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x18001E2D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18001E940 (RtlpInsertFreeBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpPerformHeapMaintenance @ 0x180044D48 (RtlpPerformHeapMaintenance.c)
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x1800509B0 (DbgPrint.c)
 *     RtlpGetLFHContext @ 0x180071850 (RtlpGetLFHContext.c)
 *     RtlpUpdateHeapRates @ 0x18007C3AC (RtlpUpdateHeapRates.c)
 *     RtlpUpdateHeapWatermarks @ 0x180087638 (RtlpUpdateHeapWatermarks.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18009C898 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlCompareMemoryUlong @ 0x1800A1A90 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     RtlpUpdateTagEntry @ 0x1800F4EA0 (RtlpUpdateTagEntry.c)
 *     RtlDebugAllocateHeap @ 0x1800F8B50 (RtlDebugAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x1800FA75C (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180108004 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x1801085BC (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x18010A0E8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x18010A37C (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
 */

_DWORD *__fastcall RtlpAllocateHeap(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 **a5,
        _DWORD *a6)
{
  unsigned __int64 v9; // rdi
  char v10; // r14
  unsigned __int64 v11; // r13
  __int64 v13; // r13
  unsigned __int64 v14; // r13
  __int64 v15; // rcx
  struct _TEB *v16; // rax
  signed __int8 v17; // cf
  void *UniqueThread; // rax
  bool v19; // zf
  struct _TEB *v20; // rdi
  unsigned __int64 v21; // r14
  char v22; // si
  unsigned __int16 *v23; // rdi
  unsigned __int16 v24; // cx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int16 LFHContext; // ax
  __int64 *v28; // rsi
  unsigned __int64 v29; // r15
  int v30; // edx
  __int64 v31; // r14
  __int64 *v32; // r12
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  char *v39; // rsi
  struct _TEB *v40; // rdi
  __int64 *i; // r15
  unsigned __int64 v42; // rsi
  int j; // esi
  unsigned int v44; // r13d
  __int64 *v45; // r14
  __int64 **v46; // r12
  __int64 **v47; // rax
  int v48; // edi
  __int64 v49; // r8
  int v50; // edi
  __int64 v51; // rcx
  __int64 **k; // rsi
  int v53; // edi
  __int64 v54; // rdi
  unsigned int v55; // r9d
  unsigned int *v56; // r8
  unsigned int v57; // edx
  int v58; // ecx
  __int64 v59; // rdi
  int v60; // edx
  unsigned __int64 v61; // rcx
  __int64 v62; // r10
  __int64 *v63; // r11
  __int64 v64; // rax
  __int64 v65; // r9
  __int64 *v66; // rdi
  unsigned __int64 v67; // r13
  unsigned __int64 v68; // rcx
  unsigned int v69; // ecx
  unsigned int v70; // r12d
  __int64 v71; // r9
  __int64 *v72; // r8
  __int64 *v73; // rdx
  unsigned int v74; // eax
  __int64 v75; // r14
  __int64 v76; // rdx
  int v77; // esi
  __int64 v78; // rax
  __int64 *v79; // r8
  __int64 v80; // rdi
  __int64 *v81; // rsi
  __int64 v82; // rax
  __int64 v83; // r9
  __int64 v84; // rdx
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // r9
  unsigned int v87; // eax
  char v88; // r14
  int v89; // edx
  SIZE_T v90; // rdi
  SIZE_T v91; // r12
  unsigned __int64 v92; // r12
  __int64 v93; // rcx
  unsigned __int64 v94; // rcx
  _DWORD *v95; // rsi
  unsigned __int16 v96; // dx
  __int64 v97; // r14
  unsigned int v98; // edx
  unsigned __int64 v99; // rcx
  unsigned int v100; // eax
  char v101; // r8
  __int64 v102; // rax
  unsigned __int64 v103; // r9
  __int64 v104; // rsi
  __int64 v105; // rdx
  unsigned __int64 v106; // rdi
  __int64 v107; // r14
  unsigned __int64 v108; // rdx
  _QWORD *v109; // rax
  __int64 *v110; // r13
  unsigned __int64 v111; // rcx
  int v112; // r14d
  unsigned int v113; // r14d
  _QWORD *v114; // r12
  _QWORD *v115; // rdx
  _QWORD *v116; // rax
  int v117; // edi
  __int64 v118; // r8
  int v119; // edi
  __int64 v120; // rcx
  _QWORD *n; // r14
  int v122; // edi
  __int64 v123; // rdi
  unsigned int v124; // r9d
  unsigned int *v125; // r8
  unsigned int v126; // edx
  int v127; // ecx
  __int64 v128; // rdi
  int v129; // ecx
  _QWORD *v130; // rax
  __int64 *v131; // rcx
  __int64 *v132; // rdi
  unsigned __int64 v133; // r12
  unsigned __int64 v134; // rcx
  unsigned int v135; // ecx
  unsigned int v136; // r13d
  __int64 v137; // r9
  __int64 v138; // rdx
  int v139; // r14d
  _DWORD *v140; // r8
  unsigned __int64 v141; // rdx
  _QWORD *v142; // rdi
  _QWORD *Entry; // r8
  int v144; // ecx
  int v145; // eax
  _QWORD *v146; // rdi
  __int64 *v147; // rax
  __int64 v148; // rdx
  unsigned __int64 v149; // rcx
  unsigned __int64 v150; // r8
  int v151; // eax
  int v152; // edx
  __int64 v153; // r8
  __int64 v154; // r13
  __int64 *v155; // rcx
  __int64 v156; // rax
  __int64 v157; // r9
  __int64 v158; // rdx
  unsigned __int64 v159; // rdi
  unsigned __int64 v160; // rcx
  __int64 v161; // rax
  char v162; // dl
  char v163; // al
  SIZE_T v164; // rdi
  SIZE_T v165; // r13
  unsigned __int64 v166; // r12
  _QWORD *v167; // rdi
  _QWORD *v168; // r8
  int v169; // ecx
  int v170; // eax
  __int64 *v171; // rax
  unsigned __int64 v172; // r8
  _DWORD *v173; // r8
  unsigned __int64 v174; // rdx
  _QWORD *v175; // rdi
  _QWORD *v176; // r8
  int v177; // ecx
  int v178; // eax
  __int64 *v179; // rax
  unsigned __int64 v180; // r8
  struct _TEB *v181; // rdi
  unsigned __int64 v182; // rcx
  void *v183; // r8
  unsigned __int64 v184; // rdx
  _OWORD *ExtraStuffPointer; // r14
  char RandomValue32; // al
  unsigned __int64 v187; // rcx
  __int64 v188; // rsi
  __int64 v189; // rcx
  __int64 v190; // rcx
  __int64 v191; // rsi
  __int64 v192; // rcx
  unsigned __int64 v193; // r8
  __int64 *v194; // rax
  _DWORD *SharedData; // rcx
  __int64 v196; // rcx
  char v197; // [rsp+30h] [rbp-218h]
  unsigned __int64 v198; // [rsp+38h] [rbp-210h]
  unsigned __int64 v199; // [rsp+38h] [rbp-210h]
  char v200; // [rsp+40h] [rbp-208h]
  _DWORD *v201; // [rsp+48h] [rbp-200h]
  int v202[2]; // [rsp+50h] [rbp-1F8h]
  int v203; // [rsp+58h] [rbp-1F0h]
  int v204; // [rsp+5Ch] [rbp-1ECh]
  int v205; // [rsp+5Ch] [rbp-1ECh]
  __int64 v206; // [rsp+70h] [rbp-1D8h]
  __int64 v207; // [rsp+70h] [rbp-1D8h]
  char v208; // [rsp+80h] [rbp-1C8h]
  _QWORD *v209; // [rsp+80h] [rbp-1C8h]
  __int64 *v210; // [rsp+90h] [rbp-1B8h]
  __int64 v211; // [rsp+90h] [rbp-1B8h]
  bool v212; // [rsp+9Ch] [rbp-1ACh]
  __int64 *v213; // [rsp+A0h] [rbp-1A8h]
  int m; // [rsp+B0h] [rbp-198h]
  __int64 *v215; // [rsp+B8h] [rbp-190h]
  __int64 v216; // [rsp+E0h] [rbp-168h]
  unsigned __int64 v217; // [rsp+E8h] [rbp-160h] BYREF
  unsigned int *v218; // [rsp+F0h] [rbp-158h]
  unsigned __int64 v219; // [rsp+F8h] [rbp-150h]
  int v220; // [rsp+100h] [rbp-148h]
  __int64 v221; // [rsp+108h] [rbp-140h]
  __int64 v222; // [rsp+110h] [rbp-138h]
  SIZE_T v223; // [rsp+118h] [rbp-130h]
  unsigned int *v224; // [rsp+120h] [rbp-128h]
  __int64 v225; // [rsp+128h] [rbp-120h]
  __int64 v226; // [rsp+130h] [rbp-118h]
  __int64 v227; // [rsp+138h] [rbp-110h]
  __int64 v228; // [rsp+140h] [rbp-108h]
  SIZE_T v229; // [rsp+148h] [rbp-100h]
  __int64 v230; // [rsp+150h] [rbp-F8h]
  __int64 v231; // [rsp+158h] [rbp-F0h]
  __int64 v232; // [rsp+160h] [rbp-E8h]
  __int64 v233; // [rsp+168h] [rbp-E0h]
  unsigned __int64 v234; // [rsp+170h] [rbp-D8h]
  _OWORD *v235; // [rsp+178h] [rbp-D0h]
  int v236; // [rsp+180h] [rbp-C8h]
  _WORD *v237; // [rsp+188h] [rbp-C0h]
  int v238; // [rsp+198h] [rbp-B0h]
  int v239; // [rsp+1A8h] [rbp-A0h]
  int v240; // [rsp+1B8h] [rbp-90h]
  int v241; // [rsp+1C8h] [rbp-80h]
  int v242; // [rsp+1D8h] [rbp-70h]
  int v243; // [rsp+1E8h] [rbp-60h]
  int v244; // [rsp+1F8h] [rbp-50h]
  int v245; // [rsp+208h] [rbp-40h]
  unsigned __int64 v248; // [rsp+268h] [rbp+20h] BYREF

  v248 = a4;
  v203 = 1;
  v197 = 0;
  v201 = 0LL;
  *(_QWORD *)v202 = 0LL;
  v204 = 0;
  v9 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v203 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return (_DWORD *)RtlDebugAllocateHeap((void *)a1);
    v13 = a3;
    if ( !a3 )
      v13 = 1LL;
    v14 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v13);
    if ( v14 < 0x20 )
      v14 = 32LL;
    v248 = v14;
    v10 = (a2 >> 4) & 0xE0 | 1;
    v208 = v10;
    if ( (a2 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) )
    {
      v10 = (a2 >> 4) & 0xE0 | 3;
      v208 = v10;
      v14 += 16LL;
      v248 = v14;
    }
    v11 = v14 >> 4;
    v198 = v11;
  }
  else
  {
    v10 = 1;
    v208 = 1;
    v11 = a4 >> 4;
    v198 = a4 >> 4;
    if ( v9 < 2 )
    {
      v248 += 16LL;
      v11 = 2LL;
      v198 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    v10 |= 8u;
    v208 = v10;
  }
  if ( (a2 & 1) == 0 )
  {
    v15 = *(_QWORD *)(a1 + 352);
    v16 = NtCurrentTeb();
    v17 = _interlockedbittestandreset((volatile signed __int32 *)(v15 + 8), 0);
    UniqueThread = v16->ClientId.UniqueThread;
    if ( v17 )
    {
      *(_QWORD *)(v15 + 16) = UniqueThread;
      *(_DWORD *)(v15 + 12) = 1;
      ++*(_DWORD *)(a1 + 616);
    }
    else if ( *(void **)(v15 + 16) == UniqueThread )
    {
      ++*(_DWORD *)(v15 + 12);
      ++*(_DWORD *)(a1 + 616);
    }
    else
    {
      if ( byte_18016C508 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v20 = NtCurrentTeb();
        v20->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_481;
      }
      v204 = 1;
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      RtlpUpdateHeapRates(a1, 1LL);
    }
    v197 = 1;
    if ( (*(_DWORD *)(a1 + 120) & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance(a1);
  }
  if ( v11 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    {
      v248 += 56LL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v248 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           (unsigned __int64 *)(a1 + 376)) )
      {
        RandomValue32 = RtlpHeapGenerateRandomValue32();
        *(_QWORD *)v202 = RtlpHpAllocVirtBlockCommitFirst(
                            a1,
                            &v248,
                            (unsigned __int64)(RandomValue32 & 0xF) << 12,
                            &v217);
        if ( *(_QWORD *)v202 )
        {
          v187 = v248;
          *(_WORD *)(*(_QWORD *)v202 + 56LL) = v248 - a3;
          *(_BYTE *)(*(_QWORD *)v202 + 58LL) = v10 | 2;
          *(_QWORD *)(*(_QWORD *)v202 + 32LL) = v187;
          *(_QWORD *)(*(_QWORD *)v202 + 40LL) = v217;
          *(_BYTE *)(*(_QWORD *)v202 + 63LL) = 4;
          *(_QWORD *)(a1 + 592) += v187;
          v188 = 2147353472LL;
          if ( RtlGetCurrentServiceSessionId() )
            v189 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v189 = 2147353472LL;
          if ( *(_BYTE *)v189 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(a1, *(_QWORD *)v202, v248, 9LL);
          if ( RtlGetCurrentServiceSessionId() )
            v190 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v190 = 2147353472LL;
          if ( *(_BYTE *)v190 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v188 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapExtendEvent(a1, v202[0], v248, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v188);
          }
          v191 = 2147353482LL;
          if ( RtlGetCurrentServiceSessionId() )
            v192 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v192 = 2147353482LL;
          if ( *(_BYTE *)v192 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v191 = (__int64)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapExtendEvent(a1, v202[0], v248, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v191);
          }
          if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
            *(_WORD *)(*(_QWORD *)v202 + 16LL) = RtlLogStackBackTraceEx(1u);
          if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            *(_WORD *)(*(_QWORD *)v202 + 18LL) = RtlpUpdateTagEntry(
                                                   a1,
                                                   (unsigned __int8)(a2 >> 18),
                                                   0,
                                                   *(_QWORD *)(*(_QWORD *)v202 + 32LL) >> 4,
                                                   1);
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(*(_QWORD *)v202 + 59LL) = *(_BYTE *)(*(_QWORD *)v202 + 56LL) ^ *(_BYTE *)(*(_QWORD *)v202 + 57LL) ^ *(_BYTE *)(*(_QWORD *)v202 + 58LL);
            *(_DWORD *)(*(_QWORD *)v202 + 56LL) ^= *(_DWORD *)(a1 + 136);
          }
          v193 = a1 + 272;
          v194 = *(__int64 **)(a1 + 280);
          if ( *v194 == a1 + 272 )
          {
            **(_QWORD **)v202 = v193;
            *(_QWORD *)(*(_QWORD *)v202 + 8LL) = v194;
            *v194 = *(_QWORD *)v202;
            *(_QWORD *)(a1 + 280) = *(_QWORD *)v202;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, v193, 0, *v194, 0LL);
          }
          v201 = (_DWORD *)(*(_QWORD *)v202 + 64LL);
        }
        else
        {
          v201 = 0LL;
          ++*(_DWORD *)(a1 + 632);
        }
        goto LABEL_481;
      }
    }
    goto LABEL_480;
  }
  if ( (a2 & 0x800000) == 0 )
  {
    if ( v9 < *(unsigned __int16 *)(a1 + 432) )
    {
      if ( a3 > RtlpLargestLfhBlock )
        goto LABEL_55;
      v21 = v9 >> 3;
      v22 = v9 & 7;
      if ( ((unsigned __int8)(1 << (v9 & 7)) & *(_BYTE *)((v9 >> 3) + a1 + 434)) != 0 )
        goto LABEL_55;
      v23 = (unsigned __int16 *)(*(_QWORD *)(a1 + 424) + 2 * v9);
      v237 = v23;
      v24 = *v23 + 33;
      *v23 = v24;
      if ( !v204 && (v24 & 0x1Fu) <= 0x10 && v24 <= 0xFF00u )
        goto LABEL_55;
      v25 = a3;
      if ( !a3 )
        v25 = 1LL;
      if ( *(_BYTE *)(a1 + 418) == 2 )
        v26 = *(_QWORD *)(a1 + 408);
      else
        v26 = 0LL;
      LFHContext = RtlpGetLFHContext(v26, v25);
      if ( LFHContext != 0xFFFF )
      {
        *v23 = LFHContext;
        *(_BYTE *)(v21 + a1 + 434) |= 1 << v22;
        ++*(_DWORD *)(a1 + 656);
        goto LABEL_55;
      }
      if ( *(_BYTE *)(a1 + 418) != 2 )
      {
LABEL_54:
        *(_DWORD *)(a1 + 120) |= 0x20000000u;
        goto LABEL_55;
      }
      v19 = *(_QWORD *)(a1 + 408) == 0LL;
    }
    else
    {
      if ( a3 > RtlpLargestLfhBlock || *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) )
        goto LABEL_55;
      v19 = *(_BYTE *)(a1 + 419) == 2;
    }
    if ( v19 )
      goto LABEL_54;
  }
LABEL_55:
  if ( a5 )
  {
    v28 = *a5;
    if ( *a5 )
    {
      v29 = (unsigned __int64)(v28 - 2);
      v213 = v28 - 2;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v30 = *(_DWORD *)(v29 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v29 + 8) = v30;
        if ( HIBYTE(v30) != ((unsigned __int8)v30 ^ (unsigned __int8)(BYTE1(v30) ^ BYTE2(v30))) )
          RtlpAnalyzeHeapFailure(a1, v28 - 2);
      }
      v31 = *v28;
      v32 = *(__int64 **)(v29 + 24);
      v33 = *v32;
      v34 = *(_QWORD *)(*v28 + 8);
      if ( *v32 != v34 || (__int64 *)v33 != v28 )
      {
        RtlpLogHeapFailure(13, a1, (_DWORD)v28, v34, v33, 0LL);
        goto LABEL_74;
      }
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v29 + 8);
      v35 = *(_QWORD *)(a1 + 312);
      if ( v35 )
      {
        v36 = *(unsigned __int16 *)(v29 + 8);
        while ( 1 )
        {
          v37 = *(unsigned int *)(v35 + 8);
          if ( v36 < v37 )
          {
            v38 = *(unsigned __int16 *)(v29 + 8);
            goto LABEL_68;
          }
          if ( !*(_QWORD *)v35 )
            break;
          v35 = *(_QWORD *)v35;
        }
        v38 = (unsigned int)(v37 - 1);
LABEL_68:
        v227 = v38;
        RtlpHeapRemoveListEntry(a1, v35, 1, v28, v38, v36);
      }
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      v39 = (char *)(v29 + 10);
      if ( (*(_BYTE *)(v29 + 10) & 8) != 0 && !RtlpCommitBlock(a1, v29) )
      {
        RtlpDeCommitFreeBlock(a1, v29, *(unsigned __int16 *)(v29 + 8), 1);
LABEL_74:
        NtCurrentTeb()->LastStatusValue = -1073741801;
        v40 = NtCurrentTeb();
        v40->LastErrorValue = RtlNtStatusToDosError(-1073741801);
        goto LABEL_481;
      }
      goto LABEL_174;
    }
  }
  v219 = a1 + 336;
  for ( i = *(__int64 **)(a1 + 312); ; i = (__int64 *)*i )
  {
    v42 = *((unsigned int *)i + 2);
    if ( v11 < v42 )
    {
      j = v11;
      goto LABEL_80;
    }
    if ( !*i )
      break;
  }
  for ( j = v42 - 1; ; j = *((_DWORD *)i + 6) )
  {
LABEL_80:
    v44 = j - *((_DWORD *)i + 6);
    v45 = 0LL;
    v46 = (__int64 **)i[4];
    v47 = (__int64 **)v46[1];
    if ( v46 == v47 )
    {
      v45 = (__int64 *)i[4];
    }
    else
    {
      v48 = *((_DWORD *)v47 - 2);
      v238 = v48;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v48 ^= *(_DWORD *)(a1 + 136);
        v238 = v48;
        if ( HIBYTE(v48) != ((unsigned __int8)v48 ^ (unsigned __int8)(BYTE1(v48) ^ BYTE2(v48))) )
          RtlpLogHeapFailure(3, a1, (_DWORD)v47 - 16, 0, 0LL, 0LL);
      }
      if ( (int)(v198 - (unsigned __int16)v48) <= 0 )
      {
        v49 = (__int64)(*v46 - 2);
        v50 = *(_DWORD *)(v49 + 8);
        v239 = v50;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v50 ^= *(_DWORD *)(a1 + 136);
          v239 = v50;
          if ( HIBYTE(v50) != ((unsigned __int8)v50 ^ (unsigned __int8)(BYTE1(v50) ^ BYTE2(v50))) )
            RtlpLogHeapFailure(3, a1, v49, 0, 0LL, 0LL);
        }
        if ( (int)(v198 - (unsigned __int16)v50) > 0 )
        {
          if ( *i || j != *((_DWORD *)i + 2) - 1 )
          {
            v54 = v44 >> 5;
            v55 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
            v56 = (unsigned int *)(i[5] + 4 * v54);
            v218 = v56;
            v57 = *v56 & (-1 << (v44 & 0x1F));
            while ( !v57 )
            {
              if ( (unsigned int)v54 > v55 )
                goto LABEL_443;
              v218 = ++v56;
              v57 = *v56;
              LODWORD(v54) = v54 + 1;
            }
            if ( (_WORD)v57 )
            {
              if ( (_BYTE)v57 )
                v58 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v57];
              else
                v58 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v57)] + 8;
            }
            else if ( (v57 & 0xFF0000) != 0 )
            {
              v58 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v57)] + 16;
            }
            else
            {
              v58 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v57 >> 24] + 24;
            }
            v59 = (unsigned int)(v58 + 32 * v54);
            if ( *((_DWORD *)i + 3) )
              v59 = (unsigned int)(2 * v59);
            v45 = *(__int64 **)(i[6] + 8 * v59);
          }
          else
          {
            v51 = 2 * v44;
            if ( !*((_DWORD *)i + 3) )
              v51 = v44;
            for ( k = *(__int64 ***)(i[6] + 8 * v51); v46 != k; k = (__int64 **)*k )
            {
              v53 = *((_DWORD *)k - 2);
              v240 = v53;
              if ( *(_DWORD *)(a1 + 124) )
              {
                v53 ^= *(_DWORD *)(a1 + 136);
                v240 = v53;
                if ( HIBYTE(v53) != ((unsigned __int8)v53 ^ (unsigned __int8)(BYTE1(v53) ^ BYTE2(v53))) )
                  RtlpLogHeapFailure(3, a1, (_DWORD)k - 16, 0, 0LL, 0LL);
              }
              if ( (int)(v198 - (unsigned __int16)v53) <= 0 )
              {
                v45 = (__int64 *)k;
                break;
              }
            }
          }
        }
        else
        {
          v45 = *v46;
        }
      }
      else
      {
        v45 = (__int64 *)v46;
      }
    }
    if ( v45 )
      break;
LABEL_443:
    i = (__int64 *)*i;
  }
  if ( (__int64 *)v219 == v45 )
  {
    v11 = v198;
    goto LABEL_162;
  }
  v29 = (unsigned __int64)(v45 - 2);
  v213 = v45 - 2;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v60 = *(_DWORD *)(v29 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v29 + 8) = v60;
    if ( HIBYTE(v60) != ((unsigned __int8)v60 ^ (unsigned __int8)(BYTE1(v60) ^ BYTE2(v60))) )
      RtlpAnalyzeHeapFailure(a1, v45 - 2);
  }
  v61 = *(unsigned __int16 *)(v29 + 8);
  v11 = v198;
  if ( v61 < v198 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v29 + 11) = BYTE1(v61) ^ v61 ^ *(_BYTE *)(v29 + 10);
      *(_DWORD *)(v29 + 8) ^= *(_DWORD *)(a1 + 136);
    }
LABEL_162:
    v78 = RtlpExtendHeap(a1, v248);
    v29 = v78;
    v213 = (__int64 *)v78;
    if ( v78 )
    {
      v79 = (__int64 *)(v78 + 16);
      v80 = *(_QWORD *)(v78 + 16);
      v81 = *(__int64 **)(v78 + 24);
      v82 = *v81;
      v83 = *(_QWORD *)(v80 + 8);
      if ( *v81 != v83 || (__int64 *)v82 != v79 )
      {
        RtlpLogHeapFailure(13, a1, (_DWORD)v79, v83, v82, 0LL);
        goto LABEL_481;
      }
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v29 + 8);
      v84 = *(_QWORD *)(a1 + 312);
      if ( v84 )
      {
        v85 = *(unsigned __int16 *)(v29 + 8);
        while ( 1 )
        {
          v86 = *(unsigned int *)(v84 + 8);
          if ( v85 < v86 )
          {
            v87 = *(unsigned __int16 *)(v29 + 8);
            v222 = *(unsigned __int16 *)(v29 + 8);
            goto LABEL_171;
          }
          if ( !*(_QWORD *)v84 )
            break;
          v84 = *(_QWORD *)v84;
        }
        v87 = v86 - 1;
        v222 = (unsigned int)(v86 - 1);
LABEL_171:
        RtlpHeapRemoveListEntry(a1, v84, 1, v79, v87, v85);
      }
      *v81 = v80;
      *(_QWORD *)(v80 + 8) = v81;
      goto LABEL_149;
    }
LABEL_480:
    v201 = 0LL;
    goto LABEL_481;
  }
  v62 = *v45;
  v216 = *v45;
  v63 = *(__int64 **)(v29 + 24);
  v210 = v63;
  v64 = *v63;
  v65 = *(_QWORD *)(*v45 + 8);
  if ( *v63 != v65 || (__int64 *)v64 != v45 )
  {
    RtlpLogHeapFailure(13, a1, (_DWORD)v45, v65, v64, 0LL);
    goto LABEL_481;
  }
  *(_QWORD *)(a1 + 192) -= v61;
  v66 = *(__int64 **)(a1 + 312);
  if ( !v66 )
    goto LABEL_148;
  v67 = *(unsigned __int16 *)(v29 + 8);
  while ( 1 )
  {
    v68 = *((unsigned int *)v66 + 2);
    if ( v67 < v68 )
    {
      v221 = *(unsigned __int16 *)(v29 + 8);
      v69 = v67;
      goto LABEL_133;
    }
    if ( !*v66 )
      break;
    v66 = (__int64 *)*v66;
  }
  v69 = v68 - 1;
  v221 = v69;
LABEL_133:
  v70 = v69 - *((_DWORD *)v66 + 6);
  v71 = 2 * v70;
  if ( !*((_DWORD *)v66 + 3) )
    v71 = v70;
  v206 = v71;
  v72 = (__int64 *)(v66[6] + 8 * v71);
  v73 = (__int64 *)*v72;
  --*((_DWORD *)v66 + 4);
  v74 = *((_DWORD *)v66 + 2);
  if ( v69 == v74 - 1 )
    --*((_DWORD *)v66 + 5);
  if ( v73 != v45 )
    goto LABEL_147;
  if ( !*v66 )
    --v74;
  v75 = *v45;
  v76 = v66[4];
  if ( v69 >= v74 )
  {
    v11 = v198;
    if ( v75 == v76 )
    {
      *v72 = 0LL;
      *(_DWORD *)(v66[5] + 4LL * (v70 >> 5)) &= ~(1 << (v70 & 0x1F));
    }
    else
    {
      *v72 = v75;
    }
    goto LABEL_148;
  }
  if ( v75 == v76 )
    goto LABEL_153;
  v77 = *(_DWORD *)(v75 - 16 + 8);
  v241 = v77;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v77 ^= *(_DWORD *)(a1 + 136);
    v241 = v77;
    if ( HIBYTE(v77) != ((unsigned __int8)v77 ^ (unsigned __int8)(BYTE1(v77) ^ BYTE2(v77))) )
    {
      RtlpLogHeapFailure(3, a1, v75 - 16, 0, 0LL, 0LL);
      v62 = v216;
      v63 = v210;
      v71 = v206;
    }
  }
  if ( (_DWORD)v67 != (unsigned __int16)v77 )
  {
    v29 = (unsigned __int64)v213;
LABEL_153:
    *(_QWORD *)(v66[6] + 8 * v71) = 0LL;
    *(_DWORD *)(v66[5] + 4LL * (v70 >> 5)) &= ~(1 << (v70 & 0x1F));
    goto LABEL_147;
  }
  *(_QWORD *)(v66[6] + 8 * v71) = v75;
  v29 = (unsigned __int64)v213;
LABEL_147:
  v11 = v198;
LABEL_148:
  *v63 = v62;
  *(_QWORD *)(v62 + 8) = v63;
LABEL_149:
  v39 = (char *)(v29 + 10);
  if ( (*(_BYTE *)(v29 + 10) & 8) != 0 && !RtlpCommitBlock(a1, v29) )
  {
    RtlpDeCommitFreeBlock(a1, v29, *(unsigned __int16 *)(v29 + 8), 1);
    goto LABEL_481;
  }
LABEL_174:
  v88 = *v39;
  v200 = *v39;
  v89 = v203;
  if ( !v203 && (v88 & 4) != 0 )
  {
    v90 = 16LL * *(unsigned __int16 *)(v29 + 8) - 32;
    v223 = v90;
    if ( (v88 & 2) != 0 && v90 > 4 )
    {
      v90 -= 4LL;
      v223 = v90;
    }
    v91 = RtlCompareMemoryUlong((PVOID)(v29 + 32), v90, 0xFEEEFEEE);
    if ( v91 != v90 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v29 = (unsigned __int64)v213;
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v213, (char *)v213 + v91 + 32);
      RtlpBreakPointHeap();
      v88 = v200;
    }
    v89 = 0;
  }
  if ( (*v39 & 1) != 0 )
  {
    RtlpLogHeapFailure(3, a1, v29, 0, 0LL, 0LL);
    goto LABEL_481;
  }
  *v39 = v208;
  v92 = *(unsigned __int16 *)(v29 + 8) - v11;
  *(_WORD *)(v29 + 8) = v11;
  v93 = v248 - a3;
  if ( v248 - a3 >= 0x3F )
  {
    *(_QWORD *)(v29 + 16 * v11) = v93;
    *(_BYTE *)(v29 + 15) = 63;
  }
  else
  {
    *(_BYTE *)(v29 + 15) = v93;
  }
  *(_BYTE *)(v29 + 11) = 0;
  if ( !v92 )
    goto LABEL_194;
  if ( v92 == 1 )
  {
    ++*(_WORD *)(v29 + 8);
    v94 = v93 + 16;
    if ( v94 >= 0x3F )
    {
      *(_QWORD *)(v29 + 16 * (v11 + 1)) = v94;
      *(_BYTE *)(v29 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(v29 + 15) = v94;
    }
    goto LABEL_194;
  }
  v101 = v89 == 0;
  LODWORD(v248) = v89 == 0;
  v212 = v89 == 0;
  v102 = *(unsigned __int8 *)(v29 + 14);
  if ( (_BYTE)v102 )
    v103 = (v29 & 0xFFFFFFFFFFFF0000uLL) - (v102 << 16) + 0x10000;
  else
    v103 = a1;
  v104 = v29 + 16 * v11;
  v205 = 0;
  *(_BYTE *)(v104 + 10) = v88;
  *(_BYTE *)(v104 + 15) = 0;
  *(_WORD *)(v104 + 12) = v11 ^ *(_WORD *)(a1 + 140);
  v105 = *(_QWORD *)(v103 + 40);
  if ( v105 == v103 )
  {
    LOBYTE(v106) = 0;
  }
  else
  {
    v106 = ((v104 - v103) >> 16) + 1;
    v237 = (_WORD *)v106;
    if ( v106 >= 0xFE )
    {
      RtlpLogHeapFailure(3, v105, v29 + 16 * v11, v103, 0LL, 0LL);
      v101 = v248;
    }
  }
  *(_BYTE *)(v104 + 14) = v106;
  *(_BYTE *)(v104 + 11) = 0;
  *(_WORD *)(v104 + 8) = v92;
  while ( 1 )
  {
    v107 = v104 + 16 * v92;
    if ( ((*(_BYTE *)(v107 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v107 + 12) = v92 ^ *(_WORD *)(a1 + 140);
      if ( !v101 )
      {
        v108 = (unsigned __int16)v92;
        v199 = (unsigned __int16)v92;
        *(_BYTE *)(v104 + 10) = 0;
        *(_BYTE *)(v104 + 15) = 0;
        v109 = (_QWORD *)(a1 + 336);
        v110 = *(__int64 **)(a1 + 312);
        if ( v110 )
        {
          while ( 1 )
          {
            v111 = *((unsigned int *)v110 + 2);
            if ( (unsigned __int16)v92 < v111 )
            {
              v112 = (unsigned __int16)v92;
              m = (unsigned __int16)v92;
              goto LABEL_232;
            }
            if ( !*v110 )
              break;
            v110 = (__int64 *)*v110;
          }
          v112 = v111 - 1;
          for ( m = v111 - 1; ; m = v112 )
          {
LABEL_232:
            v113 = v112 - *((_DWORD *)v110 + 6);
            v114 = 0LL;
            v115 = (_QWORD *)v110[4];
            v209 = v115;
            v116 = (_QWORD *)v115[1];
            if ( v115 == v116 )
            {
              v114 = (_QWORD *)v110[4];
            }
            else
            {
              v117 = *((_DWORD *)v116 - 2);
              v242 = v117;
              if ( *(_DWORD *)(a1 + 124) )
              {
                v117 ^= *(_DWORD *)(a1 + 136);
                v242 = v117;
                if ( HIBYTE(v117) != ((unsigned __int8)v117 ^ (unsigned __int8)(BYTE1(v117) ^ BYTE2(v117))) )
                {
                  RtlpLogHeapFailure(3, a1, (_DWORD)v116 - 16, 0, 0LL, 0LL);
                  v115 = v209;
                }
              }
              if ( (int)(v199 - (unsigned __int16)v117) <= 0 )
              {
                v118 = *v115 - 16LL;
                v119 = *(_DWORD *)(v118 + 8);
                v243 = v119;
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v119 ^= *(_DWORD *)(a1 + 136);
                  v243 = v119;
                  if ( HIBYTE(v119) != ((unsigned __int8)v119 ^ (unsigned __int8)(BYTE1(v119) ^ BYTE2(v119))) )
                  {
                    RtlpLogHeapFailure(3, a1, v118, 0, 0LL, 0LL);
                    v115 = v209;
                  }
                }
                if ( (int)(v199 - (unsigned __int16)v119) > 0 )
                {
                  if ( *v110 || m != *((_DWORD *)v110 + 2) - 1 )
                  {
                    v123 = v113 >> 5;
                    v124 = ((unsigned int)(*((_DWORD *)v110 + 2) - *((_DWORD *)v110 + 6)) >> 5) - 1;
                    v125 = (unsigned int *)(v110[5] + 4 * v123);
                    v224 = v125;
                    v126 = *v125 & (-1 << (v113 & 0x1F));
                    while ( !v126 )
                    {
                      if ( (unsigned int)v123 > v124 )
                        goto LABEL_273;
                      v224 = ++v125;
                      v126 = *v125;
                      LODWORD(v123) = v123 + 1;
                    }
                    if ( (_WORD)v126 )
                    {
                      if ( (_BYTE)v126 )
                        v127 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v126];
                      else
                        v127 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v126)] + 8;
                    }
                    else if ( (v126 & 0xFF0000) != 0 )
                    {
                      v127 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v126)] + 16;
                    }
                    else
                    {
                      v127 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v126 >> 24] + 24;
                    }
                    v128 = (unsigned int)(v127 + 32 * v123);
                    if ( *((_DWORD *)v110 + 3) )
                      v128 = (unsigned int)(2 * v128);
                    v114 = *(_QWORD **)(v110[6] + 8 * v128);
                  }
                  else
                  {
                    v120 = 2 * v113;
                    if ( !*((_DWORD *)v110 + 3) )
                      v120 = v113;
                    for ( n = *(_QWORD **)(v110[6] + 8 * v120); v115 != n; n = (_QWORD *)*n )
                    {
                      v122 = *((_DWORD *)n - 2);
                      v244 = v122;
                      if ( *(_DWORD *)(a1 + 124) )
                      {
                        v122 ^= *(_DWORD *)(a1 + 136);
                        v244 = v122;
                        if ( HIBYTE(v122) != ((unsigned __int8)v122 ^ (unsigned __int8)(BYTE1(v122) ^ BYTE2(v122))) )
                        {
                          RtlpLogHeapFailure(3, a1, (_DWORD)n - 16, 0, 0LL, 0LL);
                          v115 = v209;
                        }
                      }
                      if ( (int)(v199 - (unsigned __int16)v122) <= 0 )
                      {
                        v114 = n;
                        break;
                      }
                    }
                  }
                }
                else
                {
                  v114 = (_QWORD *)*v115;
                }
              }
              else
              {
                v114 = v115;
              }
            }
            if ( v114 )
              break;
LABEL_273:
            v110 = (__int64 *)*v110;
            v112 = *((_DWORD *)v110 + 6);
          }
          v108 = v199;
          v109 = (_QWORD *)(a1 + 336);
        }
        else
        {
          v114 = (_QWORD *)*v109;
        }
        while ( v109 != v114 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v129 = *((_DWORD *)v114 - 2);
            v236 = v129;
            if ( (v129 & *(_DWORD *)(a1 + 124)) != 0 )
            {
              v236 = v129 ^ *(_DWORD *)(a1 + 136);
              LOWORD(v129) = v236;
            }
          }
          else
          {
            LOWORD(v129) = *((_WORD *)v114 - 4);
          }
          if ( v108 <= (unsigned __int16)v129 )
            break;
          v114 = (_QWORD *)*v114;
          v109 = (_QWORD *)(a1 + 336);
        }
        v130 = (_QWORD *)(v104 + 16);
        v131 = (__int64 *)v114[1];
        if ( (_QWORD *)*v131 == v114 )
        {
          *v130 = v114;
          *(_QWORD *)(v104 + 24) = v131;
          *v131 = (__int64)v130;
          v114[1] = v130;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)v114, 0, *v131, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v104 + 8);
        v132 = *(__int64 **)(a1 + 312);
        if ( v132 )
        {
          v133 = *(unsigned __int16 *)(v104 + 8);
          while ( 1 )
          {
            v134 = *((unsigned int *)v132 + 2);
            if ( v133 < v134 )
            {
              v225 = *(unsigned __int16 *)(v104 + 8);
              v135 = v133;
              goto LABEL_292;
            }
            if ( !*v132 )
              break;
            v132 = (__int64 *)*v132;
          }
          v135 = v134 - 1;
          v225 = v135;
LABEL_292:
          v217 = v133;
          v136 = v135 - *((_DWORD *)v132 + 6);
          ++*((_DWORD *)v132 + 4);
          v137 = 2 * v136;
          if ( !*((_DWORD *)v132 + 3) )
            v137 = v136;
          v211 = v137;
          v138 = *(_QWORD *)(v132[6] + 8 * v137);
          v207 = v138;
          if ( v135 == *((_DWORD *)v132 + 2) - 1 )
            ++*((_DWORD *)v132 + 5);
          if ( !v138 )
            goto LABEL_301;
          v139 = *(_DWORD *)(v138 - 16 + 8);
          v245 = v139;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v139 ^= *(_DWORD *)(a1 + 136);
            v245 = v139;
            if ( HIBYTE(v139) != ((unsigned __int8)v139 ^ (unsigned __int8)(BYTE1(v139) ^ BYTE2(v139))) )
            {
              RtlpLogHeapFailure(3, a1, v138 - 16, 0, 0LL, 0LL);
              v138 = v207;
              v137 = v211;
            }
          }
          if ( (int)(v133 - (unsigned __int16)v139) <= 0 )
LABEL_301:
            *(_QWORD *)(v132[6] + 8 * v137) = v104 + 16;
          if ( !v138 )
            *(_DWORD *)(v132[5] + 4LL * (v136 >> 5)) |= 1 << (v136 & 0x1F);
        }
        goto LABEL_304;
      }
      *(_BYTE *)(v104 + 10) &= 0xF0u;
      *(_BYTE *)(v104 + 15) = 0;
      if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
        goto LABEL_315;
      v140 = (_DWORD *)(v104 + 32);
      v226 = v104 + 32;
      v141 = (16 * (unsigned __int64)(unsigned __int16)v92 - 32) >> 2;
      if ( v141 )
      {
        if ( ((unsigned __int8)v140 & 4) == 0 )
          goto LABEL_312;
        *v140 = -17891602;
        if ( --v141 )
        {
          v140 = (_DWORD *)(v104 + 36);
          v226 = v104 + 36;
LABEL_312:
          memset64(v140, 0xFEEEFEEEFEEEFEEEuLL, v141 >> 1);
          if ( (v141 & 1) != 0 )
            v140[v141 - 1] = -17891602;
        }
      }
      *(_BYTE *)(v104 + 10) |= 4u;
LABEL_315:
      v142 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v92);
      else
        Entry = (_QWORD *)*v142;
      while ( v142 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v144 = *((_DWORD *)Entry - 2);
          v220 = v144;
          if ( (v144 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v145 = v144 ^ *(_DWORD *)(a1 + 136);
            v220 = v145;
          }
          else
          {
            LOWORD(v145) = v144;
          }
        }
        else
        {
          LOWORD(v145) = *((_WORD *)Entry - 4);
        }
        if ( (unsigned __int16)v92 <= (unsigned __int64)(unsigned __int16)v145 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v146 = (_QWORD *)(v104 + 16);
      v147 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v147 == Entry )
      {
        *v146 = Entry;
        *(_QWORD *)(v104 + 24) = v147;
        *v147 = (__int64)v146;
        Entry[1] = v146;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v147, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v104 + 8);
      v148 = *(_QWORD *)(a1 + 312);
      if ( v148 )
      {
        v149 = *(unsigned __int16 *)(v104 + 8);
        while ( 1 )
        {
          v150 = *(unsigned int *)(v148 + 8);
          if ( v149 < v150 )
          {
            v151 = *(unsigned __int16 *)(v104 + 8);
            goto LABEL_385;
          }
          if ( !*(_QWORD *)v148 )
            break;
          v148 = *(_QWORD *)v148;
        }
        v151 = v150 - 1;
LABEL_385:
        RtlpHeapAddListEntry(a1, v148, 1, (__int64)v146, v151, v149);
        goto LABEL_304;
      }
      goto LABEL_304;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      v152 = *(_DWORD *)(v107 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v107 + 8) = v152;
      if ( HIBYTE(v152) != ((unsigned __int8)v152 ^ (unsigned __int8)(BYTE1(v152) ^ BYTE2(v152))) )
        RtlpAnalyzeHeapFailure(a1, v104 + 16 * v92);
    }
    v153 = v107 + 16;
    v154 = *(_QWORD *)(v107 + 16);
    v155 = *(__int64 **)(v107 + 24);
    v215 = v155;
    v156 = *v155;
    v157 = *(_QWORD *)(v154 + 8);
    if ( *v155 == v157 && v156 == v153 )
      break;
    RtlpLogHeapFailure(13, a1, v153, v157, v156, 0LL);
LABEL_418:
    if ( v205 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741764;
      v181 = NtCurrentTeb();
      v181->LastErrorValue = RtlNtStatusToDosError(-1073741764);
      goto LABEL_481;
    }
    v205 = 1;
    v101 = v248;
  }
  *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v107 + 8);
  v158 = *(_QWORD *)(a1 + 312);
  if ( v158 )
  {
    v159 = *(unsigned __int16 *)(v107 + 8);
    while ( 1 )
    {
      v160 = *(unsigned int *)(v158 + 8);
      if ( v159 < v160 )
      {
        v161 = *(unsigned __int16 *)(v107 + 8);
        goto LABEL_347;
      }
      if ( !*(_QWORD *)v158 )
        break;
      v158 = *(_QWORD *)v158;
    }
    v161 = (unsigned int)(v160 - 1);
LABEL_347:
    v228 = v161;
    RtlpHeapRemoveListEntry(a1, v158, 1, (__int64 *)(v107 + 16), v161, v159);
    v155 = v215;
  }
  *v155 = v154;
  *(_QWORD *)(v154 + 8) = v155;
  if ( (*(_BYTE *)(v107 + 10) & 8) != 0 && !RtlpCommitBlock(a1, v104 + 16 * v92) )
  {
    RtlpDeCommitFreeBlock(a1, v104 + 16 * v92, *(unsigned __int16 *)(v107 + 8), 1);
    goto LABEL_418;
  }
  v162 = v248;
  if ( (_BYTE)v248 )
  {
    v163 = *(_BYTE *)(v107 + 10);
    if ( (v163 & 4) != 0 )
    {
      v164 = 16LL * *(unsigned __int16 *)(v107 + 8) - 32;
      v229 = v164;
      if ( (v163 & 2) != 0 && v164 > 4 )
      {
        v164 -= 4LL;
        v229 = v164;
      }
      v165 = RtlCompareMemoryUlong((PVOID)(v107 + 32), v164, 0xFEEEFEEE);
      if ( v165 == v164 )
      {
        v162 = v248;
      }
      else
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)(v104 + 16 * v92),
          (const void *)(v107 + v165 + 32));
        RtlpBreakPointHeap();
        v162 = v212;
      }
    }
  }
  *(_BYTE *)(v104 + 10) = *(_BYTE *)(v107 + 10);
  v166 = *(unsigned __int16 *)(v107 + 8) + v92;
  if ( v166 > 0xFF00 )
  {
    RtlpInsertFreeBlock(a1, v104, v166);
    goto LABEL_194;
  }
  *(_WORD *)(v104 + 8) = v166;
  *(_WORD *)(v104 + 16 * v166 + 12) = v166 ^ *(_WORD *)(a1 + 140);
  if ( v162 )
  {
    *(_BYTE *)(v104 + 10) &= 0xF0u;
    *(_BYTE *)(v104 + 15) = 0;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
      goto LABEL_395;
    v173 = (_DWORD *)(v104 + 32);
    v231 = v104 + 32;
    v174 = (16 * (unsigned __int64)(unsigned __int16)v166 - 32) >> 2;
    if ( v174 )
    {
      if ( ((unsigned __int8)v173 & 4) == 0 )
        goto LABEL_392;
      *v173 = -17891602;
      if ( --v174 )
      {
        v173 = (_DWORD *)(v104 + 36);
        v231 = v104 + 36;
LABEL_392:
        memset64(v173, 0xFEEEFEEEFEEEFEEEuLL, v174 >> 1);
        if ( (v174 & 1) != 0 )
          v173[v174 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v104 + 10) |= 4u;
LABEL_395:
    v175 = (_QWORD *)(a1 + 336);
    if ( *(_QWORD *)(a1 + 312) )
      v176 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v166);
    else
      v176 = (_QWORD *)*v175;
    while ( v175 != v176 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v177 = *((_DWORD *)v176 - 2);
        if ( (v177 & *(_DWORD *)(a1 + 124)) != 0 )
          v178 = v177 ^ *(_DWORD *)(a1 + 136);
        else
          LOWORD(v178) = *((_DWORD *)v176 - 2);
      }
      else
      {
        LOWORD(v178) = *((_WORD *)v176 - 4);
      }
      if ( (unsigned __int16)v166 <= (unsigned __int64)(unsigned __int16)v178 )
        break;
      v176 = (_QWORD *)*v176;
    }
    v146 = (_QWORD *)(v104 + 16);
    v179 = (__int64 *)v176[1];
    if ( (_QWORD *)*v179 == v176 )
    {
      *v146 = v176;
      *(_QWORD *)(v104 + 24) = v179;
      *v179 = (__int64)v146;
      v176[1] = v146;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, (_DWORD)v176, 0, *v179, 0LL);
    }
    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v104 + 8);
    v148 = *(_QWORD *)(a1 + 312);
    if ( v148 )
    {
      v149 = *(unsigned __int16 *)(v104 + 8);
      while ( 1 )
      {
        v180 = *(unsigned int *)(v148 + 8);
        if ( v149 < v180 )
        {
          v151 = *(unsigned __int16 *)(v104 + 8);
          v232 = *(unsigned __int16 *)(v104 + 8);
          goto LABEL_385;
        }
        if ( !*(_QWORD *)v148 )
          break;
        v148 = *(_QWORD *)v148;
      }
      v151 = v180 - 1;
      v232 = (unsigned int)(v180 - 1);
      goto LABEL_385;
    }
    goto LABEL_304;
  }
  *(_BYTE *)(v104 + 10) = 0;
  *(_BYTE *)(v104 + 15) = 0;
  v167 = (_QWORD *)(a1 + 336);
  if ( *(_QWORD *)(a1 + 312) )
    v168 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v166);
  else
    v168 = (_QWORD *)*v167;
  while ( v167 != v168 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v169 = *((_DWORD *)v168 - 2);
      if ( (v169 & *(_DWORD *)(a1 + 124)) != 0 )
        v170 = v169 ^ *(_DWORD *)(a1 + 136);
      else
        LOWORD(v170) = *((_DWORD *)v168 - 2);
    }
    else
    {
      LOWORD(v170) = *((_WORD *)v168 - 4);
    }
    if ( (unsigned __int16)v166 <= (unsigned __int64)(unsigned __int16)v170 )
      break;
    v168 = (_QWORD *)*v168;
  }
  v146 = (_QWORD *)(v104 + 16);
  v171 = (__int64 *)v168[1];
  if ( (_QWORD *)*v171 == v168 )
  {
    *v146 = v168;
    *(_QWORD *)(v104 + 24) = v171;
    *v171 = (__int64)v146;
    v168[1] = v146;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, (_DWORD)v168, 0, *v171, 0LL);
  }
  *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v104 + 8);
  v148 = *(_QWORD *)(a1 + 312);
  if ( v148 )
  {
    v149 = *(unsigned __int16 *)(v104 + 8);
    while ( 1 )
    {
      v172 = *(unsigned int *)(v148 + 8);
      if ( v149 < v172 )
      {
        v151 = *(unsigned __int16 *)(v104 + 8);
        v230 = *(unsigned __int16 *)(v104 + 8);
        goto LABEL_385;
      }
      if ( !*(_QWORD *)v148 )
        break;
      v148 = *(_QWORD *)v148;
    }
    v151 = v172 - 1;
    v230 = (unsigned int)(v172 - 1);
    goto LABEL_385;
  }
LABEL_304:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v104 + 11) = *(_BYTE *)(v104 + 8) ^ *(_BYTE *)(v104 + 9) ^ *(_BYTE *)(v104 + 10);
    *(_DWORD *)(v104 + 8) ^= *(_DWORD *)(a1 + 136);
  }
LABEL_194:
  v201 = (_DWORD *)(v29 + 16);
  v95 = (_DWORD *)(v29 + 8);
  v96 = *(_WORD *)(v29 + 8);
  v97 = 16LL * v96;
  v233 = v97;
  if ( (*(_BYTE *)(v29 + 15) & 0x3F) == 0x3F )
  {
    v97 -= 8LL;
    v233 = v97;
  }
  if ( v203 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v29 + 11) = HIBYTE(v96) ^ v96 ^ *(_BYTE *)(v29 + 10);
      *v95 ^= *(_DWORD *)(a1 + 136);
    }
    if ( v197 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
      {
        ++*(_DWORD *)(a1 + 640);
        v98 = *(_DWORD *)(a1 + 648);
        if ( *(_DWORD *)(a1 + 640) > v98 )
        {
          *(_DWORD *)(a1 + 640) = 0;
          v99 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
          if ( v99 > *(_QWORD *)(a1 + 672) )
            *(_QWORD *)(a1 + 672) = v99;
          *(_QWORD *)(a1 + 680) = v99;
        }
        if ( ++*(_DWORD *)(a1 + 652) >= 0x1000u )
        {
          if ( *(_BYTE *)(a1 + 418) != 2 || (v100 = 256, *(_DWORD *)(a1 + 656) <= 0x10u) )
            v100 = 16;
          if ( *(_DWORD *)(a1 + 644) > v100 && v98 < 0x10000 )
            *(_DWORD *)(a1 + 648) = 2 * v98;
          *(_DWORD *)(a1 + 644) = 0;
          *(_DWORD *)(a1 + 652) = 0;
        }
      }
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v197 = 0;
    }
    if ( (a2 & 8) != 0 )
      memset(v201, 0, v97 - 8);
    goto LABEL_481;
  }
  if ( (a2 & 8) != 0 )
  {
    memset(v201, 0, v97 - 8);
    goto LABEL_430;
  }
  v182 = a3;
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v183 = (void *)(v29 + 16);
    v234 = v29 + 16;
    v184 = (a3 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
    if ( v184 )
    {
      if ( ((unsigned __int8)v201 & 4) == 0 )
        goto LABEL_428;
      *v201 = -1163005939;
      if ( --v184 )
      {
        v183 = (void *)(v29 + 20);
        v234 = v29 + 20;
LABEL_428:
        memset64(v183, 0xBAADF00DBAADF00DuLL, v184 >> 1);
        if ( (v184 & 1) != 0 )
          *((_DWORD *)v183 + v184 - 1) = -1163005939;
LABEL_430:
        v182 = a3;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
  {
    *(__m128i *)((char *)v201 + v182) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
    *(_BYTE *)(v29 + 10) |= 4u;
  }
  *(_BYTE *)(v29 + 11) = 0;
  if ( (*(_BYTE *)(v29 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_OWORD *)RtlpGetExtraStuffPointer(v29);
    v235 = ExtraStuffPointer;
    *ExtraStuffPointer = 0LL;
    if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
      *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      *((_WORD *)v235 + 1) = RtlpUpdateTagEntry(a1, (a2 >> 18) & 0xFFF, 0, *(unsigned __int16 *)v95, 0);
  }
  else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    *(_BYTE *)(v29 + 11) = RtlpUpdateTagEntry(a1, (unsigned __int8)(a2 >> 18), 0, *(unsigned __int16 *)v95, 0);
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v29 + 11) = *(_BYTE *)(v29 + 8) ^ *(_BYTE *)(v29 + 9) ^ *(_BYTE *)(v29 + 10);
    *v95 ^= *(_DWORD *)(a1 + 136);
  }
LABEL_481:
  if ( v197 )
  {
    if ( v201 && !*(_QWORD *)v202 )
      RtlpUpdateHeapWatermarks(a1);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v196 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v196 = 2147353480LL;
  if ( *(_BYTE *)v196 && v201 )
  {
    if ( *(_QWORD *)v202 )
      RtlpHeapLogRangeReserve(a1, *(_QWORD *)v202 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(*(_QWORD *)v202 + 40LL));
  }
  return v201;
}
