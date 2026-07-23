/*
 * XREFs of EtwpWriteUserEvent @ 0x140690950
 * Callers:
 *     NtTraceEvent @ 0x14027E790 (NtTraceEvent.c)
 * Callees:
 *     PsGetProcessStartKey @ 0x14023F080 (PsGetProcessStartKey.c)
 *     PsGetCurrentProcessSessionId @ 0x14027E740 (PsGetCurrentProcessSessionId.c)
 *     DecodeProviderTraits @ 0x14027F054 (DecodeProviderTraits.c)
 *     EtwpReleaseTraceBuffer @ 0x14027F770 (EtwpReleaseTraceBuffer.c)
 *     EtwpIsEventNameFilterEnabled @ 0x1402811C8 (EtwpIsEventNameFilterEnabled.c)
 *     EtwpCreateEventKey @ 0x1402811E4 (EtwpCreateEventKey.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402A5670 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402A58B0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1402C5480 (EtwpLevelKeywordEnabled.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     IoGetStackLimits @ 0x14035B170 (IoGetStackLimits.c)
 *     EtwpReserveTraceBuffer @ 0x14035B440 (EtwpReserveTraceBuffer.c)
 *     EtwpFailLogging @ 0x14036CCD4 (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036CF6C (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     Feature_1815603512__private_IsEnabledDeviceUsage @ 0x1403F9170 (Feature_1815603512__private_IsEnabledDeviceUsage.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A5FC4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A6E40 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceLostEvent @ 0x1405AAA04 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x1405AAD98 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405AB8A8 (EtwpInvokeEventCallback.c)
 *     EtwpApplyEventNameFilter @ 0x1405ABD64 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x1405AC1B8 (EtwpApplyLevelKwFilter.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x140620768 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071EC0C (EtwpGetSidExtendedHeaderItem.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140933B34 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x140940C2C (EtwpApplyStackWalkFilterOnUserEvent.c)
 */

__int64 __fastcall EtwpWriteUserEvent(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int16 a3,
        char a4,
        char a5,
        __int64 a6,
        _OWORD *a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        __int64 a12,
        __int64 a13,
        __int16 a14,
        void *a15,
        unsigned __int64 *a16)
{
  int v17; // edi
  __int64 v19; // rsi
  unsigned int v20; // r15d
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int8 v23; // r14
  signed int v25; // ebx
  __int64 v26; // r10
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r12
  bool v30; // zf
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // r13
  int v34; // ecx
  bool v35; // al
  __int64 v36; // rdx
  unsigned int v37; // r11d
  _KPROCESS *Process; // rcx
  __int64 v39; // rcx
  int v40; // ecx
  unsigned __int64 v41; // rbx
  unsigned int v42; // esi
  unsigned int v43; // r11d
  int v44; // edi
  unsigned int v45; // r15d
  int v46; // ecx
  __int64 v47; // rbx
  __int64 v48; // rcx
  int v49; // ecx
  char v50; // bl
  void *v51; // rsp
  void *v52; // rsp
  unsigned int v53; // r14d
  _OWORD *v54; // r13
  unsigned int v55; // edx
  unsigned __int64 v56; // r8
  __int64 v57; // rax
  unsigned int v58; // esi
  unsigned int v59; // r14d
  unsigned int v60; // ebx
  __int64 v61; // r13
  __int64 v62; // rsi
  char v63; // al
  unsigned int v64; // eax
  int v65; // edi
  int v66; // ebx
  int v67; // eax
  unsigned int v68; // eax
  __int64 v69; // rsi
  __int64 v70; // rbx
  int v71; // eax
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // r12
  unsigned int v74; // edx
  __int64 v75; // r15
  int ReserveTraceBufferStatus; // edi
  BOOL v77; // ecx
  unsigned __int8 v78; // dl
  __int64 v79; // rbx
  BOOL v80; // ecx
  int v81; // edx
  unsigned int v82; // r14d
  unsigned __int16 *v83; // rsi
  _OWORD *v84; // rax
  __int128 v85; // xmm0
  unsigned int v86; // r13d
  __int64 v87; // r13
  __int16 v88; // r14
  unsigned __int16 v89; // r14
  unsigned __int64 v90; // rcx
  int v91; // ebx
  unsigned __int64 v92; // rbx
  __int16 v93; // r11
  __int16 v94; // r8
  unsigned __int64 v95; // rdx
  unsigned __int64 ProcessStartKey; // rax
  unsigned __int16 *v97; // rdx
  unsigned __int16 *v98; // r9
  unsigned __int64 v99; // rax
  unsigned __int16 *v100; // rbx
  unsigned __int16 *v101; // r14
  unsigned __int16 *v102; // rbx
  unsigned __int16 *v103; // rdi
  unsigned int v104; // edx
  unsigned __int16 *v105; // rcx
  unsigned __int16 v106; // r14
  unsigned __int16 v107; // r14
  _WORD *v108; // rdi
  __int64 v109; // rbx
  unsigned __int16 *v110; // rcx
  unsigned __int16 *v111; // rbx
  __int64 v112; // rcx
  unsigned __int16 v113; // dx
  char *v114; // rdi
  unsigned int v115; // esi
  unsigned __int64 v116; // r13
  size_t v117; // r8
  LARGE_INTEGER *v118; // rdx
  unsigned __int8 v119; // cl
  int v120; // ecx
  size_t v121; // rcx
  unsigned __int64 v122; // rbx
  unsigned int v123; // eax
  int v124; // ecx
  struct _KTHREAD *v125; // rsi
  __int64 v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  signed __int64 *v130; // rdi
  __int64 v131; // rsi
  char v132; // [rsp+210h] [rbp-610h] BYREF
  char v133; // [rsp+640h] [rbp-1E0h] BYREF
  char v134; // [rsp+820h] [rbp+0h]
  int v135; // [rsp+824h] [rbp+4h]
  char v136; // [rsp+828h] [rbp+8h]
  int v137; // [rsp+82Ch] [rbp+Ch]
  int v138; // [rsp+830h] [rbp+10h]
  unsigned int v139; // [rsp+834h] [rbp+14h]
  int v140; // [rsp+838h] [rbp+18h]
  char v141; // [rsp+840h] [rbp+20h]
  int v142; // [rsp+848h] [rbp+28h]
  unsigned __int16 v143; // [rsp+84Ch] [rbp+2Ch] BYREF
  __int16 v144; // [rsp+850h] [rbp+30h]
  unsigned int v145; // [rsp+854h] [rbp+34h]
  int v146; // [rsp+858h] [rbp+38h]
  __int64 v147; // [rsp+860h] [rbp+40h]
  unsigned __int16 v148; // [rsp+868h] [rbp+48h]
  __int64 v149; // [rsp+870h] [rbp+50h]
  unsigned int v150; // [rsp+878h] [rbp+58h]
  unsigned __int16 *v151; // [rsp+880h] [rbp+60h]
  __int64 v152; // [rsp+888h] [rbp+68h]
  __int64 v153; // [rsp+890h] [rbp+70h]
  unsigned __int64 v154; // [rsp+898h] [rbp+78h]
  __int64 v155; // [rsp+8A0h] [rbp+80h]
  void *StackLookasideListEntry; // [rsp+8A8h] [rbp+88h] BYREF
  char PreviousMode; // [rsp+8B0h] [rbp+90h]
  char v158; // [rsp+8B1h] [rbp+91h]
  unsigned int v159; // [rsp+8B4h] [rbp+94h]
  LARGE_INTEGER v160; // [rsp+8B8h] [rbp+98h] BYREF
  __int64 v161; // [rsp+8C0h] [rbp+A0h]
  unsigned int v162; // [rsp+8C8h] [rbp+A8h]
  unsigned int v163; // [rsp+8CCh] [rbp+ACh]
  unsigned __int16 *v164; // [rsp+8D0h] [rbp+B0h]
  unsigned __int64 v165; // [rsp+8D8h] [rbp+B8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+8E0h] [rbp+C0h]
  void *v167; // [rsp+8E8h] [rbp+C8h]
  unsigned __int16 *v168; // [rsp+8F0h] [rbp+D0h]
  unsigned __int64 HighLimit; // [rsp+8F8h] [rbp+D8h] BYREF
  unsigned __int64 LowLimit; // [rsp+900h] [rbp+E0h] BYREF
  unsigned __int64 v171; // [rsp+908h] [rbp+E8h] BYREF
  unsigned __int64 v172; // [rsp+910h] [rbp+F0h] BYREF
  unsigned __int16 *v173; // [rsp+918h] [rbp+F8h] BYREF
  __int64 v174; // [rsp+920h] [rbp+100h]
  unsigned __int64 *v175; // [rsp+928h] [rbp+108h]
  void *v176; // [rsp+930h] [rbp+110h]
  char *v177; // [rsp+938h] [rbp+118h]
  __int64 v178; // [rsp+940h] [rbp+120h]
  __int64 v179; // [rsp+948h] [rbp+128h]
  __int64 v180; // [rsp+950h] [rbp+130h]
  __int128 v181; // [rsp+958h] [rbp+138h] BYREF
  __int64 v182; // [rsp+968h] [rbp+148h]
  int IsEnabledDeviceUsage; // [rsp+970h] [rbp+150h]
  unsigned __int64 v184; // [rsp+978h] [rbp+158h]
  _OWORD v185[25]; // [rsp+980h] [rbp+160h] BYREF
  _OWORD Src[5]; // [rsp+B10h] [rbp+2F0h] BYREF

  v148 = a3;
  v17 = a2;
  v161 = a1;
  v19 = a13;
  v179 = a1;
  v147 = a6;
  v180 = a6;
  v154 = a11;
  v155 = a12;
  v176 = a15;
  v175 = a16;
  v20 = 0;
  v137 = 0;
  memset(v185, 0, 0x188uLL);
  v150 = 0;
  memset(Src, 0, sizeof(Src));
  StackLookasideListEntry = 0LL;
  v167 = 0LL;
  v143 = 0;
  v173 = 0LL;
  v165 = 0LL;
  v174 = *((_QWORD *)PsGetCurrentServerSiloGlobals(v22, v21) + 108);
  v144 = a14 & 0x200;
  v23 = 0;
  if ( !a11 )
  {
    if ( !a10 )
      goto LABEL_5;
    return 3221225485LL;
  }
  if ( !a10 )
    return 3221225485LL;
LABEL_5:
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a13 )
    v19 = a1;
  v153 = v19;
  v134 = 0;
  v149 = *(_QWORD *)(a1 + 392);
  v178 = v149;
  if ( v175 && *v175 )
  {
    v165 = *v175;
    v134 = 16;
  }
  DecodeProviderTraits((unsigned __int16 *)v176, (a14 & 0x400) != 0, &v143, &v173);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(v17) = ~a4 & v17;
  v25 = v137;
  v26 = v19;
  v27 = a9;
  v28 = v155;
LABEL_14:
  v29 = 1LL;
  while ( 1 )
  {
    v30 = !_BitScanForward((unsigned int *)&v31, (unsigned __int8)v17);
    v150 = v31;
    if ( v30 )
      goto LABEL_237;
    v181 = 0LL;
    v182 = 0LL;
    v160.QuadPart = 0LL;
    v135 = 80;
    v159 = 0;
    v145 = 0;
    v146 = 0;
    v164 = 0LL;
    v177 = 0LL;
    v140 = 0;
    v136 = 0;
    v152 = 1LL;
    LOBYTE(v17) = (v17 - 1) & v17;
    v142 = v17;
    v141 = v17;
    v32 = (unsigned int)v31;
    v33 = v26 + 32 * (v31 + 4);
    if ( v28 )
    {
      v34 = *(_DWORD *)(v28 + 4LL * (*(unsigned __int16 *)(v33 + 6) >> 5));
      if ( _bittest(&v34, *(_WORD *)(v33 + 6) & 0x1F) )
        goto LABEL_13;
    }
    v35 = EtwpLevelKeywordEnabled(v33, a8, v27);
    v28 = v155;
    if ( !v35 )
      goto LABEL_13;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( ((a5 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0) && (*(_DWORD *)(v33 + 8) & 0x200) != 0 )
    {
      v25 = v137;
LABEL_13:
      v23 = v140;
      goto LABEL_14;
    }
    v39 = *(_QWORD *)(v26 + 384);
    if ( v39
      && ((v40 = *(_DWORD *)(104 * v32 + v39), (v40 & 0x80000200) == 0x80000200) || (v40 & 0x80000100) == 0x80000100) )
    {
      v41 = v154;
      v42 = v150;
      if ( !EtwpApplyEventIdPayloadFilterOnUserEvent(v26, v150, v148, v147, v37, v154) )
        goto LABEL_32;
      v26 = v153;
      v27 = a9;
    }
    else
    {
      v42 = v150;
      v41 = v154;
    }
    if ( v144
      && EtwpIsEventNameFilterEnabled(v26, v42, a8, v27, 0)
      && !EtwpApplyEventNameFilter(v153, v42, v43, v41, 1, 0, v28, v27, 0) )
    {
LABEL_32:
      v23 = v140;
LABEL_236:
      v25 = v137;
      v26 = v153;
      v27 = a9;
      v28 = v155;
      goto LABEL_14;
    }
    v44 = 0;
    if ( a7 )
    {
      v45 = 104;
      v135 = 104;
      v44 = 8;
    }
    else
    {
      v45 = v135;
    }
    v46 = *(_DWORD *)(v33 + 8);
    if ( (v46 & 0xFFFFFF9F) != 0 )
    {
      if ( (v46 & 0x800) != 0 && v174 && v174 != EtwpHostSiloState )
      {
        v44 |= 0x80u;
        v45 += (*(unsigned __int16 *)(v174 + 4200) + 15) & 0xFFFFFFF8;
        v135 = v45;
      }
      if ( (v46 & 1) != 0 )
      {
        if ( (v134 & 2) == 0 )
        {
          EtwpGetSidExtendedHeaderItem(Src, v36, v28, v27);
          v134 |= 2u;
          v46 = *(_DWORD *)(v33 + 8);
        }
        v44 |= 2u;
        v45 += LOWORD(Src[0]);
        v135 = v45;
      }
      if ( (v46 & 2) != 0 )
      {
        v44 |= 1u;
        v45 += 16;
        v135 = v45;
      }
      if ( (v46 & 0x80u) != 0 )
      {
        v44 |= 0x20u;
        v45 += 16;
        v135 = v45;
      }
      if ( (v46 & 0x100) != 0 )
      {
        v44 |= 0x40u;
        v45 += 16;
        v135 = v45;
      }
      if ( (v46 & 4) != 0 )
      {
        if ( (v47 = v153, (v48 = *(_QWORD *)(v153 + 384)) == 0)
          || (v49 = *(_DWORD *)(104 * v32 + v48), (v49 & 0x80001000) != 0x80001000)
          && (v49 & 0x80002000) != 0x80002000
          && (v49 & 0x80004000) != 0x80004000
          || EtwpApplyLevelKwFilter(v153, v42, a8, a9, 1)
          && (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v147, v47, v42)
          && EtwpApplyEventNameFilter(v47, v42, a10, v154, 1, 0, a8, a9, 1) )
        {
          v50 = v134;
          if ( (v134 & 1) == 0 )
          {
            StackLookasideListEntry = EtwpGetStackLookasideListEntry();
            if ( StackLookasideListEntry )
            {
              EtwpGetStackExtendedHeaderItem(
                (__int64)CurrentThread,
                0,
                0x100u,
                (__int64)&StackLookasideListEntry,
                0,
                0LL);
              v134 = (StackLookasideListEntry != 0LL ? 8 : 0) | v50 & 0xF7;
            }
            else
            {
              HighLimit = 0LL;
              LowLimit = 0LL;
              IoGetStackLimits(&LowLimit, &HighLimit);
              if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
              {
                v51 = alloca(1552LL);
                StackLookasideListEntry = &v132;
                EtwpGetStackExtendedHeaderItem(
                  (__int64)CurrentThread,
                  0,
                  0xC0u,
                  (__int64)&StackLookasideListEntry,
                  0,
                  0LL);
              }
            }
            v134 |= 1u;
          }
          if ( StackLookasideListEntry )
          {
            v44 |= 4u;
            v45 += *(unsigned __int16 *)StackLookasideListEntry;
            v135 = v45;
          }
        }
      }
      if ( (*(_DWORD *)(v33 + 8) & 8) != 0 )
      {
        if ( (v134 & 4) == 0 )
        {
          v171 = 0LL;
          v172 = 0LL;
          IoGetStackLimits(&v172, &v171);
          if ( (unsigned __int64)&v171 - v172 > 0x1E0 )
          {
            v52 = alloca(480LL);
            v167 = &v133;
            EtwpGetPsmKeyExtendedHeaderItem();
          }
          v134 |= 4u;
        }
        if ( v167 )
        {
          v44 |= 0x10u;
          v45 += *(unsigned __int16 *)v167;
          v135 = v45;
        }
      }
    }
    v53 = *(unsigned __int16 *)(v33 + 6);
    v139 = v53;
    v54 = &v185[3 * LODWORD(v185[24])];
    v55 = a10;
    if ( a10 )
    {
      v162 = 0;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      v56 = v154;
      if ( PreviousMode )
      {
        v57 = 16LL * a10;
        if ( v57 )
        {
          if ( (v154 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v154 + v57 > 0x7FFFFFFF0000LL || v154 + v57 < v154 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      v58 = 0;
      v162 = 0;
      v45 = v135;
      while ( v58 < v55 )
      {
        v59 = v45;
        v159 = *(_DWORD *)(v56 + 16LL * v58 + 8);
        v60 = v159;
        if ( v159 > 0xFFFF )
          goto LABEL_84;
        if ( v144 )
        {
          v63 = *(_BYTE *)(v56 + 16LL * v58 + 12);
          v60 = v159;
        }
        else
        {
          v63 = 0;
        }
        if ( v63 )
        {
          if ( v63 == 1 )
          {
            IsEnabledDeviceUsage = Feature_1815603512__private_IsEnabledDeviceUsage();
            v145 += IsEnabledDeviceUsage ? v60 : (unsigned __int16)v60;
            ++v146;
            v45 = v135;
            v55 = a10;
            v56 = v154;
          }
          else
          {
            v45 = v135;
          }
        }
        else
        {
          v45 = v60 + v135;
          v135 += v60;
        }
        if ( v45 < v59 )
        {
LABEL_84:
          v25 = -2147483643;
          v137 = -2147483643;
          v23 = v140;
          LOBYTE(v17) = v142;
          v20 = v139;
          v61 = v149;
          v62 = v147;
          goto LABEL_238;
        }
        v162 = ++v58;
      }
      LOBYTE(v42) = v150;
      v29 = v152;
      v53 = v139;
    }
    if ( v146 )
    {
      if ( (unsigned int)Feature_1815603512__private_IsEnabledDeviceUsage() )
      {
        v64 = (v145 + 15) & 0xFFFFFFF8;
        if ( v64 > 0xFFFF )
        {
          v65 = (unsigned __int8)v142;
          goto LABEL_103;
        }
      }
      else
      {
        v64 = (v145 + 15) & 0xFFFFFFF8;
      }
      v45 += v64;
      v135 = v45;
    }
    v66 = v143;
    if ( v143 )
      break;
LABEL_114:
    *((_DWORD *)v54 + 10) = v45;
    v69 = 8LL * v53;
    v70 = v149;
    if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v69 + *(_QWORD *)(v149 + 448)), 1u) )
    {
      if ( v53 >= *(_DWORD *)(v70 + 16) )
      {
        v29 = 1LL;
        v152 = 1LL;
      }
      else
      {
        _mm_lfence();
        v29 = *(_QWORD *)(v69 + *(_QWORD *)(v70 + 456));
        v45 = v135;
        v152 = v29;
      }
      v23 = 1;
    }
    else
    {
      v23 = v140;
    }
    if ( (v29 & 1) != 0 )
    {
      v29 = 1LL;
      if ( v23 )
      {
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v69 + *(_QWORD *)(v70 + 448)), 1u);
        if ( (unsigned int)Feature_1815603512__private_IsEnabledDeviceUsage() )
          v23 = 0;
      }
      v20 = v139;
      v17 = v142;
      if ( v139 == 3 )
      {
        v71 = *(_DWORD *)(v70 + 4068);
        v25 = -1073741058;
        if ( !v71 )
          v25 = -1073741816;
        goto LABEL_237;
      }
      v25 = v137;
    }
    else
    {
      v72 = EtwpReserveTraceBuffer((unsigned int *)v29, v45, (__int64)&v181, &v160, 0);
      v73 = v72;
      v184 = v72;
      if ( v72 )
      {
        v79 = v152;
        *(_QWORD *)v54 = v152;
        *((_QWORD *)v54 + 1) = v72;
        v54[1] = v181;
        *((_QWORD *)v54 + 4) = v182;
        ++LODWORD(v185[24]);
        v80 = Feature_1815603512__private_IsEnabledDeviceUsage() != 0;
        v81 = 0;
        if ( !v80 )
          v81 = v23;
        v140 = v81;
        v136 = v81;
        v163 = 0;
        v82 = 80;
        v138 = 80;
        v83 = 0LL;
        v151 = 0LL;
        v84 = (_OWORD *)v147;
        *(_OWORD *)v73 = *(_OWORD *)v147;
        *(_OWORD *)(v73 + 16) = v84[1];
        *(_OWORD *)(v73 + 32) = v84[2];
        *(_OWORD *)(v73 + 48) = v84[3];
        *(_OWORD *)(v73 + 64) = v84[4];
        if ( v173 )
        {
          v85 = *(_OWORD *)v173;
          *(_WORD *)(v73 + 4) |= 0x80u;
        }
        else
        {
          v85 = *(_OWORD *)(v161 + 40);
        }
        *(_OWORD *)(v73 + 24) = v85;
        *(_DWORD *)v73 = v45 | *(_DWORD *)(v79 + 4LL * v148 + 20);
        v86 = 80;
        if ( v44 )
        {
          if ( (v44 & 0x80u) != 0 )
          {
            v83 = (unsigned __int16 *)(v73 + 80);
            v87 = v174;
            v88 = (*(_WORD *)(v174 + 4200) + 15) & 0xFFF8;
            *(_WORD *)(v73 + 80) = v88;
            *(_WORD *)(v73 + 82) = 16;
            *(_WORD *)(v73 + 86) = *(_WORD *)(v87 + 4200);
            *(_WORD *)(v73 + 84) &= ~1u;
            *(_WORD *)(v73 + 84) &= 1u;
            v89 = v88 - *(_WORD *)(v87 + 4200) - 8;
            memmove((void *)(v73 + 88), *(const void **)(v87 + 4192), *(unsigned __int16 *)(v87 + 4200));
            memset((void *)(v73 + 88 + *(unsigned __int16 *)(v87 + 4200)), 0, v89);
            *(_WORD *)(v73 + 4) |= 1u;
            v82 = *(unsigned __int16 *)(v73 + 80) + 80;
            v138 = v82;
            v151 = (unsigned __int16 *)(v73 + 80);
            v86 = v82;
          }
          if ( (v44 & 8) != 0 )
          {
            v90 = v73 + v86;
            *(_DWORD *)v90 = 65560;
            *(_WORD *)(v90 + 6) = 16;
            *(_WORD *)(v90 + 4) &= ~1u;
            *(_WORD *)(v90 + 4) &= 1u;
            *(_OWORD *)(v90 + 8) = *a7;
            *(_WORD *)(v73 + 4) |= 1u;
            v82 = v86 + 24;
            v138 = v86 + 24;
            if ( v83 )
              v83[2] |= 1u;
            v83 = (unsigned __int16 *)(v73 + v86);
            v151 = v83;
            v86 += 24;
          }
          if ( (v44 & 2) != 0 )
          {
            v168 = (unsigned __int16 *)(v73 + v86);
            v91 = LOWORD(Src[0]);
            memmove(v168, Src, LOWORD(Src[0]));
            *(_WORD *)(v73 + 4) |= 1u;
            v82 = v91 + v86;
            v138 = v91 + v86;
            if ( v83 )
              v83[2] |= 1u;
            v83 = v168;
            v151 = v168;
            v86 += v91;
          }
          if ( (v44 & 1) != 0 )
          {
            v92 = v73 + v86;
            *(_DWORD *)v92 = 196624;
            *(_WORD *)(v92 + 6) = 4;
            *(_WORD *)(v92 + 4) &= ~1u;
            *(_WORD *)(v92 + 4) &= 1u;
            *(_DWORD *)(v92 + 8) = PsGetCurrentProcessSessionId();
            *(_WORD *)(v73 + 4) |= 1u;
            v82 = v86 + 16;
            v138 = v86 + 16;
            if ( v83 )
              v83[2] |= 1u;
            v83 = (unsigned __int16 *)(v73 + v86);
            v151 = v83;
            v86 += 16;
          }
          v93 = 8;
          v94 = -2;
          if ( (v44 & 0x20) != 0 )
          {
            v95 = v73 + v86;
            *(_DWORD *)v95 = 851984;
            *(_WORD *)(v95 + 6) = 8;
            *(_WORD *)(v95 + 4) &= ~1u;
            *(_WORD *)(v95 + 4) &= 1u;
            ProcessStartKey = PsGetProcessStartKey((__int64)KeGetCurrentThread()->ApcState.Process);
            *((_QWORD *)v97 + 1) = ProcessStartKey;
            *(_WORD *)(v73 + 4) |= 1u;
            v82 = v86 + 16;
            v138 = v86 + 16;
            if ( v83 )
              v83[2] |= 1u;
            v83 = v97;
            v151 = v97;
            v86 += 16;
            v45 = v135;
          }
          if ( (v44 & 0x40) != 0 )
          {
            v98 = (unsigned __int16 *)(v73 + v86);
            *(_DWORD *)v98 = 655376;
            v98[3] = v93;
            v98[2] &= v94;
            v98[2] &= 1u;
            if ( (v134 & 0x10) != 0 || (EtwpCreateEventKey(&v165), v134 |= 0x10u, !v175) )
            {
              v99 = v165;
            }
            else
            {
              v99 = v165;
              *v175 = v165;
            }
            *((_QWORD *)v98 + 1) = v99;
            *(_WORD *)(v73 + 4) |= 1u;
            v82 = v86 + 16;
            v138 = v86 + 16;
            if ( v83 )
              v83[2] |= 1u;
            v83 = v98;
            v151 = v98;
            v86 += 16;
          }
          if ( (v44 & 4) != 0 )
          {
            v100 = (unsigned __int16 *)(v73 + v86);
            v101 = (unsigned __int16 *)StackLookasideListEntry;
            memmove(v100, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
            *(_WORD *)(v73 + 4) |= 1u;
            v82 = v86 + *v101;
            v86 = v82;
            v138 = v82;
            if ( v83 )
              v83[2] |= 1u;
            v83 = v100;
            v151 = v100;
          }
          if ( (v44 & 0x10) != 0 )
          {
            v102 = (unsigned __int16 *)(v73 + v86);
            v103 = (unsigned __int16 *)v167;
            memmove(v102, v167, *(unsigned __int16 *)v167);
            *(_WORD *)(v73 + 4) |= 1u;
            v82 = v86 + *v103;
            v86 = v82;
            v138 = v82;
            if ( v83 )
              v83[2] |= 1u;
            v83 = v102;
            v151 = v102;
          }
        }
        v104 = v143;
        if ( v143 )
        {
          v105 = (unsigned __int16 *)(v73 + v86);
          v168 = v105;
          v106 = (v143 + 15) & 0xFFF8;
          *v105 = v106;
          v105[1] = 12;
          v105[3] = v104;
          v105[2] &= ~1u;
          v105[2] &= 1u;
          v107 = v106 - v104 - 8;
          v108 = v105 + 4;
          v109 = v104;
          memmove(v105 + 4, v176, v104);
          memset((char *)v108 + v109, 0, v107);
          *(_WORD *)(v73 + 4) |= 1u;
          v110 = v168;
          v82 = v86 + *v168;
          v86 = v82;
          v138 = v82;
          if ( v83 )
            v83[2] |= 1u;
          v83 = v110;
          v151 = v110;
        }
        if ( v146 )
        {
          v111 = (unsigned __int16 *)(v73 + v86);
          v112 = v145;
          v113 = (v145 + 15) & 0xFFF8;
          *v111 = v113;
          v111[1] = 11;
          v111[3] = v112;
          v111[2] &= ~1u;
          v111[2] &= 1u;
          v114 = (char *)(v111 + 4);
          v164 = v111 + 4;
          v177 = (char *)v111 + v112 + 8;
          memset(v177, 0, (unsigned __int16)(v113 - v112 - 8));
          *(_WORD *)(v73 + 4) |= 1u;
          v82 = v86 + *v111;
          v138 = v82;
          if ( v83 )
            v83[2] |= 1u;
        }
        else
        {
          v114 = (char *)v164;
        }
        v115 = 0;
        v163 = 0;
        v116 = v154;
        while ( v115 < a10 )
        {
          v117 = *(unsigned int *)(v116 + 16LL * v115 + 8);
          v118 = *(LARGE_INTEGER **)(v116 + 16LL * v115);
          if ( v144 )
          {
            v119 = *(_BYTE *)(v116 + 16LL * v115 + 12);
            v45 = v135;
            v114 = (char *)v164;
            v82 = v138;
          }
          else
          {
            v119 = 0;
          }
          if ( v119 )
          {
            v120 = v119 - 1;
            if ( v120 )
            {
              if ( v120 == 2 )
              {
                if ( (_DWORD)v117 == 8 )
                {
                  if ( (unsigned __int64)&v118[1] > 0x7FFFFFFF0000LL || &v118[1] < v118 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                  v160 = *v118;
                }
                v163 = ++v115;
              }
              else
              {
                v163 = ++v115;
              }
            }
            else
            {
              if ( !v114 )
                goto LABEL_225;
              v121 = *(unsigned int *)(v116 + 16LL * v115 + 8);
              v122 = (unsigned __int64)&v114[v117];
              if ( &v114[v117] < v114 || v122 > (unsigned __int64)v177 || !v146 )
                goto LABEL_225;
              if ( (_DWORD)v117
                && ((unsigned __int64)v118 + v117 > 0x7FFFFFFF0000LL || (LARGE_INTEGER *)((char *)v118 + v117) < v118) )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove(v114, v118, v121);
              v114 = (char *)v122;
              v164 = (unsigned __int16 *)v122;
              --v146;
              v163 = ++v115;
            }
          }
          else
          {
            v123 = v117 + v82;
            if ( (unsigned int)v117 + v82 < v82 )
            {
              v138 = -1;
              v124 = -1073741675;
              v123 = -1;
            }
            else
            {
              v138 = v117 + v82;
              v124 = 0;
            }
            if ( v124 || v123 > v45 )
            {
LABEL_225:
              v25 = -1073741820;
              v137 = -1073741820;
              *(_DWORD *)v73 = v45 | *(_DWORD *)(v152 + 28);
              *(LARGE_INTEGER *)(v73 + 16) = v160;
              v23 = v140;
              LOBYTE(v17) = v142;
              v20 = v139;
              v61 = v149;
              v62 = v147;
              goto LABEL_238;
            }
            v158 = KeGetCurrentThread()->PreviousMode;
            if ( v158
              && (_DWORD)v117
              && ((unsigned __int64)v118 + v117 > 0x7FFFFFFF0000LL || (LARGE_INTEGER *)((char *)v118 + v117) < v118) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove((void *)(v73 + v82), v118, v117);
            v45 = v135;
            v114 = (char *)v164;
            v82 = v138;
            v163 = ++v115;
          }
        }
        v20 = v139;
        if ( v155 )
          *(_DWORD *)(v155 + 4LL * (v139 >> 5)) |= 1 << (v139 & 0x1F);
        *(LARGE_INTEGER *)(v73 + 16) = v160;
        v125 = CurrentThread;
        *(_DWORD *)(v73 + 56) = CurrentThread->SchedulerApc.SpareLong0;
        *(_DWORD *)(v73 + 60) = v125->UserTime;
        *(_DWORD *)(v73 + 8) = v125[1].CurrentRunTime;
        *(_DWORD *)(v73 + 12) = v125[1].CycleTime;
        v126 = v152;
        if ( (*(_DWORD *)(v152 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v152, (__int64)&v181);
        }
        if ( *(_QWORD *)(v126 + 1272) )
          EtwpInvokeEventCallback(v126, (__int64 *)&v181, v161 + 40);
        v23 = v140;
        v17 = v142;
        goto LABEL_236;
      }
      v74 = v45;
      v75 = v152;
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v152, v74);
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
        EtwpTraceLostEvent(
          (_QWORD *)(v161 + 40),
          (__int16 *)(v147 + 40),
          (unsigned __int16 *)(v75 + 152),
          ReserveTraceBufferStatus);
      v25 = v137;
      if ( v137 >= 0 )
      {
        if ( (*(_DWORD *)(v75 + 12) & 0x8000000) == 0 )
          v25 = ReserveTraceBufferStatus;
        v137 = v25;
      }
      v29 = 1LL;
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v69 + *(_QWORD *)(v149 + 448)), 1u);
      v77 = Feature_1815603512__private_IsEnabledDeviceUsage() != 0;
      v78 = 0;
      if ( !v77 )
        v78 = v23;
      v23 = v78;
      v20 = v139;
      v30 = ReserveTraceBufferStatus == -1073741675;
      v17 = v142;
      if ( v30 )
      {
        v25 = -1073741675;
        goto LABEL_237;
      }
    }
    v26 = v153;
    v27 = a9;
    v28 = v155;
  }
  v30 = (unsigned int)Feature_1815603512__private_IsEnabledDeviceUsage() == 0;
  v67 = v66 + 15;
  if ( v30 )
  {
    v68 = v67 & 0xFFFFFFF8;
    goto LABEL_113;
  }
  v68 = v67 & 0xFFFFFFF8;
  if ( v68 <= 0xFFFF )
  {
LABEL_113:
    v45 += v68;
    v135 = v45;
    goto LABEL_114;
  }
  v65 = (unsigned __int8)v142;
LABEL_103:
  v25 = v137;
  if ( v137 >= 0 )
    v25 = -1073741675;
  v17 = v65 | (1 << v42);
  v23 = v140;
  v20 = v139;
LABEL_237:
  v61 = v149;
  v62 = v147;
LABEL_238:
  if ( (unsigned int)Feature_1815603512__private_IsEnabledDeviceUsage() && v23 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v61 + 448) + 8LL * v20), 1u);
  if ( (v134 & 8) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v25 < 0 )
  {
    EtwpFailLogging(a8, a9, v161, (__int64)v185, v17, v25, v62 + 40, 1);
  }
  else if ( LODWORD(v185[24]) )
  {
    v130 = (signed __int64 *)v185;
    v131 = LODWORD(v185[24]);
    do
    {
      EtwpReleaseTraceBuffer(v130 + 2);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v61 + 448) + 8LL * *(unsigned int *)*v130),
        1u);
      v130 += 6;
      --v131;
    }
    while ( v131 );
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v127, v128, v129);
  return (unsigned int)v25;
}
