/*
 * XREFs of EtwpEventWriteFull @ 0x14020E300
 * Callers:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x1403BFDC4 (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x1405A3EB0 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x1405A4210 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x1405A6B2C (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x14074E478 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140202D10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140202F70 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x14020F6F0 (EtwpApplyEventIdPayloadFilter.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     IoGetStackLimits @ 0x140226570 (IoGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x140226820 (KeAreInterruptsEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x140226840 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReleaseTraceBuffer @ 0x140245D20 (EtwpReleaseTraceBuffer.c)
 *     MmCanThreadFault @ 0x140247370 (MmCanThreadFault.c)
 *     ObGetCurrentIrql @ 0x1402473F0 (ObGetCurrentIrql.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1402804B0 (EtwpLevelKeywordEnabled.c)
 *     KeInitializeApc @ 0x1402D69A0 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402EBBB0 (KeInsertQueueApc.c)
 *     EtwpFailLogging @ 0x14036C4F4 (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036C78C (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A4364 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A51E0 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceLostEvent @ 0x1405A8DA4 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x1405A915C (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405A9C6C (EtwpInvokeEventCallback.c)
 *     EtwpApplyEventNameFilter @ 0x1405AA124 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x1405AA578 (EtwpApplyLevelKwFilter.c)
 *     EtwpApplyStackWalkIdFilter @ 0x1405AA694 (EtwpApplyStackWalkIdFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140656940 (EtwpGetSidExtendedHeaderItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        unsigned __int16 *a5,
        __int16 a6,
        __int16 a7,
        GUID *a8,
        _OWORD *a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int16 a15,
        void *a16,
        unsigned __int64 *a17)
{
  __int64 v19; // r15
  unsigned __int16 v21; // ax
  __int64 v22; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // r11
  __int64 v28; // r8
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // rdi
  unsigned int v32; // r13d
  unsigned __int16 *v33; // r15
  char v34; // bl
  __int64 v35; // rsi
  __int64 v36; // r12
  int v37; // ecx
  char v38; // al
  _KPROCESS *Process; // rcx
  __int64 v40; // rcx
  int v41; // ecx
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned __int8 v45; // al
  __int64 v46; // r14
  BOOLEAN v47; // al
  __int64 v48; // rdx
  int v49; // ecx
  unsigned int **v50; // rbx
  __int64 v51; // rdi
  int v52; // ebx
  int v53; // edi
  unsigned int v54; // r14d
  int v55; // eax
  int v56; // eax
  _DWORD *v57; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  _GENERAL_LOOKASIDE *L; // rdi
  int v61; // eax
  int v62; // eax
  __int64 v63; // rcx
  int v64; // ecx
  bool v65; // al
  unsigned __int16 *v66; // r12
  unsigned __int8 v67; // si
  unsigned int v68; // edi
  __int64 v69; // r9
  int v70; // esi
  unsigned int v71; // edi
  void *v72; // rsp
  __int64 v73; // r8
  bool v74; // cl
  char v75; // cl
  _OWORD *v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // r8
  __int16 v79; // di
  int v80; // r15d
  char v81; // al
  __int64 v82; // rsi
  __int64 v83; // rdi
  unsigned int ReserveTraceBufferStatus; // ebx
  int v85; // ecx
  __int64 v86; // rax
  _WORD *v87; // r12
  GUID v88; // xmm0
  unsigned __int16 *v89; // rcx
  __int64 v90; // r15
  unsigned __int16 v91; // si
  unsigned __int16 v92; // si
  _WORD *v93; // rdi
  unsigned __int16 *v94; // rcx
  unsigned __int16 *v95; // rdi
  unsigned __int16 *v96; // rdi
  int SessionId; // eax
  int v98; // ecx
  unsigned __int16 *v99; // rdx
  unsigned __int16 *v100; // r8
  struct _KPRCB *v101; // rcx
  unsigned __int64 v102; // rax
  unsigned __int16 *v103; // rdi
  PVOID PoolWithTag; // rbx
  unsigned int v105; // eax
  unsigned __int16 *v106; // rdi
  unsigned __int16 v107; // si
  unsigned __int16 v108; // si
  __int64 v109; // rbx
  unsigned __int16 *v110; // rcx
  int v111; // r10d
  __int64 v112; // rsi
  unsigned __int16 *v113; // rbx
  __int64 v114; // rcx
  unsigned __int16 v115; // dx
  unsigned int i; // edi
  size_t v117; // rdx
  _QWORD *v118; // r9
  char v119; // r8
  char *v120; // r15
  size_t v121; // rbx
  void *v122; // rcx
  __int64 v123; // rbx
  _SLIST_ENTRY *v124; // r14
  struct _KPRCB *v125; // rdx
  _GENERAL_LOOKASIDE *v126; // rcx
  int BugCheckParameter4; // [rsp+0h] [rbp-640h]
  char v128; // [rsp+30h] [rbp-610h] BYREF
  char v129; // [rsp+640h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+641h] [rbp+1h]
  unsigned __int8 v131; // [rsp+648h] [rbp+8h]
  int v132; // [rsp+650h] [rbp+10h]
  int v133; // [rsp+654h] [rbp+14h]
  unsigned __int16 v134; // [rsp+658h] [rbp+18h]
  unsigned __int8 v135; // [rsp+65Ch] [rbp+1Ch]
  char v136; // [rsp+65Dh] [rbp+1Dh]
  int v137; // [rsp+660h] [rbp+20h]
  unsigned int v138; // [rsp+664h] [rbp+24h]
  int Size; // [rsp+668h] [rbp+28h]
  unsigned __int16 Size_4; // [rsp+66Ch] [rbp+2Ch]
  __int16 v141; // [rsp+670h] [rbp+30h]
  unsigned int v142; // [rsp+674h] [rbp+34h]
  int v143; // [rsp+678h] [rbp+38h]
  __int64 v144; // [rsp+680h] [rbp+40h]
  unsigned __int16 *v145; // [rsp+688h] [rbp+48h]
  __int64 v146; // [rsp+690h] [rbp+50h]
  unsigned __int16 *v147; // [rsp+698h] [rbp+58h]
  void *Src; // [rsp+6A0h] [rbp+60h]
  __int64 v149; // [rsp+6A8h] [rbp+68h]
  void *StackLookasideListEntry; // [rsp+6B0h] [rbp+70h] BYREF
  __int64 v151; // [rsp+6B8h] [rbp+78h]
  unsigned __int16 *v152; // [rsp+6C0h] [rbp+80h]
  __int64 v153; // [rsp+6C8h] [rbp+88h]
  __int64 v154; // [rsp+6D0h] [rbp+90h]
  _DWORD *v155; // [rsp+6D8h] [rbp+98h]
  void *v156; // [rsp+6E0h] [rbp+A0h]
  void *v157; // [rsp+6E8h] [rbp+A8h]
  __int64 v158; // [rsp+6F0h] [rbp+B0h]
  struct _KTHREAD *v159; // [rsp+6F8h] [rbp+B8h]
  unsigned __int16 *v160; // [rsp+700h] [rbp+C0h] BYREF
  unsigned __int64 v161; // [rsp+708h] [rbp+C8h]
  void *v162; // [rsp+710h] [rbp+D0h]
  __int64 v163; // [rsp+718h] [rbp+D8h]
  unsigned __int64 HighLimit; // [rsp+720h] [rbp+E0h] BYREF
  unsigned __int64 LowLimit; // [rsp+728h] [rbp+E8h] BYREF
  __int64 v166; // [rsp+730h] [rbp+F0h]
  unsigned __int64 *v167; // [rsp+738h] [rbp+F8h]
  char *v168; // [rsp+740h] [rbp+100h]
  __int128 v169; // [rsp+748h] [rbp+108h] BYREF
  __int64 v170; // [rsp+758h] [rbp+118h]
  _OWORD *v171; // [rsp+760h] [rbp+120h]
  _OWORD v172[25]; // [rsp+770h] [rbp+130h] BYREF
  _DWORD *v174; // [rsp+9B8h] [rbp+378h]

  v171 = a9;
  v19 = a14;
  v153 = a1;
  v131 = a2;
  v145 = a5;
  v154 = a11;
  v163 = a13;
  v162 = a16;
  v167 = a17;
  v143 = 0;
  memset(v172, 0, 0x188uLL);
  v138 = 0;
  Src = 0LL;
  v155 = 0LL;
  StackLookasideListEntry = 0LL;
  v161 = 0LL;
  v141 = a15 & 0x200;
  v166 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a14 )
    v19 = a1;
  v146 = v19;
  if ( v162 )
  {
    if ( (a15 & 0x400) != 0 )
      v21 = 0;
    else
      v21 = *(_WORD *)v162;
  }
  else
  {
    v21 = 0;
  }
  Size_4 = v21;
  v129 = 0;
  v22 = *(_QWORD *)(a1 + 392);
  v144 = v22;
  v158 = v22;
  if ( v167 && *v167 )
  {
    v161 = *v167;
    v129 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v159 = CurrentThread;
  v24 = a12;
  if ( !a12 )
    v24 = (__int64)CurrentThread;
  v174 = (_DWORD *)v24;
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    CurrentIrql = KeGetCurrentIrql();
  else
    CurrentIrql = 15;
  v135 = CurrentIrql;
  v136 = 0;
  if ( !CurrentIrql )
  {
    --v159->KernelApcDisable;
    v136 = 1;
  }
  v131 &= ~a3;
  v25 = 80LL;
  v26 = v19;
LABEL_21:
  v27 = (__int64)v145;
  v28 = 1LL;
LABEL_22:
  while ( 2 )
  {
    v29 = !_BitScanForward((unsigned int *)&v30, v131);
    v138 = v30;
    if ( !v29 )
    {
      LOBYTE(v31) = 1;
      v151 = 1LL;
      v169 = 0LL;
      v170 = 0LL;
      v160 = 0LL;
      v32 = v25;
      v133 = v25;
      v33 = 0LL;
      v147 = 0LL;
      v152 = 0LL;
      v34 = 0;
      LOBYTE(v134) = 0;
      LOWORD(Size) = 0;
      v137 = 0;
      v157 = 0LL;
      v168 = 0LL;
      v131 &= v131 - 1;
      v35 = (unsigned int)v30;
      v149 = (unsigned int)v30;
      v36 = v26 + 32 * (v30 + 4);
      if ( v163 )
      {
        v37 = *(_DWORD *)(v163 + 4LL * (*(unsigned __int16 *)(v36 + 6) >> 5));
        v28 = 1LL;
        if ( _bittest(&v37, *(_BYTE *)(v36 + 6) & 0x1F) )
          continue;
      }
      v38 = EtwpLevelKeywordEnabled(v36, *(unsigned __int8 *)(v27 + 4), *(_QWORD *)(v27 + 8), v25);
      v28 = 1LL;
      if ( !v38 )
        continue;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( ((a4 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0) && (*(_DWORD *)(v36 + 8) & 0x200) != 0 )
        continue;
      v40 = *(_QWORD *)(v26 + 384);
      if ( v40 )
      {
        v41 = *(_DWORD *)(104 * v35 + v40);
        if ( (v41 & 0x80000200) == 0x80000200 || (v41 & 0x80000100) == 0x80000100 )
        {
          if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(
                                   v26,
                                   v138,
                                   0,
                                   v27,
                                   *(_WORD *)v27,
                                   a10,
                                   v154,
                                   0,
                                   CurrentIrql) )
            goto LABEL_63;
          v27 = (__int64)v145;
        }
      }
      if ( v141 )
      {
        v25 = *(_QWORD *)(v27 + 8);
        v43 = 0LL;
        v44 = *(_QWORD *)(v146 + 384);
        if ( v44 )
        {
          v28 = 104 * v35;
          if ( (*(_DWORD *)(104 * v35 + v44) & 0x80000400) == 0x80000400 )
            v43 = *(_QWORD *)(v28 + v44 + 96);
          if ( v43 )
          {
            v45 = *(_BYTE *)(v43 + 1);
            if ( (*(_BYTE *)(v27 + 4) <= v45 || !v45)
              && (!v25 || (v25 & *(_QWORD *)(v43 + 8)) != 0 && (v25 & *(_QWORD *)(v43 + 16)) == *(_QWORD *)(v43 + 16))
              && !(unsigned __int8)EtwpApplyEventNameFilter(
                                     v146,
                                     v138,
                                     a10,
                                     v154,
                                     0,
                                     CurrentIrql,
                                     *(_BYTE *)(v27 + 4),
                                     *(_QWORD *)(v27 + 8),
                                     0) )
            {
              goto LABEL_63;
            }
          }
        }
      }
      v46 = *(unsigned __int16 *)(v36 + 6);
      v142 = *(unsigned __int16 *)(v36 + 6);
      if ( CurrentIrql >= 2u )
      {
        v48 = v144;
        if ( (unsigned int)v46 >= *(_DWORD *)(v144 + 16) )
        {
          LOBYTE(v31) = 1;
          v151 = 1LL;
        }
        else
        {
          _mm_lfence();
          v31 = *(_QWORD *)(*(_QWORD *)(v144 + 456) + 8 * v46);
          v151 = v31;
        }
      }
      else
      {
        v47 = ExAcquireRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v144 + 448) + 8 * v46),
                1u);
        v48 = v144;
        if ( v47 )
        {
          if ( (unsigned int)v46 >= *(_DWORD *)(v144 + 16) )
          {
            LOBYTE(v31) = 1;
            v151 = 1LL;
          }
          else
          {
            _mm_lfence();
            v31 = *(_QWORD *)(8 * v46 + *(_QWORD *)(v144 + 456));
            v151 = v31;
          }
          v34 = 1;
          LOBYTE(v134) = 1;
        }
        else
        {
          v34 = v134;
        }
      }
      if ( (v31 & 1) != 0 )
      {
        if ( v34 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v48 + 448) + 8 * v46), 1u);
        v29 = (_DWORD)v46 == 3;
        v22 = v144;
        if ( !v29 )
        {
LABEL_63:
          v26 = v146;
          v25 = 80LL;
          goto LABEL_21;
        }
        v49 = -1073741058;
        v30 = 3221225480LL;
        if ( !*(_DWORD *)(v144 + 4068) )
          v49 = -1073741816;
        v143 = v49;
        break;
      }
      v52 = v171 != 0LL ? 8 : 0;
      v53 = 104;
      if ( !v171 )
        v53 = 80;
      v54 = v53;
      v132 = v53;
      if ( (*(_DWORD *)(v36 + 8) & 0xFFFFFF9F) != 0 )
      {
        if ( EtwpPagingDisabled || (a4 & 1) != 0 || !(unsigned int)MmCanThreadFault(v171, v48) || BYTE6(v159[1].Queue) )
          v55 = 0;
        else
          v55 = 128;
        v52 |= v55;
        v56 = *(_DWORD *)(v36 + 8);
        v132 = v53;
        if ( (v56 & 0x800) != 0 )
        {
          if ( v166 != EtwpHostSiloState )
          {
            v52 |= 0x100u;
            v54 = v53 + ((*(unsigned __int16 *)(v166 + 4200) + 15) & 0xFFFFFFF8);
            v132 = v54;
          }
          v33 = v147;
        }
        if ( (v56 & 1) != 0 && (v52 & 0x80u) != 0 )
        {
          v57 = Src;
          if ( Src )
            goto LABEL_100;
          CurrentPrcb = KeGetCurrentPrcb();
          P = CurrentPrcb->PPLookasideList[8].P;
          ++P->TotalAllocates;
          v57 = RtlpInterlockedPopEntrySList(&P->ListHead);
          Src = v57;
          if ( !v57 )
          {
            ++P->AllocateMisses;
            L = CurrentPrcb->PPLookasideList[8].L;
            ++L->TotalAllocates;
            v57 = RtlpInterlockedPopEntrySList(&L->ListHead);
            Src = v57;
            if ( !v57 )
            {
              ++L->AllocateMisses;
              v57 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                (unsigned int)L->Type,
                                L->Size,
                                L->Tag);
              Src = v57;
            }
          }
          if ( v57 )
            *v57 = CurrentPrcb->Number;
          v155 = v57;
          if ( v57 )
          {
            EtwpGetSidExtendedHeaderItem();
            v57 = Src;
          }
          v35 = v149;
          if ( v57 )
          {
LABEL_100:
            v52 |= 2u;
            v54 += *(unsigned __int16 *)v57;
            v132 = v54;
          }
        }
        v61 = *(_DWORD *)(v36 + 8);
        if ( (v61 & 2) != 0 )
        {
          v52 |= 1u;
          v54 += 16;
          v132 = v54;
        }
        if ( (v61 & 0x80u) != 0 && ((unsigned __int8)ObGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->NestingLevel) )
        {
          v52 |= 0x20u;
          v54 += 16;
          v132 = v54;
        }
        v62 = *(_DWORD *)(v36 + 8);
        if ( (v62 & 0x100) != 0 )
        {
          v52 |= 0x40u;
          v54 += 16;
          v132 = v54;
        }
        if ( (v62 & 4) != 0 && !EtwpPagingDisabled )
        {
          v63 = *(_QWORD *)(v146 + 384);
          v65 = 0;
          if ( v63 )
          {
            v64 = *(_DWORD *)(104 * v35 + v63);
            if ( (v64 & 0x80001000) == 0x80001000
              || (v64 & 0x80002000) == 0x80002000
              || (v64 & 0x80004000) == 0x80004000 )
            {
              v65 = 1;
            }
          }
          v66 = v145;
          if ( !v65
            || (v67 = v135,
                v68 = v138,
                (unsigned __int8)EtwpApplyLevelKwFilter(
                                   v146,
                                   v138,
                                   *((unsigned __int8 *)v145 + 4),
                                   *((_QWORD *)v145 + 1),
                                   v135 < 2u))
            && (LOBYTE(v69) = v67 < 2u, v70 = v146, (unsigned __int8)EtwpApplyStackWalkIdFilter(*v66, v146, v68, v69))
            && (unsigned __int8)EtwpApplyEventNameFilter(
                                  v70,
                                  v68,
                                  a10,
                                  v154,
                                  0,
                                  CurrentIrql,
                                  *((_BYTE *)v66 + 4),
                                  *((_QWORD *)v66 + 1),
                                  1) )
          {
            if ( (v129 & 1) == 0 )
            {
              v71 = 256;
              StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
              if ( !StackLookasideListEntry )
              {
                HighLimit = 0LL;
                LowLimit = 0LL;
                IoGetStackLimits(&LowLimit, &HighLimit);
                if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                {
                  v72 = alloca(1552LL);
                  StackLookasideListEntry = &v128;
                  v71 = 192;
                }
              }
              if ( StackLookasideListEntry )
              {
                v73 = 0LL;
                v74 = (*(_DWORD *)(v151 + 832) & 0x40000000) == 0;
                if ( *(_QWORD *)(v153 + 40) == *(_QWORD *)&EventTracingProvGuid.Data1
                  && *(_QWORD *)(v153 + 48) == *(_QWORD *)EventTracingProvGuid.Data4
                  && *v66 == 18 )
                {
                  v52 |= 0x10u;
                  v73 = v153 + 80;
                  v74 = 0;
                }
                LOBYTE(BugCheckParameter4) = v74;
                EtwpGetStackExtendedHeaderItem(v159, a4, v71, &StackLookasideListEntry, BugCheckParameter4, v73);
                if ( StackLookasideListEntry && v71 == 256 )
                  v75 = 2;
                else
                  v75 = 0;
                v129 = v75 | v129 & 0xFD;
              }
              v129 |= 1u;
            }
            if ( StackLookasideListEntry )
            {
              v52 |= 4u;
              v54 += *(unsigned __int16 *)StackLookasideListEntry;
              v132 = v54;
            }
          }
        }
      }
      v76 = &v172[3 * LODWORD(v172[24])];
      v149 = (__int64)v76;
      if ( a10 )
      {
        v77 = v154 + 8;
        v78 = a10;
        v79 = Size;
        v80 = v137;
        do
        {
          if ( v141 )
            v81 = *(_BYTE *)(v77 + 4);
          else
            v81 = 0;
          if ( v81 )
          {
            if ( v81 == 1 )
            {
              v79 += *(_WORD *)v77;
              LOWORD(Size) = v79;
              v137 = ++v80;
            }
          }
          else
          {
            v54 += *(_DWORD *)v77;
            v132 = v54;
          }
          v77 += 16LL;
          --v78;
        }
        while ( v78 );
        v33 = v147;
        v76 = (_OWORD *)v149;
      }
      if ( v137 )
      {
        v54 += ((unsigned __int16)Size + 15) & 0xFFFFFFF8;
        v132 = v54;
      }
      if ( Size_4 )
      {
        v54 += (Size_4 + 15) & 0xFFFFFFF8;
        v132 = v54;
      }
      *((_DWORD *)v76 + 10) = v54;
      v82 = EtwpReserveTraceBuffer(v151, v54, (unsigned int)&v169, (unsigned int)&v160, 0);
      v149 = v82;
      if ( !v82 )
      {
        v83 = v151;
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v151, v54);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(v153 + 40, v145, v83 + 152, ReserveTraceBufferStatus);
        v85 = v143;
        if ( v143 >= 0 )
        {
          if ( (*(_DWORD *)(v83 + 12) & 0x8000000) == 0 )
            v85 = ReserveTraceBufferStatus;
          v143 = v85;
        }
        v22 = v144;
        if ( (_BYTE)v134 )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v144 + 448) + 8LL * v142),
            1u);
        v26 = v146;
        v25 = 80LL;
        if ( ReserveTraceBufferStatus == -1073741675 )
        {
          v143 = -1073741675;
          break;
        }
        goto LABEL_21;
      }
      v86 = v151;
      *(_QWORD *)v76 = v151;
      *((_QWORD *)v76 + 1) = v82;
      v76[1] = v169;
      *((_QWORD *)v76 + 4) = v170;
      ++LODWORD(v172[24]);
      *(_DWORD *)v82 = v54 | *(_DWORD *)(v86 + 20);
      v87 = (_WORD *)(v82 + 4);
      v156 = (void *)(v82 + 4);
      *(_WORD *)(v82 + 4) = a6;
      *(_WORD *)(v82 + 6) = a7;
      *(_OWORD *)(v82 + 24) = *(_OWORD *)(v153 + 40);
      *(_OWORD *)(v82 + 40) = *(_OWORD *)v145;
      if ( a8 )
        v88 = *a8;
      else
        v88 = NullGuid;
      *(GUID *)(v82 + 64) = v88;
      *(_QWORD *)(v82 + 16) = v160;
      *(_DWORD *)(v82 + 8) = v174[288];
      *(_DWORD *)(v82 + 12) = v174[286];
      *(_DWORD *)(v82 + 56) = v174[163];
      *(_DWORD *)(v82 + 60) = v174[183];
      if ( !v52 )
        goto LABEL_207;
      if ( (v52 & 0x100) != 0 )
      {
        v89 = (unsigned __int16 *)(v82 + 80);
        v147 = v89;
        v90 = v166;
        v91 = (*(_WORD *)(v166 + 4200) + 15) & 0xFFF8;
        *v89 = v91;
        v89[1] = 16;
        v89[3] = *(_WORD *)(v90 + 4200);
        v89[2] = 0;
        v92 = v91 - *(_WORD *)(v90 + 4200) - 8;
        v93 = v89 + 4;
        memmove(v89 + 4, *(const void **)(v90 + 4192), *(unsigned __int16 *)(v90 + 4200));
        memset((char *)v93 + *(unsigned __int16 *)(v90 + 4200), 0, v92);
        *v87 |= 1u;
        v33 = v147;
        v32 = *v147 + 80;
        v133 = v32;
        v152 = v147;
        v82 = v149;
      }
      if ( (v52 & 8) != 0 )
      {
        v94 = (unsigned __int16 *)(v82 + v32);
        *(_DWORD *)v94 = 65560;
        *((_DWORD *)v94 + 1) = 0x100000;
        *(_OWORD *)(v94 + 4) = *a9;
        *v87 |= 1u;
        v32 += 24;
        v133 = v32;
        if ( v33 )
          v33[2] |= 1u;
        v33 = v94;
        v147 = v94;
        v152 = v94;
      }
      if ( (v52 & 2) != 0 )
      {
        v95 = (unsigned __int16 *)(v82 + v32);
        memmove(v95, Src, *(unsigned __int16 *)Src);
        *v87 |= 1u;
        v32 += *(unsigned __int16 *)Src;
        v133 = v32;
        if ( v33 )
          v33[2] |= 1u;
        v33 = v95;
        v147 = v95;
        v152 = v95;
      }
      if ( (v52 & 1) != 0 )
      {
        v96 = (unsigned __int16 *)(v82 + v32);
        *(_DWORD *)v96 = 196624;
        *((_DWORD *)v96 + 1) = 0x40000;
        SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
        v98 = 0;
        if ( SessionId != -1 )
          v98 = SessionId;
        *((_DWORD *)v96 + 2) = v98;
        *v87 |= 1u;
        v32 += 16;
        v133 = v32;
        if ( v33 )
          v33[2] |= 1u;
        v33 = v96;
        v147 = v96;
        v152 = v96;
      }
      if ( (v52 & 0x20) != 0 )
      {
        v99 = (unsigned __int16 *)(v82 + v32);
        *(_DWORD *)v99 = 851984;
        *((_DWORD *)v99 + 1) = 0x80000;
        *((_QWORD *)v99 + 1) = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[6] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
        *v87 |= 1u;
        v32 += 16;
        v133 = v32;
        if ( v33 )
          v33[2] |= 1u;
        v33 = v99;
        v147 = v99;
        v152 = v99;
      }
      if ( (v52 & 0x40) != 0 )
      {
        v100 = (unsigned __int16 *)(v82 + v32);
        *(_DWORD *)v100 = 655376;
        *((_DWORD *)v100 + 1) = 0x80000;
        if ( (v129 & 4) != 0 )
        {
          v102 = v161;
        }
        else
        {
          v101 = KeGetCurrentPrcb();
          v102 = _InterlockedIncrement64((volatile signed __int64 *)v101->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v101->Number << 48);
          v161 = v102;
          v129 |= 4u;
          if ( v167 )
            *v167 = v102;
        }
        *((_QWORD *)v100 + 1) = v102;
        *v87 |= 1u;
        v32 += 16;
        v133 = v32;
        if ( v33 )
          v33[2] |= 1u;
        v33 = v100;
        v147 = v100;
        v152 = v100;
      }
      if ( (v52 & 4) == 0 )
        goto LABEL_207;
      v103 = (unsigned __int16 *)(v82 + v32);
      memmove(v103, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
      if ( *((_QWORD *)v103 + 1) && (v52 & 0x10) == 0 )
      {
        if ( v144 != EtwpHostSiloState )
          goto LABEL_203;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u);
        if ( !PoolWithTag )
          goto LABEL_203;
        KeInitializeApc(
          (_DWORD)PoolWithTag,
          (_DWORD)v174,
          0,
          (unsigned int)EtwpCrimsonStackWalkApc,
          0LL,
          (__int64)EtwpCrimsonStackWalkApc,
          0,
          v142);
        if ( !(unsigned __int8)KeInsertQueueApc(
                                 PoolWithTag,
                                 *((unsigned int *)v103 + 2),
                                 *((unsigned int *)v103 + 3),
                                 0LL) )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
LABEL_203:
          *((_QWORD *)v103 + 1) = 0LL;
        }
      }
      *v87 |= 1u;
      v32 += *(unsigned __int16 *)StackLookasideListEntry;
      v133 = v32;
      if ( v33 )
        v33[2] |= 1u;
      v33 = v103;
      v147 = v103;
      v152 = v103;
LABEL_207:
      v105 = Size_4;
      if ( Size_4 )
      {
        v106 = (unsigned __int16 *)(v82 + v32);
        v160 = v106;
        v107 = (Size_4 + 15) & 0xFFF8;
        *v106 = v107;
        *(_DWORD *)(v106 + 1) = 12;
        v106[3] = v105;
        v108 = v107 - v105 - 8;
        v134 = v108;
        v109 = v105;
        memmove(v106 + 4, v162, v105);
        memset((char *)v106 + v109 + 8, 0, v108);
        v110 = v147;
        *v87 |= 1u;
        v32 += *v106;
        v133 = v32;
        if ( v110 )
          v110[2] |= 1u;
        v33 = v106;
      }
      v111 = v137;
      v112 = v149;
      if ( v137 )
      {
        v113 = (unsigned __int16 *)(v149 + v32);
        v114 = (unsigned __int16)Size;
        v115 = (Size + 15) & 0xFFF8;
        *v113 = v115;
        *(_DWORD *)(v113 + 1) = 11;
        v113[3] = v114;
        v157 = v113 + 4;
        v168 = (char *)v113 + v114 + 8;
        memset(v168, 0, (unsigned __int16)(v115 - v114 - 8));
        *v87 |= 1u;
        v32 += *v113;
        v133 = v32;
        v111 = v137;
        if ( v33 )
          v33[2] |= 1u;
      }
      for ( i = 0; ; ++i )
      {
        while ( 1 )
        {
          v138 = i;
          if ( i >= a10 )
          {
            v123 = v151;
            if ( (*(_DWORD *)(v151 + 12) & 0x80000) != 0
              && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
            {
              EtwpSendTraceEvent(v151, &v169);
            }
            if ( *(_QWORD *)(v123 + 1272) )
              EtwpInvokeEventCallback(v123, &v169, v153 + 40, 0LL);
            v27 = (__int64)v145;
            v22 = v144;
            v26 = v146;
            v28 = 1LL;
            v25 = 80LL;
            if ( v163 )
              *(_DWORD *)(v163 + 4LL * (v142 >> 5)) |= 1 << (v142 & 0x1F);
            goto LABEL_22;
          }
          v117 = *(unsigned int *)(v154 + 16LL * i + 8);
          Size = *(_DWORD *)(v154 + 16LL * i + 8);
          v118 = *(_QWORD **)(v154 + 16LL * i);
          v119 = v141 ? *(_BYTE *)(v154 + 16LL * i + 12) : 0;
          if ( v119 )
            break;
          v122 = (void *)(v112 + v32);
          v156 = v122;
          v32 += v117;
          v133 = v32;
          if ( v32 > v54 )
            KeBugCheckEx(0x11Du, 5uLL, v32, v54, 0LL);
          memmove(v122, v118, v117);
          v111 = v137;
LABEL_230:
          ++i;
        }
        if ( v119 != 1 )
        {
          if ( v119 == 3 && (_DWORD)v117 == 8 )
            *(_QWORD *)(v112 + 16) = *v118;
          goto LABEL_230;
        }
        v120 = (char *)v157;
        if ( !v157 || (v121 = v117, v156 = (void *)v117, (char *)v157 + v117 > v168) || !v111 )
          KeBugCheckEx(0x11Du, 5uLL, v32, v54, 0LL);
        memmove(v157, v118, v117);
        v157 = &v120[v121];
        v111 = --v137;
      }
    }
    break;
  }
  if ( (v129 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v143 < 0 )
  {
    EtwpFailLogging(
      *((unsigned __int8 *)v145 + 4),
      *((_QWORD *)v145 + 1),
      v153,
      (unsigned int)v172,
      v131,
      v143,
      (__int64)v145,
      v135 < 2u);
  }
  else if ( LODWORD(v172[24]) )
  {
    v50 = (unsigned int **)v172;
    v51 = LODWORD(v172[24]);
    do
    {
      EtwpReleaseTraceBuffer(v50 + 2, v30, v28, v25);
      if ( CurrentIrql < 2u )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v22 + 448) + 8LL * **v50),
          1u);
      v50 += 6;
      --v51;
    }
    while ( v51 );
  }
  if ( v136 )
    KeLeaveCriticalRegionThread(v159);
  v124 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v125 = KeGetCurrentPrcb();
    v126 = v125->PPLookasideList[8].P;
    ++v126->TotalFrees;
    if ( LOWORD(v126->ListHead.Alignment) < v126->Depth
      || (++v126->FreeMisses,
          v126 = v125->PPLookasideList[8].L,
          ++v126->TotalFrees,
          LOWORD(v126->ListHead.Alignment) < v126->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v126->ListHead, v124);
    }
    else
    {
      ++v126->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *, struct _KPRCB *, __int64, __int64))v126->FreeEx)(v124, v125, v28, v25);
    }
  }
  return (unsigned int)v143;
}
