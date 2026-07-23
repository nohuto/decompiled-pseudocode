/*
 * XREFs of EtwpWriteUserEvent @ 0x140669E00
 * Callers:
 *     NtTraceEvent @ 0x1402D5FC0 (NtTraceEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140208060 (EtwpReserveTraceBuffer.c)
 *     IoGetStackLimits @ 0x1402082E0 (IoGetStackLimits.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x14026EA90 (EtwpLevelKeywordEnabled.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402C2730 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     DecodeProviderTraits @ 0x1402D6884 (DecodeProviderTraits.c)
 *     EtwpReleaseTraceBuffer @ 0x1402D6FA0 (EtwpReleaseTraceBuffer.c)
 *     EtwpIsEventNameFilterEnabled @ 0x1402D6FE8 (EtwpIsEventNameFilterEnabled.c)
 *     EtwpCreateEventKey @ 0x1402D7004 (EtwpCreateEventKey.c)
 *     PsGetProcessStartKey @ 0x1402D7050 (PsGetProcessStartKey.c)
 *     PsGetCurrentProcessSessionId @ 0x1402D7070 (PsGetCurrentProcessSessionId.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402E5060 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpFailLogging @ 0x140369B54 (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140369DEC (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A01D4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A1050 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceLostEvent @ 0x1405A4C14 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x1405A4FCC (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405A5ADC (EtwpInvokeEventCallback.c)
 *     EtwpApplyEventNameFilter @ 0x1405A5F94 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x1405A63E8 (EtwpApplyLevelKwFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14066AF50 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1406EB490 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14092F0B4 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x14093C248 (EtwpApplyStackWalkFilterOnUserEvent.c)
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
        unsigned __int64 a9,
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
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  unsigned __int8 v24; // r12
  size_t v25; // rdx
  bool v26; // zf
  __int64 v27; // rcx
  __int64 v28; // r13
  __int64 v29; // rdi
  __int64 v30; // rsi
  int v31; // ecx
  bool v32; // al
  unsigned __int8 v33; // r10
  unsigned int v34; // r11d
  _KPROCESS *Process; // rcx
  __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  unsigned int v38; // r12d
  __int64 v39; // r13
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int **v43; // r11
  int v44; // edi
  unsigned int v45; // r14d
  int v46; // ecx
  unsigned int v47; // r12d
  _OWORD *v48; // rsi
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // ecx
  unsigned __int8 v52; // al
  __int64 v53; // rbx
  __int64 v54; // rcx
  char v55; // al
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // r11
  __int64 v58; // rcx
  unsigned __int16 *v59; // r12
  _OWORD *v60; // rax
  __int128 v61; // xmm0
  unsigned int v62; // r13d
  unsigned __int16 *v63; // rsi
  int v64; // ebx
  unsigned __int64 v65; // rdx
  unsigned __int64 ProcessStartKey; // rax
  unsigned __int16 *v67; // rdx
  unsigned __int64 v68; // rax
  unsigned int v69; // edx
  unsigned __int16 *v70; // rcx
  unsigned __int16 v71; // si
  unsigned __int16 v72; // si
  _WORD *v73; // rdi
  __int64 v74; // rbx
  unsigned __int16 *v75; // rcx
  char *v76; // rsi
  unsigned int v77; // ebx
  __int16 v78; // r12
  unsigned __int8 v79; // cl
  unsigned int v80; // eax
  int v81; // ecx
  int v82; // ecx
  unsigned __int16 *v83; // rbx
  __int64 v84; // rcx
  unsigned __int16 v85; // dx
  char *v86; // rdi
  unsigned __int16 *v87; // rbx
  unsigned __int64 v88; // rcx
  __int64 v89; // r13
  __int16 v90; // si
  unsigned __int16 v91; // si
  unsigned __int64 v92; // rbx
  unsigned __int16 *v93; // rsi
  unsigned __int16 *v94; // rbx
  unsigned __int16 *v95; // rbx
  unsigned __int16 *v96; // rdi
  struct _KTHREAD *v97; // rcx
  __int64 v98; // rbx
  __int64 v99; // rsi
  int ReserveTraceBufferStatus; // edi
  __int64 v101; // rbx
  __int64 v102; // rcx
  int v103; // ecx
  char v104; // al
  char v105; // bl
  void *v106; // rsp
  void *v107; // rsp
  unsigned __int16 *v108; // rbx
  signed int v109; // ecx
  char v110; // [rsp+30h] [rbp-610h] BYREF
  _BYTE v111[400]; // [rsp+460h] [rbp-1E0h] BYREF
  char v112; // [rsp+640h] [rbp+0h]
  unsigned __int8 v113; // [rsp+648h] [rbp+8h]
  int v114; // [rsp+650h] [rbp+10h]
  unsigned int v115; // [rsp+654h] [rbp+14h]
  __int16 v116; // [rsp+658h] [rbp+18h]
  signed int v117; // [rsp+65Ch] [rbp+1Ch]
  unsigned __int16 v118; // [rsp+660h] [rbp+20h]
  char v119; // [rsp+664h] [rbp+24h]
  unsigned __int16 v120; // [rsp+668h] [rbp+28h] BYREF
  unsigned __int16 *v121; // [rsp+670h] [rbp+30h]
  int v122; // [rsp+678h] [rbp+38h]
  __int64 v123; // [rsp+680h] [rbp+40h]
  __int64 v124; // [rsp+688h] [rbp+48h]
  unsigned __int16 v125; // [rsp+690h] [rbp+50h]
  __int64 v126; // [rsp+698h] [rbp+58h]
  unsigned __int64 v127; // [rsp+6A0h] [rbp+60h]
  unsigned __int16 *v128; // [rsp+6A8h] [rbp+68h]
  void *StackLookasideListEntry; // [rsp+6B0h] [rbp+70h] BYREF
  unsigned __int64 v130; // [rsp+6B8h] [rbp+78h]
  char v131; // [rsp+6C0h] [rbp+80h]
  char PreviousMode; // [rsp+6C1h] [rbp+81h]
  unsigned int v133; // [rsp+6C4h] [rbp+84h]
  unsigned int v134; // [rsp+6C8h] [rbp+88h]
  LARGE_INTEGER v135; // [rsp+6D0h] [rbp+90h] BYREF
  __int64 v136; // [rsp+6D8h] [rbp+98h]
  unsigned int v137; // [rsp+6E0h] [rbp+A0h]
  unsigned int v138; // [rsp+6E4h] [rbp+A4h]
  unsigned int v139; // [rsp+6E8h] [rbp+A8h]
  void *v140; // [rsp+6F0h] [rbp+B0h]
  unsigned __int64 v141; // [rsp+6F8h] [rbp+B8h] BYREF
  void *v142; // [rsp+700h] [rbp+C0h]
  struct _KTHREAD *CurrentThread; // [rsp+708h] [rbp+C8h]
  __int64 v144; // [rsp+710h] [rbp+D0h]
  unsigned __int64 HighLimit; // [rsp+718h] [rbp+D8h] BYREF
  unsigned __int64 LowLimit; // [rsp+720h] [rbp+E0h] BYREF
  unsigned __int64 v147; // [rsp+728h] [rbp+E8h] BYREF
  unsigned __int64 v148; // [rsp+730h] [rbp+F0h] BYREF
  unsigned __int16 *v149; // [rsp+738h] [rbp+F8h] BYREF
  __int64 v150; // [rsp+740h] [rbp+100h]
  unsigned __int64 *v151; // [rsp+748h] [rbp+108h]
  void *v152; // [rsp+750h] [rbp+110h]
  char *v153; // [rsp+758h] [rbp+118h]
  __int64 v154; // [rsp+760h] [rbp+120h]
  __int64 v155; // [rsp+768h] [rbp+128h]
  __int64 v156; // [rsp+770h] [rbp+130h]
  __int128 v157; // [rsp+778h] [rbp+138h] BYREF
  __int64 v158; // [rsp+788h] [rbp+148h]
  struct _KTHREAD *v159; // [rsp+790h] [rbp+150h]
  struct _KTHREAD *v160; // [rsp+798h] [rbp+158h]
  struct _KTHREAD *v161; // [rsp+7A0h] [rbp+160h]
  _OWORD v162[25]; // [rsp+7B0h] [rbp+170h] BYREF
  _WORD Src[40]; // [rsp+940h] [rbp+300h] BYREF

  v125 = a3;
  v124 = a1;
  v19 = a13;
  v156 = a1;
  v123 = a6;
  v130 = a11;
  v154 = a12;
  v152 = a15;
  v151 = a16;
  v20 = 0;
  v117 = 0;
  memset(v162, 0, 0x188uLL);
  v133 = 0;
  memset(Src, 0, sizeof(Src));
  StackLookasideListEntry = 0LL;
  v142 = 0LL;
  v120 = 0;
  v149 = 0LL;
  v141 = 0LL;
  v150 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v21 = a14 & 0x200;
  v116 = a14 & 0x200;
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
  v144 = v19;
  v112 = 0;
  v136 = *(_QWORD *)(a1 + 392);
  v155 = v136;
  if ( v151 && *v151 )
  {
    v141 = *v151;
    v112 = 16;
  }
  DecodeProviderTraits((unsigned __int16 *)v152, (a14 & 0x400) != 0, &v120, &v149);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v24 = ~a4 & a2;
LABEL_10:
  v25 = 1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v26 = !_BitScanForward((unsigned int *)&v27, v24);
      v133 = v27;
      if ( v26 )
      {
        v39 = v136;
LABEL_22:
        v40 = v124;
        v41 = v123;
        goto LABEL_23;
      }
      v126 = 1LL;
      v157 = 0LL;
      v158 = 0LL;
      v135.QuadPart = 0LL;
      v114 = 80;
      v134 = 0;
      v119 = 0;
      v118 = 0;
      v122 = 0;
      v140 = 0LL;
      v153 = 0LL;
      v24 &= v24 - 1;
      v113 = v24;
      v28 = (unsigned int)v27;
      v29 = v144;
      v30 = v144 + 32 * (v27 + 4);
      v22 = v154;
      if ( v154 )
      {
        v31 = *(_DWORD *)(v154 + 4LL * (*(unsigned __int16 *)(v30 + 6) >> 5));
        v25 = 1LL;
        if ( _bittest(&v31, *(_WORD *)(v30 + 6) & 0x1F) )
          continue;
      }
      v32 = EtwpLevelKeywordEnabled(v30, a8, a9);
      v25 = 1LL;
      if ( v32 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( (a5 & 2) == 0 && SLODWORD(Process[1].DirectoryTableBase) >= 0 )
          break;
        if ( (*(_DWORD *)(v30 + 8) & 0x200) == 0 )
          break;
      }
    }
    v36 = *(_QWORD *)(v29 + 384);
    if ( v36
      && ((*(_DWORD *)(104 * v28 + v36) & 0x80000200) == 0x80000200
       || (v25 = *(_DWORD *)(104 * v28 + v36) & 0x80000100, (_DWORD)v25 == -2147483392)) )
    {
      v37 = v130;
      v38 = v133;
      if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilterOnUserEvent(v29, v133, v125, v123, v34, v130) )
        goto LABEL_20;
      v34 = a10;
      v23 = a9;
      v33 = a8;
    }
    else
    {
      v38 = v133;
      v37 = v130;
    }
    if ( v21 && EtwpIsEventNameFilterEnabled(v29, v38, v33, v23, 0) )
    {
      if ( !EtwpApplyEventNameFilter(v29, v38, v34, v37, 1, 0, a8, v23, 0) )
      {
LABEL_20:
        v24 = v113;
        goto LABEL_10;
      }
      v34 = a10;
      v23 = a9;
    }
    v44 = 0;
    if ( a7 )
    {
      v45 = 104;
      v114 = 104;
      v44 = 8;
    }
    else
    {
      v45 = v114;
    }
    v46 = *(_DWORD *)(v30 + 8);
    if ( (v46 & 0xFFFFFF9F) != 0 )
    {
      if ( (v46 & 0x800) != 0 && v150 != EtwpHostSiloState )
      {
        v44 |= 0x80u;
        v45 += (*(unsigned __int16 *)(v150 + 4200) + 15) & 0xFFFFFFF8;
        v114 = v45;
      }
      if ( (v46 & 1) != 0 )
      {
        if ( (v112 & 2) == 0 )
        {
          EtwpGetSidExtendedHeaderItem(Src, v25);
          v112 |= 2u;
          v46 = *(_DWORD *)(v30 + 8);
          v34 = a10;
          v23 = a9;
        }
        v44 |= 2u;
        v45 += Src[0];
        v114 = v45;
      }
      if ( (v46 & 2) != 0 )
      {
        v44 |= 1u;
        v45 += 16;
        v114 = v45;
      }
      if ( (v46 & 0x80u) != 0 )
      {
        v44 |= 0x20u;
        v45 += 16;
        v114 = v45;
      }
      if ( (v46 & 0x100) != 0 )
      {
        v44 |= 0x40u;
        v45 += 16;
        v114 = v45;
      }
      if ( (v46 & 4) == 0 )
        goto LABEL_48;
      v101 = v144;
      v102 = *(_QWORD *)(v144 + 384);
      if ( !v102 )
        goto LABEL_198;
      v103 = *(_DWORD *)(104 * v28 + v102);
      if ( (v103 & 0x80001000) != 0x80001000 && (v103 & 0x80002000) != 0x80002000 && (v103 & 0x80004000) != 0x80004000 )
        goto LABEL_198;
      if ( EtwpApplyLevelKwFilter(v144, v38, a8, v23) )
      {
        if ( (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v123, v101, v38) )
        {
          v104 = EtwpApplyEventNameFilter(v101, v38, a10, v130, 1, 0, a8, a9, 1);
          v34 = a10;
          if ( v104 )
          {
LABEL_198:
            v105 = v112;
            if ( (v112 & 1) == 0 )
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
                v112 = (StackLookasideListEntry != 0LL ? 8 : 0) | v105 & 0xF7;
              }
              else
              {
                HighLimit = 0LL;
                LowLimit = 0LL;
                IoGetStackLimits(&LowLimit, &HighLimit);
                if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                {
                  v106 = alloca(1552LL);
                  StackLookasideListEntry = &v110;
                  EtwpGetStackExtendedHeaderItem(
                    (__int64)CurrentThread,
                    0,
                    0xC0u,
                    (__int64)&StackLookasideListEntry,
                    0,
                    0LL);
                }
              }
              v112 |= 1u;
              v34 = a10;
            }
            if ( StackLookasideListEntry )
            {
              v44 |= 4u;
              v45 += *(unsigned __int16 *)StackLookasideListEntry;
              v114 = v45;
            }
          }
        }
        else
        {
          v34 = a10;
        }
      }
LABEL_48:
      if ( (*(_DWORD *)(v30 + 8) & 8) != 0 )
      {
        if ( (v112 & 4) != 0 )
        {
          v108 = (unsigned __int16 *)v142;
        }
        else
        {
          v147 = 0LL;
          v148 = 0LL;
          IoGetStackLimits(&v148, &v147);
          if ( (unsigned __int64)&v147 - v148 <= 0x1E0 )
          {
            v108 = (unsigned __int16 *)v142;
          }
          else
          {
            v107 = alloca(480LL);
            v108 = (unsigned __int16 *)v111;
            v142 = v111;
            EtwpGetPsmKeyExtendedHeaderItem(v111);
          }
          v112 |= 4u;
          v34 = a10;
        }
        if ( v108 )
        {
          v44 |= 0x10u;
          v45 += *v108;
          v114 = v45;
        }
      }
    }
    v47 = *(unsigned __int16 *)(v30 + 6);
    v139 = v47;
    v48 = &v162[3 * LODWORD(v162[24])];
    if ( v34 )
      break;
LABEL_73:
    if ( v122 )
    {
      v45 += (v118 + 15) & 0xFFFFFFF8;
      v114 = v45;
    }
    if ( v120 )
    {
      v45 += (v120 + 15) & 0xFFFFFFF8;
      v114 = v45;
    }
    *((_DWORD *)v48 + 10) = v45;
    v53 = 8LL * v47;
    v39 = v136;
    if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v136 + 448) + v53), 1u) )
    {
      if ( v47 >= *(_DWORD *)(v39 + 16) )
      {
        v54 = 1LL;
      }
      else
      {
        _mm_lfence();
        v54 = *(_QWORD *)(v53 + *(_QWORD *)(v39 + 456));
        v45 = v114;
      }
      v126 = v54;
      v55 = 1;
    }
    else
    {
      v55 = v119;
      v54 = v126;
    }
    if ( (v54 & 1) != 0 )
    {
      if ( v55 )
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v39 + 448) + 8LL * v47), 1u);
      v26 = v47 == 3;
      v21 = v116;
      v24 = v113;
      if ( v26 )
      {
        v109 = -1073741058;
        v25 = 3221225480LL;
        if ( !*(_DWORD *)(v39 + 4068) )
          v109 = -1073741816;
        v117 = v109;
        goto LABEL_22;
      }
      goto LABEL_10;
    }
    v56 = EtwpReserveTraceBuffer((unsigned int *)v54, v45, (__int64)&v157, &v135, 0);
    v57 = v56;
    v127 = v56;
    if ( !v56 )
    {
      v99 = v126;
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v126, v45);
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
        EtwpTraceLostEvent(
          (_QWORD *)(v124 + 40),
          (__int16 *)(v123 + 40),
          (unsigned __int16 *)(v99 + 152),
          ReserveTraceBufferStatus);
      if ( v117 >= 0 && (*(_DWORD *)(v99 + 12) & 0x8000000) == 0 )
        v117 = ReserveTraceBufferStatus;
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v39 + 448) + 8LL * v47), 1u);
      v21 = v116;
      v24 = v113;
      if ( ReserveTraceBufferStatus == -1073741675 )
      {
        v117 = -1073741675;
        goto LABEL_22;
      }
      goto LABEL_10;
    }
    v58 = v126;
    *(_QWORD *)v48 = v126;
    *((_QWORD *)v48 + 1) = v56;
    v48[1] = v157;
    *((_QWORD *)v48 + 4) = v158;
    ++LODWORD(v162[24]);
    v138 = 0;
    v22 = 80LL;
    LODWORD(v121) = 80;
    v115 = 80;
    v59 = 0LL;
    v128 = 0LL;
    v60 = (_OWORD *)v123;
    *(_OWORD *)v57 = *(_OWORD *)v123;
    *(_OWORD *)(v57 + 16) = v60[1];
    *(_OWORD *)(v57 + 32) = v60[2];
    *(_OWORD *)(v57 + 48) = v60[3];
    *(_OWORD *)(v57 + 64) = v60[4];
    if ( v149 )
    {
      v61 = *(_OWORD *)v149;
      *(_WORD *)(v57 + 4) |= 0x80u;
    }
    else
    {
      v61 = *(_OWORD *)(v124 + 40);
    }
    *(_OWORD *)(v57 + 24) = v61;
    *(_DWORD *)v57 = v45 | *(_DWORD *)(v58 + 4LL * v125 + 20);
    v62 = 80;
    if ( v44 )
    {
      if ( (v44 & 0x80u) != 0 )
      {
        v59 = (unsigned __int16 *)(v57 + 80);
        v89 = v150;
        v90 = (*(_WORD *)(v150 + 4200) + 15) & 0xFFF8;
        *(_WORD *)(v57 + 80) = v90;
        *(_WORD *)(v57 + 82) = 16;
        *(_WORD *)(v57 + 86) = *(_WORD *)(v89 + 4200);
        *(_WORD *)(v57 + 84) &= ~1u;
        *(_WORD *)(v57 + 84) &= 1u;
        v91 = v90 - *(_WORD *)(v89 + 4200) - 8;
        v92 = v57 + 88;
        memmove((void *)(v57 + 88), *(const void **)(v89 + 4192), *(unsigned __int16 *)(v89 + 4200));
        memset((void *)(v92 + *(unsigned __int16 *)(v89 + 4200)), 0, v91);
        v57 = v127;
        *(_WORD *)(v127 + 4) |= 1u;
        v22 = (unsigned int)*v59 + 80;
        LODWORD(v121) = v22;
        v115 = v22;
        v128 = v59;
        v62 = v22;
      }
      if ( (v44 & 8) != 0 )
      {
        v88 = v57 + v62;
        *(_DWORD *)v88 = 65560;
        *(_WORD *)(v88 + 6) = 16;
        *(_WORD *)(v88 + 4) &= ~1u;
        *(_WORD *)(v88 + 4) &= 1u;
        *(_OWORD *)(v88 + 8) = *a7;
        *(_WORD *)(v57 + 4) |= 1u;
        v22 = v62 + 24;
        LODWORD(v121) = v62 + 24;
        v115 = v62 + 24;
        if ( v59 )
          v59[2] |= 1u;
        v59 = (unsigned __int16 *)(v57 + v62);
        v128 = v59;
        v62 += 24;
      }
      if ( (v44 & 2) != 0 )
      {
        v63 = (unsigned __int16 *)(v57 + v62);
        v64 = Src[0];
        memmove(v63, Src, Src[0]);
        v57 = v127;
        *(_WORD *)(v127 + 4) |= 1u;
        v22 = v64 + v62;
        LODWORD(v121) = v64 + v62;
        v115 = v64 + v62;
        if ( v59 )
          v59[2] |= 1u;
        v59 = v63;
        v128 = v63;
        v62 += v64;
      }
      if ( (v44 & 1) != 0 )
      {
        v87 = (unsigned __int16 *)(v57 + v62);
        *(_DWORD *)v87 = 196624;
        v87[3] = 4;
        v87[2] &= ~1u;
        v87[2] &= 1u;
        *((_DWORD *)v87 + 2) = PsGetCurrentProcessSessionId();
        v57 = v127;
        *(_WORD *)(v127 + 4) |= 1u;
        v22 = v62 + 16;
        LODWORD(v121) = v62 + 16;
        v115 = v62 + 16;
        if ( v59 )
          v59[2] |= 1u;
        v59 = v87;
        v128 = v87;
        v62 += 16;
      }
      if ( (v44 & 0x20) != 0 )
      {
        v65 = v57 + v62;
        *(_DWORD *)v65 = 851984;
        *(_WORD *)(v65 + 6) = 8;
        *(_WORD *)(v65 + 4) &= ~1u;
        *(_WORD *)(v65 + 4) &= 1u;
        v160 = KeGetCurrentThread();
        ProcessStartKey = PsGetProcessStartKey((__int64)v160->ApcState.Process);
        *((_QWORD *)v67 + 1) = ProcessStartKey;
        *(_WORD *)(v57 + 4) |= 1u;
        v22 = v62 + 16;
        LODWORD(v121) = v62 + 16;
        v115 = v62 + 16;
        if ( v59 )
          v59[2] |= 1u;
        v59 = v67;
        v128 = v67;
        v62 += 16;
        v45 = v114;
      }
      if ( (v44 & 0x40) != 0 )
      {
        v23 = v57 + v62;
        *(_DWORD *)v23 = 655376;
        *(_WORD *)(v23 + 6) = 8;
        *(_WORD *)(v23 + 4) &= ~1u;
        *(_WORD *)(v23 + 4) &= 1u;
        if ( (v112 & 0x10) != 0 || (EtwpCreateEventKey(&v141), v112 |= 0x10u, !v151) )
        {
          v68 = v141;
        }
        else
        {
          v68 = v141;
          *v151 = v141;
        }
        *(_QWORD *)(v23 + 8) = v68;
        *(_WORD *)(v57 + 4) |= 1u;
        v22 = v62 + 16;
        LODWORD(v121) = v62 + 16;
        v115 = v62 + 16;
        if ( v59 )
          v59[2] |= 1u;
        v59 = (unsigned __int16 *)v23;
        v128 = (unsigned __int16 *)v23;
        v62 += 16;
      }
      if ( (v44 & 4) != 0 )
      {
        v93 = (unsigned __int16 *)(v57 + v62);
        v94 = (unsigned __int16 *)StackLookasideListEntry;
        memmove(v93, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
        v57 = v127;
        *(_WORD *)(v127 + 4) |= 1u;
        v22 = v62 + *v94;
        LODWORD(v121) = v22;
        v62 = v22;
        v115 = v22;
        if ( v59 )
          v59[2] |= 1u;
        v59 = v93;
        v128 = v93;
      }
      if ( (v44 & 0x10) != 0 )
      {
        v95 = (unsigned __int16 *)(v57 + v62);
        v96 = (unsigned __int16 *)v142;
        memmove(v95, v142, *(unsigned __int16 *)v142);
        v57 = v127;
        *(_WORD *)(v127 + 4) |= 1u;
        v22 = v62 + *v96;
        LODWORD(v121) = v22;
        v62 = v22;
        v115 = v22;
        if ( v59 )
          v59[2] |= 1u;
        v59 = v95;
        v128 = v95;
      }
    }
    v69 = v120;
    if ( v120 )
    {
      v70 = (unsigned __int16 *)(v57 + v62);
      v121 = v70;
      v71 = (v120 + 15) & 0xFFF8;
      *v70 = v71;
      v70[1] = 12;
      v70[3] = v69;
      v70[2] &= ~1u;
      v70[2] &= 1u;
      v72 = v71 - v69 - 8;
      v73 = v70 + 4;
      v74 = v69;
      memmove(v70 + 4, v152, v69);
      memset((char *)v73 + v74, 0, v72);
      v57 = v127;
      *(_WORD *)(v127 + 4) |= 1u;
      v75 = v121;
      v22 = v62 + *v121;
      LODWORD(v121) = v22;
      v62 = v22;
      v115 = v22;
      if ( v59 )
        v59[2] |= 1u;
      v59 = v75;
      v128 = v75;
    }
    if ( v122 )
    {
      v83 = (unsigned __int16 *)(v57 + v62);
      v84 = v118;
      v85 = (v118 + 15) & 0xFFF8;
      *v83 = v85;
      v83[1] = 11;
      v83[3] = v84;
      v83[2] &= ~1u;
      v83[2] &= 1u;
      v76 = (char *)(v83 + 4);
      v140 = v83 + 4;
      v153 = (char *)v83 + v84 + 8;
      memset(v153, 0, (unsigned __int16)(v85 - v84 - 8));
      v57 = v127;
      *(_WORD *)(v127 + 4) |= 1u;
      v22 = v62 + *v83;
      LODWORD(v121) = v22;
      v115 = v22;
      if ( v59 )
        v59[2] |= 1u;
    }
    else
    {
      v76 = (char *)v140;
    }
    v77 = 0;
    v78 = v116;
    while ( 1 )
    {
      v138 = v77;
      if ( v77 >= a10 )
        break;
      v25 = *(unsigned int *)(v130 + 16LL * v77 + 8);
      v23 = *(_QWORD *)(v130 + 16LL * v77);
      if ( v78 )
      {
        v79 = *(_BYTE *)(v130 + 16LL * v77 + 12);
        v45 = v114;
        v76 = (char *)v140;
        v22 = v115;
        LODWORD(v121) = v115;
      }
      else
      {
        v79 = 0;
      }
      if ( v79 )
      {
        v82 = v79 - 1;
        if ( v82 )
        {
          if ( v82 == 2 )
          {
            if ( (_DWORD)v25 == 8 )
            {
              if ( v23 + 8 > 0x7FFFFFFF0000LL || v23 + 8 < v23 )
                MEMORY[0x7FFFFFFF0000] = 0;
              v135 = *(LARGE_INTEGER *)v23;
            }
            goto LABEL_127;
          }
          ++v77;
          v57 = v127;
        }
        else
        {
          if ( !v76 )
            goto LABEL_168;
          v22 = v25;
          v86 = &v76[v25];
          if ( &v76[v25] < v76 || v86 > v153 || !v122 )
            goto LABEL_168;
          if ( (_DWORD)v25 && (v25 + v23 > 0x7FFFFFFF0000LL || v25 + v23 < v23) )
            MEMORY[0x7FFFFFFF0000] = 0;
          memmove(v76, (const void *)v23, v25);
          v76 = v86;
          v140 = v86;
          --v122;
          v22 = (unsigned int)v121;
          ++v77;
          v57 = v127;
        }
      }
      else
      {
        v80 = v25 + v22;
        if ( (int)v25 + (int)v22 < (unsigned int)v22 )
        {
          v115 = -1;
          v81 = -1073741675;
          v80 = -1;
        }
        else
        {
          v115 = v25 + v22;
          v81 = 0;
        }
        if ( v81 || v80 > v45 )
        {
LABEL_168:
          v117 = -1073741820;
          *(_DWORD *)v57 = v45 | *(_DWORD *)(v126 + 28);
          *(LARGE_INTEGER *)(v57 + 16) = v135;
          v24 = v113;
          v40 = v124;
          v39 = v136;
          v41 = v123;
          goto LABEL_23;
        }
        v161 = KeGetCurrentThread();
        PreviousMode = v161->PreviousMode;
        if ( PreviousMode && (_DWORD)v25 && (v23 + v25 > 0x7FFFFFFF0000LL || v23 + v25 < v23) )
          MEMORY[0x7FFFFFFF0000] = 0;
        memmove((void *)(v57 + (unsigned int)v22), (const void *)v23, v25);
        v45 = v114;
        v76 = (char *)v140;
        v22 = v115;
        LODWORD(v121) = v115;
LABEL_127:
        ++v77;
        v57 = v127;
      }
    }
    if ( v154 )
      *(_DWORD *)(v154 + 4LL * (v139 >> 5)) |= 1 << (v139 & 0x1F);
    *(LARGE_INTEGER *)(v57 + 16) = v135;
    v97 = CurrentThread;
    *(_DWORD *)(v57 + 56) = CurrentThread->SchedulerApc.SpareLong0;
    *(_DWORD *)(v57 + 60) = v97->UserTime;
    *(_DWORD *)(v57 + 8) = v97[1].CurrentRunTime;
    *(_DWORD *)(v57 + 12) = v97[1].CycleTime;
    v98 = v126;
    if ( (*(_DWORD *)(v126 + 12) & 0x80000) != 0
      && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
    {
      EtwpSendTraceEvent(v126, (__int64)&v157);
    }
    v21 = v78;
    v24 = v113;
    v25 = 1LL;
    if ( *(_QWORD *)(v98 + 1304) )
    {
      EtwpInvokeEventCallback(v98, (__int64 *)&v157, v124 + 40);
      goto LABEL_10;
    }
  }
  v137 = 0;
  v159 = KeGetCurrentThread();
  v131 = v159->PreviousMode;
  v49 = v130;
  if ( v131 )
  {
    v50 = 16LL * v34;
    if ( v50 )
    {
      if ( (v130 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v130 + v50 > 0x7FFFFFFF0000LL || v130 + v50 < v130 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v51 = 0;
  v45 = v114;
  while ( 1 )
  {
    v137 = v51;
    if ( v51 >= v34 )
    {
      v47 = v139;
      goto LABEL_73;
    }
    v23 = v45;
    v25 = 16LL * v51 + v49;
    v134 = *(_DWORD *)(v25 + 8);
    v22 = v134;
    if ( v134 > 0xFFFF )
    {
      v117 = -2147483643;
      v24 = v113;
      v40 = v124;
      v39 = v136;
      v41 = v123;
      goto LABEL_23;
    }
    if ( v116 )
    {
      v52 = *(_BYTE *)(v25 + 12);
      v22 = v134;
    }
    else
    {
      v52 = 0;
    }
    v25 = v52;
    if ( v52 )
    {
      if ( v52 == 1 )
      {
        v118 += v22;
        ++v122;
      }
      v45 = v114;
    }
    else
    {
      v45 = v22 + v114;
      v114 += v22;
    }
    if ( v45 < (unsigned int)v23 )
      break;
    ++v51;
    v49 = v130;
  }
  v117 = -2147483643;
  v24 = v113;
  v40 = v124;
  v39 = v136;
  v41 = v123;
LABEL_23:
  if ( (v112 & 8) != 0 )
  {
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
    v40 = v124;
    v41 = v123;
  }
  if ( v117 < 0 )
  {
    EtwpFailLogging(a8, a9, v40, (__int64)v162, v24, v117, v41 + 40, 1);
  }
  else
  {
    while ( v20 < LODWORD(v162[24]) )
    {
      EtwpReleaseTraceBuffer((signed __int64 *)&v162[3 * v20 + 1]);
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v39 + 448) + 8LL * **v43), 1u);
      ++v20;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v25, v22, v23);
  return (unsigned int)v117;
}
