/*
 * XREFs of _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90
 * Callers:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpHpAllocWithExceptionProtection@12 @ 0x4B34D363 (_RtlpHpAllocWithExceptionProtection@12.c)
 *     _RtlpHpTagAllocateHeap@12 @ 0x4B36FCF9 (_RtlpHpTagAllocateHeap@12.c)
 * Callees:
 *     @RtlpAffinitizeSegmentInfoForBucket@8 @ 0x4B2AE1C2 (@RtlpAffinitizeSegmentInfoForBucket@8.c)
 *     @RtlpInterlockedPushEntrySList@8 @ 0x4B2C2090 (@RtlpInterlockedPushEntrySList@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     @RtlpFreeUserBlock@12 @ 0x4B2C24DB (@RtlpFreeUserBlock@12.c)
 *     @RtlpAllocateUserBlock@16 @ 0x4B2C3610 (@RtlpAllocateUserBlock@16.c)
 *     @RtlpSubSegmentInitialize@24 @ 0x4B2C37B0 (@RtlpSubSegmentInitialize@24.c)
 *     _RtlpIsSubSegmentReuseable@8 @ 0x4B2C3AA6 (_RtlpIsSubSegmentReuseable@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpHpStackLoggingEnabled@4 @ 0x4B2C3BD0 (_RtlpHpStackLoggingEnabled@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     @RtlpInterlockedPopEntrySList@4 @ 0x4B2DFE20 (@RtlpInterlockedPopEntrySList@4.c)
 *     @RtlpLowFragHeapAllocateFromZone@8 @ 0x4B2E4573 (@RtlpLowFragHeapAllocateFromZone@8.c)
 *     _RtlpIsSubSegmentReuseThresholdExceeded@8 @ 0x4B2EBEDC (_RtlpIsSubSegmentReuseThresholdExceeded@8.c)
 *     _RtlpSetSegmentInfo@8 @ 0x4B2F2640 (_RtlpSetSegmentInfo@8.c)
 *     _NtGetCurrentProcessorNumber@0 @ 0x4B2F38B0 (_NtGetCurrentProcessorNumber@0.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpLfhFindClearBitAndSet@16 @ 0x4B307931 (_RtlpLfhFindClearBitAndSet@16.c)
 *     _RtlpLfhIncrementDataSlot@0 @ 0x4B3079D9 (_RtlpLfhIncrementDataSlot@0.c)
 *     @InterlockedPushListSList@16 @ 0x4B33E8A0 (@InterlockedPushListSList@16.c)
 *     _RtlpCallInterceptRoutine@20 @ 0x4B35773E (_RtlpCallInterceptRoutine@20.c)
 *     @RtlpSetupExtendedBlock@24 @ 0x4B35CF90 (@RtlpSetupExtendedBlock@24.c)
 *     _RtlpAllocateHeapRaiseException@4 @ 0x4B35D445 (_RtlpAllocateHeapRaiseException@4.c)
 *     _RtlpHpConvertFlagsToSegmentFlags@4 @ 0x4B35D732 (_RtlpHpConvertFlagsToSegmentFlags@4.c)
 *     _RtlpHpStackTraceAddStack@8 @ 0x4B36DDE3 (_RtlpHpStackTraceAddStack@8.c)
 *     _RtlpLogHeapAffinityManagerEnable@8 @ 0x4B36ECC8 (_RtlpLogHeapAffinityManagerEnable@8.c)
 *     _RtlpLogHeapAllocateEvent@16 @ 0x4B36EDB6 (_RtlpLogHeapAllocateEvent@16.c)
 *     _RtlpLogHeapSubSegmentActivate@8 @ 0x4B36F259 (_RtlpLogHeapSubSegmentActivate@8.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpAllocateHeap@16 @ 0x4B37803E (_RtlpHpAllocateHeap@16.c)
 *     _RtlpHpMetadataHeapCtxGet@8 @ 0x4B3794D2 (_RtlpHpMetadataHeapCtxGet@8.c)
 */

char *__userpurge RtlpAllocateHeapInternal@<eax>(
        _DWORD *BaseAddress@<ecx>,
        unsigned int a2@<edx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5,
        int a6)
{
  int *v6; // ebx
  _DWORD *v7; // edi
  unsigned int v8; // esi
  int v9; // eax
  void *v10; // edx
  unsigned int v11; // esi
  unsigned int *Heap; // edi
  unsigned int *v13; // eax
  struct _TEB *v14; // esi
  _DWORD *v15; // esi
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  PRTL_SRWLOCK v26; // edx
  int v27; // eax
  int v28; // ecx
  bool v29; // zf
  _RTL_SRWLOCK *v30; // eax
  struct _TEB *v31; // esi
  int UniqueThread; // edi
  ULONG CurrentProcessorNumber; // eax
  int v34; // eax
  volatile __int32 *Value; // ecx
  volatile __int32 *v36; // eax
  signed __int32 v37; // eax
  unsigned int v38; // ecx
  _DWORD *v39; // edx
  volatile __int32 v40; // eax
  volatile signed __int32 *v41; // edi
  int v42; // eax
  volatile signed __int32 *v43; // ecx
  volatile signed __int32 *v44; // esi
  char *v45; // eax
  int v46; // edx
  signed __int32 v47; // esi
  int v48; // edi
  unsigned __int16 v49; // ax
  int ClearBitAndSet; // eax
  unsigned int v51; // ecx
  int v52; // esi
  volatile signed __int32 *v53; // edx
  unsigned int v54; // eax
  unsigned int v55; // ecx
  volatile signed __int32 *v56; // edi
  int v57; // esi
  unsigned int v58; // edi
  signed __int32 v59; // esi
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  signed __int32 v62; // eax
  int v63; // edx
  int v64; // edx
  unsigned int v65; // ecx
  unsigned int **v66; // esi
  _DWORD *v67; // esi
  _DWORD *v68; // edi
  signed __int32 v69; // eax
  unsigned int **v70; // edx
  signed __int32 v71; // eax
  unsigned int v72; // ecx
  volatile signed __int32 *v73; // edi
  signed __int32 v74; // edx
  char IsSubSegmentReuseable; // al
  signed __int32 v76; // edx
  unsigned int *v77; // ecx
  int v78; // edi
  int v79; // eax
  signed __int32 v80; // edx
  signed __int32 v81; // eax
  signed __int32 v82; // eax
  volatile signed __int32 *v83; // esi
  int v84; // eax
  volatile signed __int32 *v85; // edi
  char v86; // al
  signed __int32 v87; // edx
  unsigned int *v88; // ecx
  int v89; // edi
  int v90; // eax
  signed __int32 v91; // eax
  signed __int32 v92; // eax
  unsigned int v93; // ecx
  signed __int64 v94; // rax
  signed __int64 v95; // rdi
  int v96; // ecx
  unsigned int v97; // edx
  char v98; // cl
  unsigned int v99; // edi
  char v100; // cl
  unsigned int v101; // eax
  unsigned int v102; // eax
  _RTL_SRWLOCK *v103; // edi
  PRTL_SRWLOCK v104; // esi
  int *UserBlock; // eax
  int *v106; // edi
  unsigned int v107; // edx
  $64EDA4DD838E80CF9A7DD220E06F3FD2 *v108; // esi
  int v109; // ecx
  int v110; // eax
  PRTL_SRWLOCK v111; // ecx
  volatile signed __int32 *v112; // edi
  signed __int32 v113; // edx
  _DWORD *v114; // edx
  unsigned int v115; // ecx
  signed __int32 v116; // edx
  unsigned int *v117; // ecx
  int v118; // edi
  int v119; // eax
  signed __int32 v120; // eax
  signed __int32 v121; // edx
  unsigned int *v122; // ecx
  unsigned int v123; // edx
  int v124; // eax
  volatile signed __int32 *v125; // edx
  signed __int32 v126; // eax
  unsigned int v127; // edx
  int v128; // eax
  volatile signed __int32 *v129; // edi
  char v130; // al
  signed __int32 v131; // edx
  unsigned int *v132; // ecx
  int v133; // edi
  int v134; // eax
  signed __int32 v135; // eax
  unsigned int v136; // ecx
  unsigned int v137; // edx
  _DWORD *v138; // eax
  _DWORD *v139; // ecx
  unsigned int v140; // ecx
  unsigned int v141; // edx
  int v142; // eax
  char *v143; // esi
  _DWORD *v144; // esi
  struct _TEB *v145; // esi
  ULONG v146; // eax
  int v147; // ecx
  unsigned int v148; // eax
  _DWORD *SharedData; // eax
  int v150; // eax
  char v151; // al
  char *v152; // edx
  char *v153; // ecx
  size_t v155; // [esp-80h] [ebp-8Ch]
  int *v156; // [esp-80h] [ebp-8Ch]
  char *v157; // [esp-80h] [ebp-8Ch]
  unsigned int v158; // [esp-70h] [ebp-7Ch]
  unsigned int v159; // [esp-60h] [ebp-6Ch]
  unsigned int *v160; // [esp-60h] [ebp-6Ch]
  volatile signed __int32 *v161; // [esp-60h] [ebp-6Ch]
  unsigned int *v162; // [esp-60h] [ebp-6Ch]
  int v163; // [esp-5Ch] [ebp-68h]
  _RTL_SRWLOCK *v164; // [esp-58h] [ebp-64h]
  unsigned int v165; // [esp-54h] [ebp-60h]
  volatile __int32 v166; // [esp-54h] [ebp-60h]
  volatile signed __int32 *v167; // [esp-54h] [ebp-60h]
  volatile signed __int32 *v168; // [esp-54h] [ebp-60h]
  volatile signed __int32 *v169; // [esp-54h] [ebp-60h]
  unsigned int v170; // [esp-54h] [ebp-60h]
  int v171; // [esp-54h] [ebp-60h]
  volatile signed __int32 *v172; // [esp-54h] [ebp-60h]
  volatile signed __int32 *v173; // [esp-54h] [ebp-60h]
  volatile signed __int32 *v174; // [esp-54h] [ebp-60h]
  int v175; // [esp-50h] [ebp-5Ch]
  _DWORD *v176; // [esp-50h] [ebp-5Ch]
  _DWORD *v177; // [esp-50h] [ebp-5Ch]
  unsigned int *v178; // [esp-50h] [ebp-5Ch]
  unsigned int *v179; // [esp-50h] [ebp-5Ch]
  unsigned int v180; // [esp-50h] [ebp-5Ch]
  unsigned int *v181; // [esp-50h] [ebp-5Ch]
  unsigned int *v182; // [esp-50h] [ebp-5Ch]
  unsigned int *v183; // [esp-50h] [ebp-5Ch]
  int v184; // [esp-4Ch] [ebp-58h]
  int v185; // [esp-4Ch] [ebp-58h]
  char v186; // [esp-48h] [ebp-54h]
  volatile __int32 **v187; // [esp-44h] [ebp-50h]
  volatile __int32 *v188; // [esp-44h] [ebp-50h]
  _DWORD *v189; // [esp-44h] [ebp-50h]
  volatile signed __int64 *v190; // [esp-44h] [ebp-50h]
  unsigned int v191; // [esp-44h] [ebp-50h]
  volatile signed __int32 *v192; // [esp-44h] [ebp-50h]
  volatile __int32 *v193; // [esp-40h] [ebp-4Ch]
  unsigned int v194; // [esp-40h] [ebp-4Ch]
  unsigned int v195; // [esp-40h] [ebp-4Ch]
  int v196; // [esp-40h] [ebp-4Ch]
  int v197; // [esp-3Ch] [ebp-48h]
  unsigned int v198; // [esp-38h] [ebp-44h] BYREF
  unsigned int v199; // [esp-34h] [ebp-40h]
  int v200; // [esp-30h] [ebp-3Ch] BYREF
  int v201; // [esp-2Ch] [ebp-38h]
  unsigned int v202; // [esp-28h] [ebp-34h]
  PRTL_SRWLOCK v203; // [esp-24h] [ebp-30h]
  _RTL_SRWLOCK *v204; // [esp-20h] [ebp-2Ch]
  int v205; // [esp-1Ch] [ebp-28h]
  unsigned int v206; // [esp-18h] [ebp-24h]
  volatile __int32 *v207; // [esp-14h] [ebp-20h]
  int v208; // [esp-10h] [ebp-1Ch]
  _DWORD *v209; // [esp-Ch] [ebp-18h]
  volatile __int32 *v210; // [esp-8h] [ebp-14h]
  char v211; // [esp-1h] [ebp-Dh]
  int v212; // [esp+0h] [ebp-Ch]
  void *v213; // [esp+4h] [ebp-8h]
  int v214; // [esp+8h] [ebp-4h] BYREF
  void *retaddr; // [esp+Ch] [ebp+0h]

  v6 = &v214;
  v212 = a3;
  v213 = retaddr;
  HIDWORD(v155) = a4;
  v7 = BaseAddress;
  v8 = a2;
  v206 = a2;
  v209 = BaseAddress;
  if ( BaseAddress[2] != -571548178 )
  {
    v200 = 0;
    v185 = 0;
    v16 = BaseAddress[17];
    v17 = v16 | a5;
    v205 = v16 | a5;
    v198 = 0;
    if ( a2 > 0x7FFFFFFF )
    {
      v200 = 5;
LABEL_298:
      Heap = 0;
      goto LABEL_299;
    }
    v18 = v16 & 0x1000000;
    if ( !v18 && !dword_4B3A373C )
    {
      v19 = v7[55];
      if ( (v19 || (v19 = dword_4B3A4334) != 0) && a2 > v19 )
      {
        v20 = v7[56];
        if ( v20 )
          RtlpLogHeapFailure(0, v20, a2, v7[55]);
        v200 = 5;
        goto LABEL_298;
      }
      v17 = v205;
    }
    v197 = v7[22];
    if ( v197 )
    {
      if ( (v17 & 0x3C000102) != 0 || v18 )
      {
        v197 = 0;
      }
      else
      {
        if ( (int)RtlpCallInterceptRoutine(0, 1, &v198) < 0 )
          goto LABEL_298;
        v21 = (v198 + 7) & 0xFFFFFFF8;
        v8 += v21 + 8;
        v206 = v8;
        v198 = v21 + 8;
      }
    }
    v22 = v8;
    if ( !v8 )
      v22 = 1;
    v23 = (v22 + 15) & 0xFFFFFFF8;
    v185 = v23;
    v24 = v23 >> 3;
    v202 = v23 >> 3;
    if ( (v205 & 0x7D810F61) != 0 )
      goto LABEL_292;
    if ( v8 <= RtlpLargestLfhBlock )
    {
      if ( ((unsigned __int8)(1 << (v202 & 7)) & *((_BYTE *)v7 + (v23 >> 6) + 242)) == 0 )
        goto LABEL_281;
      v25 = v7[59];
      v26 = (PRTL_SRWLOCK)v7[57];
      v200 = 2;
      v203 = v26;
      v27 = *(unsigned __int16 *)(v25 + 2 * v202);
      v28 = 0;
      v201 = 0;
      v29 = (*(_BYTE *)&v26[110].0 & 1) == 0;
      v30 = &v26[v27 + 111];
      v204 = v30;
      if ( v29 && (HIBYTE(v30->Ptr) & 1) != 0 )
      {
        v31 = NtCurrentTeb();
        UniqueThread = (int)v31->ClientId.UniqueThread;
        v28 = LOBYTE(v31->HeapData) - 1;
        v201 = v28;
        if ( v28 < 0 || dword_4B3A4368[v28] != UniqueThread )
        {
          CurrentProcessorNumber = NtGetCurrentProcessorNumber();
          v26 = v203;
          v28 = CurrentProcessorNumber & dword_4B3A4364;
          v201 = CurrentProcessorNumber & dword_4B3A4364;
          LOBYTE(v31->HeapData) = (CurrentProcessorNumber & dword_4B3A4364) + 1;
          dword_4B3A4368[v28] = UniqueThread;
        }
      }
      v164 = &v26[4 * v28 + 500 + 2 * v28];
      v34 = BYTE2(v204->Value);
      v163 = 8 * LOWORD(v204->Value);
      if ( v28 )
        Value = (volatile __int32 *)(v26[v34 + 369].Value + 104 * v28 - 104);
      else
        Value = (volatile __int32 *)v26[v34 + 240].Value;
      v210 = Value;
      v36 = Value + 1;
      v207 = Value + 1;
LABEL_55:
      v40 = *v36;
      v187 = (volatile __int32 **)v40;
      if ( !v40 )
        goto LABEL_84;
      v41 = (volatile signed __int32 *)(v40 + 16);
      v208 = 0;
      v42 = HIWORD(*(_DWORD *)(v40 + 16));
      v43 = *(volatile signed __int32 **)(*Value + 12);
      v199 = (unsigned int)v43;
      if ( (v42 & 0x8000u) != 0 )
      {
        v208 = 1;
        v44 = &v43[*((unsigned __int16 *)v210 + 46)];
        if ( (*((_BYTE *)v44 + 447) & 1) == 0
          && RtlpAffinitizeSegmentInfoForBucket((int)v43, *((unsigned __int8 *)v44 + 446)) >= 0 )
        {
          *((_BYTE *)v44 + 447) |= 1u;
          v45 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
          if ( *v45 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapAffinityManagerEnable(*(_DWORD *)(v199 + 12), *((unsigned __int8 *)v44 + 446));
        }
      }
      v46 = 0;
      v165 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      while ( 1 )
      {
        v47 = *v41;
        if ( (*v41 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v47 )
            goto LABEL_78;
          if ( _InterlockedCompareExchange(v41, v47 | 0x80000000, v47) == v47 )
            break;
        }
        if ( ++v46 > v165 )
          goto LABEL_78;
      }
      if ( v47 != -1 )
      {
        v193 = v187[1];
        if ( v193 && *v187 == v210 && (_WORD)v47 )
        {
          v48 = (unsigned __int8)RtlpSearchWidth[*((unsigned __int16 *)v210 + 46)];
          v49 = RtlpLfhIncrementDataSlot();
          ClearBitAndSet = RtlpLfhFindClearBitAndSet(*((unsigned __int8 *)RtlpLowFragHeapRandomData + v49), v48);
          v187[4] = (volatile __int32 *)((ClearBitAndSet << 16) | ((unsigned __int16)v47 - 1));
          v51 = RtlpLFHKey ^ v199 ^ (unsigned int)v193 ^ *((_DWORD *)v193 + 4);
          v52 = (int)v193 + ClearBitAndSet * HIWORD(v51) + (unsigned __int16)v51;
          if ( (*(_BYTE *)(v52 + 7) & 0x3F) == 0 )
            goto LABEL_79;
          RtlpLogHeapFailure(v52, 0, 0, 0);
        }
        else
        {
          *v41 = v47;
        }
      }
LABEL_78:
      v52 = 0;
LABEL_79:
      if ( v208 && dword_4B3A4364 + 1 < (unsigned int)RtlpAffinityState )
        _InterlockedCompareExchange(&dword_4B3A4364, 2 * (dword_4B3A4364 + 1) - 1, dword_4B3A4364);
      if ( !v52 )
      {
        Value = v210;
LABEL_84:
        v53 = Value + 2;
        v166 = *Value;
        v188 = Value + 2;
LABEL_85:
        v208 = 0;
LABEL_86:
        v54 = 0;
        v175 = 16;
        v55 = 0;
        v199 = 0;
        v194 = 0;
        v56 = v53;
        while ( 1 )
        {
          v57 = *v56;
          if ( *v56 )
          {
            v159 = *(unsigned __int16 *)(v57 + 16);
            if ( v159 <= v55 )
              goto LABEL_92;
            if ( (unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(v210, v57) )
            {
              v55 = v194;
LABEL_92:
              v54 = v199;
              goto LABEL_93;
            }
            v55 = v159;
            v54 = (unsigned int)v56;
            v208 = v57;
            v194 = v159;
            v199 = (unsigned int)v56;
          }
LABEL_93:
          ++v56;
          if ( !--v175 )
          {
            if ( v54 )
            {
              v195 = *(_DWORD *)(*(_DWORD *)(v166 + 12) + 4 * *((unsigned __int16 *)v210 + 46) + 960) + 72;
              v58 = v195;
              v59 = RtlpInterlockedPopEntrySList(v195);
              if ( v59 )
              {
                while ( 1 )
                {
                  v176 = (_DWORD *)v59;
                  v59 -= 32;
                  if ( (*(_DWORD *)(v59 + 28) & 1) != 0 )
                    break;
                  if ( _InterlockedAnd((volatile signed __int32 *)(v59 + 28), 0xFFFFFFFD) == 2 )
                  {
                    v60 = **(_DWORD **)v59;
                    *(_DWORD *)v59 = 0;
                    RtlpInterlockedPushEntrySList(v60, v176);
                  }
                  v58 = v195;
                  v59 = RtlpInterlockedPopEntrySList(v195);
                  if ( !v59 )
                    goto LABEL_103;
                }
                v58 = v195;
                if ( !RtlpSetSegmentInfo(v59, v210) )
                {
                  RtlpInterlockedPushEntrySList(v195, v176);
                  v59 = 0;
                }
              }
LABEL_103:
              v61 = v199;
              v62 = _InterlockedCompareExchange((volatile signed __int32 *)v199, v59, v208);
              v63 = v208;
              if ( v62 != v208 )
              {
                v53 = v188;
                if ( v59 )
                {
                  RtlpInterlockedPushEntrySList(v58, (_DWORD *)(v59 + 32));
                  v53 = v188;
                }
                goto LABEL_86;
              }
              if ( !v59 )
                *((_WORD *)v210 + 47) = (unsigned __int8)((int)(v61 - (_DWORD)v210 - 8) >> 2);
              if ( v63 )
              {
                if ( _InterlockedAnd((volatile signed __int32 *)(v63 + 28), 0xFFFFFFFD) != 2 )
                {
                  v66 = (unsigned int **)v208;
                  goto LABEL_128;
                }
                v64 = v208;
                v65 = **(_DWORD **)v208;
                *(_DWORD *)v208 = 0;
                RtlpInterlockedPushEntrySList(v65, (_DWORD *)(v64 + 32));
                v53 = v188;
                goto LABEL_85;
              }
            }
            else
            {
              v208 = 0;
            }
            v67 = 0;
            v196 = 0;
            v177 = 0;
            v189 = 0;
            v199 = *(_DWORD *)(*(_DWORD *)(v166 + 12) + 4 * *((unsigned __int16 *)v210 + 46) + 960) + 72;
            v68 = (_DWORD *)RtlpInterlockedPopEntrySList(v199);
            if ( !v68 )
              goto LABEL_127;
            while ( 2 )
            {
              v208 = (int)(v68 - 8);
              v167 = v68 - 1;
              if ( (*v167 & 1) == 0 )
              {
                v71 = _InterlockedAnd(v167, 0xFFFFFFFD);
                v67 = v189;
                v70 = (unsigned int **)v208;
                if ( v71 != 2 )
                  goto LABEL_124;
LABEL_123:
                v72 = **v70;
                *v70 = 0;
                RtlpInterlockedPushEntrySList(v72, v68);
                goto LABEL_124;
              }
              if ( !RtlpSetSegmentInfo(v208, v210) )
              {
                if ( !v196 )
                  v177 = v68;
                *v68 = v67;
                v67 = v68;
                ++v196;
                v189 = v68;
                goto LABEL_124;
              }
              v69 = _InterlockedAnd(v167, 0xFFFFFFFD);
              v67 = v189;
              v70 = (unsigned int **)v208;
              if ( v69 == 2 )
                goto LABEL_123;
              if ( RtlpIsSubSegmentReuseable((int)v210, v208) )
                break;
LABEL_124:
              v208 = 0;
              v68 = (_DWORD *)RtlpInterlockedPopEntrySList(v199);
              if ( v68 )
                continue;
              break;
            }
            if ( v196 )
              InterlockedPushListSList(v177, v196);
LABEL_127:
            v66 = (unsigned int **)v208;
LABEL_128:
            if ( v66 )
            {
              v73 = (volatile signed __int32 *)(v66 + 7);
              *((_BYTE *)v66 + 27) = v201;
              do
              {
                v74 = *v73;
                v36 = v207;
                if ( !*v73 || (v74 & 6) != 0 )
                  goto LABEL_54;
              }
              while ( _InterlockedCompareExchange(v73, v74 | 6, v74) != v74 );
              v160 = *v66;
              if ( *v66 != (unsigned int *)v210 )
              {
                if ( _InterlockedAnd(v73, 0xFFFFFFF9) == 6 )
                {
LABEL_135:
                  v39 = v66 + 8;
                  v38 = **v66;
                  *v66 = 0;
LABEL_53:
                  RtlpInterlockedPushEntrySList(v38, v39);
                  v36 = v207;
                  goto LABEL_54;
                }
                IsSubSegmentReuseable = RtlpIsSubSegmentReuseable((int)v160, (int)v66);
                Value = v210;
                v29 = IsSubSegmentReuseable == 0;
                v36 = v210 + 1;
                if ( v29 )
                  goto LABEL_55;
                do
                {
                  Value = v210;
                  v76 = *v73;
                  v36 = v210 + 1;
                  if ( *v73 )
                  {
                    v36 = v210 + 1;
                    if ( (v76 & 2) == 0 )
                      continue;
                  }
                  goto LABEL_55;
                }
                while ( _InterlockedCompareExchange(v73, v76 | 2, v76) != v76 );
                v77 = *v66;
                v78 = 0;
                v178 = *v66;
                while ( 2 )
                {
                  v79 = (((_BYTE)v78 + (unsigned __int8)*((_WORD *)v77 + 47)) & 0xF) + 2;
                  v80 = v77[v79];
                  v168 = (volatile signed __int32 *)&v77[v79];
                  if ( !v80 )
                  {
                    v81 = _InterlockedCompareExchange(v168, (signed __int32)v66, 0);
                    Value = v210;
                    v29 = v81 == 0;
                    v36 = v210 + 1;
                    if ( v29 )
                      goto LABEL_55;
                    goto LABEL_146;
                  }
                  v161 = (volatile signed __int32 *)(v80 + 28);
                  if ( (*(_DWORD *)(v80 + 28) & 1) == 0 )
                  {
                    v82 = _InterlockedCompareExchange(v168, (signed __int32)v66, v80);
                    v66 = (unsigned int **)v208;
                    if ( v82 == v80 )
                      goto LABEL_149;
LABEL_146:
                    v77 = v178;
                  }
                  if ( (unsigned int)++v78 >= 0x10 )
                    goto LABEL_170;
                  continue;
                }
              }
              if ( RtlGetCurrentServiceSessionId() )
                v84 = (int)NtCurrentPeb()->SharedData + 550;
              else
                v84 = 2147353472;
              if ( *(_BYTE *)v84 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapSubSegmentActivate(*(_DWORD *)(*(_DWORD *)(*v210 + 12) + 12), v66[1]);
              v36 = v207;
              v66 = (unsigned int **)_InterlockedExchange(v207, (__int32)v66);
              v208 = (int)v66;
              if ( v66 )
              {
                v85 = (volatile signed __int32 *)(v66 + 7);
                if ( _InterlockedAnd((volatile signed __int32 *)v66 + 7, 0xFFFFFFF9) == 6 )
                  goto LABEL_135;
                v86 = RtlpIsSubSegmentReuseable((int)v210, (int)v66);
                Value = v210;
                v29 = v86 == 0;
                v36 = v210 + 1;
                if ( v29 )
                  goto LABEL_55;
                do
                {
                  Value = v210;
                  v87 = *v85;
                  v36 = v210 + 1;
                  if ( *v85 )
                  {
                    v36 = v210 + 1;
                    if ( (v87 & 2) == 0 )
                      continue;
                  }
                  goto LABEL_55;
                }
                while ( _InterlockedCompareExchange(v85, v87 | 2, v87) != v87 );
                v88 = *v66;
                v89 = 0;
                v179 = *v66;
                while ( 2 )
                {
                  v90 = (((_BYTE)v89 + (unsigned __int8)*((_WORD *)v88 + 47)) & 0xF) + 2;
                  v80 = v88[v90];
                  v169 = (volatile signed __int32 *)&v88[v90];
                  if ( !v80 )
                  {
                    v91 = _InterlockedCompareExchange(v169, (signed __int32)v66, 0);
                    Value = v210;
                    v29 = v91 == 0;
                    v36 = v210 + 1;
                    if ( v29 )
                      goto LABEL_55;
                    goto LABEL_168;
                  }
                  v161 = (volatile signed __int32 *)(v80 + 28);
                  if ( (*(_DWORD *)(v80 + 28) & 1) == 0 )
                  {
                    v92 = _InterlockedCompareExchange(v169, (signed __int32)v66, v80);
                    v66 = (unsigned int **)v208;
                    if ( v92 == v80 )
                    {
LABEL_149:
                      v83 = v161;
                      goto LABEL_51;
                    }
LABEL_168:
                    v88 = v179;
                  }
                  if ( (unsigned int)++v89 >= 0x10 )
                    goto LABEL_170;
                  continue;
                }
              }
LABEL_54:
              Value = v210;
              goto LABEL_55;
            }
            v180 = v203[110].Value & 2;
            v199 = *((_DWORD *)v210 + 20);
            v93 = BYTE2(v204->Value);
            LODWORD(v94) = v203 + 12;
            v170 = v93;
            v190 = (volatile signed __int64 *)&v203[12];
            do
            {
              v95 = *(_QWORD *)v94;
              v211 = 0;
              if ( (_DWORD)v95 == v93 )
              {
                v96 = HIDWORD(v95) + 1;
                if ( HIDWORD(v95) > 7 )
                {
                  v211 = 1;
                  v96 = 0;
                }
              }
              else
              {
                v158 = v93;
                v96 = 1;
              }
              v156 = v6;
              v94 = _InterlockedCompareExchange64(v190, __SPAIR64__(v96, v158), v95);
              v6 = v156;
              v29 = (_DWORD)v94 == (_DWORD)v95;
              LODWORD(v94) = v190;
              v93 = v170;
            }
            while ( !v29 || HIDWORD(v94) != HIDWORD(v95) );
            if ( !v211 || v180 )
              v199 >>= (v180 != 0) + 3;
            v97 = v199;
            v98 = HIBYTE(v204->Ptr) & 1;
            v99 = (unsigned __int16)RtlpBucketBlockSizes[BYTE2(v204->Value)];
            if ( v99 < 0x100 )
              --v98;
            if ( *((_DWORD *)v210 + 21) )
              --v98;
            v100 = 3 - v98;
            if ( v199 < 1 << v100 )
              v97 = 1 << v100;
            if ( v97 >= 4 )
            {
              if ( v97 > 0x400 )
                v97 = 1024;
            }
            else
            {
              v97 = 4;
            }
            v101 = (((v97 + 31) >> 3) & 0x1FFFFFFC) + v97 * (v99 + 8) + 36;
            if ( v101 >= 0x78000 )
              v101 = 491520;
            _BitScanReverse(&v101, v101 - 1);
            v102 = v101 + 1;
            v208 = v102;
            if ( v102 <= 7 )
            {
              v102 = 7;
              v208 = 7;
            }
            if ( v102 >= 0x12 )
            {
              LOBYTE(v102) = 18;
              v208 = 18;
            }
            v103 = v204;
            if ( (HIBYTE(v204->Ptr) & 6) != 0 )
            {
              LOBYTE(v102) = 18;
              v208 = 18;
            }
            if ( (_BYTE)v102 == 18 || v199 >= 0x400 )
            {
              v186 = 1;
              if ( (unsigned __int8)v102 < 0x11u && (unsigned __int8)v102 >= 0xFu )
                v186 = (*((unsigned __int8 *)RtlpLowFragHeapRandomData + (unsigned __int16)RtlpLfhIncrementDataSlot()) & ((4 >> (v208 - 15)) - 1)) == 0;
            }
            else
            {
              v186 = 0;
            }
            v104 = v203;
            UserBlock = (int *)RtlpAllocateUserBlock(
                                 (int)v203,
                                 v208,
                                 (unsigned __int16)RtlpBucketBlockSizes[BYTE2(v103->Value)] + 8,
                                 v186);
            v106 = UserBlock;
            if ( !UserBlock )
              goto LABEL_280;
            v107 = 1 << *((_BYTE *)UserBlock + 8);
            if ( v107 > 0x78000 )
              v107 = 491520;
            v171 = v107 + *((unsigned __int16 *)UserBlock + 5);
            _InterlockedIncrement((volatile signed __int32 *)&v104[7]);
            RtlAcquireSRWLockExclusive(&RtlpSlistLockedAltLocks + (((unsigned int)v164 >> 2) & 0x1F));
            v108 = ($64EDA4DD838E80CF9A7DD220E06F3FD2 *)v164->Value;
            if ( v164->Value )
            {
              v164->0 = *v108;
              --*(_WORD *)&v164[1].0;
            }
            RtlReleaseSRWLockExclusive(&RtlpSlistLockedAltLocks + (((unsigned int)v164 >> 2) & 0x1F));
            if ( !v108 )
            {
              v110 = RtlpLowFragHeapAllocateFromZone(v203);
              v66 = (unsigned int **)v110;
              if ( v110 )
              {
                *(_DWORD *)(v110 + 4) = 0;
                goto LABEL_214;
              }
              goto LABEL_279;
            }
            v66 = (unsigned int **)&v108[-8];
LABEL_214:
            if ( !v66 )
            {
LABEL_279:
              RtlpFreeUserBlock((int)v203, v106, v109);
              goto LABEL_280;
            }
            v111 = v203;
            *((_BYTE *)v66 + 27) = v201;
            RtlpSubSegmentInitialize(
              (int)v111,
              (int)v66,
              (unsigned int)v106,
              (unsigned __int16)RtlpBucketBlockSizes[BYTE2(v204->Value)],
              v171,
              (int)v204);
            v112 = (volatile signed __int32 *)(v66 + 7);
            while ( 2 )
            {
              v113 = *v112;
              if ( !*v112 || (v113 & 6) != 0 )
              {
                do
                {
LABEL_223:
                  Value = v210;
                  v116 = *v112;
                  v36 = v210 + 1;
                  if ( *v112 )
                  {
                    v36 = v210 + 1;
                    if ( (v116 & 2) == 0 )
                      continue;
                  }
                  goto LABEL_55;
                }
                while ( _InterlockedCompareExchange(v112, v116 | 2, v116) != v116 );
                v117 = *v66;
                v118 = 0;
                v181 = *v66;
                while ( 2 )
                {
                  v119 = (((_BYTE)v118 + (unsigned __int8)*((_WORD *)v117 + 47)) & 0xF) + 2;
                  v80 = v117[v119];
                  v172 = (volatile signed __int32 *)&v117[v119];
                  if ( !v80 )
                  {
                    v120 = _InterlockedCompareExchange(v172, (signed __int32)v66, 0);
                    Value = v210;
                    v29 = v120 == 0;
                    v36 = v210 + 1;
                    if ( v29 )
                      goto LABEL_55;
                    goto LABEL_269;
                  }
                  v192 = (volatile signed __int32 *)(v80 + 28);
                  if ( (*(_DWORD *)(v80 + 28) & 1) == 0 )
                  {
                    if ( _InterlockedCompareExchange(v172, (signed __int32)v66, v80) == v80 )
                      goto LABEL_266;
LABEL_269:
                    v117 = v181;
                  }
                  if ( (unsigned int)++v118 >= 0x10 )
                    goto LABEL_170;
                  continue;
                }
              }
              if ( _InterlockedCompareExchange(v112, v113 | 6, v113) != v113 )
                continue;
              break;
            }
            v162 = *v66;
            if ( *v66 != (unsigned int *)v210 )
            {
              if ( _InterlockedAnd(v112, 0xFFFFFFF9) == 6 )
              {
                v114 = v66 + 8;
                v115 = **v66;
                *v66 = 0;
LABEL_222:
                RtlpInterlockedPushEntrySList(v115, v114);
                goto LABEL_223;
              }
              if ( !RtlpIsSubSegmentReuseable((int)v162, (int)v66) )
                goto LABEL_223;
              do
              {
                v121 = *v112;
                if ( !*v112 || (v121 & 2) != 0 )
                  goto LABEL_223;
              }
              while ( _InterlockedCompareExchange(v112, v121 | 2, v121) != v121 );
              v122 = *v66;
              LOBYTE(v123) = 0;
              v182 = *v66;
              v191 = 0;
              while ( 2 )
              {
                v124 = (((_BYTE)v123 + (unsigned __int8)*((_WORD *)v122 + 47)) & 0xF) + 2;
                v125 = (volatile signed __int32 *)v122[v124];
                v173 = (volatile signed __int32 *)&v122[v124];
                v199 = (unsigned int)v125;
                if ( !v125 )
                {
                  if ( !_InterlockedCompareExchange(v173, (signed __int32)v66, 0) )
                    goto LABEL_223;
                  goto LABEL_240;
                }
                if ( (v125[7] & 1) == 0 )
                {
                  v112 = (volatile signed __int32 *)(v66 + 7);
                  if ( (volatile signed __int32 *)_InterlockedCompareExchange(
                                                    v173,
                                                    (signed __int32)v66,
                                                    (signed __int32)v125) == v125 )
                  {
                    v126 = _InterlockedAnd(v125 + 7, 0xFFFFFFFD);
                    v127 = v199;
                    v112 = (volatile signed __int32 *)(v66 + 7);
                    if ( v126 != 2 )
                      goto LABEL_223;
                    v115 = **(_DWORD **)v199;
                    *(_DWORD *)v199 = 0;
                    v114 = (_DWORD *)(v127 + 32);
                    goto LABEL_222;
                  }
LABEL_240:
                  v122 = v182;
                }
                v123 = v191 + 1;
                v191 = v123;
                if ( v123 >= 0x10 )
                {
                  v114 = v66 + 8;
                  v115 = *(_DWORD *)(*(_DWORD *)(**v66 + 12) + 4 * *((unsigned __int16 *)*v66 + 46) + 960) + 72;
                  goto LABEL_222;
                }
                continue;
              }
            }
            if ( RtlGetCurrentServiceSessionId() )
              v128 = (int)NtCurrentPeb()->SharedData + 550;
            else
              v128 = 2147353472;
            if ( *(_BYTE *)v128 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapSubSegmentActivate(*(_DWORD *)(*(_DWORD *)(*v210 + 12) + 12), v66[1]);
            v36 = v207;
            v66 = (unsigned int **)_InterlockedExchange(v207, (__int32)v66);
            if ( !v66 )
              goto LABEL_54;
            v129 = (volatile signed __int32 *)(v66 + 7);
            if ( _InterlockedAnd((volatile signed __int32 *)v66 + 7, 0xFFFFFFF9) == 6 )
              goto LABEL_135;
            v130 = RtlpIsSubSegmentReuseable((int)v210, (int)v66);
            Value = v210;
            v29 = v130 == 0;
            v36 = v210 + 1;
            if ( v29 )
              goto LABEL_55;
            do
            {
              Value = v210;
              v131 = *v129;
              v36 = v210 + 1;
              if ( *v129 )
              {
                v36 = v210 + 1;
                if ( (v131 & 2) == 0 )
                  continue;
              }
              goto LABEL_55;
            }
            while ( _InterlockedCompareExchange(v129, v131 | 2, v131) != v131 );
            v132 = *v66;
            v133 = 0;
            v183 = *v66;
            while ( 2 )
            {
              v134 = (((_BYTE)v133 + (unsigned __int8)*((_WORD *)v132 + 47)) & 0xF) + 2;
              v80 = v132[v134];
              v174 = (volatile signed __int32 *)&v132[v134];
              if ( !v80 )
              {
                v135 = _InterlockedCompareExchange(v174, (signed __int32)v66, 0);
                Value = v210;
                v29 = v135 == 0;
                v36 = v210 + 1;
                if ( v29 )
                  goto LABEL_55;
LABEL_263:
                v132 = v183;
LABEL_264:
                if ( (unsigned int)++v133 >= 0x10 )
                {
LABEL_170:
                  v39 = v66 + 8;
                  v38 = *(_DWORD *)(*(_DWORD *)(**v66 + 12) + 4 * *((unsigned __int16 *)*v66 + 46) + 960) + 72;
                  goto LABEL_53;
                }
                continue;
              }
              break;
            }
            v192 = (volatile signed __int32 *)(v80 + 28);
            if ( (*(_DWORD *)(v80 + 28) & 1) != 0 )
              goto LABEL_264;
            if ( _InterlockedCompareExchange(v174, (signed __int32)v66, v80) != v80 )
              goto LABEL_263;
LABEL_266:
            v83 = v192;
LABEL_51:
            v37 = _InterlockedAnd(v83, 0xFFFFFFFD);
            Value = v210;
            v29 = v37 == 2;
            v36 = v210 + 1;
            if ( v29 )
            {
              v38 = **(_DWORD **)v80;
              *(_DWORD *)v80 = 0;
              v39 = (_DWORD *)(v80 + 32);
              goto LABEL_53;
            }
            goto LABEL_55;
          }
        }
      }
      Heap = (unsigned int *)(v52 + 8);
      if ( (v205 & 8) != 0 )
      {
        LODWORD(v155) = v163 - 8;
        memset((void *)(v52 + 8), 0, v155);
      }
      v136 = v206;
      v137 = v163 - v206;
      if ( v163 - v206 >= 0x3F )
      {
        *(_DWORD *)(v52 + 8 * LOWORD(v204->Value) - 4) = v137;
        *(_BYTE *)(v52 + 7) = -65;
      }
      else
      {
        *(_BYTE *)(v52 + 7) = v137 | 0x80;
      }
      if ( v52 != -8 )
      {
LABEL_295:
        if ( v197 )
        {
          v143 = (char *)Heap;
          v206 = v136 - v198;
          Heap = (unsigned int *)RtlpSetupExtendedBlock(Heap, v136 - v198, v198, v197);
          v157 = v143;
          v144 = v209;
          if ( (int)RtlpCallInterceptRoutine(Heap, 2, v157) < 0 )
          {
            RtlFreeHeap(v144, 0, Heap);
            goto LABEL_298;
          }
        }
        else
        {
          v144 = v209;
        }
        v147 = v205;
        goto LABEL_305;
      }
LABEL_280:
      v7 = v209;
      v8 = v206;
LABEL_281:
      v24 = v202;
    }
    v138 = (_DWORD *)v7[45];
    if ( v24 < v138[1] )
    {
LABEL_285:
      v140 = v24;
    }
    else
    {
      while ( 1 )
      {
        v139 = (_DWORD *)*v138;
        if ( !*v138 )
          break;
        v138 = (_DWORD *)*v138;
        if ( v24 < v139[1] )
          goto LABEL_285;
      }
      v140 = v138[1] - 1;
    }
    if ( v140 >= v138[1] || v24 != v140 )
    {
LABEL_292:
      v142 = 0;
    }
    else
    {
      v141 = v24 - v138[5];
      if ( v138[2] )
        v141 *= 2;
      v142 = v138[8] + 4 * v141;
    }
    Heap = (unsigned int *)RtlpAllocateHeap(v7, v8, v185, v142, (int)&v200);
    if ( !Heap )
    {
LABEL_299:
      v145 = NtCurrentTeb();
      v145->LastStatusValue = -1073741801;
      v146 = RtlNtStatusToDosError(-1073741801);
      v147 = v205;
      v145->LastErrorValue = v146;
      if ( (v147 & 4) != 0 )
      {
        v148 = v185;
        if ( !v185 )
          v148 = v206;
        RtlpAllocateHeapRaiseException(v148);
      }
      v144 = v209;
LABEL_305:
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v150 = (int)NtCurrentPeb()->SharedData + 550;
      else
        v150 = 2147353472;
      if ( !*(_BYTE *)v150
        || (NtCurrentPeb()->TracingFlags & 1) == 0
        || (v144[17] & 0x1000000) != 0
        || (v147 & 0x61000000) != 0 && (v147 & 0x10000000) == 0
        || v200 == 5 )
      {
        goto LABEL_324;
      }
      if ( !Heap )
        goto LABEL_323;
      v151 = *((_BYTE *)Heap - 1);
      v152 = (char *)(Heap - 2);
      v153 = (char *)(Heap - 2);
      if ( v151 == 5 )
      {
        v153 -= 8 * (unsigned __int8)v152[6];
        v151 = v152[7];
      }
      if ( v153[7] < 0 )
        goto LABEL_323;
      if ( v151 == 5 )
        v152 -= 8 * (unsigned __int8)v152[6];
      if ( (((unsigned __int8)v152[2] ^ (unsigned __int8)(*((_BYTE *)v209 + 82) & (v209[19] >> 17))) & 8) != 0 )
      {
LABEL_324:
        v15 = v209;
      }
      else
      {
LABEL_323:
        v15 = v209;
        RtlpLogHeapAllocateEvent(v206, v200);
      }
      if ( (dword_4B3A6834 & 1) != 0
        && (dword_4B3A6834 & 2) != 0
        && NtCurrentPeb()->ProcessHeap
        && v15 != *(_DWORD **)RtlpHpMetadataHeapCtxGet(RtlpHpEnvHandle, dword_4B3A446C)
        && Heap
        && (v205 & 0x10000000) == 0 )
      {
        goto LABEL_331;
      }
      return (char *)Heap;
    }
    v136 = v206;
    goto LABEL_295;
  }
  v9 = RtlpHpConvertFlagsToSegmentFlags(a5);
  v10 = (void *)v7[44];
  v184 = v9;
  if ( v10 && v10 == NtCurrentTeb()->ClientId.UniqueThread )
  {
    v9 |= 1u;
    v184 = v9;
  }
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
    v11 = v8 > 0x7EFF8 ? 32 : 8;
  else
    v11 = 0;
  if ( v11 + v206 < v206 )
  {
    Heap = 0;
LABEL_11:
    v14 = NtCurrentTeb();
    v14->LastStatusValue = -1073741801;
    v14->LastErrorValue = RtlNtStatusToDosError(-1073741801);
    if ( v184 < 0 || (int)v209[3] < 0 )
      RtlpAllocateHeapRaiseException(v206);
    return (char *)Heap;
  }
  v13 = (unsigned int *)RtlpHpAllocateHeap(v9, a6);
  Heap = v13;
  if ( !v13 )
    goto LABEL_11;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    *(unsigned int *)((char *)v13 + v11 - 8) = v11;
    if ( v11 > 8 )
      *v13 = v11;
    Heap = (unsigned int *)((char *)v13 + v11);
  }
  v15 = v209;
  if ( RtlpHpStackLoggingEnabled() )
LABEL_331:
    RtlpHpStackTraceAddStack(v15, Heap);
  return (char *)Heap;
}
