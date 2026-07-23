/*
 * XREFs of ExpSetTimerObject @ 0x140211420
 * Callers:
 *     NtSetTimerEx @ 0x1402111A0 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x140376DC0 (ExpSetTimer.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KiInsertTimerTable @ 0x14020DC30 (KiInsertTimerTable.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140212170 (ObpTraceObjectDereferenceIfActive.c)
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x140276B88 (PoDestroyReasonContext.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiTimerWaitTest @ 0x1402818D0 (KiTimerWaitTest.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402D7A80 (KxWaitForSpinLockAndAcquire.c)
 *     PsInsertVirtualizedTimer @ 0x1402E1FD4 (PsInsertVirtualizedTimer.c)
 *     KeInitializeApc @ 0x1402F94B0 (KeInitializeApc.c)
 *     KeRemoveQueueDpcEx @ 0x1402FFC20 (KeRemoveQueueDpcEx.c)
 *     KeRemoveQueueApc @ 0x14030050C (KeRemoveQueueApc.c)
 *     KiRemoveEntryTimer @ 0x140327590 (KiRemoveEntryTimer.c)
 *     ObpDeferObjectDeletion @ 0x1403494E0 (ObpDeferObjectDeletion.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14051141C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140511528 (KiReleaseSpinLockInstrumented.c)
 *     KiTraceSetTimer @ 0x14051E6AC (KiTraceSetTimer.c)
 *     ExpCheckWakeTimerAccess @ 0x14077C208 (ExpCheckWakeTimerAccess.c)
 *     ExpCheckTestsigningEnabled @ 0x14094BFDC (ExpCheckTestsigningEnabled.c)
 */

__int64 __fastcall ExpSetTimerObject(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 *a3,
        volatile signed __int32 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        unsigned int a9,
        _BYTE *a10)
{
  char v10; // r10
  char v12; // r13
  _KPROCESS *Process; // rbx
  char v14; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v17; // rcx
  int v18; // r13d
  unsigned __int8 v19; // si
  char v20; // r14
  unsigned int v21; // eax
  int v22; // r12d
  unsigned int v23; // r14d
  unsigned int v24; // r10d
  __int64 *v25; // r12
  __int64 v26; // rbx
  KSPIN_LOCK *v27; // r11
  char v28; // r13
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rcx
  struct _KPRCB *v32; // r12
  char v33; // r13
  _KPROCESS *v34; // rcx
  char v35; // al
  __int16 v36; // ax
  char v37; // cl
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rsi
  void *v42; // rbx
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  __int64 v45; // rdx
  signed __int64 BugCheckParameter4; // rcx
  _BYTE *v47; // rdx
  __int64 v49; // r13
  volatile signed __int32 *v50; // rbx
  struct _KPRCB *v51; // rdx
  _DWORD *v52; // rcx
  __int64 v53; // r12
  struct _KPRCB *v54; // rcx
  unsigned __int64 v55; // rdx
  signed __int64 v56; // rdx
  __int64 v57; // rcx
  struct _KTHREAD *v58; // rbx
  KSPIN_LOCK *p_StackLimit; // r14
  char *v60; // rax
  void **p_StackBase; // rbx
  char **v62; // rdx
  unsigned __int64 v63; // rdx
  _DWORD *v64; // rcx
  _DWORD *v65; // rcx
  _DWORD *v66; // rcx
  struct _KTHREAD *v67; // rbx
  __int64 v68; // rcx
  char v69; // dl
  __int64 v70; // r14
  int SessionId; // eax
  bool v72; // zf
  signed __int8 v73; // cf
  _QWORD *v74; // rax
  _QWORD *v75; // rcx
  char v76; // r11
  struct _KTHREAD *v77; // rsi
  ULONG_PTR v78; // r9
  unsigned __int8 v79; // r12
  __int64 v80; // r15
  unsigned int v81; // edx
  __int64 v82; // rcx
  __int64 v83; // rcx
  int v84; // ecx
  unsigned __int8 v85; // r13
  struct _KPRCB *v86; // rcx
  unsigned int v87; // ebx
  unsigned __int8 AbOrphanedEntrySummary; // al
  _DWORD *SchedulerAssist; // r9
  int v90; // eax
  int v91; // eax
  unsigned __int8 v92; // al
  struct _KPRCB *v93; // r10
  _DWORD *v94; // r9
  int v95; // eax
  struct _KTHREAD *v96; // rbx
  __int64 v97; // rcx
  unsigned __int8 v98; // al
  char v99; // dl
  __int64 v100; // r14
  int v101; // eax
  unsigned __int8 v102; // r10
  _DWORD *v103; // r9
  __int64 v104; // rbx
  __int64 v105; // r8
  _QWORD *v106; // rdx
  _DWORD *v107; // r9
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // eax
  int v112; // eax
  unsigned __int8 v113; // al
  struct _KPRCB *v114; // r10
  _DWORD *v115; // r9
  int v116; // eax
  int v117; // eax
  unsigned int v118; // eax
  _DWORD *v119; // r9
  __int64 v120; // r8
  struct _KPRCB *v121; // rcx
  _DWORD *v122; // rdx
  int v123; // eax
  __int64 v124; // rsi
  volatile signed __int64 *v125; // r12
  __int64 v126; // rcx
  int v127; // eax
  __int64 v128; // rcx
  int v129; // eax
  struct _KPRCB *v130; // rcx
  int v131; // eax
  struct _KPRCB *v132; // rcx
  _DWORD *v133; // rdx
  int v134; // eax
  int v135; // eax
  unsigned __int8 v136; // al
  struct _KPRCB *v137; // r10
  _DWORD *v138; // r9
  int v139; // eax
  _QWORD *v140; // rax
  __int64 v141; // rdx
  _QWORD *v142; // rcx
  __int64 v143; // rcx
  char v144; // [rsp+40h] [rbp-168h]
  char v145; // [rsp+41h] [rbp-167h]
  char v146; // [rsp+42h] [rbp-166h]
  int v147; // [rsp+44h] [rbp-164h]
  unsigned int v148; // [rsp+48h] [rbp-160h]
  int v149; // [rsp+4Ch] [rbp-15Ch]
  KSPIN_LOCK *Object; // [rsp+50h] [rbp-158h]
  unsigned __int8 v151; // [rsp+58h] [rbp-150h]
  __int64 v152; // [rsp+60h] [rbp-148h]
  struct _KPRCB *v153; // [rsp+60h] [rbp-148h]
  __int64 v154; // [rsp+60h] [rbp-148h]
  int v155; // [rsp+68h] [rbp-140h] BYREF
  int v156; // [rsp+6Ch] [rbp-13Ch] BYREF
  int v157; // [rsp+70h] [rbp-138h]
  int v158; // [rsp+74h] [rbp-134h] BYREF
  volatile signed __int32 *v159; // [rsp+78h] [rbp-130h]
  __int64 v160; // [rsp+80h] [rbp-128h]
  __int64 v161; // [rsp+88h] [rbp-120h]
  int v162; // [rsp+90h] [rbp-118h]
  int v163; // [rsp+94h] [rbp-114h] BYREF
  int v164; // [rsp+98h] [rbp-110h] BYREF
  __int64 *v165; // [rsp+A0h] [rbp-108h]
  int v166; // [rsp+A8h] [rbp-100h]
  int v167; // [rsp+ACh] [rbp-FCh] BYREF
  int v168; // [rsp+B0h] [rbp-F8h]
  volatile signed __int32 *v169; // [rsp+B8h] [rbp-F0h] BYREF
  int v170; // [rsp+C0h] [rbp-E8h] BYREF
  volatile signed __int64 *v171; // [rsp+C8h] [rbp-E0h] BYREF
  __int64 v172; // [rsp+D0h] [rbp-D8h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-D0h]
  int v174; // [rsp+E0h] [rbp-C8h] BYREF
  int v175; // [rsp+E4h] [rbp-C4h] BYREF
  __int128 v176; // [rsp+E8h] [rbp-C0h]
  __int64 v177; // [rsp+F8h] [rbp-B0h]
  ULONG_PTR v178; // [rsp+100h] [rbp-A8h] BYREF
  ULONG_PTR v179; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v180; // [rsp+110h] [rbp-98h]
  struct _KPRCB *v181; // [rsp+118h] [rbp-90h]
  __int64 v182; // [rsp+120h] [rbp-88h]
  _BYTE *v183; // [rsp+128h] [rbp-80h]
  __int128 v184; // [rsp+138h] [rbp-70h]
  __int64 v185; // [rsp+148h] [rbp-60h]
  _QWORD v186[2]; // [rsp+150h] [rbp-58h] BYREF
  _QWORD v187[2]; // [rsp+160h] [rbp-48h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v159 = a4;
  v165 = a3;
  v10 = a2;
  v144 = a2;
  v183 = a10;
  v148 = 0;
  v12 = 0;
  v146 = 0;
  CurrentThread = 0LL;
  v160 = a6;
  if ( !a6 )
    goto LABEL_2;
  if ( a7 )
  {
    if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
    {
      v87 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10]);
      v148 = v87;
      if ( v87 )
      {
        ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
        return v87;
      }
    }
    v10 = v144;
  }
  if ( (int)qword_140C23AA0 < 2 && !byte_140C23A73 )
  {
    v148 = 1073741861;
    v160 = 0LL;
    goto LABEL_2;
  }
  v12 = 1;
  v146 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v167 = 0;
  v67 = KeGetCurrentThread();
  --v67->SpecialApcDisable;
  if ( ++v67->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v67, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  v166 = 0;
  LOBYTE(v68) = v67->AbEntrySummary;
  if ( !(_BYTE)v68 )
  {
    if ( !v67->AbOrphanedEntrySummary )
    {
      v70 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v67, &ExpWakeTimerLock);
      goto LABEL_96;
    }
    AbOrphanedEntrySummary = v67->AbOrphanedEntrySummary;
    v67->AbOrphanedEntrySummary = 0;
    LOBYTE(v68) = AbOrphanedEntrySummary | v67->AbEntrySummary;
  }
  v69 = v68;
  _BitScanForward((unsigned int *)&v68, (unsigned __int8)v68);
  v166 = v68;
  v67->AbEntrySummary = v69 & ~(1 << v68);
  v70 = (__int64)&v67->LockEntries[v68];
LABEL_96:
  if ( v70 )
  {
    if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
      && byte_140C4F7C8[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v67->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v70 + 40) = SessionId;
    *(_QWORD *)(v70 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v67->116 + 1, 0x10u);
  }
  --v67->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v67, (__int64)&ExpWakeTimerLock, &v167);
  v72 = v67->SpecialApcDisable++ == -1;
  if ( v72 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v67->ApcState.ApcListHead[0].Flink != &v67->152 )
    KiCheckForKernelApcDelivery();
  v73 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
  if ( v73 )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v70, &ExpWakeTimerLock);
  v10 = v144;
  if ( v70 )
    *(_BYTE *)(v70 + 26) |= 1u;
LABEL_2:
  v172 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = (KSPIN_LOCK *)Process;
  v14 = 0;
  v145 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v151 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= a2;
  }
  if ( v10 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    KxAcquireSpinLock(&Process[2].AffinityPadding[4]);
    v14 = 1;
    v145 = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(BugCheckParameter2 + 64);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v90 = v17[6];
        v17[6] = v90 + 1;
        if ( v90 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 64), 0LL) )
    {
      v64 = CurrentPrcb->SchedulerAssist;
      if ( v64 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v91 = v64[6] - 1;
          v64[6] = v91;
          if ( !v91 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(BugCheckParameter2 + 64);
    }
    Process = (_KPROCESS *)Object;
  }
  if ( !v12 && *(_QWORD *)(BugCheckParameter2 + 256) )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
    if ( v14 )
      KxReleaseSpinLock(&Process[2].AffinityPadding[4]);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v92 = KeGetCurrentIrql();
        if ( v92 <= 0xFu && v151 <= 0xFu && v92 >= 2u )
        {
          v93 = KeGetCurrentPrcb();
          v94 = v93->SchedulerAssist;
          v95 = ~(unsigned __int16)(-1LL << (v151 + 1));
          v72 = (v95 & v94[5]) == 0;
          v94[5] &= v95;
          if ( v72 )
            KiRemoveSystemWorkPriorityKick(v93);
        }
      }
    }
    __writecr8(v151);
    v146 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v170 = 0;
    v96 = KeGetCurrentThread();
    --v96->SpecialApcDisable;
    if ( ++v96->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v96, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
    v168 = 0;
    LOBYTE(v97) = v96->AbEntrySummary;
    if ( !(_BYTE)v97 )
    {
      if ( !v96->AbOrphanedEntrySummary )
      {
        v100 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v96, &ExpWakeTimerLock);
        goto LABEL_183;
      }
      v98 = v96->AbOrphanedEntrySummary;
      v96->AbOrphanedEntrySummary = 0;
      LOBYTE(v97) = v98 | v96->AbEntrySummary;
    }
    v99 = v97;
    _BitScanForward((unsigned int *)&v97, (unsigned __int8)v97);
    v168 = v97;
    v96->AbEntrySummary = v99 & ~(1 << v97);
    v100 = (__int64)&v96->LockEntries[v97];
LABEL_183:
    if ( v100 )
    {
      if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
        && byte_140C4F7C8[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
      {
        v101 = MmGetSessionIdEx((__int64)v96->ApcState.Process);
      }
      else
      {
        v101 = -1;
      }
      *(_DWORD *)(v100 + 40) = v101;
      *(_QWORD *)(v100 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v96->116 + 1, 0x10u);
    }
    --v96->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v96, (__int64)&ExpWakeTimerLock, &v170);
    v72 = v96->SpecialApcDisable++ == -1;
    if ( v72 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v96->ApcState.ApcListHead[0].Flink != &v96->152 )
      KiCheckForKernelApcDelivery();
    v73 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    if ( v73 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v100, &ExpWakeTimerLock);
    if ( v100 )
      *(_BYTE *)(v100 + 26) |= 1u;
    v102 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v102 <= 0xFu )
    {
      v103 = KeGetCurrentPrcb()->SchedulerAssist;
      v103[5] |= (-1 << (v102 + 1)) & 4;
    }
    v151 = v102;
    if ( v145 )
      KxAcquireSpinLock(Object + 305);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v18 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v104 = *(_QWORD *)(BugCheckParameter2 + 80);
    KxAcquireSpinLock((PKSPIN_LOCK)(v104 + 1120));
    v105 = *(_QWORD *)(BugCheckParameter2 + 224);
    v106 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v105 + 8) != BugCheckParameter2 + 224 || *v106 != BugCheckParameter2 + 224 )
      goto LABEL_322;
    *v106 = v105;
    *(_QWORD *)(v105 + 8) = v106;
    KxReleaseSpinLock((PKSPIN_LOCK)(v104 + 1120));
    *(_BYTE *)(BugCheckParameter2 + 304) &= ~1u;
    if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 && *(_BYTE *)(BugCheckParameter2 + 248)
      || KeCancelTimer((PKTIMER)BugCheckParameter2)
      || (unsigned __int8)KeRemoveQueueDpcEx(BugCheckParameter2 + 160, 0LL) )
    {
      v18 = 1;
    }
    v22 = BugCheckParameter2 + 72;
    if ( (unsigned __int8)KeRemoveQueueApc(BugCheckParameter2 + 72) )
      ++v18;
  }
  else
  {
    v19 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
    {
      v107 = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (v19 + 1)) & 4;
      v107[5] |= a2;
    }
    v178 = 0LL;
    v169 = 0LL;
    v155 = 0;
    v20 = 0;
    while ( 1 )
    {
      v174 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
      {
        do
          KeYieldProcessorEx(&v174, a2);
        while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      {
        v21 = -129;
        goto LABEL_18;
      }
      v49 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
      v161 = KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 14656;
      v50 = (volatile signed __int32 *)(v161
                                      + 32
                                      * (v49
                                       + ((unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8)
                                       + 16));
      v51 = KeGetCurrentPrcb();
      v153 = v51;
      v175 = 0;
      v52 = v51->SchedulerAssist;
      if ( v52 )
      {
        if ( v51->NestingLevel <= 1u )
        {
          v108 = v52[6];
          v52[6] = v108 + 1;
          if ( v108 == -1 )
            KiRemoveSystemWorkPriorityKick(v51);
        }
      }
      while ( _interlockedbittestandset64(v50, 0LL) )
      {
        v65 = v153->SchedulerAssist;
        if ( v65 )
        {
          if ( v153->NestingLevel <= 1u )
          {
            v109 = v65[6] - 1;
            v65[6] = v109;
            if ( !v109 )
              KiRemoveSystemWorkPriorityKick(v153);
          }
        }
        do
          KeYieldProcessorEx(&v175, v51);
        while ( *(_QWORD *)v50 );
        v66 = v153->SchedulerAssist;
        if ( v66 )
        {
          if ( v153->NestingLevel <= 1u )
          {
            v110 = v66[6];
            v66[6] = v110 + 1;
            if ( v110 == -1 )
              KiRemoveSystemWorkPriorityKick(v153);
          }
        }
      }
      v169 = v50;
      v53 = v161;
      if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v50, 0LL);
      v86 = KeGetCurrentPrcb();
      a2 = (__int64)v86->SchedulerAssist;
      if ( a2 )
      {
        if ( v86->NestingLevel <= 1u )
        {
          v111 = *(_DWORD *)(a2 + 24) - 1;
          *(_DWORD *)(a2 + 24) = v111;
          if ( !v111 )
            KiRemoveSystemWorkPriorityKick(v86);
        }
      }
      if ( _InterlockedExchange64((volatile __int64 *)(v53 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
      {
        v21 = 16777087;
        v20 = 1;
        goto LABEL_18;
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      v155 = 0;
      while ( *(char *)(BugCheckParameter2 + 3) < 0 )
        KeYieldProcessorEx(&v155, a2);
    }
    KiRemoveEntryTimer(v161, BugCheckParameter2, (unsigned int)v49, &v169);
    _InterlockedAnd64((volatile signed __int64 *)v169, 0LL);
    v54 = KeGetCurrentPrcb();
    a2 = (__int64)v54->SchedulerAssist;
    if ( a2 )
    {
      if ( v54->NestingLevel <= 1u )
      {
        v112 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v112;
        if ( !v112 )
          KiRemoveSystemWorkPriorityKick(v54);
      }
    }
    v21 = -1073741953;
    v20 = 1;
LABEL_18:
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, v21);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v20 )
    {
      v178 = BugCheckParameter2;
      v187[0] = &v178;
      v187[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v187, 1, 1073872896, 3925, 1538);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v113 = KeGetCurrentIrql();
        if ( v113 <= 0xFu && v19 <= 0xFu && v113 >= 2u )
        {
          v114 = KeGetCurrentPrcb();
          v115 = v114->SchedulerAssist;
          a2 = -1LL << (v19 + 1);
          v116 = ~(unsigned __int16)a2;
          v72 = (v116 & v115[5]) == 0;
          v115[5] &= v116;
          if ( v72 )
            KiRemoveSystemWorkPriorityKick(v114);
        }
      }
    }
    __writecr8(v19);
    v22 = BugCheckParameter2 + 72;
    v18 = 0;
  }
  *(_BYTE *)(BugCheckParameter2 + 248) = 0;
  v23 = v18 + 1;
  v149 = *(_DWORD *)(BugCheckParameter2 + 4);
  v24 = a8;
  v147 = a8;
  *(_DWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 244) = 0;
  *(_DWORD *)(BugCheckParameter2 + 320) = a9;
  if ( v159 )
  {
    v58 = KeGetCurrentThread();
    KeInitializeApc(v22, (_DWORD)v58, 2, (unsigned int)ExpTimerApcRoutine, 0LL, (__int64)v159, v144, a5);
    p_StackLimit = (KSPIN_LOCK *)&v58[1].StackLimit;
    KxAcquireSpinLock((PKSPIN_LOCK)&v58[1].StackLimit);
    v60 = (char *)(BugCheckParameter2 + 224);
    p_StackBase = &v58[1].StackBase;
    v62 = (char **)p_StackBase[1];
    if ( *v62 != (char *)p_StackBase )
      goto LABEL_322;
    *(_QWORD *)v60 = p_StackBase;
    *(_QWORD *)(BugCheckParameter2 + 232) = v62;
    *v62 = v60;
    p_StackBase[1] = v60;
    *(_BYTE *)(BugCheckParameter2 + 304) |= 1u;
    KxReleaseSpinLock(p_StackLimit);
    v172 = BugCheckParameter2 + 160;
    v23 = v18;
    v24 = 0;
    v147 = 0;
  }
  v25 = v165;
  v26 = *v165;
  v152 = *v165;
  v27 = Object;
  v28 = v145;
  if ( v145 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
    {
      PsInsertVirtualizedTimer(Object, BugCheckParameter2 + 280);
      v24 = v147;
      v27 = Object;
    }
    _InterlockedIncrement((volatile signed __int32 *)v27 + 606);
    if ( (v27[79] & 0x10) != 0 )
    {
      v57 = *((unsigned int *)v27 + 17);
      if ( (_DWORD)v57 )
      {
        v162 = *((_DWORD *)v27 + 17);
        v26 = *v25;
        if ( *v25 >= 0 )
        {
          if ( (unsigned __int64)v26 <= MEMORY[0xFFFFF78000000014] )
            v26 = MEMORY[0xFFFFF78000000014];
          v26 += v57;
          if ( v26 < *v25 )
            v26 = *v25;
          LODWORD(v57) = v162;
        }
        else if ( v26 - v57 <= v26 )
        {
          v26 -= v57;
        }
        HIDWORD(v152) = HIDWORD(v26);
        a2 = (unsigned int)v57 / 0x2710;
        if ( v24 )
        {
          v117 = a2 + v24;
          if ( (unsigned int)a2 + v24 > v24 )
          {
            v24 += a2;
            v147 = v117;
            *(_DWORD *)(BugCheckParameter2 + 240) += a2;
LABEL_261:
            *(_DWORD *)(BugCheckParameter2 + 244) = a2;
            goto LABEL_23;
          }
        }
        v118 = *(_DWORD *)(BugCheckParameter2 + 240);
        if ( v118 && v118 + (unsigned int)a2 > v118 )
        {
          *(_DWORD *)(BugCheckParameter2 + 240) = v118 + a2;
          goto LABEL_261;
        }
      }
    }
  }
LABEL_23:
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 312) = v26;
    v41 = v160;
    if ( v152 < 0 )
      *(_BYTE *)(BugCheckParameter2 + 248) = (v160 != 0) + 2;
    else
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    goto LABEL_44;
  }
  v29 = v26;
  v184 = 0LL;
  v185 = 0LL;
  if ( a9 )
  {
    v55 = 10000LL * a9;
    if ( v55 > 0xFC0000 )
    {
      v56 = v55 - 16515072;
      if ( v26 >= 0 )
      {
        v26 += v56;
        if ( v26 < v29 )
          v26 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v26 -= v56;
        if ( v26 > v29 )
          v26 = 0x8000000000000000uLL;
      }
      if ( v24 )
      {
        v63 = (__int64)((unsigned __int128)(v56 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
        if ( v24 + (unsigned int)v63 + (v63 >> 63) < v24 )
          v147 = -1;
        else
          v147 = v24 + v63 + (v63 >> 63);
      }
      LODWORD(v55) = 16515072;
    }
    a2 = (unsigned int)v55 >> 18;
    if ( (unsigned int)a2 > 0x3F )
      a2 = 63LL;
    LOBYTE(a2) = 4 * a2;
    BYTE1(v184) = a2;
  }
  v30 = KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v172 ^ KiWaitAlways), KiWaitNever);
  v180 = v30;
  v31 = KeGetCurrentIrql();
  v182 = v31;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v31 <= 0xFu )
  {
    v119 = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << ((unsigned __int8)v31 + 1)) & 4;
    v119[5] |= a2;
  }
  v32 = KeGetCurrentPrcb();
  v181 = v32;
  v179 = 0LL;
  v171 = 0LL;
  v156 = 0;
  v33 = 0;
  while ( 1 )
  {
    v163 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
    {
      do
        KeYieldProcessorEx(&v163, a2);
      while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      break;
    v120 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    LODWORD(v165) = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v154 = KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 14656;
    v159 = (volatile signed __int32 *)(v154
                                     + 32
                                     * (v120
                                      + ((unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8)
                                      + 16));
    v121 = KeGetCurrentPrcb();
    v161 = (__int64)v121;
    v164 = 0;
    v122 = v121->SchedulerAssist;
    if ( v122 )
    {
      if ( v121->NestingLevel <= 1u )
      {
        v123 = v122[6];
        v122[6] = v123 + 1;
        if ( v123 == -1 )
          KiRemoveSystemWorkPriorityKick(v121);
      }
    }
    v124 = v161;
    while ( 1 )
    {
      v125 = (volatile signed __int64 *)v159;
      if ( !_interlockedbittestandset64(v159, 0LL) )
        break;
      v126 = *(_QWORD *)(v124 + 33976);
      if ( v126 )
      {
        if ( *(_BYTE *)(v124 + 32) <= 1u )
        {
          v127 = *(_DWORD *)(v126 + 24) - 1;
          *(_DWORD *)(v126 + 24) = v127;
          if ( !v127 )
            KiRemoveSystemWorkPriorityKick(v124);
        }
      }
      do
        KeYieldProcessorEx(&v164, v122);
      while ( *v125 );
      v124 = v161;
      v128 = *(_QWORD *)(v161 + 33976);
      if ( v128 )
      {
        if ( *(_BYTE *)(v161 + 32) <= 1u )
        {
          v129 = *(_DWORD *)(v128 + 24);
          *(_DWORD *)(v128 + 24) = v129 + 1;
          if ( v129 == -1 )
            KiRemoveSystemWorkPriorityKick(v124);
        }
      }
    }
    v171 = v125;
    v30 = v180;
    v32 = v181;
    if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
    {
      KiRemoveEntryTimer(v154, BugCheckParameter2, (unsigned int)v165, &v171);
      _InterlockedAnd64(v171, 0LL);
      v132 = KeGetCurrentPrcb();
      v133 = v132->SchedulerAssist;
      if ( v133 )
      {
        if ( v132->NestingLevel <= 1u )
        {
          v134 = v133[6] - 1;
          v133[6] = v134;
          if ( !v134 )
            KiRemoveSystemWorkPriorityKick(v132);
        }
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFFFF);
      goto LABEL_303;
    }
    _InterlockedAnd64((volatile signed __int64 *)v159, 0LL);
    v130 = KeGetCurrentPrcb();
    a2 = (__int64)v130->SchedulerAssist;
    if ( a2 )
    {
      if ( v130->NestingLevel <= 1u )
      {
        v131 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v131;
        if ( !v131 )
          KiRemoveSystemWorkPriorityKick(v130);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v154 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
    {
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFFu);
LABEL_303:
      v33 = 1;
      break;
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    v156 = 0;
    while ( *(char *)(BugCheckParameter2 + 3) < 0 )
      KeYieldProcessorEx(&v156, a2);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v33 )
  {
    v179 = BugCheckParameter2;
    v186[0] = &v179;
    v186[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v186, 1, 1073872896, 3925, 1538);
  }
  v36 = 0;
  if ( (KiVelocityFlags & 0x2000) != 0 )
  {
    if ( v32->NestingLevel
      || ((v34 = KeGetCurrentThread()->ApcState.Process, (v34[1].DirectoryTableBase & 0x100000000000LL) == 0)
       || (HIDWORD(v34[2].Header.WaitListHead.Flink) & 0x4000000) != 0
        ? (v35 = 0)
        : (v35 = 1),
          !v35) )
    {
      v36 = 1;
    }
  }
  *(_WORD *)(BugCheckParameter2 + 58) = v36;
  *(_QWORD *)(BugCheckParameter2 + 48) = v30;
  *(_DWORD *)(BugCheckParameter2 + 60) = v147;
  v176 = 0LL;
  v177 = 0LL;
  LODWORD(v176) = *(_DWORD *)BugCheckParameter2;
  v37 = BYTE1(v184);
  BYTE1(v176) = BYTE1(v184);
  if ( v26 >= 0 )
  {
    BYTE1(v176) = BYTE1(v184) | 1;
    v26 = MEMORY[0xFFFFF78000000014] - v26;
    if ( v26 >= 0 )
    {
      *(_DWORD *)BugCheckParameter2 = v176;
      *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
LABEL_71:
      KiTimerWaitTest(v32, BugCheckParameter2, 0LL);
      goto LABEL_42;
    }
    v37 = BYTE1(v176);
  }
  v38 = 0LL;
  if ( (v37 & 0xFC) != 0 )
    v38 = (unsigned __int8)(v37 & 0xFC) << 16;
  v39 = MEMORY[0xFFFFF78000000008] - v26;
  *(_QWORD *)(BugCheckParameter2 + 24) = MEMORY[0xFFFFF78000000008] - v26;
  BYTE3(v176) |= 0x40u;
  BYTE2(v176) = (unsigned __int64)(v38 + v39) >> 18;
  *(_DWORD *)BugCheckParameter2 = v176;
  *(_DWORD *)(BugCheckParameter2 + 4) = 0;
  v40 = v172;
  if ( !KiInsertTimerTable(
          (__int64)v32,
          BugCheckParameter2,
          v172,
          (unsigned __int8)((unsigned __int64)(v38 + v39) >> 18),
          0LL) )
    goto LABEL_71;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(BugCheckParameter2, v40, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
LABEL_42:
  KiExitDispatcher((_DWORD)v32, 0, 1, 0, v182);
  v41 = v160;
  v28 = v145;
  v27 = Object;
  if ( v160 )
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 9u);
LABEL_44:
  v42 = *(void **)(BugCheckParameter2 + 256);
  *(_QWORD *)(BugCheckParameter2 + 256) = v41;
  *(_BYTE *)(BugCheckParameter2 + 304) ^= (*(_BYTE *)(BugCheckParameter2 + 304) ^ (4 * a7)) & 4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(BugCheckParameter2 + 64, retaddr);
    v27 = Object;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 64), 0LL);
  }
  v43 = KeGetCurrentPrcb();
  v44 = v43->SchedulerAssist;
  if ( v44 )
  {
    if ( v43->NestingLevel <= 1u )
    {
      v135 = v44[6] - 1;
      v44[6] = v135;
      if ( !v135 )
      {
        KiRemoveSystemWorkPriorityKick(v43);
        v27 = Object;
      }
    }
  }
  if ( v28 )
    KxReleaseSpinLock(v27 + 305);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v136 = KeGetCurrentIrql();
      if ( v136 <= 0xFu && v151 <= 0xFu && v136 >= 2u )
      {
        v137 = KeGetCurrentPrcb();
        v138 = v137->SchedulerAssist;
        v139 = ~(unsigned __int16)(-1LL << (v151 + 1));
        v72 = (v139 & v138[5]) == 0;
        v138[5] &= v139;
        if ( v72 )
          KiRemoveSystemWorkPriorityKick(v137);
      }
    }
  }
  __writecr8(v151);
  if ( v146 )
  {
    if ( v42 )
    {
      if ( !v41 )
      {
        v140 = (_QWORD *)(BugCheckParameter2 + 264);
        v141 = *(_QWORD *)(BugCheckParameter2 + 264);
        v142 = *(_QWORD **)(BugCheckParameter2 + 272);
        if ( *(_QWORD *)(v141 + 8) != BugCheckParameter2 + 264 || (_QWORD *)*v142 != v140 )
          goto LABEL_322;
        *v142 = v141;
        *(_QWORD *)(v141 + 8) = v142;
        *v140 = 0LL;
      }
LABEL_112:
      v76 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v76 & 2) != 0 && (v76 & 4) == 0 )
        ExfTryToWakePushLock(&ExpWakeTimerLock);
      v158 = 0;
      v77 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
        v78 = (unsigned int)MmGetSessionIdEx((__int64)v77->ApcState.Process);
      else
        v78 = 0xFFFFFFFFLL;
      --v77->SpecialApcDisable;
      v79 = ++v77->AbAllocationRegionCount;
      v157 = 0;
      v80 = 0LL;
      v81 = ((char)v77->AbEntrySummary | (char)v77->AbOrphanedEntrySummary) ^ 0x3F;
      v72 = !_BitScanReverse((unsigned int *)&v82, v81);
      v157 = v82;
      if ( !v72 )
      {
        while ( 1 )
        {
          v81 &= ~(1 << v82);
          v83 = (__int64)&v77->LockEntries[v82];
          if ( (*(_BYTE *)(v83 + 26) & 1) != 0
            && (*(_DWORD *)(v83 + 32) & 1) == 0
            && (*(_QWORD *)(v83 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v83 + 40) == (_DWORD)v78 )
          {
            *(_BYTE *)(v83 + 26) &= ~1u;
            if ( *(_QWORD *)(v83 + 32) )
              break;
          }
          v72 = !_BitScanReverse((unsigned int *)&v82, v81);
          v157 = v82;
          if ( v72 )
            goto LABEL_122;
        }
        v80 = v83;
      }
LABEL_122:
      if ( v80 )
      {
        *(_BYTE *)(v80 + 32) |= 2u;
        if ( *(__int64 *)(v80 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v80);
        v84 = *(_DWORD *)(v80 + 88);
        v158 = v84 & 0x1FFFF;
        *(_DWORD *)(v80 + 88) = v84 & 0xFFFE0000;
        *(_BYTE *)(v80 + 25) &= ~1u;
        *(_QWORD *)(v80 + 32) = 0LL;
        v85 = 1 << ((signed __int64)(v80 - (unsigned __int64)v77->LockEntries) / 96);
        if ( v79 == 1 )
          v77->AbEntrySummary |= v85;
        else
          _InterlockedOr8((volatile signed __int8 *)&v77->AbOrphanedEntrySummary, v85);
      }
      else if ( (*((_DWORD *)&v77->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v77, (ULONG_PTR)&ExpWakeTimerLock, v78, 0LL);
      }
      --v77->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v77, (__int64)&ExpWakeTimerLock, &v158);
      v72 = v77->SpecialApcDisable++ == -1;
      if ( v72 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v77->ApcState.ApcListHead[0].Flink != &v77->152 )
        KiCheckForKernelApcDelivery();
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v42 )
        PoDestroyReasonContext(v42);
      goto LABEL_51;
    }
    if ( !v41 )
      goto LABEL_112;
    v74 = (_QWORD *)(BugCheckParameter2 + 264);
    v75 = (_QWORD *)qword_140C16938;
    if ( *(__int64 **)qword_140C16938 == &ExpWakeTimerList )
    {
      *v74 = &ExpWakeTimerList;
      *(_QWORD *)(BugCheckParameter2 + 272) = v75;
      *v75 = v74;
      qword_140C16938 = BugCheckParameter2 + 264;
      goto LABEL_112;
    }
LABEL_322:
    __fastfail(3u);
  }
LABEL_51:
  if ( v23 )
  {
    ObpTraceObjectDereferenceIfActive(BugCheckParameter2 - 48, v23, 1953261124LL);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), -v23) - v23;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter2 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)],
          BugCheckParameter2,
          6uLL,
          *(_QWORD *)(BugCheckParameter2 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(BugCheckParameter2 - 48, v45);
    }
  }
  v47 = v183;
  if ( !v183 )
    return v148;
  if ( !v144 )
  {
    *v183 = v149;
    return v148;
  }
  v143 = (__int64)v183;
  if ( (unsigned __int64)v183 >= 0x7FFFFFFF0000LL )
    v143 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v143 = *(_BYTE *)v143;
  *v47 = v149;
  return v148;
}
