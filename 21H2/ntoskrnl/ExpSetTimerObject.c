/*
 * XREFs of ExpSetTimerObject @ 0x1402EDC70
 * Callers:
 *     NtSetTimerEx @ 0x1402ED9F0 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x140376640 (ExpSetTimer.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ObpDeferObjectDeletion @ 0x14023A834 (ObpDeferObjectDeletion.c)
 *     PsInsertVirtualizedTimer @ 0x1402403B8 (PsInsertVirtualizedTimer.c)
 *     KeRemoveQueueApc @ 0x1402432CC (KeRemoveQueueApc.c)
 *     KeRemoveQueueDpcEx @ 0x140246860 (KeRemoveQueueDpcEx.c)
 *     KeInitializeApc @ 0x140266E00 (KeInitializeApc.c)
 *     PoDestroyReasonContext @ 0x140270E84 (PoDestroyReasonContext.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveEntryTimer @ 0x1402EBFE0 (KiRemoveEntryTimer.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x1402EE9C0 (ObpTraceObjectDereferenceIfActive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x140352D50 (KiInsertTimerTable.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140363010 (KxWaitForSpinLockAndAcquire.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140516ACC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140516BD8 (KiReleaseSpinLockInstrumented.c)
 *     KiTraceSetTimer @ 0x140523D9C (KiTraceSetTimer.c)
 *     ExpCheckWakeTimerAccess @ 0x14078E798 (ExpCheckWakeTimerAccess.c)
 *     ExpCheckTestsigningEnabled @ 0x14094F73C (ExpCheckTestsigningEnabled.c)
 */

__int64 __fastcall ExpSetTimerObject(
        ULONG_PTR BugCheckParameter2,
        char a2,
        __int64 *a3,
        volatile signed __int32 *SchedulerAssist,
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
  __int64 v22; // r12
  unsigned int v23; // r14d
  unsigned int v24; // r10d
  __int64 *v25; // r12
  __int64 v26; // rbx
  KSPIN_LOCK *v27; // r11
  KSPIN_LOCK v28; // rcx
  char v29; // r13
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rcx
  struct _KPRCB *v33; // r12
  char v34; // r13
  _KPROCESS *v35; // rcx
  char v36; // al
  __int16 v37; // ax
  char v38; // cl
  __int64 v39; // rdx
  __int64 v40; // rax
  ULONG_PTR v41; // rbx
  __int64 v42; // rsi
  _QWORD *v43; // rbx
  struct _KPRCB *v44; // rcx
  _DWORD *v45; // rdx
  signed __int64 BugCheckParameter4; // rcx
  _BYTE *v47; // rdx
  __int64 v49; // r13
  volatile signed __int32 *v50; // rbx
  struct _KPRCB *v51; // rdx
  _DWORD *v52; // rcx
  __int64 v53; // r12
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  unsigned __int64 v56; // rdx
  signed __int64 v57; // rdx
  unsigned int v58; // edx
  __int64 v59; // rcx
  struct _KTHREAD *v60; // rbx
  KSPIN_LOCK *p_StackLimit; // r14
  char *v62; // rax
  void **p_StackBase; // rbx
  char **v64; // rdx
  unsigned __int64 v65; // rdx
  _DWORD *v66; // rcx
  _DWORD *v67; // rcx
  _DWORD *v68; // rcx
  struct _KTHREAD *v69; // rbx
  __int64 v70; // rcx
  char v71; // dl
  __int64 v72; // r14
  int SessionId; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  bool v77; // zf
  signed __int8 v78; // cf
  _QWORD *v79; // rax
  _QWORD *v80; // rcx
  char v81; // r11
  struct _KTHREAD *v82; // rsi
  ULONG_PTR v83; // r9
  unsigned __int8 v84; // r12
  __int64 v85; // r15
  unsigned int v86; // edx
  __int64 v87; // rcx
  __int64 v88; // rcx
  int v89; // ecx
  unsigned __int8 v90; // r13
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  struct _KPRCB *v95; // rcx
  _DWORD *v96; // rdx
  unsigned int v97; // ebx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v99; // eax
  int v100; // eax
  unsigned __int8 v101; // al
  struct _KPRCB *v102; // r10
  _DWORD *v103; // r9
  int v104; // eax
  struct _KTHREAD *v105; // rbx
  __int64 v106; // rcx
  unsigned __int8 v107; // al
  char v108; // dl
  __int64 v109; // r14
  int v110; // eax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  unsigned __int8 v115; // r10
  _DWORD *v116; // r9
  __int64 v117; // rbx
  __int64 v118; // r8
  _QWORD *v119; // rdx
  int v120; // eax
  int v121; // eax
  int v122; // eax
  int v123; // eax
  int v124; // eax
  unsigned __int8 v125; // al
  struct _KPRCB *v126; // r10
  int v127; // eax
  unsigned int v128; // edx
  int v129; // eax
  unsigned int v130; // eax
  _DWORD *v131; // r9
  __int64 v132; // r8
  struct _KPRCB *v133; // rcx
  _DWORD *v134; // rdx
  int v135; // eax
  __int64 v136; // rsi
  volatile signed __int64 *v137; // r12
  __int64 v138; // rcx
  int v139; // eax
  _DWORD *v140; // rcx
  int v141; // eax
  struct _KPRCB *v142; // rcx
  _DWORD *v143; // rdx
  int v144; // eax
  struct _KPRCB *v145; // rcx
  _DWORD *v146; // rdx
  int v147; // eax
  int v148; // eax
  unsigned __int8 v149; // al
  struct _KPRCB *v150; // r10
  _DWORD *v151; // r9
  int v152; // eax
  _QWORD *v153; // rax
  __int64 v154; // rdx
  _QWORD *v155; // rcx
  __int64 v156; // rcx
  char v158; // [rsp+41h] [rbp-167h]
  char v159; // [rsp+42h] [rbp-166h]
  int v160; // [rsp+44h] [rbp-164h]
  unsigned int v161; // [rsp+48h] [rbp-160h]
  int v162; // [rsp+4Ch] [rbp-15Ch]
  KSPIN_LOCK *Object; // [rsp+50h] [rbp-158h]
  unsigned __int8 v164; // [rsp+58h] [rbp-150h]
  __int64 v165; // [rsp+60h] [rbp-148h]
  struct _KPRCB *v166; // [rsp+60h] [rbp-148h]
  __int64 v167; // [rsp+60h] [rbp-148h]
  int v168; // [rsp+68h] [rbp-140h] BYREF
  int v169; // [rsp+6Ch] [rbp-13Ch] BYREF
  int v170; // [rsp+70h] [rbp-138h]
  int v171; // [rsp+74h] [rbp-134h]
  volatile signed __int64 *v172; // [rsp+78h] [rbp-130h]
  __int64 v173; // [rsp+80h] [rbp-128h]
  struct _KPRCB *v174; // [rsp+88h] [rbp-120h]
  int v175; // [rsp+90h] [rbp-118h]
  int v176; // [rsp+94h] [rbp-114h] BYREF
  int v177; // [rsp+98h] [rbp-110h] BYREF
  __int64 *v178; // [rsp+A0h] [rbp-108h]
  int v179; // [rsp+A8h] [rbp-100h]
  int v180; // [rsp+ACh] [rbp-FCh]
  int v181; // [rsp+B0h] [rbp-F8h]
  volatile signed __int32 *v182; // [rsp+B8h] [rbp-F0h] BYREF
  int v183; // [rsp+C0h] [rbp-E8h]
  volatile signed __int64 *v184; // [rsp+C8h] [rbp-E0h] BYREF
  ULONG_PTR v185; // [rsp+D0h] [rbp-D8h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-D0h]
  int v187; // [rsp+E0h] [rbp-C8h] BYREF
  int v188; // [rsp+E4h] [rbp-C4h] BYREF
  __int128 v189; // [rsp+E8h] [rbp-C0h]
  __int64 v190; // [rsp+F8h] [rbp-B0h]
  ULONG_PTR v191; // [rsp+100h] [rbp-A8h] BYREF
  ULONG_PTR v192; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v193; // [rsp+110h] [rbp-98h]
  struct _KPRCB *v194; // [rsp+118h] [rbp-90h]
  __int64 v195; // [rsp+120h] [rbp-88h]
  _BYTE *v196; // [rsp+128h] [rbp-80h]
  __int128 v197; // [rsp+138h] [rbp-70h]
  __int64 v198; // [rsp+148h] [rbp-60h]
  _QWORD v199[2]; // [rsp+150h] [rbp-58h] BYREF
  _QWORD v200[2]; // [rsp+160h] [rbp-48h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v172 = (volatile signed __int64 *)SchedulerAssist;
  v178 = a3;
  v10 = a2;
  v196 = a10;
  v161 = 0;
  v12 = 0;
  v159 = 0;
  CurrentThread = 0LL;
  v173 = a6;
  if ( !a6 )
    goto LABEL_2;
  if ( a7 )
  {
    if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
    {
      v97 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10]);
      v161 = v97;
      if ( v97 )
      {
        ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
        return v97;
      }
    }
    v10 = a2;
  }
  if ( (int)qword_140C23460 < 2 && !byte_140C23433 )
  {
    v161 = 1073741861;
    v173 = 0LL;
    goto LABEL_2;
  }
  v12 = 1;
  v159 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v180 = 0;
  v69 = KeGetCurrentThread();
  --v69->SpecialApcDisable;
  if ( ++v69->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v69, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  v179 = 0;
  LOBYTE(v70) = v69->AbEntrySummary;
  if ( !(_BYTE)v70 )
  {
    if ( !v69->AbOrphanedEntrySummary )
    {
      v72 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v69, &ExpWakeTimerLock);
      goto LABEL_95;
    }
    AbOrphanedEntrySummary = v69->AbOrphanedEntrySummary;
    v69->AbOrphanedEntrySummary = 0;
    LOBYTE(v70) = AbOrphanedEntrySummary | v69->AbEntrySummary;
  }
  v71 = v70;
  _BitScanForward((unsigned int *)&v70, (unsigned __int8)v70);
  v179 = v70;
  v69->AbEntrySummary = v71 & ~(1 << v70);
  v72 = (__int64)&v69->LockEntries[v70];
LABEL_95:
  if ( v72 )
  {
    if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
      && byte_140C4FA08[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx(v69->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v72 + 40) = SessionId;
    *(_QWORD *)(v72 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v69->116 + 1, 0x10u);
  }
  --v69->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v69);
  v77 = v69->SpecialApcDisable++ == -1;
  if ( v77 && ($C459BD0D405E8E46662177FB3D0A143F *)v69->ApcState.ApcListHead[0].Flink != &v69->152 )
    KiCheckForKernelApcDelivery(v75, v74, v76, SchedulerAssist);
  v78 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
  if ( v78 )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v72, &ExpWakeTimerLock);
  v10 = a2;
  if ( v72 )
    *(_BYTE *)(v72 + 26) |= 1u;
LABEL_2:
  v185 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = (KSPIN_LOCK *)Process;
  v14 = 0;
  v158 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v164 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    *((_DWORD *)SchedulerAssist + 5) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( v10 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    KxAcquireSpinLock(&Process[2].AffinityPadding[4]);
    v14 = 1;
    v158 = 1;
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
        v99 = v17[6];
        v17[6] = v99 + 1;
        if ( v99 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 64), 0LL) )
    {
      v66 = CurrentPrcb->SchedulerAssist;
      if ( v66 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v100 = v66[6] - 1;
          v66[6] = v100;
          if ( !v100 )
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
        v101 = KeGetCurrentIrql();
        if ( v101 <= 0xFu && v164 <= 0xFu && v101 >= 2u )
        {
          v102 = KeGetCurrentPrcb();
          v103 = v102->SchedulerAssist;
          v104 = ~(unsigned __int16)(-1LL << (v164 + 1));
          v77 = (v104 & v103[5]) == 0;
          v103[5] &= v104;
          if ( v77 )
            KiRemoveSystemWorkPriorityKick(v102);
        }
      }
    }
    __writecr8(v164);
    v159 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v183 = 0;
    v105 = KeGetCurrentThread();
    --v105->SpecialApcDisable;
    if ( ++v105->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v105, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
    v181 = 0;
    LOBYTE(v106) = v105->AbEntrySummary;
    if ( !(_BYTE)v106 )
    {
      if ( !v105->AbOrphanedEntrySummary )
      {
        v109 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v105, &ExpWakeTimerLock);
        goto LABEL_182;
      }
      v107 = v105->AbOrphanedEntrySummary;
      v105->AbOrphanedEntrySummary = 0;
      LOBYTE(v106) = v107 | v105->AbEntrySummary;
    }
    v108 = v106;
    _BitScanForward((unsigned int *)&v106, (unsigned __int8)v106);
    v181 = v106;
    v105->AbEntrySummary = v108 & ~(1 << v106);
    v109 = (__int64)&v105->LockEntries[v106];
LABEL_182:
    if ( v109 )
    {
      if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
        && byte_140C4FA08[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
      {
        v110 = MmGetSessionIdEx(v105->ApcState.Process);
      }
      else
      {
        v110 = -1;
      }
      *(_DWORD *)(v109 + 40) = v110;
      *(_QWORD *)(v109 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v105->116 + 1, 0x10u);
    }
    --v105->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v105);
    v77 = v105->SpecialApcDisable++ == -1;
    if ( v77 && ($C459BD0D405E8E46662177FB3D0A143F *)v105->ApcState.ApcListHead[0].Flink != &v105->152 )
      KiCheckForKernelApcDelivery(v112, v111, v113, v114);
    v78 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    if ( v78 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v109, &ExpWakeTimerLock);
    if ( v109 )
      *(_BYTE *)(v109 + 26) |= 1u;
    v115 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v115 <= 0xFu )
    {
      v116 = KeGetCurrentPrcb()->SchedulerAssist;
      v116[5] |= (-1 << (v115 + 1)) & 4;
    }
    v164 = v115;
    if ( v158 )
      KxAcquireSpinLock(Object + 305);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v18 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v117 = *(_QWORD *)(BugCheckParameter2 + 80);
    KxAcquireSpinLock((PKSPIN_LOCK)(v117 + 1120));
    v118 = *(_QWORD *)(BugCheckParameter2 + 224);
    v119 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v118 + 8) != BugCheckParameter2 + 224 || *v119 != BugCheckParameter2 + 224 )
      goto LABEL_325;
    *v119 = v118;
    *(_QWORD *)(v118 + 8) = v119;
    KxReleaseSpinLock((PKSPIN_LOCK)(v117 + 1120));
    *(_BYTE *)(BugCheckParameter2 + 304) &= ~1u;
    if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 && *(_BYTE *)(BugCheckParameter2 + 248)
      || KeCancelTimer((PKTIMER)BugCheckParameter2)
      || KeRemoveQueueDpcEx(BugCheckParameter2 + 160, 0) )
    {
      v18 = 1;
    }
    v22 = BugCheckParameter2 + 72;
    if ( KeRemoveQueueApc(BugCheckParameter2 + 72) )
      ++v18;
  }
  else
  {
    v19 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
    {
      SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      *((_DWORD *)SchedulerAssist + 5) |= (-1 << (v19 + 1)) & 4;
    }
    v191 = 0LL;
    v182 = 0LL;
    v168 = 0;
    v20 = 0;
    while ( 1 )
    {
      v187 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
      {
        do
          KeYieldProcessorEx(&v187);
        while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      {
        v21 = -129;
        goto LABEL_18;
      }
      v49 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
      v174 = (struct _KPRCB *)(KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 14656);
      v50 = (volatile signed __int32 *)(&v174->ProcessorState.ContextFrame.P3Home
                                      + 1024 * (unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58)
                                      + 4 * v49);
      v51 = KeGetCurrentPrcb();
      v166 = v51;
      v188 = 0;
      v52 = v51->SchedulerAssist;
      if ( v52 )
      {
        if ( v51->NestingLevel <= 1u )
        {
          v120 = v52[6];
          v52[6] = v120 + 1;
          if ( v120 == -1 )
            KiRemoveSystemWorkPriorityKick(v51);
        }
      }
      while ( _interlockedbittestandset64(v50, 0LL) )
      {
        v67 = v166->SchedulerAssist;
        if ( v67 )
        {
          if ( v166->NestingLevel <= 1u )
          {
            v121 = v67[6] - 1;
            v67[6] = v121;
            if ( !v121 )
              KiRemoveSystemWorkPriorityKick(v166);
          }
        }
        do
          KeYieldProcessorEx(&v188);
        while ( *(_QWORD *)v50 );
        v68 = v166->SchedulerAssist;
        if ( v68 )
        {
          if ( v166->NestingLevel <= 1u )
          {
            v122 = v68[6];
            v68[6] = v122 + 1;
            if ( v122 == -1 )
              KiRemoveSystemWorkPriorityKick(v166);
          }
        }
      }
      v182 = v50;
      v53 = (__int64)v174;
      if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v50, 0LL);
      v95 = KeGetCurrentPrcb();
      v96 = v95->SchedulerAssist;
      if ( v96 )
      {
        if ( v95->NestingLevel <= 1u )
        {
          v123 = v96[6] - 1;
          v96[6] = v123;
          if ( !v123 )
            KiRemoveSystemWorkPriorityKick(v95);
        }
      }
      if ( _InterlockedExchange64((volatile __int64 *)(v53 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
      {
        v21 = 16777087;
        v20 = 1;
        goto LABEL_18;
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      v168 = 0;
      while ( *(char *)(BugCheckParameter2 + 3) < 0 )
        KeYieldProcessorEx(&v168);
    }
    KiRemoveEntryTimer((__int64)v174, BugCheckParameter2, v49, (volatile signed __int64 **)&v182);
    _InterlockedAnd64((volatile signed __int64 *)v182, 0LL);
    v54 = KeGetCurrentPrcb();
    v55 = v54->SchedulerAssist;
    if ( v55 )
    {
      if ( v54->NestingLevel <= 1u )
      {
        v124 = v55[6] - 1;
        v55[6] = v124;
        if ( !v124 )
          KiRemoveSystemWorkPriorityKick(v54);
      }
    }
    v21 = -1073741953;
    v20 = 1;
LABEL_18:
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, v21);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v20 )
    {
      v191 = BugCheckParameter2;
      v200[0] = &v191;
      v200[1] = 8LL;
      EtwTraceKernelEvent((int)v200, 1, 0x40020000u, 3925, 1538);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v125 = KeGetCurrentIrql();
        if ( v125 <= 0xFu && v19 <= 0xFu && v125 >= 2u )
        {
          v126 = KeGetCurrentPrcb();
          SchedulerAssist = (volatile signed __int32 *)v126->SchedulerAssist;
          v127 = ~(unsigned __int16)(-1LL << (v19 + 1));
          v77 = (v127 & SchedulerAssist[5]) == 0;
          *((_DWORD *)SchedulerAssist + 5) &= v127;
          if ( v77 )
            KiRemoveSystemWorkPriorityKick(v126);
        }
      }
    }
    __writecr8(v19);
    v22 = BugCheckParameter2 + 72;
    v18 = 0;
  }
  *(_BYTE *)(BugCheckParameter2 + 248) = 0;
  v23 = v18 + 1;
  v162 = *(_DWORD *)(BugCheckParameter2 + 4);
  v24 = a8;
  v160 = a8;
  *(_DWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 244) = 0;
  *(_DWORD *)(BugCheckParameter2 + 320) = a9;
  if ( v172 )
  {
    v60 = KeGetCurrentThread();
    KeInitializeApc(v22, (__int64)v60, 2, (__int64)ExpTimerApcRoutine, 0LL, (__int64)v172, a2, a5);
    p_StackLimit = (KSPIN_LOCK *)&v60[1].StackLimit;
    KxAcquireSpinLock((PKSPIN_LOCK)&v60[1].StackLimit);
    v62 = (char *)(BugCheckParameter2 + 224);
    p_StackBase = &v60[1].StackBase;
    v64 = (char **)p_StackBase[1];
    if ( *v64 != (char *)p_StackBase )
      goto LABEL_325;
    *(_QWORD *)v62 = p_StackBase;
    *(_QWORD *)(BugCheckParameter2 + 232) = v64;
    *v64 = v62;
    p_StackBase[1] = v62;
    *(_BYTE *)(BugCheckParameter2 + 304) |= 1u;
    KxReleaseSpinLock(p_StackLimit);
    v185 = BugCheckParameter2 + 160;
    v23 = v18;
    v24 = 0;
    v160 = 0;
  }
  LOBYTE(SchedulerAssist) = 0;
  v25 = v178;
  v26 = *v178;
  v165 = *v178;
  v27 = Object;
  v28 = Object[162];
  v29 = v158;
  if ( v158 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
    {
      if ( v28 && (*(_DWORD *)(v28 + 1320) & 0x40000) != 0 )
        LOBYTE(SchedulerAssist) = *(_DWORD *)(v28 + 856) != 0;
      PsInsertVirtualizedTimer(
        Object,
        (_QWORD *)(BugCheckParameter2 + 288),
        0LL,
        (__int64)SchedulerAssist,
        (KSPIN_LOCK **)(BugCheckParameter2 + 280));
      v24 = v160;
      v27 = Object;
    }
    _InterlockedIncrement((volatile signed __int32 *)v27 + 606);
    if ( (v27[79] & 0x10) != 0 )
    {
      v59 = *((unsigned int *)v27 + 17);
      if ( (_DWORD)v59 )
      {
        v175 = *((_DWORD *)v27 + 17);
        v26 = *v25;
        if ( *v25 >= 0 )
        {
          if ( (unsigned __int64)v26 <= MEMORY[0xFFFFF78000000014] )
            v26 = MEMORY[0xFFFFF78000000014];
          v26 += v59;
          if ( v26 < *v25 )
            v26 = *v25;
          LODWORD(v59) = v175;
        }
        else if ( v26 - v59 <= v26 )
        {
          v26 -= v59;
        }
        HIDWORD(v165) = HIDWORD(v26);
        v128 = (unsigned int)v59 / 0x2710;
        if ( v24 )
        {
          v129 = v128 + v24;
          if ( v128 + v24 > v24 )
          {
            v24 += v128;
            v160 = v129;
            *(_DWORD *)(BugCheckParameter2 + 240) += v128;
LABEL_264:
            *(_DWORD *)(BugCheckParameter2 + 244) = v128;
            goto LABEL_23;
          }
        }
        v130 = *(_DWORD *)(BugCheckParameter2 + 240);
        if ( v130 && v130 + v128 > v130 )
        {
          *(_DWORD *)(BugCheckParameter2 + 240) = v130 + v128;
          goto LABEL_264;
        }
      }
    }
  }
LABEL_23:
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 312) = v26;
    v42 = v173;
    if ( v165 < 0 )
      *(_BYTE *)(BugCheckParameter2 + 248) = (v173 != 0) + 2;
    else
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    goto LABEL_44;
  }
  v30 = v26;
  v197 = 0LL;
  v198 = 0LL;
  if ( a9 )
  {
    v56 = 10000LL * a9;
    if ( v56 > 0xFC0000 )
    {
      v57 = v56 - 16515072;
      if ( v26 >= 0 )
      {
        v26 += v57;
        if ( v26 < v30 )
          v26 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v26 -= v57;
        if ( v26 > v30 )
          v26 = 0x8000000000000000uLL;
      }
      if ( v24 )
      {
        v65 = (__int64)((unsigned __int128)(v57 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
        if ( v24 + (unsigned int)v65 + (v65 >> 63) < v24 )
          v160 = -1;
        else
          v160 = v24 + v65 + (v65 >> 63);
      }
      LODWORD(v56) = 16515072;
    }
    v58 = (unsigned int)v56 >> 18;
    if ( v58 > 0x3F )
      LOBYTE(v58) = 63;
    BYTE1(v197) = 4 * v58;
  }
  v31 = KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v185 ^ KiWaitAlways), KiWaitNever);
  v193 = v31;
  v32 = KeGetCurrentIrql();
  v195 = v32;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v32 <= 0xFu )
  {
    v131 = KeGetCurrentPrcb()->SchedulerAssist;
    v131[5] |= (-1 << (v32 + 1)) & 4;
  }
  v33 = KeGetCurrentPrcb();
  v194 = v33;
  v192 = 0LL;
  v184 = 0LL;
  v169 = 0;
  v34 = 0;
  while ( 1 )
  {
    v176 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
    {
      do
        KeYieldProcessorEx(&v176);
      while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      break;
    v132 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    LODWORD(v178) = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v167 = KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 14656;
    v172 = (volatile signed __int64 *)(v167
                                     + 32
                                     * (v132
                                      + ((unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8)
                                      + 16));
    v133 = KeGetCurrentPrcb();
    v174 = v133;
    v177 = 0;
    v134 = v133->SchedulerAssist;
    if ( v134 )
    {
      if ( v133->NestingLevel <= 1u )
      {
        v135 = v134[6];
        v134[6] = v135 + 1;
        if ( v135 == -1 )
          KiRemoveSystemWorkPriorityKick(v133);
      }
    }
    v136 = (__int64)v174;
    while ( 1 )
    {
      v137 = v172;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)v172, 0LL) )
        break;
      v138 = *(_QWORD *)(v136 + 33976);
      if ( v138 )
      {
        if ( *(_BYTE *)(v136 + 32) <= 1u )
        {
          v139 = *(_DWORD *)(v138 + 24) - 1;
          *(_DWORD *)(v138 + 24) = v139;
          if ( !v139 )
            KiRemoveSystemWorkPriorityKick(v136);
        }
      }
      do
        KeYieldProcessorEx(&v177);
      while ( *v137 );
      v136 = (__int64)v174;
      v140 = v174->SchedulerAssist;
      if ( v140 )
      {
        if ( v174->NestingLevel <= 1u )
        {
          v141 = v140[6];
          v140[6] = v141 + 1;
          if ( v141 == -1 )
            KiRemoveSystemWorkPriorityKick(v136);
        }
      }
    }
    v184 = v137;
    v31 = v193;
    v33 = v194;
    if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
    {
      KiRemoveEntryTimer(v167, BugCheckParameter2, (unsigned int)v178, &v184);
      _InterlockedAnd64(v184, 0LL);
      v145 = KeGetCurrentPrcb();
      v146 = v145->SchedulerAssist;
      if ( v146 )
      {
        if ( v145->NestingLevel <= 1u )
        {
          v147 = v146[6] - 1;
          v146[6] = v147;
          if ( !v147 )
            KiRemoveSystemWorkPriorityKick(v145);
        }
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFFFF);
      goto LABEL_306;
    }
    _InterlockedAnd64(v172, 0LL);
    v142 = KeGetCurrentPrcb();
    v143 = v142->SchedulerAssist;
    if ( v143 )
    {
      if ( v142->NestingLevel <= 1u )
      {
        v144 = v143[6] - 1;
        v143[6] = v144;
        if ( !v144 )
          KiRemoveSystemWorkPriorityKick(v142);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v167 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
    {
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFFu);
LABEL_306:
      v34 = 1;
      break;
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    v169 = 0;
    while ( *(char *)(BugCheckParameter2 + 3) < 0 )
      KeYieldProcessorEx(&v169);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v34 )
  {
    v192 = BugCheckParameter2;
    v199[0] = &v192;
    v199[1] = 8LL;
    EtwTraceKernelEvent((int)v199, 1, 0x40020000u, 3925, 1538);
  }
  v37 = 0;
  if ( (KiVelocityFlags & 0x2000) != 0 )
  {
    if ( v33->NestingLevel
      || ((v35 = KeGetCurrentThread()->ApcState.Process, (v35[1].DirectoryTableBase & 0x100000000000LL) == 0)
       || (HIDWORD(v35[2].Header.WaitListHead.Flink) & 0x4000000) != 0
        ? (v36 = 0)
        : (v36 = 1),
          !v36) )
    {
      v37 = 1;
    }
  }
  *(_WORD *)(BugCheckParameter2 + 58) = v37;
  *(_QWORD *)(BugCheckParameter2 + 48) = v31;
  *(_DWORD *)(BugCheckParameter2 + 60) = v160;
  v189 = 0LL;
  v190 = 0LL;
  LODWORD(v189) = *(_DWORD *)BugCheckParameter2;
  v38 = BYTE1(v197);
  BYTE1(v189) = BYTE1(v197);
  if ( v26 >= 0 )
  {
    BYTE1(v189) = BYTE1(v197) | 1;
    v26 = MEMORY[0xFFFFF78000000014] - v26;
    if ( v26 >= 0 )
    {
      *(_DWORD *)BugCheckParameter2 = v189;
      *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
LABEL_71:
      KiTimerWaitTest((__int64)v33, BugCheckParameter2, 0LL);
      goto LABEL_42;
    }
    v38 = BYTE1(v189);
  }
  v39 = 0LL;
  if ( (v38 & 0xFC) != 0 )
    v39 = (unsigned __int8)(v38 & 0xFC) << 16;
  v40 = MEMORY[0xFFFFF78000000008] - v26;
  *(_QWORD *)(BugCheckParameter2 + 24) = MEMORY[0xFFFFF78000000008] - v26;
  BYTE3(v189) |= 0x40u;
  BYTE2(v189) = (unsigned __int64)(v39 + v40) >> 18;
  *(_DWORD *)BugCheckParameter2 = v189;
  *(_DWORD *)(BugCheckParameter2 + 4) = 0;
  v41 = v185;
  if ( !(unsigned __int8)KiInsertTimerTable(
                           (_DWORD)v33,
                           BugCheckParameter2,
                           v185,
                           (unsigned __int8)((unsigned __int64)(v39 + v40) >> 18),
                           0LL) )
    goto LABEL_71;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(BugCheckParameter2, v41, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
LABEL_42:
  KiExitDispatcher((_DWORD)v33, 0, 1, 0, v195);
  v42 = v173;
  v29 = v158;
  v27 = Object;
  if ( v173 )
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 9u);
LABEL_44:
  v43 = *(_QWORD **)(BugCheckParameter2 + 256);
  *(_QWORD *)(BugCheckParameter2 + 256) = v42;
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
  v44 = KeGetCurrentPrcb();
  v45 = v44->SchedulerAssist;
  if ( v45 )
  {
    if ( v44->NestingLevel <= 1u )
    {
      v148 = v45[6] - 1;
      v45[6] = v148;
      if ( !v148 )
      {
        KiRemoveSystemWorkPriorityKick(v44);
        v27 = Object;
      }
    }
  }
  if ( v29 )
    KxReleaseSpinLock(v27 + 305);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v149 = KeGetCurrentIrql();
      if ( v149 <= 0xFu && v164 <= 0xFu && v149 >= 2u )
      {
        v150 = KeGetCurrentPrcb();
        v151 = v150->SchedulerAssist;
        v152 = ~(unsigned __int16)(-1LL << (v164 + 1));
        v77 = (v152 & v151[5]) == 0;
        v151[5] &= v152;
        if ( v77 )
          KiRemoveSystemWorkPriorityKick(v150);
      }
    }
  }
  __writecr8(v164);
  if ( v159 )
  {
    if ( v43 )
    {
      if ( !v42 )
      {
        v153 = (_QWORD *)(BugCheckParameter2 + 264);
        v154 = *(_QWORD *)(BugCheckParameter2 + 264);
        v155 = *(_QWORD **)(BugCheckParameter2 + 272);
        if ( *(_QWORD *)(v154 + 8) != BugCheckParameter2 + 264 || (_QWORD *)*v155 != v153 )
          goto LABEL_325;
        *v155 = v154;
        *(_QWORD *)(v154 + 8) = v155;
        *v153 = 0LL;
      }
LABEL_111:
      v81 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v81 & 2) != 0 && (v81 & 4) == 0 )
        ExfTryToWakePushLock(&ExpWakeTimerLock);
      v171 = 0;
      v82 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(&ExpWakeTimerLock) == 1 )
        v83 = (unsigned int)MmGetSessionIdEx(v82->ApcState.Process);
      else
        v83 = 0xFFFFFFFFLL;
      --v82->SpecialApcDisable;
      v84 = ++v82->AbAllocationRegionCount;
      v170 = 0;
      v85 = 0LL;
      v86 = ((char)v82->AbEntrySummary | (char)v82->AbOrphanedEntrySummary) ^ 0x3F;
      v77 = !_BitScanReverse((unsigned int *)&v87, v86);
      v170 = v87;
      if ( !v77 )
      {
        while ( 1 )
        {
          v86 &= ~(1 << v87);
          v88 = (__int64)&v82->LockEntries[v87];
          if ( (*(_BYTE *)(v88 + 26) & 1) != 0
            && (*(_DWORD *)(v88 + 32) & 1) == 0
            && (*(_QWORD *)(v88 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v88 + 40) == (_DWORD)v83 )
          {
            *(_BYTE *)(v88 + 26) &= ~1u;
            if ( *(_QWORD *)(v88 + 32) )
              break;
          }
          v77 = !_BitScanReverse((unsigned int *)&v87, v86);
          v170 = v87;
          if ( v77 )
            goto LABEL_121;
        }
        v85 = v88;
      }
LABEL_121:
      if ( v85 )
      {
        *(_BYTE *)(v85 + 32) |= 2u;
        if ( *(__int64 *)(v85 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v85);
        v89 = *(_DWORD *)(v85 + 88);
        v171 = v89 & 0x1FFFF;
        *(_DWORD *)(v85 + 88) = v89 & 0xFFFE0000;
        *(_BYTE *)(v85 + 25) &= ~1u;
        *(_QWORD *)(v85 + 32) = 0LL;
        v90 = 1 << ((signed __int64)(v85 - (unsigned __int64)v82->LockEntries) / 96);
        if ( v84 == 1 )
          v82->AbEntrySummary |= v90;
        else
          _InterlockedOr8((volatile signed __int8 *)&v82->AbOrphanedEntrySummary, v90);
      }
      else if ( (*((_DWORD *)&v82->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v82, (ULONG_PTR)&ExpWakeTimerLock, v83, 0LL);
      }
      --v82->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v82);
      v77 = v82->SpecialApcDisable++ == -1;
      if ( v77 && ($C459BD0D405E8E46662177FB3D0A143F *)v82->ApcState.ApcListHead[0].Flink != &v82->152 )
        KiCheckForKernelApcDelivery(v92, v91, v93, v94);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v91, v93, v94);
      if ( v43 )
        PoDestroyReasonContext(v43);
      goto LABEL_51;
    }
    if ( !v42 )
      goto LABEL_111;
    v79 = (_QWORD *)(BugCheckParameter2 + 264);
    v80 = (_QWORD *)qword_140C16B28;
    if ( *(__int64 **)qword_140C16B28 == &ExpWakeTimerList )
    {
      *v79 = &ExpWakeTimerList;
      *(_QWORD *)(BugCheckParameter2 + 272) = v80;
      *v80 = v79;
      qword_140C16B28 = BugCheckParameter2 + 264;
      goto LABEL_111;
    }
LABEL_325:
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
      ObpDeferObjectDeletion(BugCheckParameter2 - 48);
    }
  }
  v47 = v196;
  if ( !v196 )
    return v161;
  if ( !a2 )
  {
    *v196 = v162;
    return v161;
  }
  v156 = (__int64)v196;
  if ( (unsigned __int64)v196 >= 0x7FFFFFFF0000LL )
    v156 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v156 = *(_BYTE *)v156;
  *v47 = v162;
  return v161;
}
