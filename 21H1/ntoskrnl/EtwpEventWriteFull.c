/*
 * XREFs of EtwpEventWriteFull @ 0x140256EC0
 * Callers:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x1403BC914 (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x14059FD20 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x1405A0080 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x1405A299C (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x14073DD18 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140208060 (EtwpReserveTraceBuffer.c)
 *     IoGetStackLimits @ 0x1402082E0 (IoGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x140208590 (KeAreInterruptsEnabled.c)
 *     MmCanThreadFault @ 0x1402360B8 (MmCanThreadFault.c)
 *     ObGetCurrentIrql @ 0x140236140 (ObGetCurrentIrql.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140257D40 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x14026EA90 (EtwpLevelKeywordEnabled.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402C2730 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseTraceBuffer @ 0x1402D6FA0 (EtwpReleaseTraceBuffer.c)
 *     PsGetCurrentProcessSessionId @ 0x1402D7070 (PsGetCurrentProcessSessionId.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402E5060 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeInitializeApc @ 0x140355490 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1403575C0 (KeInsertQueueApc.c)
 *     EtwpFailLogging @ 0x140369B54 (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140369DEC (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A01D4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A1050 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceLostEvent @ 0x1405A4C14 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x1405A4FCC (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405A5ADC (EtwpInvokeEventCallback.c)
 *     EtwpApplyEventNameFilter @ 0x1405A5F94 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x1405A63E8 (EtwpApplyLevelKwFilter.c)
 *     EtwpApplyStackWalkIdFilter @ 0x1405A6440 (EtwpApplyStackWalkIdFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14066AF50 (EtwpGetSidExtendedHeaderItem.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int16 a6,
        __int16 a7,
        GUID *a8,
        _OWORD *a9,
        unsigned int a10,
        __int64 a11,
        LONG *p_LockNV,
        __int64 a13,
        __int64 a14,
        __int16 a15,
        void *a16,
        unsigned __int64 *a17)
{
  __int64 v19; // r13
  unsigned int v20; // r15d
  unsigned __int16 v21; // ax
  __int64 v22; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r10
  bool v27; // zf
  __int64 v28; // rdx
  unsigned int v29; // r13d
  char v30; // bl
  unsigned __int16 v31; // r14
  __int64 v32; // r12
  __int64 v33; // rdi
  int v34; // ecx
  char v35; // al
  __int64 v36; // r11
  _KPROCESS *Process; // rcx
  __int64 v38; // rcx
  __int64 v40; // rdi
  _SLIST_ENTRY *v41; // r8
  __int64 v43; // rsi
  BOOLEAN v44; // al
  __int64 v45; // rdx
  int v46; // ebx
  int v47; // esi
  unsigned int v48; // r10d
  __int64 v49; // r12
  unsigned int v50; // esi
  unsigned int v51; // edx
  int v52; // edi
  char v53; // al
  _OWORD *v54; // rdi
  unsigned __int16 v55; // r14
  __int64 v56; // rsi
  unsigned __int64 v57; // rax
  _OWORD *v58; // r10
  int v59; // eax
  unsigned int v60; // esi
  _WORD *v61; // r12
  GUID v62; // xmm0
  unsigned int *v63; // r14
  int v64; // r11d
  _OWORD *v65; // rdi
  unsigned int v66; // ebx
  size_t v67; // rdx
  char v68; // cl
  char *v69; // rcx
  __int64 v70; // rbx
  unsigned int **v71; // r11
  int v72; // eax
  int v73; // eax
  int v74; // ecx
  unsigned __int16 *v75; // rax
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v78; // rcx
  int v79; // eax
  int v80; // eax
  unsigned int *v81; // r11
  unsigned __int16 *v82; // rdi
  struct _KPRCB *v83; // rdx
  _GENERAL_LOOKASIDE *v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rcx
  unsigned int *v88; // rsi
  unsigned __int16 v89; // di
  unsigned __int16 v90; // di
  unsigned int *v91; // rcx
  unsigned __int16 *v92; // r8
  struct _KPRCB *v93; // rcx
  unsigned __int16 *v94; // rdx
  unsigned __int16 *v95; // rbx
  __int64 v96; // rax
  unsigned __int16 v97; // dx
  char *v98; // r12
  size_t v99; // rdi
  _GENERAL_LOOKASIDE *L; // rsi
  unsigned __int16 *v101; // rcx
  unsigned __int8 v102; // al
  int v103; // ecx
  __int64 v104; // rcx
  int v105; // ecx
  unsigned __int16 *v107; // rsi
  unsigned int v108; // edi
  __int64 v109; // r9
  __int64 v110; // r11
  char v111; // al
  __int64 v112; // rax
  char v113; // cl
  char v114; // al
  unsigned int v115; // edi
  void *v116; // rsp
  __int64 v117; // r8
  bool v118; // cl
  __int64 v119; // rax
  char v120; // cl
  unsigned int ReserveTraceBufferStatus; // ebx
  BOOLEAN v122; // al
  int v123; // ecx
  _WORD *v124; // r10
  __int64 v125; // r15
  __int16 v126; // si
  unsigned __int16 v127; // si
  _WORD *v128; // rdi
  unsigned int *v129; // rdi
  unsigned int *v130; // rdi
  PVOID PoolWithTag; // rbx
  int v132; // [rsp+0h] [rbp-640h]
  char v133; // [rsp+30h] [rbp-610h] BYREF
  char v134; // [rsp+640h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+641h] [rbp+1h]
  unsigned int Size; // [rsp+644h] [rbp+4h]
  unsigned __int8 Size_4; // [rsp+648h] [rbp+8h]
  int v138; // [rsp+650h] [rbp+10h]
  int v139; // [rsp+654h] [rbp+14h]
  unsigned __int16 v140; // [rsp+658h] [rbp+18h]
  unsigned __int8 v141; // [rsp+65Ch] [rbp+1Ch]
  unsigned __int16 v142; // [rsp+660h] [rbp+20h]
  char v143; // [rsp+664h] [rbp+24h]
  unsigned __int16 v144; // [rsp+668h] [rbp+28h]
  unsigned int v145; // [rsp+66Ch] [rbp+2Ch]
  int v146; // [rsp+670h] [rbp+30h]
  __int16 v147; // [rsp+674h] [rbp+34h]
  unsigned int v148; // [rsp+678h] [rbp+38h]
  int v149; // [rsp+67Ch] [rbp+3Ch]
  __int64 v150; // [rsp+680h] [rbp+40h]
  unsigned int *v151; // [rsp+688h] [rbp+48h]
  __int64 v152; // [rsp+690h] [rbp+50h]
  __int64 v153; // [rsp+698h] [rbp+58h]
  void *Src; // [rsp+6A0h] [rbp+60h]
  __int64 v155; // [rsp+6A8h] [rbp+68h]
  void *StackLookasideListEntry; // [rsp+6B0h] [rbp+70h] BYREF
  _OWORD *v157; // [rsp+6B8h] [rbp+78h]
  __int64 v158; // [rsp+6C0h] [rbp+80h]
  unsigned int *v159; // [rsp+6C8h] [rbp+88h]
  __int64 v160; // [rsp+6D0h] [rbp+90h]
  PSLIST_ENTRY v161; // [rsp+6D8h] [rbp+98h]
  void *v162; // [rsp+6E0h] [rbp+A0h]
  void *v163; // [rsp+6E8h] [rbp+A8h]
  __int64 v164; // [rsp+6F0h] [rbp+B0h]
  struct _KTHREAD *v165; // [rsp+6F8h] [rbp+B8h]
  LARGE_INTEGER v166; // [rsp+700h] [rbp+C0h] BYREF
  unsigned __int64 v167; // [rsp+708h] [rbp+C8h]
  void *v168; // [rsp+710h] [rbp+D0h]
  __int64 v169; // [rsp+718h] [rbp+D8h]
  unsigned __int64 HighLimit; // [rsp+720h] [rbp+E0h] BYREF
  unsigned __int64 LowLimit; // [rsp+728h] [rbp+E8h] BYREF
  __int64 v172; // [rsp+730h] [rbp+F0h]
  unsigned __int64 *v173; // [rsp+738h] [rbp+F8h]
  char *v174; // [rsp+740h] [rbp+100h]
  __int128 v175; // [rsp+748h] [rbp+108h] BYREF
  __int64 v176; // [rsp+758h] [rbp+118h]
  _OWORD *v177; // [rsp+760h] [rbp+120h]
  _OWORD v178[25]; // [rsp+770h] [rbp+130h] BYREF

  v177 = a9;
  v19 = a14;
  v160 = a1;
  Size_4 = a2;
  v153 = a5;
  v152 = a11;
  v169 = a13;
  v168 = a16;
  v173 = a17;
  v20 = 0;
  v149 = 0;
  memset(v178, 0, 0x188uLL);
  v145 = 0;
  Src = 0LL;
  v161 = 0LL;
  StackLookasideListEntry = 0LL;
  v167 = 0LL;
  v147 = a15 & 0x200;
  v172 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a14 )
    v19 = a1;
  v158 = v19;
  if ( v168 )
  {
    if ( (a15 & 0x400) != 0 )
      v21 = 0;
    else
      v21 = *(_WORD *)v168;
  }
  else
  {
    v21 = 0;
  }
  v142 = v21;
  v134 = 0;
  v22 = *(_QWORD *)(a1 + 392);
  v150 = v22;
  v164 = v22;
  if ( v173 && *v173 )
  {
    v167 = *v173;
    v134 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v165 = CurrentThread;
  if ( !p_LockNV )
    p_LockNV = &CurrentThread->Header.LockNV;
  if ( KeAreInterruptsEnabled() )
    CurrentIrql = KeGetCurrentIrql();
  else
    CurrentIrql = 15;
  v141 = CurrentIrql;
  v143 = 0;
  if ( !CurrentIrql )
  {
    --v165->KernelApcDisable;
    v143 = 1;
  }
  Size_4 &= ~a3;
LABEL_16:
  v25 = 80LL;
  do
  {
    v26 = 1LL;
    while ( 1 )
    {
LABEL_18:
      v27 = !_BitScanForward((unsigned int *)&v28, Size_4);
      v145 = v28;
      if ( v27 )
        goto LABEL_30;
      v155 = v26;
      v175 = 0LL;
      v176 = 0LL;
      v166.QuadPart = 0LL;
      v29 = 80;
      v139 = 80;
      v151 = 0LL;
      v159 = 0LL;
      v30 = 0;
      LOBYTE(v140) = 0;
      v31 = 0;
      v144 = 0;
      v146 = 0;
      v163 = 0LL;
      v174 = 0LL;
      Size_4 &= Size_4 - 1;
      v32 = (unsigned int)v28;
      v33 = v158 + 32 * (v28 + 4);
      if ( v169 )
      {
        v34 = *(_DWORD *)(v169 + 4LL * (*(unsigned __int16 *)(v33 + 6) >> 5));
        if ( _bittest(&v34, *(_BYTE *)(v33 + 6) & 0x1F) )
          continue;
      }
      v35 = EtwpLevelKeywordEnabled(v33, *(unsigned __int8 *)(v153 + 4), *(_QWORD *)(v153 + 8));
      v25 = 80LL;
      if ( v35 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( (a4 & 2) == 0 && SLODWORD(Process[1].DirectoryTableBase) >= 0 )
          break;
        if ( (*(_DWORD *)(v33 + 8) & 0x200) == 0 )
          break;
      }
    }
    v38 = *(_QWORD *)(v36 + 384);
    if ( v38
      && ((*(_DWORD *)(104 * v32 + v38) & 0x80000200) == 0x80000200
       || (*(_DWORD *)(104 * v32 + v38) & 0x80000100) == 0x80000100) )
    {
      if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(v36, v145, 0, v24, *(_WORD *)v24, a10, v152, 0, CurrentIrql) )
        goto LABEL_29;
      v36 = v158;
      v24 = v153;
      v26 = 1LL;
    }
    if ( v147 )
    {
      v85 = *(_QWORD *)(v24 + 8);
      v24 = *(unsigned __int8 *)(v24 + 4);
      v86 = 0LL;
      v87 = *(_QWORD *)(v36 + 384);
      if ( v87 )
      {
        if ( (*(_DWORD *)(104 * v32 + v87) & 0x80000400) == 0x80000400 )
          v86 = *(_QWORD *)(104 * v32 + v87 + 96);
        if ( v86 )
        {
          v102 = *(_BYTE *)(v86 + 1);
          if ( ((unsigned __int8)v24 <= v102 || !v102)
            && (!v85 || (v85 & *(_QWORD *)(v86 + 8)) != 0 && (v85 & *(_QWORD *)(v86 + 16)) == *(_QWORD *)(v86 + 16))
            && !(unsigned __int8)EtwpApplyEventNameFilter(
                                   v36,
                                   v145,
                                   a10,
                                   v152,
                                   0,
                                   CurrentIrql,
                                   *(_BYTE *)(v153 + 4),
                                   *(_QWORD *)(v153 + 8),
                                   0) )
          {
            goto LABEL_29;
          }
        }
        v26 = 1LL;
      }
    }
    v43 = *(unsigned __int16 *)(v33 + 6);
    v148 = *(unsigned __int16 *)(v33 + 6);
    if ( CurrentIrql >= 2u )
    {
      v45 = v150;
      if ( (unsigned int)v43 >= *(_DWORD *)(v150 + 16) )
      {
        v25 = v26;
        v155 = v26;
      }
      else
      {
        _mm_lfence();
        v25 = *(_QWORD *)(*(_QWORD *)(v150 + 456) + 8 * v43);
        v155 = v25;
      }
    }
    else
    {
      v44 = ExAcquireRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v150 + 448) + 8 * v43),
              v26);
      v45 = v150;
      if ( v44 )
      {
        if ( (unsigned int)v43 >= *(_DWORD *)(v150 + 16) )
        {
          v155 = 1LL;
        }
        else
        {
          _mm_lfence();
          v155 = *(_QWORD *)(8 * v43 + *(_QWORD *)(v150 + 456));
        }
        v30 = 1;
        LOBYTE(v140) = 1;
      }
      else
      {
        v30 = v140;
      }
      v25 = v155;
    }
    if ( (v25 & 1) != 0 )
    {
      if ( v30 )
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v45 + 448) + 8 * v43), 1u);
      if ( (_DWORD)v43 != 3 )
      {
LABEL_29:
        v22 = v150;
        goto LABEL_16;
      }
      v22 = v150;
      v103 = -1073741058;
      v28 = 3221225480LL;
      if ( !*(_DWORD *)(v150 + 4068) )
        v103 = -1073741816;
      v149 = v103;
LABEL_30:
      v40 = v153;
      goto LABEL_31;
    }
    v46 = v177 != 0LL ? 8 : 0;
    v47 = 104;
    if ( !v177 )
      v47 = 80;
    v48 = v47;
    v138 = v47;
    if ( (*(_DWORD *)(v33 + 8) & 0xFFFFFF9F) == 0 )
      goto LABEL_53;
    if ( EtwpPagingDisabled || (a4 & 1) != 0 || !MmCanThreadFault() || BYTE6(v165[1].Queue) )
      v72 = 0;
    else
      v72 = 128;
    v46 |= v72;
    v73 = *(_DWORD *)(v33 + 8);
    v74 = v47;
    Size = v47;
    v138 = v47;
    if ( (v73 & 0x800) != 0 )
    {
      if ( v172 != EtwpHostSiloState )
      {
        v46 |= 0x100u;
        v74 = v47 + ((*(unsigned __int16 *)(v172 + 4200) + 15) & 0xFFFFFFF8);
        Size = v74;
        v138 = v74;
      }
      v20 = 0;
    }
    if ( (v73 & 1) != 0 && (v46 & 0x80u) != 0 )
    {
      v75 = (unsigned __int16 *)Src;
      if ( Src )
        goto LABEL_106;
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v78 = RtlpInterlockedPopEntrySList(&P->ListHead);
      Src = v78;
      if ( !v78 )
      {
        ++P->AllocateMisses;
        L = CurrentPrcb->PPLookasideList[8].L;
        ++L->TotalAllocates;
        v78 = RtlpInterlockedPopEntrySList(&L->ListHead);
        Src = v78;
        if ( !v78 )
        {
          ++L->AllocateMisses;
          v78 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                (unsigned int)L->Type,
                                L->Size,
                                L->Tag);
          Src = v78;
        }
      }
      if ( v78 )
        LODWORD(v78->Next) = CurrentPrcb->Number;
      v161 = v78;
      if ( v78 )
        EtwpGetSidExtendedHeaderItem();
      v75 = (unsigned __int16 *)Src;
      v31 = v144;
      v74 = Size;
      if ( Src )
      {
LABEL_106:
        v46 |= 2u;
        v74 += *v75;
        Size = v74;
        v138 = v74;
      }
    }
    v79 = *(_DWORD *)(v33 + 8);
    if ( (v79 & 2) != 0 )
    {
      v46 |= 1u;
      Size = v74 + 16;
      v138 = v74 + 16;
    }
    if ( (v79 & 0x80u) == 0 || ObGetCurrentIrql() >= 2u && KeGetCurrentPrcb()->NestingLevel )
    {
      v48 = Size;
    }
    else
    {
      v46 |= 0x20u;
      v48 = Size + 16;
      Size = v48;
      v138 = v48;
    }
    v80 = *(_DWORD *)(v33 + 8);
    if ( (v80 & 0x100) != 0 )
    {
      v46 |= 0x40u;
      v48 += 16;
      Size = v48;
      v138 = v48;
    }
    if ( (v80 & 4) == 0 || EtwpPagingDisabled )
      goto LABEL_53;
    v104 = *(_QWORD *)(v158 + 384);
    if ( !v104
      || (v105 = *(_DWORD *)(104 * v32 + v104), (v105 & 0x80001000) != 0x80001000)
      && (v105 & 0x80002000) != 0x80002000
      && (v105 & 0x80004000) != 0x80004000 )
    {
      v50 = a10;
      v49 = v152;
LABEL_211:
      if ( (v134 & 1) == 0 )
      {
        v115 = 256;
        StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
        if ( !StackLookasideListEntry )
        {
          HighLimit = 0LL;
          LowLimit = 0LL;
          IoGetStackLimits(&LowLimit, &HighLimit);
          if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
          {
            v116 = alloca(1552LL);
            StackLookasideListEntry = &v133;
            v115 = 192;
          }
        }
        if ( StackLookasideListEntry )
        {
          v117 = 0LL;
          v118 = (*(_DWORD *)(v155 + 832) & 0x40000000) == 0;
          v119 = *(_QWORD *)(v160 + 40) - *(_QWORD *)&EventTracingProvGuid.Data1;
          if ( !v119 )
            v119 = *(_QWORD *)(v160 + 48) - *(_QWORD *)EventTracingProvGuid.Data4;
          if ( !v119 && *(_WORD *)v153 == 18 )
          {
            v46 |= 0x10u;
            v117 = v160 + 80;
            v118 = 0;
          }
          LOBYTE(v132) = v118;
          EtwpGetStackExtendedHeaderItem(v165, a4, v115, &StackLookasideListEntry, v132, v117);
          if ( StackLookasideListEntry && v115 == 256 )
            v120 = 2;
          else
            v120 = 0;
          v134 = v120 | v134 & 0xFD;
        }
        v134 |= 1u;
        v48 = Size;
      }
      if ( StackLookasideListEntry )
      {
        v46 |= 4u;
        v48 += *(unsigned __int16 *)StackLookasideListEntry;
        v138 = v48;
      }
      goto LABEL_55;
    }
    v107 = (unsigned __int16 *)v153;
    v108 = v145;
    if ( !(unsigned __int8)EtwpApplyLevelKwFilter(v158, v145, *(unsigned __int8 *)(v153 + 4), *(_QWORD *)(v153 + 8)) )
    {
      v48 = Size;
LABEL_53:
      v49 = v152;
LABEL_54:
      v50 = a10;
      goto LABEL_55;
    }
    LOBYTE(v109) = v141 < 2u;
    v111 = EtwpApplyStackWalkIdFilter(*v107, v110, v108, v109);
    v49 = v152;
    if ( !v111 )
    {
      v48 = Size;
      goto LABEL_54;
    }
    v112 = *((_QWORD *)v107 + 1);
    v113 = *((_BYTE *)v107 + 4);
    v50 = a10;
    v114 = EtwpApplyEventNameFilter(v158, v108, a10, v152, 0, CurrentIrql, v113, v112, 1);
    v48 = Size;
    if ( v114 )
      goto LABEL_211;
LABEL_55:
    v157 = &v178[3 * LODWORD(v178[24])];
    v51 = 0;
    v52 = v146;
    while ( v51 < v50 )
    {
      if ( v147 )
        v53 = *(_BYTE *)(v49 + 16LL * v51 + 12);
      else
        v53 = 0;
      if ( !v53 )
      {
        v48 += *(_DWORD *)(v49 + 16LL * v51 + 8);
        v138 = v48;
        goto LABEL_61;
      }
      if ( v53 == 1 )
      {
        v31 += *(_WORD *)(v49 + 16LL * v51 + 8);
        v146 = ++v52;
        ++v51;
      }
      else
      {
LABEL_61:
        ++v51;
      }
    }
    v144 = v31;
    Size = v48;
    v27 = v52 == 0;
    v54 = v157;
    if ( !v27 )
    {
      v48 += (v31 + 15) & 0xFFFFFFF8;
      Size = v48;
      v138 = v48;
    }
    v55 = v142;
    if ( v142 )
    {
      v48 += (v142 + 15) & 0xFFFFFFF8;
      Size = v48;
      v138 = v48;
    }
    *((_DWORD *)v157 + 10) = v48;
    v56 = v155;
    v57 = EtwpReserveTraceBuffer((unsigned int *)v155, v48, (__int64)&v175, &v166, 0);
    v58 = (_OWORD *)v57;
    v157 = (_OWORD *)v57;
    if ( v57 )
    {
      *(_QWORD *)v54 = v56;
      *((_QWORD *)v54 + 1) = v57;
      v54[1] = v175;
      *((_QWORD *)v54 + 4) = v176;
      ++LODWORD(v178[24]);
      v59 = *(_DWORD *)(v56 + 20);
      v60 = Size;
      *(_DWORD *)v58 = Size | v59;
      v61 = (_WORD *)v58 + 2;
      v162 = (char *)v58 + 4;
      *((_WORD *)v58 + 2) = a6;
      *((_WORD *)v58 + 3) = a7;
      *(_OWORD *)((char *)v58 + 24) = *(_OWORD *)(v160 + 40);
      *(_OWORD *)((char *)v58 + 40) = *(_OWORD *)v153;
      if ( a8 )
        v62 = *a8;
      else
        v62 = NullGuid;
      v58[4] = v62;
      *((LARGE_INTEGER *)v58 + 2) = v166;
      *((_DWORD *)v58 + 2) = p_LockNV[288];
      *((_DWORD *)v58 + 3) = p_LockNV[286];
      *((_DWORD *)v58 + 14) = p_LockNV[163];
      *((_DWORD *)v58 + 15) = p_LockNV[183];
      if ( v46 )
      {
        if ( (v46 & 0x100) != 0 )
        {
          v124 = v58 + 5;
          v151 = (unsigned int *)v124;
          v125 = v172;
          v126 = (*(_WORD *)(v172 + 4200) + 15) & 0xFFF8;
          *v124 = v126;
          v124[1] = 16;
          v124[3] = *(_WORD *)(v125 + 4200);
          v124[2] = 0;
          v127 = v126 - *(_WORD *)(v125 + 4200) - 8;
          v128 = v124 + 4;
          memmove(v124 + 4, *(const void **)(v125 + 4192), *(unsigned __int16 *)(v125 + 4200));
          memset((char *)v128 + *(unsigned __int16 *)(v125 + 4200), 0, v127);
          *v61 |= 1u;
          v81 = v151;
          v29 = *(unsigned __int16 *)v151 + 80;
          v139 = v29;
          v159 = v151;
          v20 = 0;
          v60 = Size;
          v58 = v157;
        }
        else
        {
          v81 = v151;
        }
        if ( (v46 & 8) != 0 )
        {
          v101 = (unsigned __int16 *)((char *)v58 + v29);
          *(_DWORD *)v101 = 65560;
          *((_DWORD *)v101 + 1) = 0x100000;
          *(_OWORD *)(v101 + 4) = *a9;
          *v61 |= 1u;
          v29 += 24;
          v139 = v29;
          if ( v81 )
            *((_WORD *)v81 + 2) |= 1u;
          v81 = (unsigned int *)v101;
          v151 = (unsigned int *)v101;
          v159 = (unsigned int *)v101;
        }
        if ( (v46 & 2) != 0 )
        {
          v82 = (unsigned __int16 *)((char *)v58 + v29);
          memmove(v82, Src, *(unsigned __int16 *)Src);
          *v61 |= 1u;
          v29 += *(unsigned __int16 *)Src;
          v139 = v29;
          if ( v151 )
            *((_WORD *)v151 + 2) |= 1u;
          v81 = (unsigned int *)v82;
          v151 = (unsigned int *)v82;
          v159 = (unsigned int *)v82;
          v58 = v157;
        }
        if ( (v46 & 1) != 0 )
        {
          v129 = (unsigned int *)((char *)v58 + v29);
          *v129 = 196624;
          v129[1] = 0x40000;
          v129[2] = PsGetCurrentProcessSessionId();
          *v61 |= 1u;
          v29 += 16;
          v139 = v29;
          if ( v151 )
            *((_WORD *)v151 + 2) |= 1u;
          v81 = v129;
          v151 = v129;
          v159 = v129;
          v58 = v157;
        }
        if ( (v46 & 0x20) != 0 )
        {
          v94 = (unsigned __int16 *)((char *)v58 + v29);
          *(_DWORD *)v94 = 851984;
          *((_DWORD *)v94 + 1) = 0x80000;
          *((_QWORD *)v94 + 1) = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[6] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
          *v61 |= 1u;
          v29 += 16;
          v139 = v29;
          if ( v81 )
            *((_WORD *)v81 + 2) |= 1u;
          v81 = (unsigned int *)v94;
          v151 = (unsigned int *)v94;
          v159 = (unsigned int *)v94;
          v55 = v142;
        }
        if ( (v46 & 0x40) != 0 )
        {
          v92 = (unsigned __int16 *)((char *)v58 + v29);
          *(_DWORD *)v92 = 655376;
          *((_DWORD *)v92 + 1) = 0x80000;
          if ( (v134 & 4) != 0 )
          {
            v24 = v167;
          }
          else
          {
            v93 = KeGetCurrentPrcb();
            v24 = _InterlockedIncrement64((volatile signed __int64 *)v93->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v93->Number << 48);
            v167 = v24;
            v134 |= 4u;
            v55 = v142;
            if ( v173 )
              *v173 = v24;
          }
          *((_QWORD *)v92 + 1) = v24;
          *v61 |= 1u;
          v29 += 16;
          v139 = v29;
          if ( v81 )
            *((_WORD *)v81 + 2) |= 1u;
          v151 = (unsigned int *)v92;
          v159 = (unsigned int *)v92;
        }
        if ( (v46 & 4) != 0 )
        {
          v130 = (unsigned int *)((char *)v58 + v29);
          memmove(v130, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
          if ( *((_QWORD *)v130 + 1) && (v46 & 0x10) == 0 )
          {
            if ( v150 == EtwpHostSiloState
              && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u)) != 0LL )
            {
              KeInitializeApc(
                (_DWORD)PoolWithTag,
                (_DWORD)p_LockNV,
                0,
                (unsigned int)EtwpCrimsonStackWalkApc,
                0LL,
                (__int64)EtwpCrimsonStackWalkApc,
                0,
                v148);
              if ( !(unsigned __int8)KeInsertQueueApc(PoolWithTag, v130[2], v130[3], 0LL) )
              {
                ExFreePoolWithTag(PoolWithTag, 0);
                goto LABEL_252;
              }
            }
            else
            {
LABEL_252:
              *((_QWORD *)v130 + 1) = 0LL;
            }
          }
          *v61 |= 1u;
          v29 += *(unsigned __int16 *)StackLookasideListEntry;
          v139 = v29;
          if ( v151 )
            *((_WORD *)v151 + 2) |= 1u;
          v151 = v130;
          v159 = v130;
          v58 = v157;
        }
      }
      if ( v55 )
      {
        v88 = (unsigned int *)((char *)v58 + v29);
        v166.QuadPart = (LONGLONG)v88;
        v89 = (v55 + 15) & 0xFFF8;
        *(_WORD *)v88 = v89;
        *(unsigned int *)((char *)v88 + 2) = 12;
        *((_WORD *)v88 + 3) = v55;
        v90 = v89 - v55 - 8;
        v140 = v90;
        memmove(v88 + 2, v168, v55);
        memset((char *)v88 + v55 + 8, 0, v90);
        v20 = 0;
        v91 = v151;
        *v61 |= 1u;
        v29 += *(unsigned __int16 *)v88;
        v139 = v29;
        if ( v91 )
          *((_WORD *)v91 + 2) |= 1u;
        v63 = v88;
        v60 = Size;
      }
      else
      {
        v63 = v151;
      }
      v64 = v146;
      v65 = v157;
      if ( v146 )
      {
        v95 = (unsigned __int16 *)((char *)v157 + v29);
        v96 = v144;
        v97 = (v144 + 15) & 0xFFF8;
        *v95 = v97;
        *(_DWORD *)(v95 + 1) = 11;
        v95[3] = v96;
        v163 = v95 + 4;
        v174 = (char *)v95 + v96 + 8;
        memset(v174, 0, (unsigned __int16)(v97 - v96 - 8));
        *v61 |= 1u;
        v29 += *v95;
        v139 = v29;
        v64 = v146;
        if ( v63 )
          *((_WORD *)v63 + 2) |= 1u;
      }
      v66 = 0;
      while ( 1 )
      {
        v145 = v66;
        if ( v66 >= a10 )
          break;
        v67 = *(unsigned int *)(v152 + 16LL * v66 + 8);
        Size = *(_DWORD *)(v152 + 16LL * v66 + 8);
        v24 = *(_QWORD *)(v152 + 16LL * v66);
        if ( v147 )
          v68 = *(_BYTE *)(v152 + 16LL * v66 + 12);
        else
          v68 = 0;
        if ( !v68 )
        {
          v69 = (char *)v65 + v29;
          v162 = v69;
          v29 += v67;
          v139 = v29;
          if ( v29 > v60 )
            KeBugCheckEx(0x11Du, 5uLL, v29, v60, 0LL);
          memmove(v69, (const void *)v24, v67);
LABEL_80:
          ++v66;
          v65 = v157;
          v64 = v146;
          continue;
        }
        if ( v68 != 1 )
        {
          if ( v68 == 3 && (_DWORD)v67 == 8 )
            *((_QWORD *)v65 + 2) = *(_QWORD *)v24;
          goto LABEL_80;
        }
        v98 = (char *)v163;
        if ( !v163 || (v99 = v67, v162 = (void *)v67, (char *)v163 + v67 > v174) || !v64 )
          KeBugCheckEx(0x11Du, 5uLL, v29, v60, 0LL);
        memmove(v163, (const void *)v24, v67);
        v163 = &v98[v99];
        --v146;
        ++v66;
        v65 = v157;
        v64 = v146;
      }
      v70 = v155;
      if ( (*(_DWORD *)(v155 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v155, &v175);
      }
      if ( *(_QWORD *)(v70 + 1304) )
        EtwpInvokeEventCallback(v70, &v175, v160 + 40, 0LL);
      v22 = v150;
      v26 = 1LL;
      v25 = 80LL;
      if ( v169 )
        *(_DWORD *)(v169 + 4LL * (v148 >> 5)) |= 1 << (v148 & 0x1F);
      goto LABEL_18;
    }
    ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v56, Size);
    v122 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
    v40 = v153;
    if ( v122 )
      EtwpTraceLostEvent(v160 + 40, v153, v56 + 152, ReserveTraceBufferStatus);
    v123 = v149;
    if ( v149 >= 0 )
    {
      if ( (*(_DWORD *)(v56 + 12) & 0x8000000) == 0 )
        v123 = ReserveTraceBufferStatus;
      v149 = v123;
    }
    v22 = v150;
    if ( (_BYTE)v140 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v150 + 448) + 8LL * v148), 1u);
    v25 = 80LL;
  }
  while ( ReserveTraceBufferStatus != -1073741675 );
  v149 = -1073741675;
LABEL_31:
  if ( (v134 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v149 < 0 )
  {
    EtwpFailLogging(
      *(unsigned __int8 *)(v40 + 4),
      *(_QWORD *)(v40 + 8),
      v160,
      (unsigned int)v178,
      Size_4,
      v149,
      v40,
      v141 < 2u);
  }
  else
  {
    while ( v20 < LODWORD(v178[24]) )
    {
      EtwpReleaseTraceBuffer(&v178[3 * v20 + 1], v28, v25);
      if ( CurrentIrql < 2u )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v22 + 448) + 8LL * **v71),
          1u);
      ++v20;
    }
  }
  if ( v143 )
    KeLeaveCriticalRegionThread((__int64)v165, v28, v25, v24);
  v41 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v83 = KeGetCurrentPrcb();
    v84 = v83->PPLookasideList[8].P;
    ++v84->TotalFrees;
    if ( LOWORD(v84->ListHead.Alignment) < v84->Depth
      || (++v84->FreeMisses,
          v84 = v83->PPLookasideList[8].L,
          ++v84->TotalFrees,
          LOWORD(v84->ListHead.Alignment) < v84->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v84->ListHead, v41);
    }
    else
    {
      ++v84->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))v84->FreeEx)(v41);
    }
  }
  return (unsigned int)v149;
}
