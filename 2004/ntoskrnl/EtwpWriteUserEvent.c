/*
 * XREFs of EtwpWriteUserEvent @ 0x1406246E0
 * Callers:
 *     NtTraceEvent @ 0x14026C620 (NtTraceEvent.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x140215A40 (EtwpLevelKeywordEnabled.c)
 *     DecodeProviderTraits @ 0x14026CEE4 (DecodeProviderTraits.c)
 *     EtwpReleaseTraceBuffer @ 0x14026D600 (EtwpReleaseTraceBuffer.c)
 *     EtwpIsEventNameFilterEnabled @ 0x14026D648 (EtwpIsEventNameFilterEnabled.c)
 *     EtwpCreateEventKey @ 0x14026D664 (EtwpCreateEventKey.c)
 *     PsGetProcessStartKey @ 0x14026D6B0 (PsGetProcessStartKey.c)
 *     PsGetCurrentProcessSessionId @ 0x14026D6D0 (PsGetCurrentProcessSessionId.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReserveTraceBuffer @ 0x14029AB70 (EtwpReserveTraceBuffer.c)
 *     IoGetStackLimits @ 0x14029ADF0 (IoGetStackLimits.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402FEF90 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140311DB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpFailLogging @ 0x14036A514 (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036A7AC (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A08C4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A1740 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceLostEvent @ 0x1405A5304 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x1405A56BC (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405A61CC (EtwpInvokeEventCallback.c)
 *     EtwpApplyEventNameFilter @ 0x1405A6684 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x1405A6AD8 (EtwpApplyLevelKwFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140625830 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x14070F0F8 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140930364 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x14093D4C4 (EtwpApplyStackWalkFilterOnUserEvent.c)
 */

__int64 __fastcall EtwpWriteUserEvent(
        __int64 a1,
        char a2,
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
  __int64 v19; // rsi
  unsigned int v20; // r15d
  __int16 v21; // r14
  unsigned __int8 v22; // r12
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rsi
  int v28; // ecx
  bool v29; // al
  __int64 v30; // r9
  unsigned __int8 v31; // r10
  unsigned int v32; // r11d
  __int64 v33; // rdx
  _KPROCESS *Process; // rcx
  __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  unsigned int v37; // r12d
  __int64 v38; // r13
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned int **v42; // r11
  int v43; // edi
  unsigned int v44; // r14d
  int v45; // ecx
  unsigned int v46; // r12d
  _OWORD *v47; // rsi
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // ecx
  unsigned int v51; // r9d
  unsigned __int64 v52; // rdx
  unsigned int v53; // r8d
  char v54; // al
  __int64 v55; // rbx
  __int64 v56; // rcx
  char v57; // al
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r11
  __int64 v60; // rcx
  unsigned int v61; // r8d
  unsigned __int16 *v62; // r12
  _OWORD *v63; // rax
  __int128 v64; // xmm0
  unsigned int v65; // r13d
  unsigned __int16 *v66; // rsi
  int v67; // ebx
  unsigned __int64 v68; // rdx
  unsigned __int64 ProcessStartKey; // rax
  unsigned __int16 *v70; // rdx
  unsigned __int16 *v71; // r9
  unsigned __int64 v72; // rax
  unsigned int v73; // edx
  unsigned __int16 *v74; // rcx
  unsigned __int16 v75; // si
  unsigned __int16 v76; // si
  _WORD *v77; // rdi
  __int64 v78; // rbx
  unsigned __int16 *v79; // rcx
  char *v80; // rsi
  unsigned int v81; // ebx
  __int16 v82; // r12
  size_t v83; // rdx
  LARGE_INTEGER *v84; // r9
  unsigned __int8 v85; // cl
  unsigned int v86; // eax
  int v87; // ecx
  int v88; // ecx
  unsigned __int16 *v89; // rbx
  __int64 v90; // rcx
  unsigned __int16 v91; // dx
  char *v92; // rdi
  unsigned __int16 *v93; // rbx
  unsigned __int64 v94; // rcx
  __int64 v95; // r13
  __int16 v96; // si
  unsigned __int16 v97; // si
  unsigned __int64 v98; // rbx
  unsigned __int16 *v99; // rsi
  unsigned __int16 *v100; // rbx
  unsigned __int16 *v101; // rbx
  unsigned __int16 *v102; // rdi
  struct _KTHREAD *v103; // rcx
  __int64 v104; // rbx
  __int64 v105; // rsi
  int ReserveTraceBufferStatus; // edi
  __int64 v107; // rbx
  __int64 v108; // rcx
  int v109; // ecx
  char v110; // al
  char v111; // bl
  void *v112; // rsp
  void *v113; // rsp
  unsigned __int16 *v114; // rbx
  signed int v115; // ecx
  char v116; // [rsp+30h] [rbp-610h] BYREF
  _BYTE v117[400]; // [rsp+460h] [rbp-1E0h] BYREF
  char v118; // [rsp+640h] [rbp+0h]
  unsigned __int8 v119; // [rsp+648h] [rbp+8h]
  int v120; // [rsp+650h] [rbp+10h]
  int v121; // [rsp+654h] [rbp+14h]
  __int16 v122; // [rsp+658h] [rbp+18h]
  signed int v123; // [rsp+65Ch] [rbp+1Ch]
  unsigned __int16 v124; // [rsp+660h] [rbp+20h]
  char v125; // [rsp+664h] [rbp+24h]
  unsigned __int16 v126; // [rsp+668h] [rbp+28h] BYREF
  unsigned __int16 *v127; // [rsp+670h] [rbp+30h]
  int v128; // [rsp+678h] [rbp+38h]
  __int64 v129; // [rsp+680h] [rbp+40h]
  __int64 v130; // [rsp+688h] [rbp+48h]
  unsigned __int16 v131; // [rsp+690h] [rbp+50h]
  __int64 v132; // [rsp+698h] [rbp+58h]
  unsigned __int64 v133; // [rsp+6A0h] [rbp+60h]
  unsigned __int16 *v134; // [rsp+6A8h] [rbp+68h]
  void *StackLookasideListEntry; // [rsp+6B0h] [rbp+70h] BYREF
  unsigned __int64 v136; // [rsp+6B8h] [rbp+78h]
  char v137; // [rsp+6C0h] [rbp+80h]
  char PreviousMode; // [rsp+6C1h] [rbp+81h]
  unsigned int v139; // [rsp+6C4h] [rbp+84h]
  unsigned int v140; // [rsp+6C8h] [rbp+88h]
  LARGE_INTEGER v141; // [rsp+6D0h] [rbp+90h] BYREF
  __int64 v142; // [rsp+6D8h] [rbp+98h]
  unsigned int v143; // [rsp+6E0h] [rbp+A0h]
  unsigned int v144; // [rsp+6E4h] [rbp+A4h]
  unsigned int v145; // [rsp+6E8h] [rbp+A8h]
  void *v146; // [rsp+6F0h] [rbp+B0h]
  unsigned __int64 v147; // [rsp+6F8h] [rbp+B8h] BYREF
  void *v148; // [rsp+700h] [rbp+C0h]
  struct _KTHREAD *CurrentThread; // [rsp+708h] [rbp+C8h]
  __int64 v150; // [rsp+710h] [rbp+D0h]
  unsigned __int64 HighLimit; // [rsp+718h] [rbp+D8h] BYREF
  unsigned __int64 LowLimit; // [rsp+720h] [rbp+E0h] BYREF
  unsigned __int64 v153; // [rsp+728h] [rbp+E8h] BYREF
  unsigned __int64 v154; // [rsp+730h] [rbp+F0h] BYREF
  unsigned __int16 *v155; // [rsp+738h] [rbp+F8h] BYREF
  __int64 v156; // [rsp+740h] [rbp+100h]
  unsigned __int64 *v157; // [rsp+748h] [rbp+108h]
  void *v158; // [rsp+750h] [rbp+110h]
  char *v159; // [rsp+758h] [rbp+118h]
  __int64 v160; // [rsp+760h] [rbp+120h]
  __int64 v161; // [rsp+768h] [rbp+128h]
  __int64 v162; // [rsp+770h] [rbp+130h]
  __int128 v163; // [rsp+778h] [rbp+138h] BYREF
  __int64 v164; // [rsp+788h] [rbp+148h]
  struct _KTHREAD *v165; // [rsp+790h] [rbp+150h]
  struct _KTHREAD *v166; // [rsp+798h] [rbp+158h]
  struct _KTHREAD *v167; // [rsp+7A0h] [rbp+160h]
  _OWORD v168[25]; // [rsp+7B0h] [rbp+170h] BYREF
  _WORD Src[40]; // [rsp+940h] [rbp+300h] BYREF

  v131 = a3;
  v130 = a1;
  v19 = a13;
  v162 = a1;
  v129 = a6;
  v136 = a11;
  v160 = a12;
  v158 = a15;
  v157 = a16;
  v20 = 0;
  v123 = 0;
  memset(v168, 0, 0x188uLL);
  v139 = 0;
  memset(Src, 0, sizeof(Src));
  StackLookasideListEntry = 0LL;
  v148 = 0LL;
  v126 = 0;
  v155 = 0LL;
  v147 = 0LL;
  v156 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v21 = a14 & 0x200;
  v122 = a14 & 0x200;
  if ( a11 )
  {
    if ( !a10 )
      return 3221225485LL;
  }
  else if ( a10 )
  {
    return 3221225485LL;
  }
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a13 )
    v19 = a1;
  v150 = v19;
  v118 = 0;
  v142 = *(_QWORD *)(a1 + 392);
  v161 = v142;
  if ( v157 && *v157 )
  {
    v147 = *v157;
    v118 = 16;
  }
  DecodeProviderTraits((unsigned __int16 *)v158, (a14 & 0x400) != 0, &v126, &v155);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v22 = ~a4 & a2;
  while ( 1 )
  {
LABEL_10:
    v23 = !_BitScanForward((unsigned int *)&v24, v22);
    v139 = v24;
    if ( v23 )
    {
      v38 = v142;
LABEL_21:
      v39 = v130;
      v40 = v129;
      goto LABEL_22;
    }
    v132 = 1LL;
    v163 = 0LL;
    v164 = 0LL;
    v141.QuadPart = 0LL;
    v120 = 80;
    v140 = 0;
    v125 = 0;
    v124 = 0;
    v128 = 0;
    v146 = 0LL;
    v159 = 0LL;
    v22 &= v22 - 1;
    v119 = v22;
    v25 = (unsigned int)v24;
    v26 = v150;
    v27 = v150 + 32 * (v24 + 4);
    if ( v160 )
    {
      v28 = *(_DWORD *)(v160 + 4LL * (*(unsigned __int16 *)(v27 + 6) >> 5));
      if ( _bittest(&v28, *(_WORD *)(v27 + 6) & 0x1F) )
        continue;
    }
    v29 = EtwpLevelKeywordEnabled(v27, a8, a9);
    v33 = 1LL;
    if ( !v29 )
      continue;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( ((a5 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0) && (*(_DWORD *)(v27 + 8) & 0x200) != 0 )
      continue;
    v35 = *(_QWORD *)(v26 + 384);
    if ( v35
      && ((*(_DWORD *)(104 * v25 + v35) & 0x80000200) == 0x80000200
       || (v33 = *(_DWORD *)(104 * v25 + v35) & 0x80000100, (_DWORD)v33 == -2147483392)) )
    {
      v36 = v136;
      v37 = v139;
      if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilterOnUserEvent(v26, v139, v131, v129, v32, v136) )
        goto LABEL_19;
      v32 = a10;
      v30 = a9;
      v31 = a8;
    }
    else
    {
      v37 = v139;
      v36 = v136;
    }
    if ( v21 && EtwpIsEventNameFilterEnabled(v26, v37, v31, v30, 0) )
    {
      if ( !EtwpApplyEventNameFilter(v26, v37, v32, v36, 1, 0, a8, v30, 0) )
      {
LABEL_19:
        v22 = v119;
        continue;
      }
      v32 = a10;
      v30 = a9;
    }
    v43 = 0;
    if ( a7 )
    {
      v44 = 104;
      v120 = 104;
      v43 = 8;
    }
    else
    {
      v44 = v120;
    }
    v45 = *(_DWORD *)(v27 + 8);
    if ( (v45 & 0xFFFFFF9F) != 0 )
    {
      if ( (v45 & 0x800) != 0 && v156 != EtwpHostSiloState )
      {
        v43 |= 0x80u;
        v44 += (*(unsigned __int16 *)(v156 + 4200) + 15) & 0xFFFFFFF8;
        v120 = v44;
      }
      if ( (v45 & 1) != 0 )
      {
        if ( (v118 & 2) == 0 )
        {
          EtwpGetSidExtendedHeaderItem(Src, v33);
          v118 |= 2u;
          v45 = *(_DWORD *)(v27 + 8);
          v32 = a10;
          v30 = a9;
        }
        v43 |= 2u;
        v44 += Src[0];
        v120 = v44;
      }
      if ( (v45 & 2) != 0 )
      {
        v43 |= 1u;
        v44 += 16;
        v120 = v44;
      }
      if ( (v45 & 0x80u) != 0 )
      {
        v43 |= 0x20u;
        v44 += 16;
        v120 = v44;
      }
      if ( (v45 & 0x100) != 0 )
      {
        v43 |= 0x40u;
        v44 += 16;
        v120 = v44;
      }
      if ( (v45 & 4) == 0 )
        goto LABEL_47;
      v107 = v150;
      v108 = *(_QWORD *)(v150 + 384);
      if ( !v108 )
        goto LABEL_197;
      v109 = *(_DWORD *)(104 * v25 + v108);
      if ( (v109 & 0x80001000) != 0x80001000 && (v109 & 0x80002000) != 0x80002000 && (v109 & 0x80004000) != 0x80004000 )
        goto LABEL_197;
      if ( EtwpApplyLevelKwFilter(v150, v37, a8, v30) )
      {
        if ( (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v129, v107, v37) )
        {
          v110 = EtwpApplyEventNameFilter(v107, v37, a10, v136, 1, 0, a8, a9, 1);
          v32 = a10;
          if ( v110 )
          {
LABEL_197:
            v111 = v118;
            if ( (v118 & 1) == 0 )
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
                v118 = (StackLookasideListEntry != 0LL ? 8 : 0) | v111 & 0xF7;
              }
              else
              {
                HighLimit = 0LL;
                LowLimit = 0LL;
                IoGetStackLimits(&LowLimit, &HighLimit);
                if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                {
                  v112 = alloca(1552LL);
                  StackLookasideListEntry = &v116;
                  EtwpGetStackExtendedHeaderItem(
                    (__int64)CurrentThread,
                    0,
                    0xC0u,
                    (__int64)&StackLookasideListEntry,
                    0,
                    0LL);
                }
              }
              v118 |= 1u;
              v32 = a10;
            }
            if ( StackLookasideListEntry )
            {
              v43 |= 4u;
              v44 += *(unsigned __int16 *)StackLookasideListEntry;
              v120 = v44;
            }
          }
        }
        else
        {
          v32 = a10;
        }
      }
LABEL_47:
      if ( (*(_DWORD *)(v27 + 8) & 8) != 0 )
      {
        if ( (v118 & 4) != 0 )
        {
          v114 = (unsigned __int16 *)v148;
        }
        else
        {
          v153 = 0LL;
          v154 = 0LL;
          IoGetStackLimits(&v154, &v153);
          if ( (unsigned __int64)&v153 - v154 <= 0x1E0 )
          {
            v114 = (unsigned __int16 *)v148;
          }
          else
          {
            v113 = alloca(480LL);
            v114 = (unsigned __int16 *)v117;
            v148 = v117;
            EtwpGetPsmKeyExtendedHeaderItem(v117);
          }
          v118 |= 4u;
          v32 = a10;
        }
        if ( v114 )
        {
          v43 |= 0x10u;
          v44 += *v114;
          v120 = v44;
        }
      }
    }
    v46 = *(unsigned __int16 *)(v27 + 6);
    v145 = v46;
    v47 = &v168[3 * LODWORD(v168[24])];
    if ( v32 )
      break;
LABEL_72:
    if ( v128 )
    {
      v44 += (v124 + 15) & 0xFFFFFFF8;
      v120 = v44;
    }
    if ( v126 )
    {
      v44 += (v126 + 15) & 0xFFFFFFF8;
      v120 = v44;
    }
    *((_DWORD *)v47 + 10) = v44;
    v55 = 8LL * v46;
    v38 = v142;
    if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v142 + 448) + v55), 1u) )
    {
      if ( v46 >= *(_DWORD *)(v38 + 16) )
      {
        v56 = 1LL;
      }
      else
      {
        _mm_lfence();
        v56 = *(_QWORD *)(v55 + *(_QWORD *)(v38 + 456));
        v44 = v120;
      }
      v132 = v56;
      v57 = 1;
    }
    else
    {
      v57 = v125;
      v56 = v132;
    }
    if ( (v56 & 1) != 0 )
    {
      if ( v57 )
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v38 + 448) + 8LL * v46), 1u);
      v23 = v46 == 3;
      v21 = v122;
      v22 = v119;
      if ( v23 )
      {
        v115 = -1073741058;
        if ( !*(_DWORD *)(v38 + 4068) )
          v115 = -1073741816;
        v123 = v115;
        goto LABEL_21;
      }
    }
    else
    {
      v58 = EtwpReserveTraceBuffer((unsigned int *)v56, v44, (__int64)&v163, &v141, 0);
      v59 = v58;
      v133 = v58;
      if ( v58 )
      {
        v60 = v132;
        *(_QWORD *)v47 = v132;
        *((_QWORD *)v47 + 1) = v58;
        v47[1] = v163;
        *((_QWORD *)v47 + 4) = v164;
        ++LODWORD(v168[24]);
        v144 = 0;
        v61 = 80;
        LODWORD(v127) = 80;
        v121 = 80;
        v62 = 0LL;
        v134 = 0LL;
        v63 = (_OWORD *)v129;
        *(_OWORD *)v59 = *(_OWORD *)v129;
        *(_OWORD *)(v59 + 16) = v63[1];
        *(_OWORD *)(v59 + 32) = v63[2];
        *(_OWORD *)(v59 + 48) = v63[3];
        *(_OWORD *)(v59 + 64) = v63[4];
        if ( v155 )
        {
          v64 = *(_OWORD *)v155;
          *(_WORD *)(v59 + 4) |= 0x80u;
        }
        else
        {
          v64 = *(_OWORD *)(v130 + 40);
        }
        *(_OWORD *)(v59 + 24) = v64;
        *(_DWORD *)v59 = v44 | *(_DWORD *)(v60 + 4LL * v131 + 20);
        v65 = 80;
        if ( v43 )
        {
          if ( (v43 & 0x80u) != 0 )
          {
            v62 = (unsigned __int16 *)(v59 + 80);
            v95 = v156;
            v96 = (*(_WORD *)(v156 + 4200) + 15) & 0xFFF8;
            *(_WORD *)(v59 + 80) = v96;
            *(_WORD *)(v59 + 82) = 16;
            *(_WORD *)(v59 + 86) = *(_WORD *)(v95 + 4200);
            *(_WORD *)(v59 + 84) &= ~1u;
            *(_WORD *)(v59 + 84) &= 1u;
            v97 = v96 - *(_WORD *)(v95 + 4200) - 8;
            v98 = v59 + 88;
            memmove((void *)(v59 + 88), *(const void **)(v95 + 4192), *(unsigned __int16 *)(v95 + 4200));
            memset((void *)(v98 + *(unsigned __int16 *)(v95 + 4200)), 0, v97);
            v59 = v133;
            *(_WORD *)(v133 + 4) |= 1u;
            v61 = *v62 + 80;
            LODWORD(v127) = v61;
            v121 = v61;
            v134 = v62;
            v65 = v61;
          }
          if ( (v43 & 8) != 0 )
          {
            v94 = v59 + v65;
            *(_DWORD *)v94 = 65560;
            *(_WORD *)(v94 + 6) = 16;
            *(_WORD *)(v94 + 4) &= ~1u;
            *(_WORD *)(v94 + 4) &= 1u;
            *(_OWORD *)(v94 + 8) = *a7;
            *(_WORD *)(v59 + 4) |= 1u;
            v61 = v65 + 24;
            LODWORD(v127) = v65 + 24;
            v121 = v65 + 24;
            if ( v62 )
              v62[2] |= 1u;
            v62 = (unsigned __int16 *)(v59 + v65);
            v134 = v62;
            v65 += 24;
          }
          if ( (v43 & 2) != 0 )
          {
            v66 = (unsigned __int16 *)(v59 + v65);
            v67 = Src[0];
            memmove(v66, Src, Src[0]);
            v59 = v133;
            *(_WORD *)(v133 + 4) |= 1u;
            v61 = v67 + v65;
            LODWORD(v127) = v67 + v65;
            v121 = v67 + v65;
            if ( v62 )
              v62[2] |= 1u;
            v62 = v66;
            v134 = v66;
            v65 += v67;
          }
          if ( (v43 & 1) != 0 )
          {
            v93 = (unsigned __int16 *)(v59 + v65);
            *(_DWORD *)v93 = 196624;
            v93[3] = 4;
            v93[2] &= ~1u;
            v93[2] &= 1u;
            *((_DWORD *)v93 + 2) = PsGetCurrentProcessSessionId();
            v59 = v133;
            *(_WORD *)(v133 + 4) |= 1u;
            v61 = v65 + 16;
            LODWORD(v127) = v65 + 16;
            v121 = v65 + 16;
            if ( v62 )
              v62[2] |= 1u;
            v62 = v93;
            v134 = v93;
            v65 += 16;
          }
          if ( (v43 & 0x20) != 0 )
          {
            v68 = v59 + v65;
            *(_DWORD *)v68 = 851984;
            *(_WORD *)(v68 + 6) = 8;
            *(_WORD *)(v68 + 4) &= ~1u;
            *(_WORD *)(v68 + 4) &= 1u;
            v166 = KeGetCurrentThread();
            ProcessStartKey = PsGetProcessStartKey((__int64)v166->ApcState.Process);
            *((_QWORD *)v70 + 1) = ProcessStartKey;
            *(_WORD *)(v59 + 4) |= 1u;
            v61 = v65 + 16;
            LODWORD(v127) = v65 + 16;
            v121 = v65 + 16;
            if ( v62 )
              v62[2] |= 1u;
            v62 = v70;
            v134 = v70;
            v65 += 16;
            v44 = v120;
          }
          if ( (v43 & 0x40) != 0 )
          {
            v71 = (unsigned __int16 *)(v59 + v65);
            *(_DWORD *)v71 = 655376;
            v71[3] = 8;
            v71[2] &= ~1u;
            v71[2] &= 1u;
            if ( (v118 & 0x10) != 0 || (EtwpCreateEventKey(&v147), v118 |= 0x10u, !v157) )
            {
              v72 = v147;
            }
            else
            {
              v72 = v147;
              *v157 = v147;
            }
            *((_QWORD *)v71 + 1) = v72;
            *(_WORD *)(v59 + 4) |= 1u;
            v61 = v65 + 16;
            LODWORD(v127) = v65 + 16;
            v121 = v65 + 16;
            if ( v62 )
              v62[2] |= 1u;
            v62 = v71;
            v134 = v71;
            v65 += 16;
          }
          if ( (v43 & 4) != 0 )
          {
            v99 = (unsigned __int16 *)(v59 + v65);
            v100 = (unsigned __int16 *)StackLookasideListEntry;
            memmove(v99, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
            v59 = v133;
            *(_WORD *)(v133 + 4) |= 1u;
            v61 = v65 + *v100;
            LODWORD(v127) = v61;
            v65 = v61;
            v121 = v61;
            if ( v62 )
              v62[2] |= 1u;
            v62 = v99;
            v134 = v99;
          }
          if ( (v43 & 0x10) != 0 )
          {
            v101 = (unsigned __int16 *)(v59 + v65);
            v102 = (unsigned __int16 *)v148;
            memmove(v101, v148, *(unsigned __int16 *)v148);
            v59 = v133;
            *(_WORD *)(v133 + 4) |= 1u;
            v61 = v65 + *v102;
            LODWORD(v127) = v61;
            v65 = v61;
            v121 = v61;
            if ( v62 )
              v62[2] |= 1u;
            v62 = v101;
            v134 = v101;
          }
        }
        v73 = v126;
        if ( v126 )
        {
          v74 = (unsigned __int16 *)(v59 + v65);
          v127 = v74;
          v75 = (v126 + 15) & 0xFFF8;
          *v74 = v75;
          v74[1] = 12;
          v74[3] = v73;
          v74[2] &= ~1u;
          v74[2] &= 1u;
          v76 = v75 - v73 - 8;
          v77 = v74 + 4;
          v78 = v73;
          memmove(v74 + 4, v158, v73);
          memset((char *)v77 + v78, 0, v76);
          v59 = v133;
          *(_WORD *)(v133 + 4) |= 1u;
          v79 = v127;
          v61 = v65 + *v127;
          LODWORD(v127) = v61;
          v65 = v61;
          v121 = v61;
          if ( v62 )
            v62[2] |= 1u;
          v62 = v79;
          v134 = v79;
        }
        if ( v128 )
        {
          v89 = (unsigned __int16 *)(v59 + v65);
          v90 = v124;
          v91 = (v124 + 15) & 0xFFF8;
          *v89 = v91;
          v89[1] = 11;
          v89[3] = v90;
          v89[2] &= ~1u;
          v89[2] &= 1u;
          v80 = (char *)(v89 + 4);
          v146 = v89 + 4;
          v159 = (char *)v89 + v90 + 8;
          memset(v159, 0, (unsigned __int16)(v91 - v90 - 8));
          v59 = v133;
          *(_WORD *)(v133 + 4) |= 1u;
          v61 = v65 + *v89;
          LODWORD(v127) = v61;
          v121 = v61;
          if ( v62 )
            v62[2] |= 1u;
        }
        else
        {
          v80 = (char *)v146;
        }
        v81 = 0;
        v82 = v122;
        while ( 1 )
        {
          while ( 1 )
          {
            v144 = v81;
            if ( v81 >= a10 )
            {
              if ( v160 )
                *(_DWORD *)(v160 + 4LL * (v145 >> 5)) |= 1 << (v145 & 0x1F);
              *(LARGE_INTEGER *)(v59 + 16) = v141;
              v103 = CurrentThread;
              *(_DWORD *)(v59 + 56) = CurrentThread->SchedulerApc.SpareLong0;
              *(_DWORD *)(v59 + 60) = v103->UserTime;
              *(_DWORD *)(v59 + 8) = v103[1].CurrentRunTime;
              *(_DWORD *)(v59 + 12) = v103[1].CycleTime;
              v104 = v132;
              if ( (*(_DWORD *)(v132 + 12) & 0x80000) != 0
                && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
              {
                EtwpSendTraceEvent(v132, (__int64)&v163);
              }
              v21 = v82;
              v22 = v119;
              if ( *(_QWORD *)(v104 + 1304) )
                EtwpInvokeEventCallback(v104, (__int64 *)&v163, v130 + 40);
              goto LABEL_10;
            }
            v83 = *(unsigned int *)(v136 + 16LL * v81 + 8);
            v84 = *(LARGE_INTEGER **)(v136 + 16LL * v81);
            if ( v82 )
            {
              v85 = *(_BYTE *)(v136 + 16LL * v81 + 12);
              v44 = v120;
              v80 = (char *)v146;
              v61 = v121;
              LODWORD(v127) = v121;
            }
            else
            {
              v85 = 0;
            }
            if ( v85 )
              break;
            v86 = v83 + v61;
            if ( (unsigned int)v83 + v61 < v61 )
            {
              v121 = -1;
              v87 = -1073741675;
              v86 = -1;
            }
            else
            {
              v121 = v83 + v61;
              v87 = 0;
            }
            if ( v87 || v86 > v44 )
            {
LABEL_167:
              v123 = -1073741820;
              *(_DWORD *)v59 = v44 | *(_DWORD *)(v132 + 28);
              *(LARGE_INTEGER *)(v59 + 16) = v141;
              v22 = v119;
              v39 = v130;
              v38 = v142;
              v40 = v129;
              goto LABEL_22;
            }
            v167 = KeGetCurrentThread();
            PreviousMode = v167->PreviousMode;
            if ( PreviousMode
              && (_DWORD)v83
              && ((unsigned __int64)v84 + v83 > 0x7FFFFFFF0000LL || (LARGE_INTEGER *)((char *)v84 + v83) < v84) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove((void *)(v59 + v61), v84, v83);
            v44 = v120;
            v80 = (char *)v146;
            v61 = v121;
            LODWORD(v127) = v121;
LABEL_126:
            ++v81;
            v59 = v133;
          }
          v88 = v85 - 1;
          if ( v88 )
          {
            if ( v88 == 2 )
            {
              if ( (_DWORD)v83 == 8 )
              {
                if ( (unsigned __int64)&v84[1] > 0x7FFFFFFF0000LL || &v84[1] < v84 )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v141 = *v84;
              }
              goto LABEL_126;
            }
            ++v81;
            v59 = v133;
          }
          else
          {
            if ( !v80 )
              goto LABEL_167;
            v92 = &v80[v83];
            if ( &v80[v83] < v80 || v92 > v159 || !v128 )
              goto LABEL_167;
            if ( (_DWORD)v83
              && ((unsigned __int64)v84 + v83 > 0x7FFFFFFF0000LL || (LARGE_INTEGER *)((char *)v84 + v83) < v84) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove(v80, v84, v83);
            v80 = v92;
            v146 = v92;
            --v128;
            v61 = (unsigned int)v127;
            ++v81;
            v59 = v133;
          }
        }
      }
      v105 = v132;
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v132, v44);
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
        EtwpTraceLostEvent(
          (_QWORD *)(v130 + 40),
          (__int16 *)(v129 + 40),
          (unsigned __int16 *)(v105 + 152),
          ReserveTraceBufferStatus);
      if ( v123 >= 0 && (*(_DWORD *)(v105 + 12) & 0x8000000) == 0 )
        v123 = ReserveTraceBufferStatus;
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v38 + 448) + 8LL * v46), 1u);
      v21 = v122;
      v22 = v119;
      if ( ReserveTraceBufferStatus == -1073741675 )
      {
        v123 = -1073741675;
        goto LABEL_21;
      }
    }
  }
  v143 = 0;
  v165 = KeGetCurrentThread();
  v137 = v165->PreviousMode;
  v48 = v136;
  if ( v137 )
  {
    v49 = 16LL * v32;
    if ( v49 )
    {
      if ( (v136 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v136 + v49 > 0x7FFFFFFF0000LL || v136 + v49 < v136 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v50 = 0;
  v44 = v120;
  while ( 1 )
  {
    v143 = v50;
    if ( v50 >= v32 )
    {
      v46 = v145;
      goto LABEL_72;
    }
    v51 = v44;
    v52 = 16LL * v50 + v48;
    v140 = *(_DWORD *)(v52 + 8);
    v53 = v140;
    if ( v140 > 0xFFFF )
    {
      v123 = -2147483643;
      v22 = v119;
      v39 = v130;
      v38 = v142;
      v40 = v129;
      goto LABEL_22;
    }
    if ( v122 )
    {
      v54 = *(_BYTE *)(v52 + 12);
      v53 = v140;
    }
    else
    {
      v54 = 0;
    }
    if ( v54 )
    {
      if ( v54 == 1 )
      {
        v124 += v53;
        ++v128;
      }
      v44 = v120;
    }
    else
    {
      v44 = v53 + v120;
      v120 += v53;
    }
    if ( v44 < v51 )
      break;
    ++v50;
    v48 = v136;
  }
  v123 = -2147483643;
  v22 = v119;
  v39 = v130;
  v38 = v142;
  v40 = v129;
LABEL_22:
  if ( (v118 & 8) != 0 )
  {
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
    v39 = v130;
    v40 = v129;
  }
  if ( v123 < 0 )
  {
    EtwpFailLogging(a8, a9, v39, (__int64)v168, v22, v123, v40 + 40, 1);
  }
  else
  {
    while ( v20 < LODWORD(v168[24]) )
    {
      EtwpReleaseTraceBuffer((signed __int64 *)&v168[3 * v20 + 1]);
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v38 + 448) + 8LL * **v42), 1u);
      ++v20;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return (unsigned int)v123;
}
