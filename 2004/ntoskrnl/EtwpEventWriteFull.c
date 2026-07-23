/*
 * XREFs of EtwpEventWriteFull @ 0x140293740
 * Callers:
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x1403BD8A4 (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x1405A0410 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x1405A0770 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x1405A308C (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x14073F898 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x140215A40 (EtwpLevelKeywordEnabled.c)
 *     EtwpReleaseTraceBuffer @ 0x14026D600 (EtwpReleaseTraceBuffer.c)
 *     PsGetCurrentProcessSessionId @ 0x14026D6D0 (PsGetCurrentProcessSessionId.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x1402945C0 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpReserveTraceBuffer @ 0x14029AB70 (EtwpReserveTraceBuffer.c)
 *     IoGetStackLimits @ 0x14029ADF0 (IoGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x14029B0A0 (KeAreInterruptsEnabled.c)
 *     MmCanThreadFault @ 0x1402C8EE8 (MmCanThreadFault.c)
 *     ObGetCurrentIrql @ 0x1402C8F70 (ObGetCurrentIrql.c)
 *     KeInitializeApc @ 0x1402F94B0 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402FB5E0 (KeInsertQueueApc.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402FEF90 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140311DB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpFailLogging @ 0x14036A514 (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036A7AC (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A08C4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A1740 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceLostEvent @ 0x1405A5304 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x1405A56BC (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405A61CC (EtwpInvokeEventCallback.c)
 *     EtwpApplyEventNameFilter @ 0x1405A6684 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x1405A6AD8 (EtwpApplyLevelKwFilter.c)
 *     EtwpApplyStackWalkIdFilter @ 0x1405A6B30 (EtwpApplyStackWalkIdFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140625830 (EtwpGetSidExtendedHeaderItem.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  __int64 v24; // r10
  bool v25; // zf
  __int64 v26; // rdx
  unsigned int v27; // r13d
  char v28; // bl
  unsigned __int16 v29; // r14
  __int64 v30; // r12
  __int64 v31; // rdi
  int v32; // ecx
  __int64 v33; // r9
  __int64 v34; // r11
  _KPROCESS *Process; // rcx
  __int64 v36; // rcx
  __int64 v38; // rdi
  _SLIST_ENTRY *v39; // r8
  __int64 v41; // rsi
  BOOLEAN v42; // al
  __int64 v43; // rdx
  __int64 v44; // r8
  int v45; // ebx
  unsigned int v46; // esi
  unsigned int v47; // r10d
  __int64 v48; // r12
  unsigned int v49; // esi
  unsigned int v50; // edx
  int v51; // edi
  char v52; // al
  _OWORD *v53; // rdi
  unsigned __int16 v54; // r14
  __int64 v55; // rsi
  __int64 v56; // rax
  unsigned __int16 *v57; // r8
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
  _QWORD *v68; // r9
  unsigned __int8 v69; // cl
  char *v70; // rcx
  __int64 v71; // rbx
  unsigned int **v72; // r11
  int v73; // eax
  int v74; // eax
  __int64 v75; // rcx
  unsigned __int16 *v76; // rax
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v79; // rcx
  int v80; // eax
  int v81; // eax
  unsigned int *v82; // r11
  unsigned __int16 *v83; // rdi
  struct _KPRCB *v84; // rdx
  _GENERAL_LOOKASIDE *v85; // rcx
  __int64 v86; // r8
  unsigned __int8 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rcx
  unsigned __int16 *v90; // rsi
  unsigned __int16 v91; // di
  unsigned __int16 v92; // di
  unsigned int *v93; // rcx
  struct _KPRCB *v94; // rcx
  unsigned __int64 v95; // r9
  unsigned __int16 *v96; // rdx
  unsigned __int16 *v97; // rbx
  __int64 v98; // rax
  unsigned __int16 v99; // dx
  char *v100; // r12
  size_t v101; // rdi
  _GENERAL_LOOKASIDE *L; // rsi
  unsigned __int16 *v103; // rcx
  unsigned __int8 v104; // al
  int v105; // ecx
  __int64 v106; // rcx
  int v107; // ecx
  unsigned __int16 *v109; // rsi
  unsigned int v110; // edi
  __int64 v111; // r9
  __int64 v112; // r11
  char v113; // al
  __int64 v114; // rax
  char v115; // cl
  char v116; // al
  unsigned int v117; // edi
  void *v118; // rsp
  __int64 v119; // r8
  bool v120; // cl
  __int64 v121; // rax
  char v122; // cl
  unsigned int ReserveTraceBufferStatus; // ebx
  BOOLEAN v124; // al
  int v125; // ecx
  _WORD *v126; // r10
  __int64 v127; // r15
  __int16 v128; // si
  unsigned __int16 v129; // si
  _WORD *v130; // rdi
  unsigned int *v131; // rdi
  unsigned int *v132; // rdi
  PVOID PoolWithTag; // rbx
  int v134; // [rsp+0h] [rbp-640h]
  char v135; // [rsp+30h] [rbp-610h] BYREF
  char v136; // [rsp+640h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+641h] [rbp+1h]
  unsigned int Size; // [rsp+644h] [rbp+4h]
  unsigned __int8 Size_4; // [rsp+648h] [rbp+8h]
  unsigned int v140; // [rsp+650h] [rbp+10h]
  int v141; // [rsp+654h] [rbp+14h]
  unsigned __int16 v142; // [rsp+658h] [rbp+18h]
  unsigned __int8 v143; // [rsp+65Ch] [rbp+1Ch]
  unsigned __int16 v144; // [rsp+660h] [rbp+20h]
  char v145; // [rsp+664h] [rbp+24h]
  unsigned __int16 v146; // [rsp+668h] [rbp+28h]
  unsigned int v147; // [rsp+66Ch] [rbp+2Ch]
  int v148; // [rsp+670h] [rbp+30h]
  __int16 v149; // [rsp+674h] [rbp+34h]
  unsigned int v150; // [rsp+678h] [rbp+38h]
  int v151; // [rsp+67Ch] [rbp+3Ch]
  __int64 v152; // [rsp+680h] [rbp+40h]
  unsigned int *v153; // [rsp+688h] [rbp+48h]
  __int64 v154; // [rsp+690h] [rbp+50h]
  __int64 v155; // [rsp+698h] [rbp+58h]
  void *Src; // [rsp+6A0h] [rbp+60h]
  __int64 v157; // [rsp+6A8h] [rbp+68h]
  void *StackLookasideListEntry; // [rsp+6B0h] [rbp+70h] BYREF
  _OWORD *v159; // [rsp+6B8h] [rbp+78h]
  __int64 v160; // [rsp+6C0h] [rbp+80h]
  unsigned int *v161; // [rsp+6C8h] [rbp+88h]
  __int64 v162; // [rsp+6D0h] [rbp+90h]
  PSLIST_ENTRY v163; // [rsp+6D8h] [rbp+98h]
  void *v164; // [rsp+6E0h] [rbp+A0h]
  void *v165; // [rsp+6E8h] [rbp+A8h]
  __int64 v166; // [rsp+6F0h] [rbp+B0h]
  struct _KTHREAD *v167; // [rsp+6F8h] [rbp+B8h]
  unsigned __int16 *v168; // [rsp+700h] [rbp+C0h] BYREF
  unsigned __int64 v169; // [rsp+708h] [rbp+C8h]
  void *v170; // [rsp+710h] [rbp+D0h]
  __int64 v171; // [rsp+718h] [rbp+D8h]
  unsigned __int64 HighLimit; // [rsp+720h] [rbp+E0h] BYREF
  unsigned __int64 LowLimit; // [rsp+728h] [rbp+E8h] BYREF
  __int64 v174; // [rsp+730h] [rbp+F0h]
  unsigned __int64 *v175; // [rsp+738h] [rbp+F8h]
  char *v176; // [rsp+740h] [rbp+100h]
  __int128 v177; // [rsp+748h] [rbp+108h] BYREF
  __int64 v178; // [rsp+758h] [rbp+118h]
  _OWORD *v179; // [rsp+760h] [rbp+120h]
  _OWORD v180[25]; // [rsp+770h] [rbp+130h] BYREF

  v179 = a9;
  v19 = a14;
  v162 = a1;
  Size_4 = a2;
  v155 = a5;
  v154 = a11;
  v171 = a13;
  v170 = a16;
  v175 = a17;
  v20 = 0;
  v151 = 0;
  memset(v180, 0, 0x188uLL);
  v147 = 0;
  Src = 0LL;
  v163 = 0LL;
  StackLookasideListEntry = 0LL;
  v169 = 0LL;
  v149 = a15 & 0x200;
  v174 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a14 )
    v19 = a1;
  v160 = v19;
  if ( v170 )
  {
    if ( (a15 & 0x400) != 0 )
      v21 = 0;
    else
      v21 = *(_WORD *)v170;
  }
  else
  {
    v21 = 0;
  }
  v144 = v21;
  v136 = 0;
  v22 = *(_QWORD *)(a1 + 392);
  v152 = v22;
  v166 = v22;
  if ( v175 && *v175 )
  {
    v169 = *v175;
    v136 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v167 = CurrentThread;
  if ( !p_LockNV )
    p_LockNV = &CurrentThread->Header.LockNV;
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    CurrentIrql = KeGetCurrentIrql();
  else
    CurrentIrql = 15;
  v143 = CurrentIrql;
  v145 = 0;
  if ( !CurrentIrql )
  {
    --v167->KernelApcDisable;
    v145 = 1;
  }
  Size_4 &= ~a3;
  do
  {
    while ( 2 )
    {
      v24 = 1LL;
      while ( 1 )
      {
LABEL_17:
        v25 = !_BitScanForward((unsigned int *)&v26, Size_4);
        v147 = v26;
        if ( v25 )
          goto LABEL_29;
        v157 = v24;
        v177 = 0LL;
        v178 = 0LL;
        v168 = 0LL;
        v27 = 80;
        v141 = 80;
        v153 = 0LL;
        v161 = 0LL;
        v28 = 0;
        LOBYTE(v142) = 0;
        v29 = 0;
        v146 = 0;
        v148 = 0;
        v165 = 0LL;
        v176 = 0LL;
        Size_4 &= Size_4 - 1;
        v30 = (unsigned int)v26;
        v31 = v160 + 32 * (v26 + 4);
        if ( v171 )
        {
          v32 = *(_DWORD *)(v171 + 4LL * (*(unsigned __int16 *)(v31 + 6) >> 5));
          if ( _bittest(&v32, *(_BYTE *)(v31 + 6) & 0x1F) )
            continue;
        }
        if ( EtwpLevelKeywordEnabled(v31, *(_BYTE *)(v155 + 4), *(_QWORD *)(v155 + 8)) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( (a4 & 2) == 0 && SLODWORD(Process[1].DirectoryTableBase) >= 0 )
            break;
          if ( (*(_DWORD *)(v31 + 8) & 0x200) == 0 )
            break;
        }
      }
      v36 = *(_QWORD *)(v34 + 384);
      if ( v36
        && ((*(_DWORD *)(104 * v30 + v36) & 0x80000200) == 0x80000200
         || (*(_DWORD *)(104 * v30 + v36) & 0x80000100) == 0x80000100) )
      {
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(
                                 v34,
                                 v147,
                                 0,
                                 v33,
                                 *(_WORD *)v33,
                                 a10,
                                 v154,
                                 0,
                                 CurrentIrql) )
          goto LABEL_28;
        v34 = v160;
        v33 = v155;
        v24 = 1LL;
      }
      if ( v149 )
      {
        v86 = *(_QWORD *)(v33 + 8);
        v87 = *(_BYTE *)(v33 + 4);
        v88 = 0LL;
        v89 = *(_QWORD *)(v34 + 384);
        if ( v89 )
        {
          if ( (*(_DWORD *)(104 * v30 + v89) & 0x80000400) == 0x80000400 )
            v88 = *(_QWORD *)(104 * v30 + v89 + 96);
          if ( v88 )
          {
            v104 = *(_BYTE *)(v88 + 1);
            if ( (v87 <= v104 || !v104)
              && (!v86 || (v86 & *(_QWORD *)(v88 + 8)) != 0 && (v86 & *(_QWORD *)(v88 + 16)) == *(_QWORD *)(v88 + 16))
              && !(unsigned __int8)EtwpApplyEventNameFilter(
                                     v34,
                                     v147,
                                     a10,
                                     v154,
                                     0,
                                     CurrentIrql,
                                     *(_BYTE *)(v155 + 4),
                                     *(_QWORD *)(v155 + 8),
                                     0) )
            {
              goto LABEL_28;
            }
          }
          v24 = 1LL;
        }
      }
      v41 = *(unsigned __int16 *)(v31 + 6);
      v150 = *(unsigned __int16 *)(v31 + 6);
      if ( CurrentIrql >= 2u )
      {
        v43 = v152;
        if ( (unsigned int)v41 >= *(_DWORD *)(v152 + 16) )
        {
          LOBYTE(v44) = v24;
          v157 = v24;
        }
        else
        {
          _mm_lfence();
          v44 = *(_QWORD *)(*(_QWORD *)(v152 + 456) + 8 * v41);
          v157 = v44;
        }
      }
      else
      {
        v42 = ExAcquireRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v152 + 448) + 8 * v41),
                v24);
        v43 = v152;
        if ( v42 )
        {
          if ( (unsigned int)v41 >= *(_DWORD *)(v152 + 16) )
          {
            v157 = 1LL;
          }
          else
          {
            _mm_lfence();
            v157 = *(_QWORD *)(8 * v41 + *(_QWORD *)(v152 + 456));
          }
          v28 = 1;
          LOBYTE(v142) = 1;
        }
        else
        {
          v28 = v142;
        }
        LOBYTE(v44) = v157;
      }
      if ( (v44 & 1) != 0 )
      {
        if ( v28 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v43 + 448) + 8 * v41), 1u);
        if ( (_DWORD)v41 != 3 )
        {
LABEL_28:
          v22 = v152;
          continue;
        }
        v22 = v152;
        v105 = -1073741058;
        if ( !*(_DWORD *)(v152 + 4068) )
          v105 = -1073741816;
        v151 = v105;
LABEL_29:
        v38 = v155;
        goto LABEL_30;
      }
      break;
    }
    v45 = v179 != 0LL ? 8 : 0;
    v46 = 104;
    if ( !v179 )
      v46 = 80;
    v47 = v46;
    v140 = v46;
    if ( (*(_DWORD *)(v31 + 8) & 0xFFFFFF9F) == 0 )
      goto LABEL_52;
    if ( EtwpPagingDisabled || (a4 & 1) != 0 || !(unsigned int)MmCanThreadFault(v179, v43) || BYTE6(v167[1].Queue) )
      v73 = 0;
    else
      v73 = 128;
    v45 |= v73;
    v74 = *(_DWORD *)(v31 + 8);
    v75 = v46;
    Size = v46;
    v140 = v46;
    if ( (v74 & 0x800) != 0 )
    {
      if ( v174 != EtwpHostSiloState )
      {
        v45 |= 0x100u;
        v75 = v46 + ((*(unsigned __int16 *)(v174 + 4200) + 15) & 0xFFFFFFF8);
        Size = v75;
        v140 = v75;
      }
      v20 = 0;
    }
    if ( (v74 & 1) != 0 && (v45 & 0x80u) != 0 )
    {
      v76 = (unsigned __int16 *)Src;
      if ( Src )
        goto LABEL_105;
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v79 = RtlpInterlockedPopEntrySList(&P->ListHead);
      Src = v79;
      if ( !v79 )
      {
        ++P->AllocateMisses;
        L = CurrentPrcb->PPLookasideList[8].L;
        ++L->TotalAllocates;
        v79 = RtlpInterlockedPopEntrySList(&L->ListHead);
        Src = v79;
        if ( !v79 )
        {
          ++L->AllocateMisses;
          v79 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                (unsigned int)L->Type,
                                L->Size,
                                L->Tag);
          Src = v79;
        }
      }
      if ( v79 )
        LODWORD(v79->Next) = CurrentPrcb->Number;
      v163 = v79;
      if ( v79 )
        EtwpGetSidExtendedHeaderItem();
      v76 = (unsigned __int16 *)Src;
      v29 = v146;
      v75 = Size;
      if ( Src )
      {
LABEL_105:
        v45 |= 2u;
        v75 = *v76 + (unsigned int)v75;
        Size = v75;
        v140 = v75;
      }
    }
    v80 = *(_DWORD *)(v31 + 8);
    if ( (v80 & 2) != 0 )
    {
      v45 |= 1u;
      v75 = (unsigned int)(v75 + 16);
      Size = v75;
      v140 = v75;
    }
    if ( (v80 & 0x80u) == 0 || (unsigned __int8)ObGetCurrentIrql(v75, v43) >= 2u && KeGetCurrentPrcb()->NestingLevel )
    {
      v47 = Size;
    }
    else
    {
      v45 |= 0x20u;
      v47 = Size + 16;
      Size = v47;
      v140 = v47;
    }
    v81 = *(_DWORD *)(v31 + 8);
    if ( (v81 & 0x100) != 0 )
    {
      v45 |= 0x40u;
      v47 += 16;
      Size = v47;
      v140 = v47;
    }
    if ( (v81 & 4) == 0 || EtwpPagingDisabled )
      goto LABEL_52;
    v106 = *(_QWORD *)(v160 + 384);
    if ( !v106
      || (v107 = *(_DWORD *)(104 * v30 + v106), (v107 & 0x80001000) != 0x80001000)
      && (v107 & 0x80002000) != 0x80002000
      && (v107 & 0x80004000) != 0x80004000 )
    {
      v49 = a10;
      v48 = v154;
LABEL_210:
      if ( (v136 & 1) == 0 )
      {
        v117 = 256;
        StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
        if ( !StackLookasideListEntry )
        {
          HighLimit = 0LL;
          LowLimit = 0LL;
          IoGetStackLimits(&LowLimit, &HighLimit);
          if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
          {
            v118 = alloca(1552LL);
            StackLookasideListEntry = &v135;
            v117 = 192;
          }
        }
        if ( StackLookasideListEntry )
        {
          v119 = 0LL;
          v120 = (*(_DWORD *)(v157 + 832) & 0x40000000) == 0;
          v121 = *(_QWORD *)(v162 + 40) - *(_QWORD *)&EventTracingProvGuid.Data1;
          if ( !v121 )
            v121 = *(_QWORD *)(v162 + 48) - *(_QWORD *)EventTracingProvGuid.Data4;
          if ( !v121 && *(_WORD *)v155 == 18 )
          {
            v45 |= 0x10u;
            v119 = v162 + 80;
            v120 = 0;
          }
          LOBYTE(v134) = v120;
          EtwpGetStackExtendedHeaderItem(v167, a4, v117, &StackLookasideListEntry, v134, v119);
          if ( StackLookasideListEntry && v117 == 256 )
            v122 = 2;
          else
            v122 = 0;
          v136 = v122 | v136 & 0xFD;
        }
        v136 |= 1u;
        v47 = Size;
      }
      if ( StackLookasideListEntry )
      {
        v45 |= 4u;
        v47 += *(unsigned __int16 *)StackLookasideListEntry;
        v140 = v47;
      }
      goto LABEL_54;
    }
    v109 = (unsigned __int16 *)v155;
    v110 = v147;
    if ( !(unsigned __int8)EtwpApplyLevelKwFilter(v160, v147, *(unsigned __int8 *)(v155 + 4), *(_QWORD *)(v155 + 8)) )
    {
      v47 = Size;
LABEL_52:
      v48 = v154;
LABEL_53:
      v49 = a10;
      goto LABEL_54;
    }
    LOBYTE(v111) = v143 < 2u;
    v113 = EtwpApplyStackWalkIdFilter(*v109, v112, v110, v111);
    v48 = v154;
    if ( !v113 )
    {
      v47 = Size;
      goto LABEL_53;
    }
    v114 = *((_QWORD *)v109 + 1);
    v115 = *((_BYTE *)v109 + 4);
    v49 = a10;
    v116 = EtwpApplyEventNameFilter(v160, v110, a10, v154, 0, CurrentIrql, v115, v114, 1);
    v47 = Size;
    if ( v116 )
      goto LABEL_210;
LABEL_54:
    v159 = &v180[3 * LODWORD(v180[24])];
    v50 = 0;
    v51 = v148;
    while ( v50 < v49 )
    {
      if ( v149 )
        v52 = *(_BYTE *)(v48 + 16LL * v50 + 12);
      else
        v52 = 0;
      if ( !v52 )
      {
        v47 += *(_DWORD *)(v48 + 16LL * v50 + 8);
        v140 = v47;
        goto LABEL_60;
      }
      if ( v52 == 1 )
      {
        v29 += *(_WORD *)(v48 + 16LL * v50 + 8);
        v148 = ++v51;
        ++v50;
      }
      else
      {
LABEL_60:
        ++v50;
      }
    }
    v146 = v29;
    Size = v47;
    v25 = v51 == 0;
    v53 = v159;
    if ( !v25 )
    {
      v47 += (v29 + 15) & 0xFFFFFFF8;
      Size = v47;
      v140 = v47;
    }
    v54 = v144;
    if ( v144 )
    {
      v47 += (v144 + 15) & 0xFFFFFFF8;
      Size = v47;
      v140 = v47;
    }
    *((_DWORD *)v159 + 10) = v47;
    v55 = v157;
    v56 = EtwpReserveTraceBuffer(v157, v47, (unsigned int)&v177, (unsigned int)&v168, 0);
    v58 = (_OWORD *)v56;
    v159 = (_OWORD *)v56;
    if ( v56 )
    {
      *(_QWORD *)v53 = v55;
      *((_QWORD *)v53 + 1) = v56;
      v53[1] = v177;
      *((_QWORD *)v53 + 4) = v178;
      ++LODWORD(v180[24]);
      v59 = *(_DWORD *)(v55 + 20);
      v60 = Size;
      *(_DWORD *)v58 = Size | v59;
      v61 = (_WORD *)v58 + 2;
      v164 = (char *)v58 + 4;
      *((_WORD *)v58 + 2) = a6;
      *((_WORD *)v58 + 3) = a7;
      *(_OWORD *)((char *)v58 + 24) = *(_OWORD *)(v162 + 40);
      *(_OWORD *)((char *)v58 + 40) = *(_OWORD *)v155;
      if ( a8 )
        v62 = *a8;
      else
        v62 = NullGuid;
      v58[4] = v62;
      *((_QWORD *)v58 + 2) = v168;
      *((_DWORD *)v58 + 2) = p_LockNV[288];
      *((_DWORD *)v58 + 3) = p_LockNV[286];
      *((_DWORD *)v58 + 14) = p_LockNV[163];
      *((_DWORD *)v58 + 15) = p_LockNV[183];
      if ( v45 )
      {
        if ( (v45 & 0x100) != 0 )
        {
          v126 = v58 + 5;
          v153 = (unsigned int *)v126;
          v127 = v174;
          v128 = (*(_WORD *)(v174 + 4200) + 15) & 0xFFF8;
          *v126 = v128;
          v126[1] = 16;
          v126[3] = *(_WORD *)(v127 + 4200);
          v126[2] = 0;
          v129 = v128 - *(_WORD *)(v127 + 4200) - 8;
          v130 = v126 + 4;
          memmove(v126 + 4, *(const void **)(v127 + 4192), *(unsigned __int16 *)(v127 + 4200));
          memset((char *)v130 + *(unsigned __int16 *)(v127 + 4200), 0, v129);
          *v61 |= 1u;
          v82 = v153;
          v27 = *(unsigned __int16 *)v153 + 80;
          v141 = v27;
          v161 = v153;
          v20 = 0;
          v60 = Size;
          v58 = v159;
        }
        else
        {
          v82 = v153;
        }
        if ( (v45 & 8) != 0 )
        {
          v103 = (unsigned __int16 *)((char *)v58 + v27);
          *(_DWORD *)v103 = 65560;
          *((_DWORD *)v103 + 1) = 0x100000;
          *(_OWORD *)(v103 + 4) = *a9;
          *v61 |= 1u;
          v27 += 24;
          v141 = v27;
          if ( v82 )
            *((_WORD *)v82 + 2) |= 1u;
          v82 = (unsigned int *)v103;
          v153 = (unsigned int *)v103;
          v161 = (unsigned int *)v103;
        }
        if ( (v45 & 2) != 0 )
        {
          v83 = (unsigned __int16 *)((char *)v58 + v27);
          memmove(v83, Src, *(unsigned __int16 *)Src);
          *v61 |= 1u;
          v27 += *(unsigned __int16 *)Src;
          v141 = v27;
          if ( v153 )
            *((_WORD *)v153 + 2) |= 1u;
          v82 = (unsigned int *)v83;
          v153 = (unsigned int *)v83;
          v161 = (unsigned int *)v83;
          v58 = v159;
        }
        if ( (v45 & 1) != 0 )
        {
          v131 = (unsigned int *)((char *)v58 + v27);
          *v131 = 196624;
          v131[1] = 0x40000;
          v131[2] = PsGetCurrentProcessSessionId();
          *v61 |= 1u;
          v27 += 16;
          v141 = v27;
          if ( v153 )
            *((_WORD *)v153 + 2) |= 1u;
          v82 = v131;
          v153 = v131;
          v161 = v131;
          v58 = v159;
        }
        if ( (v45 & 0x20) != 0 )
        {
          v96 = (unsigned __int16 *)((char *)v58 + v27);
          *(_DWORD *)v96 = 851984;
          *((_DWORD *)v96 + 1) = 0x80000;
          *((_QWORD *)v96 + 1) = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[6] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
          *v61 |= 1u;
          v27 += 16;
          v141 = v27;
          if ( v82 )
            *((_WORD *)v82 + 2) |= 1u;
          v82 = (unsigned int *)v96;
          v153 = (unsigned int *)v96;
          v161 = (unsigned int *)v96;
          v54 = v144;
        }
        if ( (v45 & 0x40) != 0 )
        {
          v57 = (unsigned __int16 *)((char *)v58 + v27);
          *(_DWORD *)v57 = 655376;
          *((_DWORD *)v57 + 1) = 0x80000;
          if ( (v136 & 4) != 0 )
          {
            v95 = v169;
          }
          else
          {
            v94 = KeGetCurrentPrcb();
            v95 = _InterlockedIncrement64((volatile signed __int64 *)v94->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v94->Number << 48);
            v169 = v95;
            v136 |= 4u;
            v54 = v144;
            if ( v175 )
              *v175 = v95;
          }
          *((_QWORD *)v57 + 1) = v95;
          *v61 |= 1u;
          v27 += 16;
          v141 = v27;
          if ( v82 )
            *((_WORD *)v82 + 2) |= 1u;
          v153 = (unsigned int *)v57;
          v161 = (unsigned int *)v57;
        }
        if ( (v45 & 4) != 0 )
        {
          v132 = (unsigned int *)((char *)v58 + v27);
          memmove(v132, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
          if ( *((_QWORD *)v132 + 1) && (v45 & 0x10) == 0 )
          {
            if ( v152 == EtwpHostSiloState
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
                v150);
              if ( !(unsigned __int8)KeInsertQueueApc(PoolWithTag, v132[2], v132[3], 0LL) )
              {
                ExFreePoolWithTag(PoolWithTag, 0);
                goto LABEL_251;
              }
            }
            else
            {
LABEL_251:
              *((_QWORD *)v132 + 1) = 0LL;
            }
          }
          *v61 |= 1u;
          v27 += *(unsigned __int16 *)StackLookasideListEntry;
          v141 = v27;
          if ( v153 )
            *((_WORD *)v153 + 2) |= 1u;
          v153 = v132;
          v161 = v132;
          v58 = v159;
        }
      }
      if ( v54 )
      {
        v90 = (unsigned __int16 *)((char *)v58 + v27);
        v168 = v90;
        v91 = (v54 + 15) & 0xFFF8;
        *v90 = v91;
        *(_DWORD *)(v90 + 1) = 12;
        v90[3] = v54;
        v92 = v91 - v54 - 8;
        v142 = v92;
        memmove(v90 + 4, v170, v54);
        memset((char *)v90 + v54 + 8, 0, v92);
        v20 = 0;
        v93 = v153;
        *v61 |= 1u;
        v27 += *v90;
        v141 = v27;
        if ( v93 )
          *((_WORD *)v93 + 2) |= 1u;
        v63 = (unsigned int *)v90;
        v60 = Size;
      }
      else
      {
        v63 = v153;
      }
      v64 = v148;
      v65 = v159;
      if ( v148 )
      {
        v97 = (unsigned __int16 *)((char *)v159 + v27);
        v98 = v146;
        v99 = (v146 + 15) & 0xFFF8;
        *v97 = v99;
        *(_DWORD *)(v97 + 1) = 11;
        v97[3] = v98;
        v165 = v97 + 4;
        v176 = (char *)v97 + v98 + 8;
        memset(v176, 0, (unsigned __int16)(v99 - v98 - 8));
        *v61 |= 1u;
        v27 += *v97;
        v141 = v27;
        v64 = v148;
        if ( v63 )
          *((_WORD *)v63 + 2) |= 1u;
      }
      v66 = 0;
      while ( 1 )
      {
        v147 = v66;
        if ( v66 >= a10 )
          break;
        v67 = *(unsigned int *)(v154 + 16LL * v66 + 8);
        Size = *(_DWORD *)(v154 + 16LL * v66 + 8);
        v68 = *(_QWORD **)(v154 + 16LL * v66);
        if ( v149 )
          v69 = *(_BYTE *)(v154 + 16LL * v66 + 12);
        else
          v69 = 0;
        if ( !v69 )
        {
          v70 = (char *)v65 + v27;
          v164 = v70;
          v27 += v67;
          v141 = v27;
          if ( v27 > v60 )
            KeBugCheckEx(0x11Du, 5uLL, v27, v60, 0LL);
          memmove(v70, v68, v67);
LABEL_79:
          ++v66;
          v65 = v159;
          v64 = v148;
          continue;
        }
        v57 = (unsigned __int16 *)((unsigned int)v69 - 1);
        if ( v69 != 1 )
        {
          if ( v69 == 3 && (_DWORD)v67 == 8 )
            *((_QWORD *)v65 + 2) = *v68;
          goto LABEL_79;
        }
        v100 = (char *)v165;
        if ( !v165 || (v101 = v67, v164 = (void *)v67, (char *)v165 + v67 > v176) || !v64 )
          KeBugCheckEx(0x11Du, 5uLL, v27, v60, 0LL);
        memmove(v165, v68, v67);
        v165 = &v100[v101];
        --v148;
        ++v66;
        v65 = v159;
        v64 = v148;
      }
      v71 = v157;
      if ( (*(_DWORD *)(v157 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v157, &v177, v57);
      }
      if ( *(_QWORD *)(v71 + 1304) )
        EtwpInvokeEventCallback(v71, &v177, v162 + 40, 0LL);
      v22 = v152;
      v24 = 1LL;
      if ( v171 )
        *(_DWORD *)(v171 + 4LL * (v150 >> 5)) |= 1 << (v150 & 0x1F);
      goto LABEL_17;
    }
    ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v55, Size, v57);
    v124 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
    v38 = v155;
    if ( v124 )
      EtwpTraceLostEvent(v162 + 40, v155, v55 + 152, ReserveTraceBufferStatus);
    v125 = v151;
    if ( v151 >= 0 )
    {
      if ( (*(_DWORD *)(v55 + 12) & 0x8000000) == 0 )
        v125 = ReserveTraceBufferStatus;
      v151 = v125;
    }
    v22 = v152;
    if ( (_BYTE)v142 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v152 + 448) + 8LL * v150), 1u);
  }
  while ( ReserveTraceBufferStatus != -1073741675 );
  v151 = -1073741675;
LABEL_30:
  if ( (v136 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v151 < 0 )
  {
    EtwpFailLogging(
      *(unsigned __int8 *)(v38 + 4),
      *(_QWORD *)(v38 + 8),
      v162,
      (unsigned int)v180,
      Size_4,
      v151,
      v38,
      v143 < 2u);
  }
  else
  {
    while ( v20 < LODWORD(v180[24]) )
    {
      EtwpReleaseTraceBuffer((signed __int64 *)&v180[3 * v20 + 1]);
      if ( CurrentIrql < 2u )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v22 + 448) + 8LL * **v72),
          1u);
      ++v20;
    }
  }
  if ( v145 )
    KeLeaveCriticalRegionThread((__int64)v167);
  v39 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v84 = KeGetCurrentPrcb();
    v85 = v84->PPLookasideList[8].P;
    ++v85->TotalFrees;
    if ( LOWORD(v85->ListHead.Alignment) < v85->Depth
      || (++v85->FreeMisses,
          v85 = v84->PPLookasideList[8].L,
          ++v85->TotalFrees,
          LOWORD(v85->ListHead.Alignment) < v85->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v85->ListHead, v39);
    }
    else
    {
      ++v85->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))v85->FreeEx)(v39);
    }
  }
  return (unsigned int)v151;
}
