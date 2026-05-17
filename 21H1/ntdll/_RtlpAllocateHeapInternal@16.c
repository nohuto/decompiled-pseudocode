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

int __userpurge RtlpAllocateHeapInternal@<eax>(unsigned int a1@<edx>, _DWORD *a2@<ecx>, int a3@<ebp>, int a4, int a5)
{
  int *v5; // ebx
  _DWORD *v6; // edi
  unsigned int v7; // esi
  int v8; // eax
  void *v9; // edx
  unsigned int v10; // esi
  int v11; // edi
  unsigned int *Heap; // eax
  struct _TEB *v13; // esi
  int v14; // esi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  bool v28; // zf
  unsigned __int16 *v29; // eax
  struct _TEB *v30; // esi
  int UniqueThread; // edi
  int CurrentProcessorNumber; // eax
  int v33; // eax
  volatile __int32 *v34; // ecx
  volatile __int32 *v35; // eax
  signed __int32 v36; // eax
  unsigned int v37; // ecx
  _DWORD *v38; // edx
  volatile __int32 v39; // eax
  volatile signed __int32 *v40; // edi
  int v41; // eax
  volatile signed __int32 *v42; // ecx
  volatile signed __int32 *v43; // esi
  char *v44; // eax
  int v45; // edx
  signed __int32 v46; // esi
  int v47; // edi
  unsigned __int16 v48; // ax
  int ClearBitAndSet; // eax
  unsigned int v50; // ecx
  int v51; // esi
  volatile signed __int32 *v52; // edx
  unsigned int v53; // eax
  unsigned int v54; // ecx
  volatile signed __int32 *v55; // edi
  int v56; // esi
  unsigned int v57; // edi
  signed __int32 v58; // esi
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  signed __int32 v61; // eax
  int v62; // edx
  int v63; // edx
  unsigned int v64; // ecx
  unsigned int **v65; // esi
  _DWORD *v66; // esi
  _DWORD *v67; // edi
  signed __int32 v68; // eax
  unsigned int **v69; // edx
  signed __int32 v70; // eax
  unsigned int v71; // ecx
  volatile signed __int32 *v72; // edi
  signed __int32 v73; // edx
  char IsSubSegmentReuseable; // al
  signed __int32 v75; // edx
  unsigned int *v76; // ecx
  int v77; // edi
  int v78; // eax
  signed __int32 v79; // edx
  signed __int32 v80; // eax
  signed __int32 v81; // eax
  volatile signed __int32 *v82; // esi
  int v83; // eax
  volatile signed __int32 *v84; // edi
  char v85; // al
  signed __int32 v86; // edx
  unsigned int *v87; // ecx
  int v88; // edi
  int v89; // eax
  signed __int32 v90; // eax
  signed __int32 v91; // eax
  unsigned int v92; // ecx
  signed __int64 v93; // rax
  signed __int64 v94; // rdi
  int v95; // ecx
  unsigned int v96; // edx
  char v97; // cl
  unsigned int v98; // edi
  char v99; // cl
  unsigned int v100; // eax
  unsigned int v101; // eax
  unsigned __int16 *v102; // edi
  int v103; // esi
  int UserBlock; // eax
  unsigned int v105; // edi
  unsigned int v106; // edx
  _DWORD *v107; // esi
  int v108; // ecx
  int v109; // eax
  int v110; // ecx
  volatile signed __int32 *v111; // edi
  signed __int32 v112; // edx
  _DWORD *v113; // edx
  unsigned int v114; // ecx
  signed __int32 v115; // edx
  unsigned int *v116; // ecx
  int v117; // edi
  int v118; // eax
  signed __int32 v119; // eax
  signed __int32 v120; // edx
  unsigned int *v121; // ecx
  unsigned int v122; // edx
  int v123; // eax
  volatile signed __int32 *v124; // edx
  signed __int32 v125; // eax
  unsigned int v126; // edx
  int v127; // eax
  volatile signed __int32 *v128; // edi
  char v129; // al
  signed __int32 v130; // edx
  unsigned int *v131; // ecx
  int v132; // edi
  int v133; // eax
  signed __int32 v134; // eax
  unsigned int v135; // ecx
  unsigned int v136; // edx
  _DWORD *v137; // eax
  _DWORD *v138; // ecx
  unsigned int v139; // ecx
  unsigned int v140; // edx
  int v141; // eax
  int v142; // esi
  int v143; // esi
  struct _TEB *v144; // esi
  ULONG v145; // eax
  int v146; // ecx
  unsigned int v147; // eax
  _DWORD *SharedData; // eax
  int v149; // eax
  char v150; // al
  _BYTE *v151; // edx
  int v152; // ecx
  int *v154; // [esp-80h] [ebp-8Ch]
  int v155; // [esp-80h] [ebp-8Ch]
  unsigned int v156; // [esp-70h] [ebp-7Ch]
  unsigned int v157; // [esp-60h] [ebp-6Ch]
  unsigned int *v158; // [esp-60h] [ebp-6Ch]
  volatile signed __int32 *v159; // [esp-60h] [ebp-6Ch]
  unsigned int *v160; // [esp-60h] [ebp-6Ch]
  int v161; // [esp-5Ch] [ebp-68h]
  unsigned int v162; // [esp-58h] [ebp-64h]
  unsigned int v163; // [esp-54h] [ebp-60h]
  volatile __int32 v164; // [esp-54h] [ebp-60h]
  volatile signed __int32 *v165; // [esp-54h] [ebp-60h]
  volatile signed __int32 *v166; // [esp-54h] [ebp-60h]
  volatile signed __int32 *v167; // [esp-54h] [ebp-60h]
  unsigned int v168; // [esp-54h] [ebp-60h]
  int v169; // [esp-54h] [ebp-60h]
  volatile signed __int32 *v170; // [esp-54h] [ebp-60h]
  volatile signed __int32 *v171; // [esp-54h] [ebp-60h]
  volatile signed __int32 *v172; // [esp-54h] [ebp-60h]
  int v173; // [esp-50h] [ebp-5Ch]
  _DWORD *v174; // [esp-50h] [ebp-5Ch]
  _DWORD *v175; // [esp-50h] [ebp-5Ch]
  unsigned int *v176; // [esp-50h] [ebp-5Ch]
  unsigned int *v177; // [esp-50h] [ebp-5Ch]
  int v178; // [esp-50h] [ebp-5Ch]
  unsigned int *v179; // [esp-50h] [ebp-5Ch]
  unsigned int *v180; // [esp-50h] [ebp-5Ch]
  unsigned int *v181; // [esp-50h] [ebp-5Ch]
  int v182; // [esp-4Ch] [ebp-58h]
  unsigned int v183; // [esp-4Ch] [ebp-58h]
  char v184; // [esp-48h] [ebp-54h]
  volatile __int32 **v185; // [esp-44h] [ebp-50h]
  volatile __int32 *v186; // [esp-44h] [ebp-50h]
  _DWORD *v187; // [esp-44h] [ebp-50h]
  volatile signed __int64 *v188; // [esp-44h] [ebp-50h]
  unsigned int v189; // [esp-44h] [ebp-50h]
  volatile signed __int32 *v190; // [esp-44h] [ebp-50h]
  volatile __int32 *v191; // [esp-40h] [ebp-4Ch]
  unsigned int v192; // [esp-40h] [ebp-4Ch]
  unsigned int v193; // [esp-40h] [ebp-4Ch]
  int v194; // [esp-40h] [ebp-4Ch]
  int v195; // [esp-3Ch] [ebp-48h]
  unsigned int v196; // [esp-38h] [ebp-44h] BYREF
  unsigned int v197; // [esp-34h] [ebp-40h]
  int v198; // [esp-30h] [ebp-3Ch] BYREF
  int v199; // [esp-2Ch] [ebp-38h]
  unsigned int v200; // [esp-28h] [ebp-34h]
  int v201; // [esp-24h] [ebp-30h]
  unsigned __int16 *v202; // [esp-20h] [ebp-2Ch]
  int v203; // [esp-1Ch] [ebp-28h]
  unsigned int v204; // [esp-18h] [ebp-24h]
  volatile __int32 *v205; // [esp-14h] [ebp-20h]
  int v206; // [esp-10h] [ebp-1Ch]
  int v207; // [esp-Ch] [ebp-18h]
  volatile __int32 *v208; // [esp-8h] [ebp-14h]
  char v209; // [esp-1h] [ebp-Dh]
  int v210; // [esp+0h] [ebp-Ch]
  void *v211; // [esp+4h] [ebp-8h]
  int v212; // [esp+8h] [ebp-4h] BYREF
  void *retaddr; // [esp+Ch] [ebp+0h]

  v5 = &v212;
  v210 = a3;
  v211 = retaddr;
  v6 = a2;
  v7 = a1;
  v204 = a1;
  v207 = (int)a2;
  if ( a2[2] != -571548178 )
  {
    v198 = 0;
    v183 = 0;
    v15 = a2[17];
    v16 = v15 | a4;
    v203 = v15 | a4;
    v196 = 0;
    if ( a1 > 0x7FFFFFFF )
    {
      v198 = 5;
LABEL_298:
      v11 = 0;
      goto LABEL_299;
    }
    v17 = v15 & 0x1000000;
    if ( !v17 && !dword_4B3A373C )
    {
      v18 = v6[55];
      if ( (v18 || (v18 = dword_4B3A4334) != 0) && a1 > v18 )
      {
        v19 = v6[56];
        if ( v19 )
          RtlpLogHeapFailure(0, v19, a1, v6[55]);
        v198 = 5;
        goto LABEL_298;
      }
      v16 = v203;
    }
    v195 = v6[22];
    if ( v195 )
    {
      if ( (v16 & 0x3C000102) != 0 || v17 )
      {
        v195 = 0;
      }
      else
      {
        if ( (int)RtlpCallInterceptRoutine(0, 1, &v196) < 0 )
          goto LABEL_298;
        v20 = (v196 + 7) & 0xFFFFFFF8;
        v7 += v20 + 8;
        v204 = v7;
        v196 = v20 + 8;
      }
    }
    v21 = v7;
    if ( !v7 )
      v21 = 1;
    v22 = (v21 + 15) & 0xFFFFFFF8;
    v183 = v22;
    v23 = v22 >> 3;
    v200 = v22 >> 3;
    if ( (v203 & 0x7D810F61) != 0 )
      goto LABEL_292;
    if ( v7 <= RtlpLargestLfhBlock )
    {
      if ( ((unsigned __int8)(1 << (v200 & 7)) & *((_BYTE *)v6 + (v22 >> 6) + 242)) == 0 )
        goto LABEL_281;
      v24 = v6[59];
      v25 = v6[57];
      v198 = 2;
      v201 = v25;
      v26 = *(unsigned __int16 *)(v24 + 2 * v200);
      v27 = 0;
      v199 = 0;
      v28 = (*(_BYTE *)(v25 + 440) & 1) == 0;
      v29 = (unsigned __int16 *)(v25 + 4 * (v26 + 111));
      v202 = v29;
      if ( v28 && (*((_BYTE *)v29 + 3) & 1) != 0 )
      {
        v30 = NtCurrentTeb();
        UniqueThread = (int)v30->ClientId.UniqueThread;
        v27 = LOBYTE(v30->HeapData) - 1;
        v199 = v27;
        if ( v27 < 0 || dword_4B3A4368[v27] != UniqueThread )
        {
          CurrentProcessorNumber = NtGetCurrentProcessorNumber();
          v25 = v201;
          v27 = CurrentProcessorNumber & dword_4B3A4364;
          v199 = CurrentProcessorNumber & dword_4B3A4364;
          LOBYTE(v30->HeapData) = (CurrentProcessorNumber & dword_4B3A4364) + 1;
          dword_4B3A4368[v27] = UniqueThread;
        }
      }
      v162 = v25 + 8 * (v27 + 2 * (v27 + 125));
      v33 = *((unsigned __int8 *)v202 + 2);
      v161 = 8 * *v202;
      if ( v27 )
        v34 = (volatile __int32 *)(*(_DWORD *)(v25 + 4 * v33 + 1476) + 104 * v27 - 104);
      else
        v34 = *(volatile __int32 **)(v25 + 4 * v33 + 960);
      v208 = v34;
      v35 = v34 + 1;
      v205 = v34 + 1;
LABEL_55:
      v39 = *v35;
      v185 = (volatile __int32 **)v39;
      if ( !v39 )
        goto LABEL_84;
      v40 = (volatile signed __int32 *)(v39 + 16);
      v206 = 0;
      v41 = HIWORD(*(_DWORD *)(v39 + 16));
      v42 = *(volatile signed __int32 **)(*v34 + 12);
      v197 = (unsigned int)v42;
      if ( (v41 & 0x8000u) != 0 )
      {
        v206 = 1;
        v43 = &v42[*((unsigned __int16 *)v208 + 46)];
        if ( (*((_BYTE *)v43 + 447) & 1) == 0
          && RtlpAffinitizeSegmentInfoForBucket((int)v42, *((unsigned __int8 *)v43 + 446)) >= 0 )
        {
          *((_BYTE *)v43 + 447) |= 1u;
          v44 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
          if ( *v44 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapAffinityManagerEnable(*(_DWORD *)(v197 + 12), *((unsigned __int8 *)v43 + 446));
        }
      }
      v45 = 0;
      v163 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      while ( 1 )
      {
        v46 = *v40;
        if ( (*v40 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v46 )
            goto LABEL_78;
          if ( _InterlockedCompareExchange(v40, v46 | 0x80000000, v46) == v46 )
            break;
        }
        if ( ++v45 > v163 )
          goto LABEL_78;
      }
      if ( v46 != -1 )
      {
        v191 = v185[1];
        if ( v191 && *v185 == v208 && (_WORD)v46 )
        {
          v47 = (unsigned __int8)RtlpSearchWidth[*((unsigned __int16 *)v208 + 46)];
          v48 = RtlpLfhIncrementDataSlot();
          ClearBitAndSet = RtlpLfhFindClearBitAndSet(*((unsigned __int8 *)RtlpLowFragHeapRandomData + v48), v47);
          v185[4] = (volatile __int32 *)((ClearBitAndSet << 16) | ((unsigned __int16)v46 - 1));
          v50 = RtlpLFHKey ^ v197 ^ (unsigned int)v191 ^ *((_DWORD *)v191 + 4);
          v51 = (int)v191 + ClearBitAndSet * HIWORD(v50) + (unsigned __int16)v50;
          if ( (*(_BYTE *)(v51 + 7) & 0x3F) == 0 )
            goto LABEL_79;
          RtlpLogHeapFailure(v51, 0, 0, 0);
        }
        else
        {
          *v40 = v46;
        }
      }
LABEL_78:
      v51 = 0;
LABEL_79:
      if ( v206 && dword_4B3A4364 + 1 < (unsigned int)RtlpAffinityState )
        _InterlockedCompareExchange(&dword_4B3A4364, 2 * (dword_4B3A4364 + 1) - 1, dword_4B3A4364);
      if ( !v51 )
      {
        v34 = v208;
LABEL_84:
        v52 = v34 + 2;
        v164 = *v34;
        v186 = v34 + 2;
LABEL_85:
        v206 = 0;
LABEL_86:
        v53 = 0;
        v173 = 16;
        v54 = 0;
        v197 = 0;
        v192 = 0;
        v55 = v52;
        while ( 1 )
        {
          v56 = *v55;
          if ( *v55 )
          {
            v157 = *(unsigned __int16 *)(v56 + 16);
            if ( v157 <= v54 )
              goto LABEL_92;
            if ( (unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(v208, v56) )
            {
              v54 = v192;
LABEL_92:
              v53 = v197;
              goto LABEL_93;
            }
            v54 = v157;
            v53 = (unsigned int)v55;
            v206 = v56;
            v192 = v157;
            v197 = (unsigned int)v55;
          }
LABEL_93:
          ++v55;
          if ( !--v173 )
          {
            if ( v53 )
            {
              v193 = *(_DWORD *)(*(_DWORD *)(v164 + 12) + 4 * *((unsigned __int16 *)v208 + 46) + 960) + 72;
              v57 = v193;
              v58 = RtlpInterlockedPopEntrySList(v193);
              if ( v58 )
              {
                while ( 1 )
                {
                  v174 = (_DWORD *)v58;
                  v58 -= 32;
                  if ( (*(_DWORD *)(v58 + 28) & 1) != 0 )
                    break;
                  if ( _InterlockedAnd((volatile signed __int32 *)(v58 + 28), 0xFFFFFFFD) == 2 )
                  {
                    v59 = **(_DWORD **)v58;
                    *(_DWORD *)v58 = 0;
                    RtlpInterlockedPushEntrySList(v59, v174);
                  }
                  v57 = v193;
                  v58 = RtlpInterlockedPopEntrySList(v193);
                  if ( !v58 )
                    goto LABEL_103;
                }
                v57 = v193;
                if ( !RtlpSetSegmentInfo(v58, v208) )
                {
                  RtlpInterlockedPushEntrySList(v193, v174);
                  v58 = 0;
                }
              }
LABEL_103:
              v60 = v197;
              v61 = _InterlockedCompareExchange((volatile signed __int32 *)v197, v58, v206);
              v62 = v206;
              if ( v61 != v206 )
              {
                v52 = v186;
                if ( v58 )
                {
                  RtlpInterlockedPushEntrySList(v57, (_DWORD *)(v58 + 32));
                  v52 = v186;
                }
                goto LABEL_86;
              }
              if ( !v58 )
                *((_WORD *)v208 + 47) = (unsigned __int8)((int)(v60 - (_DWORD)v208 - 8) >> 2);
              if ( v62 )
              {
                if ( _InterlockedAnd((volatile signed __int32 *)(v62 + 28), 0xFFFFFFFD) != 2 )
                {
                  v65 = (unsigned int **)v206;
                  goto LABEL_128;
                }
                v63 = v206;
                v64 = **(_DWORD **)v206;
                *(_DWORD *)v206 = 0;
                RtlpInterlockedPushEntrySList(v64, (_DWORD *)(v63 + 32));
                v52 = v186;
                goto LABEL_85;
              }
            }
            else
            {
              v206 = 0;
            }
            v66 = 0;
            v194 = 0;
            v175 = 0;
            v187 = 0;
            v197 = *(_DWORD *)(*(_DWORD *)(v164 + 12) + 4 * *((unsigned __int16 *)v208 + 46) + 960) + 72;
            v67 = (_DWORD *)RtlpInterlockedPopEntrySList(v197);
            if ( !v67 )
              goto LABEL_127;
            while ( 2 )
            {
              v206 = (int)(v67 - 8);
              v165 = v67 - 1;
              if ( (*v165 & 1) == 0 )
              {
                v70 = _InterlockedAnd(v165, 0xFFFFFFFD);
                v66 = v187;
                v69 = (unsigned int **)v206;
                if ( v70 != 2 )
                  goto LABEL_124;
LABEL_123:
                v71 = **v69;
                *v69 = 0;
                RtlpInterlockedPushEntrySList(v71, v67);
                goto LABEL_124;
              }
              if ( !RtlpSetSegmentInfo(v206, v208) )
              {
                if ( !v194 )
                  v175 = v67;
                *v67 = v66;
                v66 = v67;
                ++v194;
                v187 = v67;
                goto LABEL_124;
              }
              v68 = _InterlockedAnd(v165, 0xFFFFFFFD);
              v66 = v187;
              v69 = (unsigned int **)v206;
              if ( v68 == 2 )
                goto LABEL_123;
              if ( RtlpIsSubSegmentReuseable((int)v208, v206) )
                break;
LABEL_124:
              v206 = 0;
              v67 = (_DWORD *)RtlpInterlockedPopEntrySList(v197);
              if ( v67 )
                continue;
              break;
            }
            if ( v194 )
              InterlockedPushListSList(v175, v194);
LABEL_127:
            v65 = (unsigned int **)v206;
LABEL_128:
            if ( v65 )
            {
              v72 = (volatile signed __int32 *)(v65 + 7);
              *((_BYTE *)v65 + 27) = v199;
              do
              {
                v73 = *v72;
                v35 = v205;
                if ( !*v72 || (v73 & 6) != 0 )
                  goto LABEL_54;
              }
              while ( _InterlockedCompareExchange(v72, v73 | 6, v73) != v73 );
              v158 = *v65;
              if ( *v65 != (unsigned int *)v208 )
              {
                if ( _InterlockedAnd(v72, 0xFFFFFFF9) == 6 )
                {
LABEL_135:
                  v38 = v65 + 8;
                  v37 = **v65;
                  *v65 = 0;
LABEL_53:
                  RtlpInterlockedPushEntrySList(v37, v38);
                  v35 = v205;
                  goto LABEL_54;
                }
                IsSubSegmentReuseable = RtlpIsSubSegmentReuseable((int)v158, (int)v65);
                v34 = v208;
                v28 = IsSubSegmentReuseable == 0;
                v35 = v208 + 1;
                if ( v28 )
                  goto LABEL_55;
                do
                {
                  v34 = v208;
                  v75 = *v72;
                  v35 = v208 + 1;
                  if ( *v72 )
                  {
                    v35 = v208 + 1;
                    if ( (v75 & 2) == 0 )
                      continue;
                  }
                  goto LABEL_55;
                }
                while ( _InterlockedCompareExchange(v72, v75 | 2, v75) != v75 );
                v76 = *v65;
                v77 = 0;
                v176 = *v65;
                while ( 2 )
                {
                  v78 = (((_BYTE)v77 + (unsigned __int8)*((_WORD *)v76 + 47)) & 0xF) + 2;
                  v79 = v76[v78];
                  v166 = (volatile signed __int32 *)&v76[v78];
                  if ( !v79 )
                  {
                    v80 = _InterlockedCompareExchange(v166, (signed __int32)v65, 0);
                    v34 = v208;
                    v28 = v80 == 0;
                    v35 = v208 + 1;
                    if ( v28 )
                      goto LABEL_55;
                    goto LABEL_146;
                  }
                  v159 = (volatile signed __int32 *)(v79 + 28);
                  if ( (*(_DWORD *)(v79 + 28) & 1) == 0 )
                  {
                    v81 = _InterlockedCompareExchange(v166, (signed __int32)v65, v79);
                    v65 = (unsigned int **)v206;
                    if ( v81 == v79 )
                      goto LABEL_149;
LABEL_146:
                    v76 = v176;
                  }
                  if ( (unsigned int)++v77 >= 0x10 )
                    goto LABEL_170;
                  continue;
                }
              }
              if ( RtlGetCurrentServiceSessionId() )
                v83 = (int)NtCurrentPeb()->SharedData + 550;
              else
                v83 = 2147353472;
              if ( *(_BYTE *)v83 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapSubSegmentActivate(*(_DWORD *)(*(_DWORD *)(*v208 + 12) + 12), v65[1]);
              v35 = v205;
              v65 = (unsigned int **)_InterlockedExchange(v205, (__int32)v65);
              v206 = (int)v65;
              if ( v65 )
              {
                v84 = (volatile signed __int32 *)(v65 + 7);
                if ( _InterlockedAnd((volatile signed __int32 *)v65 + 7, 0xFFFFFFF9) == 6 )
                  goto LABEL_135;
                v85 = RtlpIsSubSegmentReuseable((int)v208, (int)v65);
                v34 = v208;
                v28 = v85 == 0;
                v35 = v208 + 1;
                if ( v28 )
                  goto LABEL_55;
                do
                {
                  v34 = v208;
                  v86 = *v84;
                  v35 = v208 + 1;
                  if ( *v84 )
                  {
                    v35 = v208 + 1;
                    if ( (v86 & 2) == 0 )
                      continue;
                  }
                  goto LABEL_55;
                }
                while ( _InterlockedCompareExchange(v84, v86 | 2, v86) != v86 );
                v87 = *v65;
                v88 = 0;
                v177 = *v65;
                while ( 2 )
                {
                  v89 = (((_BYTE)v88 + (unsigned __int8)*((_WORD *)v87 + 47)) & 0xF) + 2;
                  v79 = v87[v89];
                  v167 = (volatile signed __int32 *)&v87[v89];
                  if ( !v79 )
                  {
                    v90 = _InterlockedCompareExchange(v167, (signed __int32)v65, 0);
                    v34 = v208;
                    v28 = v90 == 0;
                    v35 = v208 + 1;
                    if ( v28 )
                      goto LABEL_55;
                    goto LABEL_168;
                  }
                  v159 = (volatile signed __int32 *)(v79 + 28);
                  if ( (*(_DWORD *)(v79 + 28) & 1) == 0 )
                  {
                    v91 = _InterlockedCompareExchange(v167, (signed __int32)v65, v79);
                    v65 = (unsigned int **)v206;
                    if ( v91 == v79 )
                    {
LABEL_149:
                      v82 = v159;
                      goto LABEL_51;
                    }
LABEL_168:
                    v87 = v177;
                  }
                  if ( (unsigned int)++v88 >= 0x10 )
                    goto LABEL_170;
                  continue;
                }
              }
LABEL_54:
              v34 = v208;
              goto LABEL_55;
            }
            v178 = *(_DWORD *)(v201 + 440) & 2;
            v197 = *((_DWORD *)v208 + 20);
            v92 = *((unsigned __int8 *)v202 + 2);
            LODWORD(v93) = v201 + 48;
            v168 = v92;
            v188 = (volatile signed __int64 *)(v201 + 48);
            do
            {
              v94 = *(_QWORD *)v93;
              v209 = 0;
              if ( (_DWORD)v94 == v92 )
              {
                v95 = HIDWORD(v94) + 1;
                if ( HIDWORD(v94) > 7 )
                {
                  v209 = 1;
                  v95 = 0;
                }
              }
              else
              {
                v156 = v92;
                v95 = 1;
              }
              v154 = v5;
              v93 = _InterlockedCompareExchange64(v188, __SPAIR64__(v95, v156), v94);
              v5 = v154;
              v28 = (_DWORD)v93 == (_DWORD)v94;
              LODWORD(v93) = v188;
              v92 = v168;
            }
            while ( !v28 || HIDWORD(v93) != HIDWORD(v94) );
            if ( !v209 || v178 )
              v197 >>= (v178 != 0) + 3;
            v96 = v197;
            v97 = *((_BYTE *)v202 + 3) & 1;
            v98 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v202 + 2)];
            if ( v98 < 0x100 )
              --v97;
            if ( *((_DWORD *)v208 + 21) )
              --v97;
            v99 = 3 - v97;
            if ( v197 < 1 << v99 )
              v96 = 1 << v99;
            if ( v96 >= 4 )
            {
              if ( v96 > 0x400 )
                v96 = 1024;
            }
            else
            {
              v96 = 4;
            }
            v100 = (((v96 + 31) >> 3) & 0x1FFFFFFC) + v96 * (v98 + 8) + 36;
            if ( v100 >= 0x78000 )
              v100 = 491520;
            _BitScanReverse(&v100, v100 - 1);
            v101 = v100 + 1;
            v206 = v101;
            if ( v101 <= 7 )
            {
              v101 = 7;
              v206 = 7;
            }
            if ( v101 >= 0x12 )
            {
              LOBYTE(v101) = 18;
              v206 = 18;
            }
            v102 = v202;
            if ( (*((_BYTE *)v202 + 3) & 6) != 0 )
            {
              LOBYTE(v101) = 18;
              v206 = 18;
            }
            if ( (_BYTE)v101 == 18 || v197 >= 0x400 )
            {
              v184 = 1;
              if ( (unsigned __int8)v101 < 0x11u && (unsigned __int8)v101 >= 0xFu )
                v184 = (*((unsigned __int8 *)RtlpLowFragHeapRandomData + (unsigned __int16)RtlpLfhIncrementDataSlot()) & ((4 >> (v206 - 15)) - 1)) == 0;
            }
            else
            {
              v184 = 0;
            }
            v103 = v201;
            UserBlock = RtlpAllocateUserBlock(
                          v201,
                          v206,
                          (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v102 + 2)] + 8,
                          v184);
            v105 = UserBlock;
            if ( !UserBlock )
              goto LABEL_280;
            v106 = 1 << *(_BYTE *)(UserBlock + 8);
            if ( v106 > 0x78000 )
              v106 = 491520;
            v169 = v106 + *(unsigned __int16 *)(UserBlock + 10);
            _InterlockedIncrement((volatile signed __int32 *)(v103 + 28));
            RtlAcquireSRWLockExclusive(&RtlpSlistLockedAltLocks[(v162 >> 2) & 0x1F]);
            v107 = *(_DWORD **)v162;
            if ( *(_DWORD *)v162 )
            {
              *(_DWORD *)v162 = *v107;
              --*(_WORD *)(v162 + 4);
            }
            RtlReleaseSRWLockExclusive(&RtlpSlistLockedAltLocks[(v162 >> 2) & 0x1F]);
            if ( !v107 )
            {
              v109 = RtlpLowFragHeapAllocateFromZone(v201, v199);
              v65 = (unsigned int **)v109;
              if ( v109 )
              {
                *(_DWORD *)(v109 + 4) = 0;
                goto LABEL_214;
              }
              goto LABEL_279;
            }
            v65 = (unsigned int **)(v107 - 8);
LABEL_214:
            if ( !v65 )
            {
LABEL_279:
              RtlpFreeUserBlock(v201, v105, v108);
              goto LABEL_280;
            }
            v110 = v201;
            *((_BYTE *)v65 + 27) = v199;
            RtlpSubSegmentInitialize(
              v110,
              (int)v65,
              v105,
              (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v202 + 2)],
              v169,
              (int)v202);
            v111 = (volatile signed __int32 *)(v65 + 7);
            while ( 2 )
            {
              v112 = *v111;
              if ( !*v111 || (v112 & 6) != 0 )
              {
                do
                {
LABEL_223:
                  v34 = v208;
                  v115 = *v111;
                  v35 = v208 + 1;
                  if ( *v111 )
                  {
                    v35 = v208 + 1;
                    if ( (v115 & 2) == 0 )
                      continue;
                  }
                  goto LABEL_55;
                }
                while ( _InterlockedCompareExchange(v111, v115 | 2, v115) != v115 );
                v116 = *v65;
                v117 = 0;
                v179 = *v65;
                while ( 2 )
                {
                  v118 = (((_BYTE)v117 + (unsigned __int8)*((_WORD *)v116 + 47)) & 0xF) + 2;
                  v79 = v116[v118];
                  v170 = (volatile signed __int32 *)&v116[v118];
                  if ( !v79 )
                  {
                    v119 = _InterlockedCompareExchange(v170, (signed __int32)v65, 0);
                    v34 = v208;
                    v28 = v119 == 0;
                    v35 = v208 + 1;
                    if ( v28 )
                      goto LABEL_55;
                    goto LABEL_269;
                  }
                  v190 = (volatile signed __int32 *)(v79 + 28);
                  if ( (*(_DWORD *)(v79 + 28) & 1) == 0 )
                  {
                    if ( _InterlockedCompareExchange(v170, (signed __int32)v65, v79) == v79 )
                      goto LABEL_266;
LABEL_269:
                    v116 = v179;
                  }
                  if ( (unsigned int)++v117 >= 0x10 )
                    goto LABEL_170;
                  continue;
                }
              }
              if ( _InterlockedCompareExchange(v111, v112 | 6, v112) != v112 )
                continue;
              break;
            }
            v160 = *v65;
            if ( *v65 != (unsigned int *)v208 )
            {
              if ( _InterlockedAnd(v111, 0xFFFFFFF9) == 6 )
              {
                v113 = v65 + 8;
                v114 = **v65;
                *v65 = 0;
LABEL_222:
                RtlpInterlockedPushEntrySList(v114, v113);
                goto LABEL_223;
              }
              if ( !RtlpIsSubSegmentReuseable((int)v160, (int)v65) )
                goto LABEL_223;
              do
              {
                v120 = *v111;
                if ( !*v111 || (v120 & 2) != 0 )
                  goto LABEL_223;
              }
              while ( _InterlockedCompareExchange(v111, v120 | 2, v120) != v120 );
              v121 = *v65;
              LOBYTE(v122) = 0;
              v180 = *v65;
              v189 = 0;
              while ( 2 )
              {
                v123 = (((_BYTE)v122 + (unsigned __int8)*((_WORD *)v121 + 47)) & 0xF) + 2;
                v124 = (volatile signed __int32 *)v121[v123];
                v171 = (volatile signed __int32 *)&v121[v123];
                v197 = (unsigned int)v124;
                if ( !v124 )
                {
                  if ( !_InterlockedCompareExchange(v171, (signed __int32)v65, 0) )
                    goto LABEL_223;
                  goto LABEL_240;
                }
                if ( (v124[7] & 1) == 0 )
                {
                  v111 = (volatile signed __int32 *)(v65 + 7);
                  if ( (volatile signed __int32 *)_InterlockedCompareExchange(
                                                    v171,
                                                    (signed __int32)v65,
                                                    (signed __int32)v124) == v124 )
                  {
                    v125 = _InterlockedAnd(v124 + 7, 0xFFFFFFFD);
                    v126 = v197;
                    v111 = (volatile signed __int32 *)(v65 + 7);
                    if ( v125 != 2 )
                      goto LABEL_223;
                    v114 = **(_DWORD **)v197;
                    *(_DWORD *)v197 = 0;
                    v113 = (_DWORD *)(v126 + 32);
                    goto LABEL_222;
                  }
LABEL_240:
                  v121 = v180;
                }
                v122 = v189 + 1;
                v189 = v122;
                if ( v122 >= 0x10 )
                {
                  v113 = v65 + 8;
                  v114 = *(_DWORD *)(*(_DWORD *)(**v65 + 12) + 4 * *((unsigned __int16 *)*v65 + 46) + 960) + 72;
                  goto LABEL_222;
                }
                continue;
              }
            }
            if ( RtlGetCurrentServiceSessionId() )
              v127 = (int)NtCurrentPeb()->SharedData + 550;
            else
              v127 = 2147353472;
            if ( *(_BYTE *)v127 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapSubSegmentActivate(*(_DWORD *)(*(_DWORD *)(*v208 + 12) + 12), v65[1]);
            v35 = v205;
            v65 = (unsigned int **)_InterlockedExchange(v205, (__int32)v65);
            if ( !v65 )
              goto LABEL_54;
            v128 = (volatile signed __int32 *)(v65 + 7);
            if ( _InterlockedAnd((volatile signed __int32 *)v65 + 7, 0xFFFFFFF9) == 6 )
              goto LABEL_135;
            v129 = RtlpIsSubSegmentReuseable((int)v208, (int)v65);
            v34 = v208;
            v28 = v129 == 0;
            v35 = v208 + 1;
            if ( v28 )
              goto LABEL_55;
            do
            {
              v34 = v208;
              v130 = *v128;
              v35 = v208 + 1;
              if ( *v128 )
              {
                v35 = v208 + 1;
                if ( (v130 & 2) == 0 )
                  continue;
              }
              goto LABEL_55;
            }
            while ( _InterlockedCompareExchange(v128, v130 | 2, v130) != v130 );
            v131 = *v65;
            v132 = 0;
            v181 = *v65;
            while ( 2 )
            {
              v133 = (((_BYTE)v132 + (unsigned __int8)*((_WORD *)v131 + 47)) & 0xF) + 2;
              v79 = v131[v133];
              v172 = (volatile signed __int32 *)&v131[v133];
              if ( !v79 )
              {
                v134 = _InterlockedCompareExchange(v172, (signed __int32)v65, 0);
                v34 = v208;
                v28 = v134 == 0;
                v35 = v208 + 1;
                if ( v28 )
                  goto LABEL_55;
LABEL_263:
                v131 = v181;
LABEL_264:
                if ( (unsigned int)++v132 >= 0x10 )
                {
LABEL_170:
                  v38 = v65 + 8;
                  v37 = *(_DWORD *)(*(_DWORD *)(**v65 + 12) + 4 * *((unsigned __int16 *)*v65 + 46) + 960) + 72;
                  goto LABEL_53;
                }
                continue;
              }
              break;
            }
            v190 = (volatile signed __int32 *)(v79 + 28);
            if ( (*(_DWORD *)(v79 + 28) & 1) != 0 )
              goto LABEL_264;
            if ( _InterlockedCompareExchange(v172, (signed __int32)v65, v79) != v79 )
              goto LABEL_263;
LABEL_266:
            v82 = v190;
LABEL_51:
            v36 = _InterlockedAnd(v82, 0xFFFFFFFD);
            v34 = v208;
            v28 = v36 == 2;
            v35 = v208 + 1;
            if ( v28 )
            {
              v37 = **(_DWORD **)v79;
              *(_DWORD *)v79 = 0;
              v38 = (_DWORD *)(v79 + 32);
              goto LABEL_53;
            }
            goto LABEL_55;
          }
        }
      }
      v11 = v51 + 8;
      if ( (v203 & 8) != 0 )
        memset((void *)(v51 + 8), 0, v161 - 8);
      v135 = v204;
      v136 = v161 - v204;
      if ( v161 - v204 >= 0x3F )
      {
        *(_DWORD *)(v51 + 8 * *v202 - 4) = v136;
        *(_BYTE *)(v51 + 7) = -65;
      }
      else
      {
        *(_BYTE *)(v51 + 7) = v136 | 0x80;
      }
      if ( v51 != -8 )
      {
LABEL_295:
        if ( v195 )
        {
          v142 = v11;
          v204 = v135 - v196;
          v11 = RtlpSetupExtendedBlock(v11, v135 - v196, v196, v195);
          v155 = v142;
          v143 = v207;
          if ( (int)RtlpCallInterceptRoutine(v11, 2, v155) < 0 )
          {
            RtlFreeHeap(v143, 0, v11);
            goto LABEL_298;
          }
        }
        else
        {
          v143 = v207;
        }
        v146 = v203;
        goto LABEL_305;
      }
LABEL_280:
      v6 = (_DWORD *)v207;
      v7 = v204;
LABEL_281:
      v23 = v200;
    }
    v137 = (_DWORD *)v6[45];
    if ( v23 < v137[1] )
    {
LABEL_285:
      v139 = v23;
    }
    else
    {
      while ( 1 )
      {
        v138 = (_DWORD *)*v137;
        if ( !*v137 )
          break;
        v137 = (_DWORD *)*v137;
        if ( v23 < v138[1] )
          goto LABEL_285;
      }
      v139 = v137[1] - 1;
    }
    if ( v139 >= v137[1] || v23 != v139 )
    {
LABEL_292:
      v141 = 0;
    }
    else
    {
      v140 = v23 - v137[5];
      if ( v137[2] )
        v140 *= 2;
      v141 = v137[8] + 4 * v140;
    }
    v11 = RtlpAllocateHeap(v7, v183, v141, &v198);
    if ( !v11 )
    {
LABEL_299:
      v144 = NtCurrentTeb();
      v144->LastStatusValue = -1073741801;
      v145 = RtlNtStatusToDosError(-1073741801);
      v146 = v203;
      v144->LastErrorValue = v145;
      if ( (v146 & 4) != 0 )
      {
        v147 = v183;
        if ( !v183 )
          v147 = v204;
        RtlpAllocateHeapRaiseException(v147);
      }
      v143 = v207;
LABEL_305:
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v149 = (int)NtCurrentPeb()->SharedData + 550;
      else
        v149 = 2147353472;
      if ( !*(_BYTE *)v149
        || (NtCurrentPeb()->TracingFlags & 1) == 0
        || (*(_DWORD *)(v143 + 68) & 0x1000000) != 0
        || (v146 & 0x61000000) != 0 && (v146 & 0x10000000) == 0
        || v198 == 5 )
      {
        goto LABEL_324;
      }
      if ( !v11 )
        goto LABEL_323;
      v150 = *(_BYTE *)(v11 - 1);
      v151 = (_BYTE *)(v11 - 8);
      v152 = v11 - 8;
      if ( v150 == 5 )
      {
        v152 -= 8 * (unsigned __int8)v151[6];
        v150 = v151[7];
      }
      if ( *(char *)(v152 + 7) < 0 )
        goto LABEL_323;
      if ( v150 == 5 )
        v151 -= 8 * (unsigned __int8)v151[6];
      if ( ((v151[2] ^ (unsigned __int8)(*(_BYTE *)(v207 + 82) & (*(_DWORD *)(v207 + 76) >> 17))) & 8) != 0 )
      {
LABEL_324:
        v14 = v207;
      }
      else
      {
LABEL_323:
        v14 = v207;
        RtlpLogHeapAllocateEvent(v204, v198);
      }
      if ( (dword_4B3A6834 & 1) != 0
        && (dword_4B3A6834 & 2) != 0
        && NtCurrentPeb()->ProcessHeap
        && v14 != *(_DWORD *)RtlpHpMetadataHeapCtxGet(RtlpHpEnvHandle, dword_4B3A446C)
        && v11
        && (v203 & 0x10000000) == 0 )
      {
        goto LABEL_331;
      }
      return v11;
    }
    v135 = v204;
    goto LABEL_295;
  }
  v8 = RtlpHpConvertFlagsToSegmentFlags(a4);
  v9 = (void *)v6[44];
  v182 = v8;
  if ( v9 && v9 == NtCurrentTeb()->ClientId.UniqueThread )
  {
    v8 |= 1u;
    v182 = v8;
  }
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
    v10 = v7 > 0x7EFF8 ? 32 : 8;
  else
    v10 = 0;
  if ( v10 + v204 < v204 )
  {
    v11 = 0;
LABEL_11:
    v13 = NtCurrentTeb();
    v13->LastStatusValue = -1073741801;
    v13->LastErrorValue = RtlNtStatusToDosError(-1073741801);
    if ( v182 < 0 || *(int *)(v207 + 12) < 0 )
      RtlpAllocateHeapRaiseException(v204);
    return v11;
  }
  Heap = (unsigned int *)RtlpHpAllocateHeap(v8, a5);
  v11 = (int)Heap;
  if ( !Heap )
    goto LABEL_11;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    *(unsigned int *)((char *)Heap + v10 - 8) = v10;
    if ( v10 > 8 )
      *Heap = v10;
    v11 = (int)Heap + v10;
  }
  v14 = v207;
  if ( RtlpHpStackLoggingEnabled() )
LABEL_331:
    RtlpHpStackTraceAddStack(v14, v11);
  return v11;
}
