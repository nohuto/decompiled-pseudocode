/*
 * XREFs of ExpSetTimerObject @ 0x1402E33D0
 * Callers:
 *     NtSetTimerEx @ 0x1402E3150 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x140374AC0 (ExpSetTimer.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     PsInsertVirtualizedTimer @ 0x140239F94 (PsInsertVirtualizedTimer.c)
 *     ObpDeferObjectDeletion @ 0x1402440B4 (ObpDeferObjectDeletion.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KeRemoveQueueApc @ 0x14024EC10 (KeRemoveQueueApc.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiTimerWaitTest @ 0x1402A7FE0 (KiTimerWaitTest.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x1402B7800 (KiInsertTimerTable.c)
 *     KiRemoveEntryTimer @ 0x1402E40E0 (KiRemoveEntryTimer.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140347B50 (ObpTraceObjectDereferenceIfActive.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     PoDestroyReasonContext @ 0x14036B090 (PoDestroyReasonContext.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045A310 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056E8CC (KiReleaseSpinLockInstrumented.c)
 *     KiTraceSetTimer @ 0x14057AAF8 (KiTraceSetTimer.c)
 *     ExpCheckWakeTimerAccess @ 0x1407F4160 (ExpCheckWakeTimerAccess.c)
 *     ExpCheckTestsigningEnabled @ 0x1407F7D3C (ExpCheckTestsigningEnabled.c)
 */

__int64 __fastcall ExpSetTimerObject(
        __int64 BugCheckParameter2,
        char a2,
        volatile signed __int64 *a3,
        _DWORD *SchedulerAssist,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned int a8,
        unsigned int a9,
        _BYTE *a10)
{
  char v12; // r12
  _KPROCESS *Process; // rbx
  char v14; // r13
  __int64 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v17; // rcx
  int v18; // r13d
  unsigned __int8 v19; // r14
  char v20; // r15
  unsigned int v21; // eax
  int v22; // r12d
  unsigned int v23; // r15d
  volatile signed __int64 *v24; // r12
  __int64 v25; // rbx
  KSPIN_LOCK *v26; // r11
  KSPIN_LOCK v27; // rcx
  char v28; // r13
  unsigned int v29; // r10d
  char v30; // cl
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // r13
  struct _KPRCB *v34; // r12
  char v35; // cl
  _KPROCESS *v36; // rcx
  char v37; // al
  __int16 v38; // ax
  char v39; // cl
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // r14
  void *v44; // rbx
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  unsigned __int8 v47; // si
  signed __int64 BugCheckParameter4; // rcx
  _BYTE *v49; // rdx
  _DWORD *v51; // r9
  __int64 v52; // r13
  volatile signed __int32 *v53; // rbx
  struct _KPRCB *v54; // rdx
  _DWORD *v55; // rcx
  volatile signed __int32 *v56; // r12
  struct _KPRCB *v57; // rcx
  _DWORD *v58; // rdx
  unsigned __int64 v59; // rdx
  signed __int64 v60; // rdx
  unsigned int v61; // edx
  __int64 v62; // rcx
  struct _KTHREAD *v63; // rbx
  KSPIN_LOCK *p_StackLimit; // r15
  char *v65; // rax
  void **p_StackBase; // rbx
  char **v67; // rdx
  _QWORD *v68; // rax
  _QWORD *v69; // rcx
  char v70; // r11
  struct _KTHREAD *v71; // r14
  __int64 v72; // r8
  unsigned __int64 v73; // rdx
  unsigned int v74; // ecx
  char *p_Process; // rsi
  int v76; // r8d
  struct _KTHREAD *v77; // r14
  __int64 v78; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v80; // rdx
  int SessionId; // eax
  unsigned __int64 v82; // rdx
  unsigned int v83; // eax
  _DWORD *v84; // rcx
  _DWORD *v85; // rcx
  __int64 v86; // rbx
  __int64 v87; // r8
  _QWORD *v88; // rdx
  char v89; // al
  unsigned int v90; // ebx
  int v91; // eax
  _DWORD *v92; // rcx
  int v93; // eax
  unsigned __int8 v94; // al
  struct _KPRCB *v95; // r10
  _DWORD *v96; // r9
  int v97; // eax
  bool v98; // zf
  struct _KTHREAD *v99; // r14
  __int64 v100; // rbx
  unsigned int v101; // eax
  __int64 v102; // rdx
  int v103; // eax
  unsigned __int8 v104; // r10
  _DWORD *v105; // r9
  int v106; // eax
  int v107; // eax
  int v108; // eax
  struct _KPRCB *v109; // rcx
  _DWORD *v110; // rdx
  int v111; // eax
  int v112; // eax
  unsigned __int8 v113; // al
  struct _KPRCB *v114; // r10
  int v115; // eax
  unsigned int v116; // edx
  unsigned int v117; // eax
  __int64 v118; // r8
  struct _KPRCB *v119; // r13
  _DWORD *v120; // rcx
  int v121; // eax
  volatile signed __int64 *v122; // r14
  _DWORD *v123; // rcx
  int v124; // eax
  _DWORD *v125; // rcx
  int v126; // eax
  struct _KPRCB *v127; // rcx
  _DWORD *v128; // rdx
  int v129; // eax
  struct _KPRCB *v130; // rcx
  _DWORD *v131; // rdx
  int v132; // eax
  int v133; // eax
  unsigned __int8 v134; // al
  struct _KPRCB *v135; // r10
  _DWORD *v136; // r9
  int v137; // eax
  _QWORD *v138; // rax
  __int64 v139; // rdx
  _QWORD *v140; // rcx
  __int64 v141; // rcx
  char v142; // [rsp+40h] [rbp-138h]
  char v143; // [rsp+41h] [rbp-137h]
  char v145; // [rsp+43h] [rbp-135h]
  unsigned int v146; // [rsp+44h] [rbp-134h]
  unsigned int v147; // [rsp+48h] [rbp-130h]
  KSPIN_LOCK *Object; // [rsp+50h] [rbp-128h]
  volatile signed __int64 v149; // [rsp+58h] [rbp-120h]
  struct _KPRCB *v150; // [rsp+58h] [rbp-120h]
  __int64 v151; // [rsp+58h] [rbp-120h]
  int v152; // [rsp+60h] [rbp-118h] BYREF
  int v153; // [rsp+64h] [rbp-114h] BYREF
  volatile signed __int64 *v154; // [rsp+68h] [rbp-110h] BYREF
  volatile signed __int32 *v155; // [rsp+70h] [rbp-108h]
  __int64 v156; // [rsp+78h] [rbp-100h]
  __int64 v157; // [rsp+80h] [rbp-F8h]
  __int64 v158; // [rsp+88h] [rbp-F0h] BYREF
  int v159; // [rsp+90h] [rbp-E8h]
  int v160; // [rsp+94h] [rbp-E4h]
  int v161; // [rsp+98h] [rbp-E0h] BYREF
  int v162; // [rsp+9Ch] [rbp-DCh] BYREF
  unsigned int v163; // [rsp+A0h] [rbp-D8h]
  int v164; // [rsp+A4h] [rbp-D4h] BYREF
  __int64 v165; // [rsp+A8h] [rbp-D0h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-C8h]
  int v167; // [rsp+B8h] [rbp-C0h] BYREF
  volatile signed __int32 *v168; // [rsp+C0h] [rbp-B8h] BYREF
  __int128 v169; // [rsp+C8h] [rbp-B0h]
  __int64 v170; // [rsp+D8h] [rbp-A0h]
  __int64 v171; // [rsp+E0h] [rbp-98h] BYREF
  struct _KPRCB *v172; // [rsp+E8h] [rbp-90h]
  __int64 v173; // [rsp+F0h] [rbp-88h]
  __int64 v174; // [rsp+F8h] [rbp-80h]
  _BYTE *v175; // [rsp+100h] [rbp-78h]
  __int128 v176; // [rsp+108h] [rbp-70h]
  __int64 v177; // [rsp+118h] [rbp-60h]
  _QWORD v178[2]; // [rsp+120h] [rbp-58h] BYREF
  _QWORD v179[2]; // [rsp+130h] [rbp-48h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  v158 = (__int64)SchedulerAssist;
  v154 = a3;
  v175 = a10;
  v147 = 0;
  v12 = 0;
  v143 = 0;
  CurrentThread = 0LL;
  v157 = a6;
  if ( a6 )
  {
    if ( a7 )
    {
      if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
      {
        v90 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->PreviousMode);
        v147 = v90;
        if ( v90 )
        {
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
          return v90;
        }
      }
    }
    if ( (int)qword_140C23440 >= 2 || byte_140C23413 )
    {
      v12 = 1;
      v143 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v159 = 0;
      v77 = KeGetCurrentThread();
      v78 = 0LL;
      _disable();
      AbEntrySummary = v77->AbEntrySummary;
      if ( v77->AbEntrySummary
        || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpWakeTimerLock, (__int64)v77)) != 0 )
      {
        _BitScanForward((unsigned int *)&v80, AbEntrySummary);
        v159 = v80;
        v77->AbEntrySummary = AbEntrySummary & ~(1 << v80);
        _enable();
        v78 = (__int64)(&v77[1].Process + 12 * v80);
        if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C50630 < 0x8000000000LL )
          SessionId = MmGetSessionIdEx((__int64)v77->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v78 + 8) = SessionId;
        *(_QWORD *)v78 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v78, (__int64)&ExpWakeTimerLock);
      if ( v78 )
        *(_BYTE *)(v78 + 18) = 1;
    }
    else
    {
      v147 = 1073741861;
      v157 = 0LL;
    }
  }
  v165 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = (KSPIN_LOCK *)Process;
  v14 = 0;
  v142 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v156 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( a2 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    KxAcquireSpinLock(&Process[2].Affinity.StaticBitmap[24]);
    v14 = 1;
    v142 = 1;
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
        v91 = v17[6];
        v17[6] = v91 + 1;
        if ( v91 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 64), 0LL) )
    {
      v92 = CurrentPrcb->SchedulerAssist;
      if ( v92 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v93 = v92[6] - 1;
          v92[6] = v93;
          if ( !v93 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(BugCheckParameter2 + 64));
    }
    Process = (_KPROCESS *)Object;
  }
  if ( !v12 && *(_QWORD *)(BugCheckParameter2 + 256) )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
    if ( v14 )
      KxReleaseSpinLock(&Process[2].Affinity.StaticBitmap[24]);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v94 = KeGetCurrentIrql();
        if ( v94 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v94 >= 2u )
        {
          v95 = KeGetCurrentPrcb();
          v96 = v95->SchedulerAssist;
          v97 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
          v98 = (v97 & v96[5]) == 0;
          v96[5] &= v97;
          if ( v98 )
            KiRemoveSystemWorkPriorityKick(v95);
        }
      }
    }
    __writecr8((unsigned __int8)CurrentIrql);
    v143 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v160 = 0;
    v99 = KeGetCurrentThread();
    v100 = 0LL;
    _disable();
    v101 = v99->AbEntrySummary;
    if ( v99->AbEntrySummary || (v101 = KiAbTryReclaimOrphanedEntries((__int64)&ExpWakeTimerLock, (__int64)v99)) != 0 )
    {
      _BitScanForward((unsigned int *)&v102, v101);
      v160 = v102;
      v99->AbEntrySummary = v101 & ~(1 << v102);
      _enable();
      v100 = (__int64)(&v99[1].Process + 12 * v102);
      if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C50630 >= 0x8000000000LL )
        v103 = -1;
      else
        v103 = MmGetSessionIdEx((__int64)v99->ApcState.Process);
      *(_DWORD *)(v100 + 8) = v103;
      *(_QWORD *)v100 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v100, (__int64)&ExpWakeTimerLock);
    if ( v100 )
      *(_BYTE *)(v100 + 18) = 1;
    v104 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v104 <= 0xFu )
    {
      v105 = KeGetCurrentPrcb()->SchedulerAssist;
      v105[5] |= (-1 << (v104 + 1)) & 4;
    }
    LOBYTE(v156) = v104;
    if ( v14 )
      KxAcquireSpinLock(Object + 305);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v18 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v86 = *(_QWORD *)(BugCheckParameter2 + 80);
    KxAcquireSpinLock((PKSPIN_LOCK)(v86 + 1200));
    v87 = *(_QWORD *)(BugCheckParameter2 + 224);
    v88 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v87 + 8) != BugCheckParameter2 + 224 || *v88 != BugCheckParameter2 + 224 )
      goto LABEL_298;
    *v88 = v87;
    *(_QWORD *)(v87 + 8) = v88;
    KxReleaseSpinLock((PKSPIN_LOCK)(v86 + 1200));
    v89 = *(_BYTE *)(BugCheckParameter2 + 304) & 0xFE;
    *(_BYTE *)(BugCheckParameter2 + 304) = v89;
    if ( (v89 & 2) != 0 && *(_BYTE *)(BugCheckParameter2 + 248)
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
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (v19 + 1)) & 4;
    }
    v171 = 0LL;
    v168 = 0LL;
    v152 = 0;
    v20 = 0;
    while ( 1 )
    {
      v161 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
      {
        do
          KeYieldProcessorEx(&v161);
        while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      {
        v21 = -129;
        goto LABEL_18;
      }
      v52 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
      v155 = (volatile signed __int32 *)(KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 15360);
      v53 = &v155[2048 * (unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) + 128 + 8 * v52];
      v54 = KeGetCurrentPrcb();
      v150 = v54;
      v162 = 0;
      v55 = v54->SchedulerAssist;
      if ( v55 )
      {
        if ( v54->NestingLevel <= 1u )
        {
          v106 = v55[6];
          v55[6] = v106 + 1;
          if ( v106 == -1 )
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
      while ( _interlockedbittestandset64(v53, 0LL) )
      {
        v84 = v150->SchedulerAssist;
        if ( v84 )
        {
          if ( v150->NestingLevel <= 1u )
          {
            v107 = v84[6] - 1;
            v84[6] = v107;
            if ( !v107 )
              KiRemoveSystemWorkPriorityKick(v150);
          }
        }
        do
          KeYieldProcessorEx(&v162);
        while ( *(_QWORD *)v53 );
        v85 = v150->SchedulerAssist;
        if ( v85 )
        {
          if ( v150->NestingLevel <= 1u )
          {
            v108 = v85[6];
            v85[6] = v108 + 1;
            if ( v108 == -1 )
              KiRemoveSystemWorkPriorityKick(v150);
          }
        }
      }
      v168 = v53;
      v56 = v155;
      if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v53, 0LL);
      v109 = KeGetCurrentPrcb();
      v110 = v109->SchedulerAssist;
      if ( v110 )
      {
        if ( v109->NestingLevel <= 1u )
        {
          v111 = v110[6] - 1;
          v110[6] = v111;
          if ( !v111 )
            KiRemoveSystemWorkPriorityKick(v109);
        }
      }
      if ( _InterlockedExchange64((volatile __int64 *)&v56[2 * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)], 0LL) )
      {
        v21 = 16777087;
        goto LABEL_72;
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      v152 = 0;
      while ( *(char *)(BugCheckParameter2 + 3) < 0 )
        KeYieldProcessorEx(&v152);
    }
    KiRemoveEntryTimer(v155, BugCheckParameter2, (unsigned int)v52, &v168);
    _InterlockedAnd64((volatile signed __int64 *)v168, 0LL);
    v57 = KeGetCurrentPrcb();
    v58 = v57->SchedulerAssist;
    if ( v58 )
    {
      if ( v57->NestingLevel <= 1u )
      {
        v112 = v58[6] - 1;
        v58[6] = v112;
        if ( !v112 )
          KiRemoveSystemWorkPriorityKick(v57);
      }
    }
    v21 = -1073741953;
LABEL_72:
    v20 = 1;
LABEL_18:
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, v21);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v20 )
    {
      v171 = BugCheckParameter2;
      v178[0] = &v171;
      v178[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v178, 1, 1073872896, 3925, 1538);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v113 = KeGetCurrentIrql();
        if ( v113 <= 0xFu && v19 <= 0xFu && v113 >= 2u )
        {
          v114 = KeGetCurrentPrcb();
          SchedulerAssist = v114->SchedulerAssist;
          v115 = ~(unsigned __int16)(-1LL << (v19 + 1));
          v98 = (v115 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v115;
          if ( v98 )
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
  v145 = *(_BYTE *)(BugCheckParameter2 + 4);
  v146 = a8;
  *(_DWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 244) = 0;
  *(_DWORD *)(BugCheckParameter2 + 320) = a9;
  if ( v158 )
  {
    v63 = KeGetCurrentThread();
    KeInitializeApc(v22, (_DWORD)v63, 2, (unsigned int)ExpTimerApcRoutine, 0LL, v158, a2, a5);
    p_StackLimit = (KSPIN_LOCK *)&v63[1].StackLimit;
    KxAcquireSpinLock((PKSPIN_LOCK)&v63[1].StackLimit);
    v65 = (char *)(BugCheckParameter2 + 224);
    p_StackBase = &v63[1].StackBase;
    v67 = (char **)p_StackBase[1];
    if ( *v67 != (char *)p_StackBase )
      goto LABEL_298;
    *(_QWORD *)v65 = p_StackBase;
    *(_QWORD *)(BugCheckParameter2 + 232) = v67;
    *v67 = v65;
    p_StackBase[1] = v65;
    *(_BYTE *)(BugCheckParameter2 + 304) |= 1u;
    KxReleaseSpinLock(p_StackLimit);
    v165 = BugCheckParameter2 + 160;
    v23 = v18;
    v146 = 0;
  }
  LOBYTE(SchedulerAssist) = 0;
  v24 = v154;
  v25 = *v154;
  v149 = *v154;
  v26 = Object;
  v27 = Object[162];
  v28 = v142;
  if ( !v142 )
    goto LABEL_23;
  if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
  {
    if ( v27 && (*(_DWORD *)(v27 + 1512) & 0x40000) != 0 )
      LOBYTE(SchedulerAssist) = *(_DWORD *)(v27 + 1048) != 0;
    PsInsertVirtualizedTimer(
      Object,
      (_QWORD *)(BugCheckParameter2 + 288),
      0LL,
      (__int64)SchedulerAssist,
      (KSPIN_LOCK **)(BugCheckParameter2 + 280));
    v26 = Object;
  }
  _InterlockedIncrement((volatile signed __int32 *)v26 + 606);
  if ( (v26[79] & 0x10) != 0 && (v62 = *((unsigned int *)v26 + 17), (_DWORD)v62) )
  {
    v25 = *v24;
    if ( *(__int64 *)v24 >= 0 )
    {
      if ( (unsigned __int64)v25 <= MEMORY[0xFFFFF78000000014] )
        v25 = MEMORY[0xFFFFF78000000014];
      v25 += v62;
      if ( v25 < *v24 )
        v25 = *v24;
    }
    else if ( v25 - v62 <= v25 )
    {
      v25 -= v62;
    }
    HIDWORD(v149) = HIDWORD(v25);
    v116 = (unsigned int)v62 / 0x2710;
    v29 = v146;
    if ( v146 && v116 + v146 > v146 )
    {
      v29 = v116 + v146;
      v146 += v116;
      *(_DWORD *)(BugCheckParameter2 + 240) += v116;
      *(_DWORD *)(BugCheckParameter2 + 244) = v116;
    }
    else
    {
      v117 = *(_DWORD *)(BugCheckParameter2 + 240);
      if ( v117 && v117 + v116 > v117 )
      {
        *(_DWORD *)(BugCheckParameter2 + 240) = v117 + v116;
        *(_DWORD *)(BugCheckParameter2 + 244) = v116;
      }
    }
  }
  else
  {
LABEL_23:
    v29 = v146;
  }
  v30 = *(_BYTE *)(BugCheckParameter2 + 304);
  if ( (v30 & 2) != 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 312) = v25;
    v43 = v157;
    if ( v149 >= 0 )
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    else
      *(_BYTE *)(BugCheckParameter2 + 248) = (v157 != 0) + 2;
    goto LABEL_47;
  }
  v31 = v25;
  v176 = 0LL;
  v177 = 0LL;
  if ( a9 )
  {
    v59 = 10000LL * a9;
    if ( v59 > 0xFC0000 )
    {
      v60 = v59 - 16515072;
      if ( v25 >= 0 )
      {
        v25 += v60;
        if ( v25 < v31 )
          v25 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v25 -= v60;
        if ( v25 > v31 )
          v25 = 0x8000000000000000uLL;
      }
      if ( v29 )
      {
        v82 = (__int64)((unsigned __int128)(v60 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
        v83 = v29 + v82 + (v82 >> 63);
        if ( v83 < v29 )
          v83 = -1;
        v146 = v83;
      }
      LODWORD(v59) = 16515072;
    }
    v61 = (unsigned int)v59 >> 18;
    if ( v61 > 0x3F )
      LOBYTE(v61) = 63;
    BYTE1(v176) = 4 * v61;
  }
  v32 = KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v165 ^ KiWaitAlways), KiWaitNever);
  v173 = v32;
  v33 = KeGetCurrentIrql();
  v174 = v33;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v33 <= 0xFu )
  {
    v51 = KeGetCurrentPrcb()->SchedulerAssist;
    v51[5] |= (-1 << (v33 + 1)) & 4;
  }
  v34 = KeGetCurrentPrcb();
  v158 = 0LL;
  v154 = 0LL;
  v153 = 0;
  while ( 1 )
  {
    v167 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
    {
      do
        KeYieldProcessorEx(&v167);
      while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
    {
      v35 = 0;
      goto LABEL_31;
    }
    v118 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v163 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v151 = KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 15360;
    v155 = (volatile signed __int32 *)(v151
                                     + 32
                                     * (v118
                                      + ((unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8)
                                      + 16));
    v119 = KeGetCurrentPrcb();
    v172 = v119;
    v164 = 0;
    v120 = v119->SchedulerAssist;
    if ( v120 )
    {
      if ( v119->NestingLevel <= 1u )
      {
        v121 = v120[6];
        v120[6] = v121 + 1;
        if ( v121 == -1 )
LABEL_252:
          KiRemoveSystemWorkPriorityKick(v119);
      }
    }
    while ( 1 )
    {
      v122 = (volatile signed __int64 *)v155;
      if ( !_interlockedbittestandset64(v155, 0LL) )
        break;
      v123 = v119->SchedulerAssist;
      if ( v123 )
      {
        if ( v119->NestingLevel <= 1u )
        {
          v124 = v123[6] - 1;
          v123[6] = v124;
          if ( !v124 )
            KiRemoveSystemWorkPriorityKick(v119);
        }
      }
      do
        KeYieldProcessorEx(&v164);
      while ( *v122 );
      v119 = v172;
      v125 = v172->SchedulerAssist;
      if ( v125 )
      {
        if ( v172->NestingLevel <= 1u )
        {
          v126 = v125[6];
          v125[6] = v126 + 1;
          if ( v126 == -1 )
            goto LABEL_252;
        }
      }
    }
    v154 = v122;
    v32 = v173;
    if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v155, 0LL);
    v127 = KeGetCurrentPrcb();
    v128 = v127->SchedulerAssist;
    if ( v128 )
    {
      if ( v127->NestingLevel <= 1u )
      {
        v129 = v128[6] - 1;
        v128[6] = v129;
        if ( !v129 )
          KiRemoveSystemWorkPriorityKick(v127);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v151 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
    {
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFFu);
      v35 = 1;
      goto LABEL_31;
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    v153 = 0;
    while ( *(char *)(BugCheckParameter2 + 3) < 0 )
      KeYieldProcessorEx(&v153);
  }
  KiRemoveEntryTimer(v151, BugCheckParameter2, v163, &v154);
  _InterlockedAnd64(v154, 0LL);
  v130 = KeGetCurrentPrcb();
  v131 = v130->SchedulerAssist;
  if ( v131 )
  {
    if ( v130->NestingLevel <= 1u )
    {
      v132 = v131[6] - 1;
      v131[6] = v132;
      if ( !v132 )
        KiRemoveSystemWorkPriorityKick(v130);
    }
  }
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFFFF);
  v35 = 1;
LABEL_31:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v35 )
  {
    v158 = BugCheckParameter2;
    v179[0] = &v158;
    v179[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v179, 1, 1073872896, 3925, 1538);
  }
  v38 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( v34->NestingLevel
      || ((v36 = KeGetCurrentThread()->ApcState.Process, (v36[1].DirectoryTableBase & 0x100000000000LL) == 0)
       || (HIDWORD(v36[2].Header.WaitListHead.Flink) & 0x4000000) != 0
        ? (v37 = 0)
        : (v37 = 1),
          !v37) )
    {
      v38 = 1;
    }
  }
  *(_WORD *)(BugCheckParameter2 + 58) = v38;
  *(_QWORD *)(BugCheckParameter2 + 48) = v32;
  *(_DWORD *)(BugCheckParameter2 + 60) = v146;
  v169 = 0LL;
  v170 = 0LL;
  LODWORD(v169) = *(_DWORD *)BugCheckParameter2;
  v39 = BYTE1(v176);
  BYTE1(v169) = BYTE1(v176);
  if ( v25 >= 0 )
  {
    BYTE1(v169) = BYTE1(v176) | 1;
    v25 = MEMORY[0xFFFFF78000000014] - v25;
    if ( v25 >= 0 )
    {
      *(_DWORD *)BugCheckParameter2 = v169;
      *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
      goto LABEL_84;
    }
    v39 = BYTE1(v169);
  }
  v40 = 0LL;
  if ( (v39 & 0xFC) != 0 )
    v40 = (unsigned __int8)(v39 & 0xFC) << 16;
  v41 = MEMORY[0xFFFFF78000000008] - v25;
  *(_QWORD *)(BugCheckParameter2 + 24) = MEMORY[0xFFFFF78000000008] - v25;
  BYTE3(v169) |= 0x40u;
  BYTE2(v169) = (unsigned __int64)(v40 + v41) >> 18;
  *(_DWORD *)BugCheckParameter2 = v169;
  *(_DWORD *)(BugCheckParameter2 + 4) = 0;
  v42 = v165;
  if ( KiInsertTimerTable(
         (__int64)v34,
         BugCheckParameter2,
         v165,
         (unsigned __int8)((unsigned __int64)(v40 + v41) >> 18),
         0LL) )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      KiTraceSetTimer(BugCheckParameter2, v42, 0LL);
    else
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    goto LABEL_44;
  }
LABEL_84:
  KiTimerWaitTest((__int64)v34, BugCheckParameter2, 0LL);
LABEL_44:
  KiExitDispatcher((__int64)v34, 0, 1, 0, v174);
  v43 = v157;
  if ( v157 )
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 9u);
  v30 = *(_BYTE *)(BugCheckParameter2 + 304);
  v28 = v142;
  v26 = Object;
LABEL_47:
  v44 = *(void **)(BugCheckParameter2 + 256);
  *(_QWORD *)(BugCheckParameter2 + 256) = v43;
  *(_BYTE *)(BugCheckParameter2 + 304) = v30 ^ (v30 ^ (4 * a7)) & 4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(BugCheckParameter2 + 64, retaddr);
    v26 = Object;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 64), 0LL);
  }
  v45 = KeGetCurrentPrcb();
  v46 = v45->SchedulerAssist;
  if ( v46 )
  {
    if ( v45->NestingLevel <= 1u )
    {
      v133 = v46[6] - 1;
      v46[6] = v133;
      if ( !v133 )
      {
        KiRemoveSystemWorkPriorityKick(v45);
        v26 = Object;
      }
    }
  }
  if ( v28 )
    KxReleaseSpinLock(v26 + 305);
  v47 = v156;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v134 = KeGetCurrentIrql();
      if ( v134 <= 0xFu && (unsigned __int8)v156 <= 0xFu && v134 >= 2u )
      {
        v135 = KeGetCurrentPrcb();
        v136 = v135->SchedulerAssist;
        v137 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v156 + 1));
        v98 = (v137 & v136[5]) == 0;
        v136[5] &= v137;
        if ( v98 )
          KiRemoveSystemWorkPriorityKick(v135);
      }
    }
  }
  __writecr8(v47);
  if ( v143 )
  {
    if ( v44 )
    {
      if ( v43 )
        goto LABEL_99;
      v138 = (_QWORD *)(BugCheckParameter2 + 264);
      v139 = *(_QWORD *)(BugCheckParameter2 + 264);
      v140 = *(_QWORD **)(BugCheckParameter2 + 272);
      if ( *(_QWORD *)(v139 + 8) == BugCheckParameter2 + 264 && (_QWORD *)*v140 == v138 )
      {
        *v140 = v139;
        *(_QWORD *)(v139 + 8) = v140;
        *v138 = 0LL;
        goto LABEL_99;
      }
    }
    else
    {
      if ( !v43 )
      {
LABEL_99:
        v70 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v70 & 2) != 0 && (v70 & 4) == 0 )
          ExfTryToWakePushLock(&ExpWakeTimerLock);
        v71 = KeGetCurrentThread();
        if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C50630 < 0x8000000000LL )
          v72 = (unsigned int)MmGetSessionIdEx((__int64)v71->ApcState.Process);
        else
          v72 = 0xFFFFFFFFLL;
        _disable();
        v73 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
        v74 = 0;
        p_Process = (char *)&v71[1].Process;
        do
        {
          if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == v73
            && p_Process[18]
            && (*(_DWORD *)p_Process & 1) == 0
            && *((_DWORD *)p_Process + 2) == (_DWORD)v72 )
          {
            p_Process[18] = 0;
            if ( *(__int64 *)p_Process < 0 )
            {
              *p_Process |= 2u;
              _enable();
              KiAbEntryRemoveFromTree(p_Process, v73, v72);
              _disable();
            }
            v76 = *((_DWORD *)p_Process + 22);
            *((_DWORD *)p_Process + 22) = 0;
            p_Process[17] = 0;
            *(_QWORD *)p_Process = 0LL;
            v71->AbEntrySummary |= 1 << p_Process[16];
            _enable();
            if ( v76 )
              KiAbThreadRemoveBoostsSlow((ULONG_PTR)v71, (__int64)&ExpWakeTimerLock, v76);
            goto LABEL_111;
          }
          ++v74;
          p_Process += 96;
        }
        while ( v74 < 6 );
        if ( (*((_DWORD *)&v71->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v71, (ULONG_PTR)&ExpWakeTimerLock, (unsigned int)v72, 0LL);
        _enable();
LABEL_111:
        KiLeaveCriticalRegionUnsafe(CurrentThread);
        if ( v44 )
          PoDestroyReasonContext(v44);
        goto LABEL_54;
      }
      v68 = (_QWORD *)(BugCheckParameter2 + 264);
      v69 = (_QWORD *)qword_140C11738;
      if ( *(__int64 **)qword_140C11738 == &ExpWakeTimerList )
      {
        *v68 = &ExpWakeTimerList;
        *(_QWORD *)(BugCheckParameter2 + 272) = v69;
        *v69 = v68;
        qword_140C11738 = BugCheckParameter2 + 264;
        goto LABEL_99;
      }
    }
LABEL_298:
    __fastfail(3u);
  }
LABEL_54:
  if ( v23 )
  {
    ObpTraceObjectDereferenceIfActive(BugCheckParameter2 - 48, v23);
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
  v49 = v175;
  if ( !v175 )
    return v147;
  if ( !a2 )
  {
    *v175 = v145;
    return v147;
  }
  v141 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v175 < 0x7FFFFFFF0000LL )
    v141 = (__int64)v175;
  *(_BYTE *)v141 = *(_BYTE *)v141;
  *v49 = v145;
  return v147;
}
