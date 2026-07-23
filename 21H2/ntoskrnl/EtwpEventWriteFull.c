/*
 * XREFs of EtwpEventWriteFull @ 0x14027FA90
 * Callers:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x1403C0A44 (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x1405A5B10 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x1405A5E70 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x1405A878C (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x140755498 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14023A8A0 (ObGetCurrentIrql.c)
 *     KeInitializeApc @ 0x140266E00 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x14027E260 (KeInsertQueueApc.c)
 *     EtwpReleaseTraceBuffer @ 0x14027F770 (EtwpReleaseTraceBuffer.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x1402810A0 (EtwpApplyEventIdPayloadFilter.c)
 *     MmCanThreadFault @ 0x140281228 (MmCanThreadFault.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402A5670 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402A58B0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1402C5480 (EtwpLevelKeywordEnabled.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     IoGetStackLimits @ 0x14035B170 (IoGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x14035B420 (KeAreInterruptsEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x14035B440 (EtwpReserveTraceBuffer.c)
 *     EtwpFailLogging @ 0x14036CCD4 (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036CF6C (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     Feature_1815603512__private_IsEnabledDeviceUsage @ 0x1403F9170 (Feature_1815603512__private_IsEnabledDeviceUsage.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A5FC4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A6E40 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceLostEvent @ 0x1405AAA04 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x1405AAD98 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405AB8A8 (EtwpInvokeEventCallback.c)
 *     EtwpApplyEventNameFilter @ 0x1405ABD64 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x1405AC1B8 (EtwpApplyLevelKwFilter.c)
 *     EtwpApplyStackWalkIdFilter @ 0x1405AC2D4 (EtwpApplyStackWalkIdFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071EC0C (EtwpGetSidExtendedHeaderItem.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  int v18; // r13d
  __int64 v20; // r15
  int v21; // r14d
  unsigned __int16 v23; // ax
  __int64 v24; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v26; // rax
  int v27; // esi
  unsigned int v28; // edi
  __int64 v29; // r9
  __int64 v30; // r11
  __int64 v31; // r8
  __int64 v32; // rdx
  bool v33; // zf
  __int64 v34; // rcx
  unsigned int v35; // r15d
  __int64 v36; // rdi
  __int64 v37; // r12
  __int64 v38; // r13
  int v39; // ecx
  char v40; // al
  _KPROCESS *Process; // rcx
  __int64 v42; // rcx
  int v43; // ecx
  __int64 v45; // rcx
  unsigned __int8 v46; // al
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rbx
  int v50; // r15d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // ebx
  int v56; // edi
  unsigned int v57; // r14d
  int v58; // eax
  int v59; // eax
  unsigned __int16 *v60; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v63; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  int v65; // eax
  int v66; // eax
  __int64 v67; // r13
  __int64 v68; // rcx
  int v69; // ecx
  bool v70; // al
  unsigned __int16 *v71; // r12
  char v72; // si
  unsigned int v73; // edi
  unsigned int v74; // edi
  void *v75; // rsp
  __int64 v76; // r8
  bool v77; // cl
  char v78; // cl
  char *v79; // r12
  unsigned int v80; // esi
  __int64 v81; // rdi
  unsigned __int8 v82; // al
  unsigned int v83; // eax
  int v84; // eax
  int v85; // esi
  signed __int64 *v86; // rbx
  __int64 v87; // rdi
  __int64 v88; // rsi
  unsigned __int16 v89; // r13
  unsigned int v90; // eax
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rsi
  unsigned int ReserveTraceBufferStatus; // ebx
  unsigned __int8 v99; // r15
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  int v104; // eax
  int IsEnabledDeviceUsage; // eax
  _DWORD *v106; // r8
  unsigned __int8 v107; // cl
  _WORD *v108; // r12
  GUID v109; // xmm0
  unsigned __int16 *v110; // rdx
  __int64 v111; // r15
  unsigned __int16 v112; // si
  unsigned __int16 v113; // si
  _WORD *v114; // rdi
  _DWORD *v115; // rdi
  unsigned __int16 *v116; // rcx
  int SessionId; // eax
  int v118; // ecx
  unsigned __int16 *v119; // rdx
  struct _KPRCB *v120; // rcx
  unsigned __int64 v121; // rax
  PVOID PoolWithTag; // rbx
  __int16 v123; // si
  unsigned __int16 v124; // si
  int v125; // r15d
  unsigned __int16 *v126; // rdx
  int v127; // r10d
  __int64 v128; // rsi
  unsigned __int16 *v129; // rbx
  __int64 v130; // rcx
  unsigned __int16 v131; // dx
  char *v132; // r13
  unsigned int i; // edi
  size_t v134; // rdx
  _QWORD *v135; // r9
  size_t v136; // rbx
  void *v137; // rcx
  __int64 v138; // r13
  _SLIST_ENTRY *v139; // r8
  struct _KPRCB *v140; // rdx
  _GENERAL_LOOKASIDE *v141; // rcx
  int BugCheckParameter4; // [rsp+0h] [rbp-640h]
  char v143; // [rsp+30h] [rbp-610h] BYREF
  char v144; // [rsp+640h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+641h] [rbp+1h]
  unsigned int v146; // [rsp+644h] [rbp+4h]
  unsigned __int8 v147; // [rsp+648h] [rbp+8h]
  char v148; // [rsp+650h] [rbp+10h]
  int v149; // [rsp+658h] [rbp+18h]
  int v150; // [rsp+65Ch] [rbp+1Ch]
  int v151; // [rsp+660h] [rbp+20h]
  int Size; // [rsp+664h] [rbp+24h]
  unsigned __int16 Size_4; // [rsp+668h] [rbp+28h]
  int v154; // [rsp+66Ch] [rbp+2Ch]
  unsigned __int8 v155; // [rsp+670h] [rbp+30h]
  char v156; // [rsp+671h] [rbp+31h]
  int v157; // [rsp+674h] [rbp+34h]
  int v158; // [rsp+678h] [rbp+38h]
  unsigned int v159; // [rsp+67Ch] [rbp+3Ch]
  unsigned int v160; // [rsp+680h] [rbp+40h]
  __int64 v161; // [rsp+688h] [rbp+48h]
  __int16 v162; // [rsp+690h] [rbp+50h]
  unsigned __int16 *v163; // [rsp+698h] [rbp+58h]
  unsigned __int16 *v164; // [rsp+6A0h] [rbp+60h]
  __int64 v165; // [rsp+6A8h] [rbp+68h]
  void *Src; // [rsp+6B0h] [rbp+70h]
  int v167; // [rsp+6B8h] [rbp+78h]
  void *StackLookasideListEntry; // [rsp+6C0h] [rbp+80h] BYREF
  _DWORD *v169; // [rsp+6C8h] [rbp+88h]
  __int64 v170; // [rsp+6D0h] [rbp+90h]
  __int64 v171; // [rsp+6D8h] [rbp+98h]
  __int64 v172; // [rsp+6E0h] [rbp+A0h]
  __int64 v173; // [rsp+6E8h] [rbp+A8h]
  PSLIST_ENTRY v174; // [rsp+6F0h] [rbp+B0h]
  void *v175; // [rsp+6F8h] [rbp+B8h]
  void *v176; // [rsp+700h] [rbp+C0h]
  __int64 v177; // [rsp+708h] [rbp+C8h]
  struct _KTHREAD *v178; // [rsp+710h] [rbp+D0h]
  _DWORD *v179; // [rsp+718h] [rbp+D8h] BYREF
  unsigned __int64 v180; // [rsp+720h] [rbp+E0h]
  void *v181; // [rsp+728h] [rbp+E8h]
  __int64 v182; // [rsp+730h] [rbp+F0h]
  unsigned __int64 HighLimit; // [rsp+738h] [rbp+F8h] BYREF
  unsigned __int64 LowLimit; // [rsp+740h] [rbp+100h] BYREF
  __int64 v185; // [rsp+748h] [rbp+108h]
  unsigned __int64 *v186; // [rsp+750h] [rbp+110h]
  char *v187; // [rsp+758h] [rbp+118h]
  __int128 v188; // [rsp+760h] [rbp+120h] BYREF
  __int64 v189; // [rsp+770h] [rbp+130h]
  _OWORD *v190; // [rsp+778h] [rbp+138h]
  _DWORD v191[100]; // [rsp+780h] [rbp+140h] BYREF
  _DWORD *v193; // [rsp+9C8h] [rbp+388h]

  v18 = a2;
  v190 = a9;
  v20 = a14;
  v172 = a1;
  v163 = a5;
  v173 = a11;
  v182 = a13;
  v181 = a16;
  v186 = a17;
  v21 = 0;
  v158 = 0;
  memset(v191, 0, 0x188uLL);
  v160 = 0;
  Src = 0LL;
  v174 = 0LL;
  StackLookasideListEntry = 0LL;
  v180 = 0LL;
  v162 = a15 & 0x200;
  v185 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
  LOBYTE(v154) = 0;
  v146 = 0;
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a14 )
    v20 = a1;
  v165 = v20;
  if ( v181 )
  {
    if ( (a15 & 0x400) != 0 )
      v23 = 0;
    else
      v23 = *(_WORD *)v181;
  }
  else
  {
    v23 = 0;
  }
  Size_4 = v23;
  v144 = 0;
  v24 = *(_QWORD *)(a1 + 392);
  v161 = v24;
  v177 = v24;
  if ( v186 && *v186 )
  {
    v180 = *v186;
    v144 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v178 = CurrentThread;
  v26 = a12;
  if ( !a12 )
    v26 = (__int64)CurrentThread;
  v193 = (_DWORD *)v26;
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    CurrentIrql = KeGetCurrentIrql();
  else
    CurrentIrql = 15;
  v155 = CurrentIrql;
  v156 = 0;
  if ( !CurrentIrql )
  {
    --v178->KernelApcDisable;
    v156 = 1;
  }
  LOBYTE(v18) = ~a3 & v18;
  v150 = v18;
  v27 = v18;
  v28 = 0;
  v29 = v20;
  while ( 1 )
  {
    v30 = (__int64)v163;
    v31 = 1LL;
LABEL_22:
    v32 = 80LL;
LABEL_23:
    while ( 2 )
    {
      v33 = !_BitScanForward((unsigned int *)&v34, (unsigned __int8)v27);
      v160 = v34;
      if ( v33 )
        goto LABEL_155;
      v188 = 0LL;
      v189 = 0LL;
      v179 = 0LL;
      v35 = 80;
      Size = 80;
      v151 = 80;
      v164 = 0LL;
      v169 = 0LL;
      v159 = 0;
      v157 = 0;
      v175 = 0LL;
      v187 = 0LL;
      LOBYTE(v154) = 0;
      LOBYTE(v36) = 1;
      v170 = 1LL;
      LOBYTE(v27) = (v27 - 1) & v27;
      v150 = v27;
      v148 = v27;
      v37 = (unsigned int)v34;
      v38 = v29 + 32 * (v34 + 4);
      if ( v182
        && (v39 = *(_DWORD *)(v182 + 4LL * (*(unsigned __int16 *)(v38 + 6) >> 5)),
            v32 = 80LL,
            _bittest(&v39, *(_BYTE *)(v38 + 6) & 0x1F))
        || (v40 = EtwpLevelKeywordEnabled(v38, *(unsigned __int8 *)(v30 + 4), *(_QWORD *)(v30 + 8)),
            v32 = 80LL,
            v31 = 1LL,
            !v40)
        || ((Process = KeGetCurrentThread()->ApcState.Process, (a4 & 2) != 0)
         || SLODWORD(Process[1].DirectoryTableBase) < 0)
        && (*(_DWORD *)(v38 + 8) & 0x200) != 0 )
      {
        v28 = v146;
        continue;
      }
      break;
    }
    v42 = *(_QWORD *)(v29 + 384);
    if ( v42 )
    {
      v43 = *(_DWORD *)(104 * v37 + v42);
      if ( (v43 & 0x80000200) == 0x80000200 || (v43 & 0x80000100) == 0x80000100 )
      {
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(
                                 v165,
                                 v160,
                                 0,
                                 v30,
                                 *(_WORD *)v30,
                                 a10,
                                 v173,
                                 0,
                                 CurrentIrql) )
          goto LABEL_69;
        v30 = (__int64)v163;
        v29 = v165;
      }
    }
    if ( v162 )
    {
      v32 = *(_QWORD *)(v30 + 8);
      v45 = 0LL;
      v31 = *(_QWORD *)(v29 + 384);
      if ( v31 )
      {
        v29 = 104 * v37;
        if ( (*(_DWORD *)(104 * v37 + v31) & 0x80000400) == 0x80000400 )
          v45 = *(_QWORD *)(v29 + v31 + 96);
        if ( v45 )
        {
          v46 = *(_BYTE *)(v45 + 1);
          if ( *(_BYTE *)(v30 + 4) <= v46 || !v46 )
          {
            if ( !v32 || (v32 & *(_QWORD *)(v45 + 8)) != 0 && (v47 = *(_QWORD *)(v45 + 16), v32 &= v47, v32 == v47) )
            {
              if ( !(unsigned __int8)EtwpApplyEventNameFilter(
                                       v165,
                                       v160,
                                       a10,
                                       v173,
                                       0,
                                       CurrentIrql,
                                       *(_BYTE *)(v30 + 4),
                                       *(_QWORD *)(v30 + 8),
                                       0) )
              {
                v27 = v150;
LABEL_69:
                v28 = v146;
                v29 = v165;
                continue;
              }
            }
          }
        }
      }
    }
    v48 = *(unsigned __int16 *)(v38 + 6);
    v146 = v48;
    v167 = v48;
    if ( CurrentIrql >= 2u )
    {
      if ( (unsigned int)v48 >= *(_DWORD *)(v24 + 16) )
      {
        LOBYTE(v36) = 1;
        v170 = 1LL;
      }
      else
      {
        _mm_lfence();
        v36 = *(_QWORD *)(*(_QWORD *)(v24 + 456) + 8 * v48);
        v170 = v36;
        v48 = (unsigned int)v48;
      }
    }
    else
    {
      v49 = 8 * v48;
      if ( ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v161 + 448) + 8 * v48),
             1u) )
      {
        if ( v146 >= *(_DWORD *)(v161 + 16) )
        {
          LOBYTE(v36) = 1;
          v170 = 1LL;
        }
        else
        {
          _mm_lfence();
          v36 = *(_QWORD *)(v49 + *(_QWORD *)(v161 + 456));
          v170 = v36;
        }
        LOBYTE(v154) = 1;
        v48 = v146;
      }
      else
      {
        v48 = v146;
      }
      v24 = v161;
    }
    if ( (v36 & 1) != 0 )
    {
      LOBYTE(v50) = v154;
      if ( (_BYTE)v154 )
      {
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v24 + 448) + 8 * v48), 1u);
        v50 = (unsigned __int8)v50;
        if ( (unsigned int)Feature_1815603512__private_IsEnabledDeviceUsage(v52, v51, v53, v54) )
          v50 = 0;
        v154 = v50;
      }
      v28 = v146;
      if ( v146 != 3 )
      {
        v27 = v150;
        v29 = v165;
        continue;
      }
      v34 = 3221225480LL;
      v21 = -1073741058;
      if ( !*(_DWORD *)(v24 + 4068) )
        v21 = -1073741816;
      LOBYTE(v27) = v150;
      goto LABEL_155;
    }
    v55 = v190 != 0LL ? 8 : 0;
    v56 = 104;
    if ( !v190 )
      v56 = 80;
    v57 = v56;
    v149 = v56;
    if ( (*(_DWORD *)(v38 + 8) & 0xFFFFFF9F) != 0 )
    {
      if ( EtwpPagingDisabled
        || (a4 & 1) != 0
        || !(unsigned int)MmCanThreadFault(v190, v32, v31, v29)
        || (v58 = 128, BYTE6(v178[1].Queue)) )
      {
        v58 = 0;
      }
      v55 |= v58;
      v59 = *(_DWORD *)(v38 + 8);
      v149 = v56;
      if ( (v59 & 0x800) != 0 )
      {
        if ( v185 )
        {
          v149 = v56;
          if ( v185 != EtwpHostSiloState )
          {
            v55 |= 0x100u;
            v57 = v56 + ((*(unsigned __int16 *)(v185 + 4200) + 15) & 0xFFFFFFF8);
            v149 = v57;
          }
        }
        v35 = Size;
      }
      if ( (v59 & 1) != 0 && (v55 & 0x80u) != 0 )
      {
        v60 = (unsigned __int16 *)Src;
        if ( Src )
          goto LABEL_96;
        CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[8].P;
        ++P->TotalAllocates;
        v63 = RtlpInterlockedPopEntrySList(&P->ListHead);
        Src = v63;
        if ( !v63 )
        {
          ++P->AllocateMisses;
          L = CurrentPrcb->PPLookasideList[8].L;
          ++L->TotalAllocates;
          v63 = RtlpInterlockedPopEntrySList(&L->ListHead);
          Src = v63;
          if ( !v63 )
          {
            ++L->AllocateMisses;
            v63 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                  (unsigned int)L->Type,
                                  L->Size,
                                  L->Tag);
            Src = v63;
          }
        }
        if ( v63 )
          LODWORD(v63->Next) = CurrentPrcb->Number;
        v174 = v63;
        if ( v63 )
        {
          EtwpGetSidExtendedHeaderItem();
          v60 = (unsigned __int16 *)Src;
          if ( Src )
          {
LABEL_96:
            v55 |= 2u;
            v57 += *v60;
            v149 = v57;
          }
        }
      }
      v65 = *(_DWORD *)(v38 + 8);
      if ( (v65 & 2) != 0 )
      {
        v55 |= 1u;
        v57 += 16;
        v149 = v57;
      }
      if ( (v65 & 0x80u) != 0 && (ObGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->NestingLevel) )
      {
        v55 |= 0x20u;
        v57 += 16;
        v149 = v57;
      }
      v66 = *(_DWORD *)(v38 + 8);
      if ( (v66 & 0x100) != 0 )
      {
        v55 |= 0x40u;
        v57 += 16;
        v149 = v57;
      }
      if ( (v66 & 4) != 0 && !EtwpPagingDisabled )
      {
        v67 = v165;
        v68 = *(_QWORD *)(v165 + 384);
        v70 = 0;
        if ( v68 )
        {
          v69 = *(_DWORD *)(104 * v37 + v68);
          if ( (v69 & 0x80001000) == 0x80001000 || (v69 & 0x80002000) == 0x80002000 || (v69 & 0x80004000) == 0x80004000 )
            v70 = 1;
        }
        v71 = v163;
        if ( !v70
          || (v72 = v155,
              v73 = v160,
              (unsigned __int8)EtwpApplyLevelKwFilter(
                                 v165,
                                 v160,
                                 *((unsigned __int8 *)v163 + 4),
                                 *((_QWORD *)v163 + 1),
                                 v155 < 2u))
          && (LOBYTE(v29) = (unsigned __int8)v72 < 2u, (unsigned __int8)EtwpApplyStackWalkIdFilter(*v71, v67, v73, v29))
          && (unsigned __int8)EtwpApplyEventNameFilter(
                                v67,
                                v73,
                                a10,
                                v173,
                                0,
                                v72,
                                *((_BYTE *)v71 + 4),
                                *((_QWORD *)v71 + 1),
                                1) )
        {
          if ( (v144 & 1) == 0 )
          {
            v74 = 256;
            StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
            if ( !StackLookasideListEntry )
            {
              HighLimit = 0LL;
              LowLimit = 0LL;
              IoGetStackLimits(&LowLimit, &HighLimit);
              if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
              {
                v75 = alloca(1552LL);
                StackLookasideListEntry = &v143;
                v74 = 192;
              }
            }
            if ( StackLookasideListEntry )
            {
              v76 = 0LL;
              v77 = (*(_DWORD *)(v170 + 832) & 0x40000000) == 0;
              if ( *(_QWORD *)(v172 + 40) == *(_QWORD *)&EventTracingProvGuid.Data1
                && *(_QWORD *)(v172 + 48) == *(_QWORD *)EventTracingProvGuid.Data4
                && *v71 == 18 )
              {
                v55 |= 0x10u;
                v76 = v172 + 80;
                v77 = 0;
              }
              LOBYTE(BugCheckParameter4) = v77;
              EtwpGetStackExtendedHeaderItem(v178, a4, v74, &StackLookasideListEntry, BugCheckParameter4, v76);
              if ( StackLookasideListEntry && v74 == 256 )
                v78 = 2;
              else
                v78 = 0;
              v144 = v78 | v144 & 0xFD;
            }
            v144 |= 1u;
          }
          if ( StackLookasideListEntry )
          {
            v55 |= 4u;
            v57 += *(unsigned __int16 *)StackLookasideListEntry;
            v149 = v57;
          }
        }
      }
    }
    v34 = 48LL * v191[96];
    v79 = (char *)v191 + v34;
    v80 = 0;
    if ( a10 )
      break;
LABEL_148:
    if ( v157 )
    {
      if ( (unsigned int)Feature_1815603512__private_IsEnabledDeviceUsage(v34, v32, v31, v29) )
      {
        v83 = (v159 + 15) & 0xFFFFFFF8;
        if ( v83 > 0xFFFF )
          goto LABEL_151;
      }
      else
      {
        v83 = (v159 + 15) & 0xFFFFFFF8;
      }
      v57 += v83;
      v149 = v57;
    }
    v89 = Size_4;
    if ( Size_4 )
    {
      if ( (unsigned int)Feature_1815603512__private_IsEnabledDeviceUsage(v34, v32, v31, v29) )
      {
        v90 = (v89 + 15) & 0xFFFFFFF8;
        if ( v90 > 0xFFFF )
        {
LABEL_151:
          v84 = -1073741675;
          v85 = (unsigned __int8)v150;
          goto LABEL_152;
        }
      }
      else
      {
        v90 = (v89 + 15) & 0xFFFFFFF8;
      }
      v57 += v90;
      v149 = v57;
    }
    *((_DWORD *)v79 + 10) = v57;
    v91 = v170;
    v92 = EtwpReserveTraceBuffer(v170, v57, (unsigned int)&v188, (unsigned int)&v179, 0);
    v97 = v92;
    v171 = v92;
    if ( v92 )
    {
      *(_QWORD *)v79 = v91;
      *((_QWORD *)v79 + 1) = v92;
      *((_OWORD *)v79 + 1) = v188;
      *((_QWORD *)v79 + 4) = v189;
      ++v191[96];
      IsEnabledDeviceUsage = Feature_1815603512__private_IsEnabledDeviceUsage(v94, v93, v95, v96);
      v107 = v154;
      if ( IsEnabledDeviceUsage )
        v107 = 0;
      v154 = v107;
      v147 = v107;
      *(_DWORD *)v97 = v57 | *(_DWORD *)(v91 + 20);
      v108 = (_WORD *)(v97 + 4);
      v176 = (void *)(v97 + 4);
      *(_WORD *)(v97 + 4) = a6;
      *(_WORD *)(v97 + 6) = a7;
      *(_OWORD *)(v97 + 24) = *(_OWORD *)(v172 + 40);
      *(_OWORD *)(v97 + 40) = *(_OWORD *)v163;
      if ( a8 )
        v109 = *a8;
      else
        v109 = NullGuid;
      *(GUID *)(v97 + 64) = v109;
      *(_QWORD *)(v97 + 16) = v179;
      *(_DWORD *)(v97 + 8) = v193[288];
      *(_DWORD *)(v97 + 12) = v193[286];
      *(_DWORD *)(v97 + 56) = v193[163];
      *(_DWORD *)(v97 + 60) = v193[183];
      if ( v55 )
      {
        if ( (v55 & 0x100) != 0 )
        {
          v110 = (unsigned __int16 *)(v97 + 80);
          v164 = v110;
          v111 = v185;
          v112 = (*(_WORD *)(v185 + 4200) + 15) & 0xFFF8;
          *v110 = v112;
          v110[1] = 16;
          v110[3] = *(_WORD *)(v111 + 4200);
          v110[2] = 0;
          v113 = v112 - *(_WORD *)(v111 + 4200) - 8;
          v114 = v110 + 4;
          memmove(v110 + 4, *(const void **)(v111 + 4192), *(unsigned __int16 *)(v111 + 4200));
          memset((char *)v114 + *(unsigned __int16 *)(v111 + 4200), 0, v113);
          *v108 |= 1u;
          v115 = v164;
          v35 = *v164 + 80;
          Size = v35;
          v151 = v35;
          v169 = v164;
          v97 = v171;
        }
        else
        {
          v115 = v164;
        }
        if ( (v55 & 8) != 0 )
        {
          v116 = (unsigned __int16 *)(v97 + v35);
          *(_DWORD *)v116 = 65560;
          *((_DWORD *)v116 + 1) = 0x100000;
          *(_OWORD *)(v116 + 4) = *a9;
          *v108 |= 1u;
          v35 += 24;
          Size = v35;
          v151 = v35;
          if ( v115 )
            *((_WORD *)v115 + 2) |= 1u;
          v115 = v116;
          v164 = v116;
          v169 = v116;
        }
        if ( (v55 & 2) != 0 )
        {
          v115 = (_DWORD *)(v97 + v35);
          memmove(v115, Src, *(unsigned __int16 *)Src);
          *v108 |= 1u;
          v106 = Src;
          v35 += *(unsigned __int16 *)Src;
          Size = v35;
          v151 = v35;
          if ( v164 )
            v164[2] |= 1u;
          v164 = (unsigned __int16 *)v115;
          v169 = v115;
        }
        if ( (v55 & 1) != 0 )
        {
          v115 = (_DWORD *)(v97 + v35);
          *v115 = 196624;
          v115[1] = 0x40000;
          SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          v118 = 0;
          if ( SessionId != -1 )
            v118 = SessionId;
          v115[2] = v118;
          *v108 |= 1u;
          v35 += 16;
          Size = v35;
          v151 = v35;
          if ( v164 )
            v164[2] |= 1u;
          v164 = (unsigned __int16 *)v115;
          v169 = v115;
          v89 = Size_4;
        }
        if ( (v55 & 0x20) != 0 )
        {
          v119 = (unsigned __int16 *)(v97 + v35);
          *(_DWORD *)v119 = 851984;
          *((_DWORD *)v119 + 1) = 0x80000;
          *((_QWORD *)v119 + 1) = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[6] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
          *v108 |= 1u;
          v35 += 16;
          Size = v35;
          v151 = v35;
          if ( v115 )
            *((_WORD *)v115 + 2) |= 1u;
          v115 = v119;
          v164 = v119;
          v169 = v119;
          v89 = Size_4;
        }
        if ( (v55 & 0x40) != 0 )
        {
          v106 = (_DWORD *)(v97 + v35);
          *v106 = 655376;
          v106[1] = 0x80000;
          if ( (v144 & 4) != 0 )
          {
            v121 = v180;
          }
          else
          {
            v120 = KeGetCurrentPrcb();
            v121 = _InterlockedIncrement64((volatile signed __int64 *)v120->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v120->Number << 48);
            v180 = v121;
            v144 |= 4u;
            v89 = Size_4;
            if ( v186 )
              *v186 = v121;
          }
          *((_QWORD *)v106 + 1) = v121;
          *v108 |= 1u;
          v35 += 16;
          Size = v35;
          v151 = v35;
          if ( v115 )
            *((_WORD *)v115 + 2) |= 1u;
          v115 = v106;
          v164 = (unsigned __int16 *)v106;
          v169 = v106;
        }
        if ( (v55 & 4) != 0 )
        {
          v115 = (_DWORD *)(v97 + v35);
          memmove(v115, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
          if ( *((_QWORD *)v115 + 1) && (v55 & 0x10) == 0 )
          {
            if ( v161 == EtwpHostSiloState
              && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u)) != 0LL )
            {
              KeInitializeApc(
                (__int64)PoolWithTag,
                (__int64)v193,
                0,
                (__int64)EtwpCrimsonStackWalkApc,
                0LL,
                (__int64)EtwpCrimsonStackWalkApc,
                0,
                v146);
              if ( !KeInsertQueueApc((__int64)PoolWithTag, (unsigned int)v115[2], (unsigned int)v115[3], 0) )
              {
                ExFreePoolWithTag(PoolWithTag, 0);
                goto LABEL_232;
              }
            }
            else
            {
LABEL_232:
              *((_QWORD *)v115 + 1) = 0LL;
            }
          }
          *v108 |= 1u;
          v35 += *(unsigned __int16 *)StackLookasideListEntry;
          Size = v35;
          v151 = v35;
          if ( v164 )
            v164[2] |= 1u;
          v164 = (unsigned __int16 *)v115;
          v169 = v115;
        }
      }
      else
      {
        v115 = v164;
      }
      if ( v89 )
      {
        v115 = (_DWORD *)(v97 + v35);
        v179 = v115;
        v123 = (v89 + 15) & 0xFFF8;
        *(_WORD *)v115 = v123;
        *(_DWORD *)((char *)v115 + 2) = 12;
        *((_WORD *)v115 + 3) = v89;
        v124 = v123 - v89 - 8;
        LOWORD(v160) = v124;
        memmove(v115 + 2, v181, v89);
        memset((char *)v115 + v89 + 8, 0, v124);
        v125 = Size;
        v126 = v164;
        *v108 |= 1u;
        v35 = *(unsigned __int16 *)v115 + v125;
        v151 = v35;
        if ( v126 )
          v126[2] |= 1u;
      }
      v127 = v157;
      v128 = v171;
      if ( v157 )
      {
        v129 = (unsigned __int16 *)(v171 + v35);
        v130 = v159;
        v131 = (v159 + 15) & 0xFFF8;
        *v129 = v131;
        *(_DWORD *)(v129 + 1) = 11;
        v129[3] = v130;
        v132 = (char *)(v129 + 4);
        v175 = v129 + 4;
        v187 = (char *)v129 + v130 + 8;
        memset(v187, 0, (unsigned __int16)(v131 - v130 - 8));
        *v108 |= 1u;
        v35 += *v129;
        v151 = v35;
        v127 = v157;
        if ( v115 )
          *((_WORD *)v115 + 2) |= 1u;
      }
      else
      {
        v132 = (char *)v175;
      }
      for ( i = 0; ; ++i )
      {
LABEL_245:
        v159 = i;
        if ( i >= a10 )
        {
          v138 = v170;
          if ( (*(_DWORD *)(v170 + 12) & 0x80000) != 0
            && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
          {
            EtwpSendTraceEvent(v170, &v188, v106);
          }
          if ( *(_QWORD *)(v138 + 1272) )
            EtwpInvokeEventCallback(v138, &v188, v172 + 40, 0LL);
          v21 = v158;
          v27 = v150;
          v30 = (__int64)v163;
          v24 = v161;
          v28 = v146;
          v29 = v165;
          v32 = 80LL;
          v31 = 1LL;
          if ( v182 )
          {
            *(_DWORD *)(v182 + 4LL * (v146 >> 5)) |= 1 << (v146 & 0x1F);
            goto LABEL_22;
          }
          goto LABEL_23;
        }
        v134 = *(unsigned int *)(v173 + 16LL * i + 8);
        Size = *(_DWORD *)(v173 + 16LL * i + 8);
        v135 = *(_QWORD **)(v173 + 16LL * i);
        if ( v162 )
          v106 = (_DWORD *)*(unsigned __int8 *)(v173 + 16LL * i + 12);
        else
          LOBYTE(v106) = 0;
        if ( !(_BYTE)v106 )
          break;
        if ( (unsigned __int8)v106 != 1 )
        {
          if ( (unsigned __int8)v106 == 3 && (_DWORD)v134 == 8 )
            *(_QWORD *)(v128 + 16) = *v135;
LABEL_260:
          ++i;
          v132 = (char *)v175;
          goto LABEL_245;
        }
        if ( !v132 || (v136 = v134, v176 = (void *)v134, &v132[v134] > v187) || !v127 )
          KeBugCheckEx(0x11Du, 5uLL, v35, v57, 0LL);
        memmove(v132, v135, v134);
        v132 += v136;
        v175 = v132;
        v127 = --v157;
      }
      v137 = (void *)(v128 + v35);
      v176 = v137;
      v35 += v134;
      v151 = v35;
      if ( v35 > v57 )
        KeBugCheckEx(0x11Du, 5uLL, v35, v57, 0LL);
      memmove(v137, v135, v134);
      v127 = v157;
      goto LABEL_260;
    }
    ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v91, v57, v95);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
      EtwpTraceLostEvent(v172 + 40, v163, v91 + 152, ReserveTraceBufferStatus);
    v21 = v158;
    if ( v158 >= 0 )
    {
      if ( (*(_DWORD *)(v91 + 12) & 0x8000000) == 0 )
        v21 = ReserveTraceBufferStatus;
      v158 = v21;
    }
    v99 = v154;
    if ( (_BYTE)v154 )
    {
      v28 = v146;
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v161 + 448) + 8LL * v146), 1u);
      v104 = Feature_1815603512__private_IsEnabledDeviceUsage(v101, v100, v102, v103);
      v34 = v99;
      if ( v104 )
        v34 = 0LL;
      LOBYTE(v154) = v34;
    }
    else
    {
      v28 = v146;
    }
    v32 = 3221225621LL;
    v33 = ReserveTraceBufferStatus == -1073741675;
    v27 = v150;
    v24 = v161;
    v29 = v165;
    if ( v33 )
    {
      v21 = -1073741675;
      goto LABEL_155;
    }
  }
  v81 = v173 + 8;
  while ( !(unsigned int)Feature_1815603512__private_IsEnabledDeviceUsage(v34, v32, v31, v29)
       || *(_DWORD *)v81 <= 0xFFFFu )
  {
    if ( v162 )
      v82 = *(_BYTE *)(v81 + 4);
    else
      v82 = 0;
    v34 = v82;
    if ( v82 )
    {
      if ( v82 == 1 )
      {
        if ( (unsigned int)Feature_1815603512__private_IsEnabledDeviceUsage(v82, v32, v31, v29) )
          v159 += *(_DWORD *)v81;
        ++v157;
      }
    }
    else
    {
      v57 += *(_DWORD *)v81;
      v149 = v57;
    }
    ++v80;
    v81 += 16LL;
    if ( v80 >= a10 )
      goto LABEL_148;
  }
  v84 = -2147483643;
  v85 = (unsigned __int8)v150;
LABEL_152:
  v21 = v158;
  if ( v158 >= 0 )
    v21 = v84;
  v28 = v146;
  v24 = v161;
  v27 = v85 | (1 << v160);
LABEL_155:
  if ( (unsigned int)Feature_1815603512__private_IsEnabledDeviceUsage(v34, v32, v31, v29) && (_BYTE)v154 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v24 + 448) + 8LL * v28), 1u);
  if ( (v144 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v21 < 0 )
  {
    EtwpFailLogging(
      *((unsigned __int8 *)v163 + 4),
      *((_QWORD *)v163 + 1),
      v172,
      (unsigned int)v191,
      v27,
      v21,
      (__int64)v163,
      v155 < 2u);
  }
  else if ( v191[96] )
  {
    v86 = (signed __int64 *)v191;
    v87 = v191[96];
    v88 = v161;
    do
    {
      EtwpReleaseTraceBuffer(v86 + 2);
      if ( CurrentIrql < 2u )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v88 + 448) + 8LL * *(unsigned int *)*v86),
          1u);
      v86 += 6;
      --v87;
    }
    while ( v87 );
  }
  if ( v156 )
    KeLeaveCriticalRegionThread(v178);
  v139 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v140 = KeGetCurrentPrcb();
    v141 = v140->PPLookasideList[8].P;
    ++v141->TotalFrees;
    if ( LOWORD(v141->ListHead.Alignment) < v141->Depth
      || (++v141->FreeMisses,
          v141 = v140->PPLookasideList[8].L,
          ++v141->TotalFrees,
          LOWORD(v141->ListHead.Alignment) < v141->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v141->ListHead, v139);
    }
    else
    {
      ++v141->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))v141->FreeEx)(v139);
    }
  }
  return (unsigned int)v21;
}
