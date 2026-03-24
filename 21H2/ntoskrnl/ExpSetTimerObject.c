/*
 * XREFs of ExpSetTimerObject @ 0x140249420
 * Callers:
 *     NtSetTimerEx @ 0x1402491A0 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x140376AF0 (ExpSetTimer.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KxAcquireSpinLock @ 0x1402295B0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KiRemoveEntryTimer @ 0x140247790 (KiRemoveEntryTimer.c)
 *     KiTimerWaitTest @ 0x140247DF0 (KiTimerWaitTest.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14024A170 (ObpTraceObjectDereferenceIfActive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KeCancelTimer @ 0x140260240 (KeCancelTimer.c)
 *     KeInitializeApc @ 0x140278E60 (KeInitializeApc.c)
 *     PoDestroyReasonContext @ 0x140282BD8 (PoDestroyReasonContext.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ObpDeferObjectDeletion @ 0x1402BC2D0 (ObpDeferObjectDeletion.c)
 *     PsInsertVirtualizedTimer @ 0x1402C1F18 (PsInsertVirtualizedTimer.c)
 *     KeRemoveQueueApc @ 0x1402C4D4C (KeRemoveQueueApc.c)
 *     KeRemoveQueueDpcEx @ 0x1402C8000 (KeRemoveQueueDpcEx.c)
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x140348000 (KiInsertTimerTable.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403582C0 (KxWaitForSpinLockAndAcquire.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14051688C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140516998 (KiReleaseSpinLockInstrumented.c)
 *     KiTraceSetTimer @ 0x140523B5C (KiTraceSetTimer.c)
 *     ExpCheckWakeTimerAccess @ 0x14078E5D8 (ExpCheckWakeTimerAccess.c)
 *     ExpCheckTestsigningEnabled @ 0x14094F56C (ExpCheckTestsigningEnabled.c)
 */

__int64 __fastcall ExpSetTimerObject(
        ULONG_PTR BugCheckParameter2,
        char a2,
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
  ULONG_PTR v40; // rbx
  __int64 v41; // rsi
  void *v42; // rbx
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  signed __int64 BugCheckParameter4; // rcx
  _BYTE *v46; // rdx
  __int64 v48; // r13
  volatile signed __int32 *v49; // rbx
  struct _KPRCB *v50; // rdx
  _DWORD *v51; // rcx
  __int64 v52; // r12
  struct _KPRCB *v53; // rcx
  _DWORD *v54; // rdx
  unsigned __int64 v55; // rdx
  signed __int64 v56; // rdx
  unsigned int v57; // edx
  __int64 v58; // rcx
  struct _KTHREAD *v59; // rbx
  KSPIN_LOCK *p_StackLimit; // r14
  char *v61; // rax
  void **p_StackBase; // rbx
  char **v63; // rdx
  unsigned __int64 v64; // rdx
  _DWORD *v65; // rcx
  _DWORD *v66; // rcx
  _DWORD *v67; // rcx
  struct _KTHREAD *v68; // rbx
  __int64 v69; // rcx
  char v70; // dl
  __int64 v71; // r14
  int SessionId; // eax
  bool v73; // zf
  signed __int8 v74; // cf
  _QWORD *v75; // rax
  _QWORD *v76; // rcx
  char v77; // r11
  struct _KTHREAD *v78; // rsi
  ULONG_PTR v79; // r9
  unsigned __int8 v80; // r12
  __int64 v81; // r15
  unsigned __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rcx
  int v86; // ecx
  unsigned __int8 v87; // r13
  struct _KPRCB *v88; // rcx
  _DWORD *v89; // rdx
  unsigned int v90; // ebx
  unsigned __int8 AbOrphanedEntrySummary; // al
  _DWORD *SchedulerAssist; // r9
  int v93; // eax
  int v94; // eax
  unsigned __int8 v95; // al
  struct _KPRCB *v96; // r10
  _DWORD *v97; // r9
  int v98; // eax
  struct _KTHREAD *v99; // rbx
  __int64 v100; // rcx
  unsigned __int8 v101; // al
  char v102; // dl
  __int64 v103; // r14
  int v104; // eax
  unsigned __int8 v105; // r10
  _DWORD *v106; // r9
  __int64 v107; // rbx
  __int64 v108; // r8
  _QWORD *v109; // rdx
  _DWORD *v110; // r9
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  unsigned __int8 v116; // al
  struct _KPRCB *v117; // r10
  _DWORD *v118; // r9
  int v119; // eax
  unsigned int v120; // edx
  int v121; // eax
  unsigned int v122; // eax
  _DWORD *v123; // r9
  __int64 v124; // r8
  struct _KPRCB *v125; // rcx
  _DWORD *v126; // rdx
  int v127; // eax
  __int64 v128; // rsi
  volatile signed __int64 *v129; // r12
  __int64 v130; // rcx
  int v131; // eax
  _DWORD *v132; // rcx
  int v133; // eax
  struct _KPRCB *v134; // rcx
  _DWORD *v135; // rdx
  int v136; // eax
  struct _KPRCB *v137; // rcx
  _DWORD *v138; // rdx
  int v139; // eax
  int v140; // eax
  unsigned __int8 v141; // al
  struct _KPRCB *v142; // r10
  _DWORD *v143; // r9
  int v144; // eax
  _QWORD *v145; // rax
  __int64 v146; // rdx
  _QWORD *v147; // rcx
  __int64 v148; // rcx
  char v150; // [rsp+41h] [rbp-167h]
  char v151; // [rsp+42h] [rbp-166h]
  int v152; // [rsp+44h] [rbp-164h]
  unsigned int v153; // [rsp+48h] [rbp-160h]
  int v154; // [rsp+4Ch] [rbp-15Ch]
  KSPIN_LOCK *Object; // [rsp+50h] [rbp-158h]
  unsigned __int8 v156; // [rsp+58h] [rbp-150h]
  __int64 v157; // [rsp+60h] [rbp-148h]
  struct _KPRCB *v158; // [rsp+60h] [rbp-148h]
  __int64 v159; // [rsp+60h] [rbp-148h]
  int v160; // [rsp+68h] [rbp-140h] BYREF
  int v161; // [rsp+6Ch] [rbp-13Ch] BYREF
  int v162; // [rsp+70h] [rbp-138h]
  int v163; // [rsp+74h] [rbp-134h]
  volatile signed __int32 *v164; // [rsp+78h] [rbp-130h]
  __int64 v165; // [rsp+80h] [rbp-128h]
  struct _KPRCB *v166; // [rsp+88h] [rbp-120h]
  int v167; // [rsp+90h] [rbp-118h]
  int v168; // [rsp+94h] [rbp-114h] BYREF
  int v169; // [rsp+98h] [rbp-110h] BYREF
  __int64 *v170; // [rsp+A0h] [rbp-108h]
  int v171; // [rsp+A8h] [rbp-100h]
  int v172; // [rsp+ACh] [rbp-FCh]
  int v173; // [rsp+B0h] [rbp-F8h]
  volatile signed __int32 *v174; // [rsp+B8h] [rbp-F0h] BYREF
  int v175; // [rsp+C0h] [rbp-E8h]
  volatile signed __int64 *v176; // [rsp+C8h] [rbp-E0h] BYREF
  ULONG_PTR v177; // [rsp+D0h] [rbp-D8h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-D0h]
  int v179; // [rsp+E0h] [rbp-C8h] BYREF
  int v180; // [rsp+E4h] [rbp-C4h] BYREF
  __int128 v181; // [rsp+E8h] [rbp-C0h]
  __int64 v182; // [rsp+F8h] [rbp-B0h]
  ULONG_PTR v183; // [rsp+100h] [rbp-A8h] BYREF
  ULONG_PTR v184; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v185; // [rsp+110h] [rbp-98h]
  struct _KPRCB *v186; // [rsp+118h] [rbp-90h]
  __int64 v187; // [rsp+120h] [rbp-88h]
  _BYTE *v188; // [rsp+128h] [rbp-80h]
  __int128 v189; // [rsp+138h] [rbp-70h]
  __int64 v190; // [rsp+148h] [rbp-60h]
  _QWORD v191[2]; // [rsp+150h] [rbp-58h] BYREF
  _QWORD v192[2]; // [rsp+160h] [rbp-48h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v164 = a4;
  v170 = a3;
  v10 = a2;
  v188 = a10;
  v153 = 0;
  v12 = 0;
  v151 = 0;
  CurrentThread = 0LL;
  v165 = a6;
  if ( !a6 )
    goto LABEL_2;
  if ( a7 )
  {
    if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
    {
      v90 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10]);
      v153 = v90;
      if ( v90 )
      {
        ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
        return v90;
      }
    }
    v10 = a2;
  }
  if ( (int)qword_140C240A0 < 2 && !byte_140C24073 )
  {
    v153 = 1073741861;
    v165 = 0LL;
    goto LABEL_2;
  }
  v12 = 1;
  v151 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v172 = 0;
  v68 = KeGetCurrentThread();
  --v68->SpecialApcDisable;
  if ( ++v68->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v68, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  v171 = 0;
  LOBYTE(v69) = v68->AbEntrySummary;
  if ( !(_BYTE)v69 )
  {
    if ( !v68->AbOrphanedEntrySummary )
    {
      v71 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v68, &ExpWakeTimerLock);
      goto LABEL_96;
    }
    AbOrphanedEntrySummary = v68->AbOrphanedEntrySummary;
    v68->AbOrphanedEntrySummary = 0;
    LOBYTE(v69) = AbOrphanedEntrySummary | v68->AbEntrySummary;
  }
  v70 = v69;
  _BitScanForward((unsigned int *)&v69, (unsigned __int8)v69);
  v171 = v69;
  v68->AbEntrySummary = v70 & ~(1 << v69);
  v71 = (__int64)&v68->LockEntries[v69];
LABEL_96:
  if ( v71 )
  {
    if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
      && byte_140C4F9C8[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx(v68->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v71 + 40) = SessionId;
    *(_QWORD *)(v71 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v68->116 + 1, 0x10u);
  }
  --v68->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v68);
  v73 = v68->SpecialApcDisable++ == -1;
  if ( v73 && ($C459BD0D405E8E46662177FB3D0A143F *)v68->ApcState.ApcListHead[0].Flink != &v68->152 )
    KiCheckForKernelApcDelivery();
  v74 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
  if ( v74 )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v71, &ExpWakeTimerLock);
  v10 = a2;
  if ( v71 )
    *(_BYTE *)(v71 + 26) |= 1u;
LABEL_2:
  v177 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = (KSPIN_LOCK *)Process;
  v14 = 0;
  v150 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v156 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( v10 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    KxAcquireSpinLock(&Process[2].AffinityPadding[4]);
    v14 = 1;
    v150 = 1;
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
        v93 = v17[6];
        v17[6] = v93 + 1;
        if ( v93 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 64), 0LL) )
    {
      v65 = CurrentPrcb->SchedulerAssist;
      if ( v65 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v94 = v65[6] - 1;
          v65[6] = v94;
          if ( !v94 )
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
        v95 = KeGetCurrentIrql();
        if ( v95 <= 0xFu && v156 <= 0xFu && v95 >= 2u )
        {
          v96 = KeGetCurrentPrcb();
          v97 = v96->SchedulerAssist;
          v98 = ~(unsigned __int16)(-1LL << (v156 + 1));
          v73 = (v98 & v97[5]) == 0;
          v97[5] &= v98;
          if ( v73 )
            KiRemoveSystemWorkPriorityKick(v96);
        }
      }
    }
    __writecr8(v156);
    v151 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v175 = 0;
    v99 = KeGetCurrentThread();
    --v99->SpecialApcDisable;
    if ( ++v99->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v99, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
    v173 = 0;
    LOBYTE(v100) = v99->AbEntrySummary;
    if ( !(_BYTE)v100 )
    {
      if ( !v99->AbOrphanedEntrySummary )
      {
        v103 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v99, &ExpWakeTimerLock);
        goto LABEL_183;
      }
      v101 = v99->AbOrphanedEntrySummary;
      v99->AbOrphanedEntrySummary = 0;
      LOBYTE(v100) = v101 | v99->AbEntrySummary;
    }
    v102 = v100;
    _BitScanForward((unsigned int *)&v100, (unsigned __int8)v100);
    v173 = v100;
    v99->AbEntrySummary = v102 & ~(1 << v100);
    v103 = (__int64)&v99->LockEntries[v100];
LABEL_183:
    if ( v103 )
    {
      if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
        && byte_140C4F9C8[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
      {
        v104 = MmGetSessionIdEx(v99->ApcState.Process);
      }
      else
      {
        v104 = -1;
      }
      *(_DWORD *)(v103 + 40) = v104;
      *(_QWORD *)(v103 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v99->116 + 1, 0x10u);
    }
    --v99->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v99);
    v73 = v99->SpecialApcDisable++ == -1;
    if ( v73 && ($C459BD0D405E8E46662177FB3D0A143F *)v99->ApcState.ApcListHead[0].Flink != &v99->152 )
      KiCheckForKernelApcDelivery();
    v74 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    if ( v74 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v103, &ExpWakeTimerLock);
    if ( v103 )
      *(_BYTE *)(v103 + 26) |= 1u;
    v105 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v105 <= 0xFu )
    {
      v106 = KeGetCurrentPrcb()->SchedulerAssist;
      v106[5] |= (-1 << (v105 + 1)) & 4;
    }
    v156 = v105;
    if ( v150 )
      KxAcquireSpinLock(Object + 305);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v18 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v107 = *(_QWORD *)(BugCheckParameter2 + 80);
    KxAcquireSpinLock((PKSPIN_LOCK)(v107 + 1120));
    v108 = *(_QWORD *)(BugCheckParameter2 + 224);
    v109 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v108 + 8) != BugCheckParameter2 + 224 || *v109 != BugCheckParameter2 + 224 )
      goto LABEL_322;
    *v109 = v108;
    *(_QWORD *)(v108 + 8) = v109;
    KxReleaseSpinLock((PKSPIN_LOCK)(v107 + 1120));
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
      v110 = KeGetCurrentPrcb()->SchedulerAssist;
      v110[5] |= (-1 << (v19 + 1)) & 4;
    }
    v183 = 0LL;
    v174 = 0LL;
    v160 = 0;
    v20 = 0;
    while ( 1 )
    {
      v179 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
      {
        do
          KeYieldProcessorEx(&v179);
        while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      {
        v21 = -129;
        goto LABEL_18;
      }
      v48 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
      v166 = (struct _KPRCB *)(KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 14656);
      v49 = (volatile signed __int32 *)(&v166->ProcessorState.ContextFrame.P3Home
                                      + 1024 * (unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58)
                                      + 4 * v48);
      v50 = KeGetCurrentPrcb();
      v158 = v50;
      v180 = 0;
      v51 = v50->SchedulerAssist;
      if ( v51 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          v111 = v51[6];
          v51[6] = v111 + 1;
          if ( v111 == -1 )
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
      while ( _interlockedbittestandset64(v49, 0LL) )
      {
        v66 = v158->SchedulerAssist;
        if ( v66 )
        {
          if ( v158->NestingLevel <= 1u )
          {
            v112 = v66[6] - 1;
            v66[6] = v112;
            if ( !v112 )
              KiRemoveSystemWorkPriorityKick(v158);
          }
        }
        do
          KeYieldProcessorEx(&v180);
        while ( *(_QWORD *)v49 );
        v67 = v158->SchedulerAssist;
        if ( v67 )
        {
          if ( v158->NestingLevel <= 1u )
          {
            v113 = v67[6];
            v67[6] = v113 + 1;
            if ( v113 == -1 )
              KiRemoveSystemWorkPriorityKick(v158);
          }
        }
      }
      v174 = v49;
      v52 = (__int64)v166;
      if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v49, 0LL);
      v88 = KeGetCurrentPrcb();
      v89 = v88->SchedulerAssist;
      if ( v89 )
      {
        if ( v88->NestingLevel <= 1u )
        {
          v114 = v89[6] - 1;
          v89[6] = v114;
          if ( !v114 )
            KiRemoveSystemWorkPriorityKick(v88);
        }
      }
      if ( _InterlockedExchange64((volatile __int64 *)(v52 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
      {
        v21 = 16777087;
        v20 = 1;
        goto LABEL_18;
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      v160 = 0;
      while ( *(char *)(BugCheckParameter2 + 3) < 0 )
        KeYieldProcessorEx(&v160);
    }
    KiRemoveEntryTimer((__int64)v166, BugCheckParameter2, v48, (volatile signed __int64 **)&v174);
    _InterlockedAnd64((volatile signed __int64 *)v174, 0LL);
    v53 = KeGetCurrentPrcb();
    v54 = v53->SchedulerAssist;
    if ( v54 )
    {
      if ( v53->NestingLevel <= 1u )
      {
        v115 = v54[6] - 1;
        v54[6] = v115;
        if ( !v115 )
          KiRemoveSystemWorkPriorityKick(v53);
      }
    }
    v21 = -1073741953;
    v20 = 1;
LABEL_18:
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, v21);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v20 )
    {
      v183 = BugCheckParameter2;
      v192[0] = &v183;
      v192[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v192, 1, 1073872896, 3925, 1538);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v116 = KeGetCurrentIrql();
        if ( v116 <= 0xFu && v19 <= 0xFu && v116 >= 2u )
        {
          v117 = KeGetCurrentPrcb();
          v118 = v117->SchedulerAssist;
          v119 = ~(unsigned __int16)(-1LL << (v19 + 1));
          v73 = (v119 & v118[5]) == 0;
          v118[5] &= v119;
          if ( v73 )
            KiRemoveSystemWorkPriorityKick(v117);
        }
      }
    }
    __writecr8(v19);
    v22 = BugCheckParameter2 + 72;
    v18 = 0;
  }
  *(_BYTE *)(BugCheckParameter2 + 248) = 0;
  v23 = v18 + 1;
  v154 = *(_DWORD *)(BugCheckParameter2 + 4);
  v24 = a8;
  v152 = a8;
  *(_DWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 244) = 0;
  *(_DWORD *)(BugCheckParameter2 + 320) = a9;
  if ( v164 )
  {
    v59 = KeGetCurrentThread();
    KeInitializeApc(v22, (_DWORD)v59, 2, (unsigned int)ExpTimerApcRoutine, 0LL, (__int64)v164, a2, a5);
    p_StackLimit = (KSPIN_LOCK *)&v59[1].StackLimit;
    KxAcquireSpinLock((PKSPIN_LOCK)&v59[1].StackLimit);
    v61 = (char *)(BugCheckParameter2 + 224);
    p_StackBase = &v59[1].StackBase;
    v63 = (char **)p_StackBase[1];
    if ( *v63 != (char *)p_StackBase )
      goto LABEL_322;
    *(_QWORD *)v61 = p_StackBase;
    *(_QWORD *)(BugCheckParameter2 + 232) = v63;
    *v63 = v61;
    p_StackBase[1] = v61;
    *(_BYTE *)(BugCheckParameter2 + 304) |= 1u;
    KxReleaseSpinLock(p_StackLimit);
    v177 = BugCheckParameter2 + 160;
    v23 = v18;
    v24 = 0;
    v152 = 0;
  }
  v25 = v170;
  v26 = *v170;
  v157 = *v170;
  v27 = Object;
  v28 = v150;
  if ( v150 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
    {
      PsInsertVirtualizedTimer(Object, BugCheckParameter2 + 280);
      v24 = v152;
      v27 = Object;
    }
    _InterlockedIncrement((volatile signed __int32 *)v27 + 606);
    if ( (v27[79] & 0x10) != 0 )
    {
      v58 = *((unsigned int *)v27 + 17);
      if ( (_DWORD)v58 )
      {
        v167 = *((_DWORD *)v27 + 17);
        v26 = *v25;
        if ( *v25 >= 0 )
        {
          if ( (unsigned __int64)v26 <= MEMORY[0xFFFFF78000000014] )
            v26 = MEMORY[0xFFFFF78000000014];
          v26 += v58;
          if ( v26 < *v25 )
            v26 = *v25;
          LODWORD(v58) = v167;
        }
        else if ( v26 - v58 <= v26 )
        {
          v26 -= v58;
        }
        HIDWORD(v157) = HIDWORD(v26);
        v120 = (unsigned int)v58 / 0x2710;
        if ( v24 )
        {
          v121 = v120 + v24;
          if ( v120 + v24 > v24 )
          {
            v24 += v120;
            v152 = v121;
            *(_DWORD *)(BugCheckParameter2 + 240) += v120;
LABEL_261:
            *(_DWORD *)(BugCheckParameter2 + 244) = v120;
            goto LABEL_23;
          }
        }
        v122 = *(_DWORD *)(BugCheckParameter2 + 240);
        if ( v122 && v122 + v120 > v122 )
        {
          *(_DWORD *)(BugCheckParameter2 + 240) = v122 + v120;
          goto LABEL_261;
        }
      }
    }
  }
LABEL_23:
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 312) = v26;
    v41 = v165;
    if ( v157 < 0 )
      *(_BYTE *)(BugCheckParameter2 + 248) = (v165 != 0) + 2;
    else
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    goto LABEL_44;
  }
  v29 = v26;
  v189 = 0LL;
  v190 = 0LL;
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
        v64 = (__int64)((unsigned __int128)(v56 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
        if ( v24 + (unsigned int)v64 + (v64 >> 63) < v24 )
          v152 = -1;
        else
          v152 = v24 + v64 + (v64 >> 63);
      }
      LODWORD(v55) = 16515072;
    }
    v57 = (unsigned int)v55 >> 18;
    if ( v57 > 0x3F )
      LOBYTE(v57) = 63;
    BYTE1(v189) = 4 * v57;
  }
  v30 = KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v177 ^ KiWaitAlways), KiWaitNever);
  v185 = v30;
  v31 = KeGetCurrentIrql();
  v187 = v31;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v31 <= 0xFu )
  {
    v123 = KeGetCurrentPrcb()->SchedulerAssist;
    v123[5] |= (-1 << (v31 + 1)) & 4;
  }
  v32 = KeGetCurrentPrcb();
  v186 = v32;
  v184 = 0LL;
  v176 = 0LL;
  v161 = 0;
  v33 = 0;
  while ( 1 )
  {
    v168 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
    {
      do
        KeYieldProcessorEx(&v168);
      while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      break;
    v124 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    LODWORD(v170) = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v159 = KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 14656;
    v164 = (volatile signed __int32 *)(v159
                                     + 32
                                     * (v124
                                      + ((unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8)
                                      + 16));
    v125 = KeGetCurrentPrcb();
    v166 = v125;
    v169 = 0;
    v126 = v125->SchedulerAssist;
    if ( v126 )
    {
      if ( v125->NestingLevel <= 1u )
      {
        v127 = v126[6];
        v126[6] = v127 + 1;
        if ( v127 == -1 )
          KiRemoveSystemWorkPriorityKick(v125);
      }
    }
    v128 = (__int64)v166;
    while ( 1 )
    {
      v129 = (volatile signed __int64 *)v164;
      if ( !_interlockedbittestandset64(v164, 0LL) )
        break;
      v130 = *(_QWORD *)(v128 + 33976);
      if ( v130 )
      {
        if ( *(_BYTE *)(v128 + 32) <= 1u )
        {
          v131 = *(_DWORD *)(v130 + 24) - 1;
          *(_DWORD *)(v130 + 24) = v131;
          if ( !v131 )
            KiRemoveSystemWorkPriorityKick(v128);
        }
      }
      do
        KeYieldProcessorEx(&v169);
      while ( *v129 );
      v128 = (__int64)v166;
      v132 = v166->SchedulerAssist;
      if ( v132 )
      {
        if ( v166->NestingLevel <= 1u )
        {
          v133 = v132[6];
          v132[6] = v133 + 1;
          if ( v133 == -1 )
            KiRemoveSystemWorkPriorityKick(v128);
        }
      }
    }
    v176 = v129;
    v30 = v185;
    v32 = v186;
    if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
    {
      KiRemoveEntryTimer(v159, BugCheckParameter2, (unsigned int)v170, &v176);
      _InterlockedAnd64(v176, 0LL);
      v137 = KeGetCurrentPrcb();
      v138 = v137->SchedulerAssist;
      if ( v138 )
      {
        if ( v137->NestingLevel <= 1u )
        {
          v139 = v138[6] - 1;
          v138[6] = v139;
          if ( !v139 )
            KiRemoveSystemWorkPriorityKick(v137);
        }
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFFFF);
      goto LABEL_303;
    }
    _InterlockedAnd64((volatile signed __int64 *)v164, 0LL);
    v134 = KeGetCurrentPrcb();
    v135 = v134->SchedulerAssist;
    if ( v135 )
    {
      if ( v134->NestingLevel <= 1u )
      {
        v136 = v135[6] - 1;
        v135[6] = v136;
        if ( !v136 )
          KiRemoveSystemWorkPriorityKick(v134);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v159 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
    {
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFFu);
LABEL_303:
      v33 = 1;
      break;
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    v161 = 0;
    while ( *(char *)(BugCheckParameter2 + 3) < 0 )
      KeYieldProcessorEx(&v161);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v33 )
  {
    v184 = BugCheckParameter2;
    v191[0] = &v184;
    v191[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v191, 1, 1073872896, 3925, 1538);
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
  *(_DWORD *)(BugCheckParameter2 + 60) = v152;
  v181 = 0LL;
  v182 = 0LL;
  LODWORD(v181) = *(_DWORD *)BugCheckParameter2;
  v37 = BYTE1(v189);
  BYTE1(v181) = BYTE1(v189);
  if ( v26 >= 0 )
  {
    BYTE1(v181) = BYTE1(v189) | 1;
    v26 = MEMORY[0xFFFFF78000000014] - v26;
    if ( v26 >= 0 )
    {
      *(_DWORD *)BugCheckParameter2 = v181;
      *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
LABEL_71:
      KiTimerWaitTest((__int64)v32, BugCheckParameter2, 0LL);
      goto LABEL_42;
    }
    v37 = BYTE1(v181);
  }
  v38 = 0LL;
  if ( (v37 & 0xFC) != 0 )
    v38 = (unsigned __int8)(v37 & 0xFC) << 16;
  v39 = MEMORY[0xFFFFF78000000008] - v26;
  *(_QWORD *)(BugCheckParameter2 + 24) = MEMORY[0xFFFFF78000000008] - v26;
  BYTE3(v181) |= 0x40u;
  BYTE2(v181) = (unsigned __int64)(v38 + v39) >> 18;
  *(_DWORD *)BugCheckParameter2 = v181;
  *(_DWORD *)(BugCheckParameter2 + 4) = 0;
  v40 = v177;
  if ( !(unsigned __int8)KiInsertTimerTable(
                           (_DWORD)v32,
                           BugCheckParameter2,
                           v177,
                           (unsigned __int8)((unsigned __int64)(v38 + v39) >> 18),
                           0LL) )
    goto LABEL_71;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(BugCheckParameter2, v40, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
LABEL_42:
  KiExitDispatcher((_DWORD)v32, 0, 1, 0, v187);
  v41 = v165;
  v28 = v150;
  v27 = Object;
  if ( v165 )
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
      v140 = v44[6] - 1;
      v44[6] = v140;
      if ( !v140 )
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
      v141 = KeGetCurrentIrql();
      if ( v141 <= 0xFu && v156 <= 0xFu && v141 >= 2u )
      {
        v142 = KeGetCurrentPrcb();
        v143 = v142->SchedulerAssist;
        v144 = ~(unsigned __int16)(-1LL << (v156 + 1));
        v73 = (v144 & v143[5]) == 0;
        v143[5] &= v144;
        if ( v73 )
          KiRemoveSystemWorkPriorityKick(v142);
      }
    }
  }
  __writecr8(v156);
  if ( v151 )
  {
    if ( v42 )
    {
      if ( !v41 )
      {
        v145 = (_QWORD *)(BugCheckParameter2 + 264);
        v146 = *(_QWORD *)(BugCheckParameter2 + 264);
        v147 = *(_QWORD **)(BugCheckParameter2 + 272);
        if ( *(_QWORD *)(v146 + 8) != BugCheckParameter2 + 264 || (_QWORD *)*v147 != v145 )
          goto LABEL_322;
        *v147 = v146;
        *(_QWORD *)(v146 + 8) = v147;
        *v145 = 0LL;
      }
LABEL_112:
      v77 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v77 & 2) != 0 && (v77 & 4) == 0 )
        ExfTryToWakePushLock(&ExpWakeTimerLock);
      v163 = 0;
      v78 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(&ExpWakeTimerLock) == 1 )
        v79 = (unsigned int)MmGetSessionIdEx(v78->ApcState.Process);
      else
        v79 = 0xFFFFFFFFLL;
      --v78->SpecialApcDisable;
      v80 = ++v78->AbAllocationRegionCount;
      v162 = 0;
      v81 = 0LL;
      v82 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
      v83 = ((char)v78->AbEntrySummary | (char)v78->AbOrphanedEntrySummary) ^ 0x3Fu;
      v73 = !_BitScanReverse((unsigned int *)&v84, v83);
      v162 = v84;
      if ( !v73 )
      {
        while ( 1 )
        {
          v83 = ~(1 << v84) & (unsigned int)v83;
          v85 = (__int64)&v78->LockEntries[v84];
          if ( (*(_BYTE *)(v85 + 26) & 1) != 0
            && (*(_DWORD *)(v85 + 32) & 1) == 0
            && (*(_QWORD *)(v85 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v82
            && *(_DWORD *)(v85 + 40) == (_DWORD)v79 )
          {
            *(_BYTE *)(v85 + 26) &= ~1u;
            if ( *(_QWORD *)(v85 + 32) )
              break;
          }
          v73 = !_BitScanReverse((unsigned int *)&v84, v83);
          v162 = v84;
          if ( v73 )
            goto LABEL_122;
        }
        v81 = v85;
      }
LABEL_122:
      if ( v81 )
      {
        *(_BYTE *)(v81 + 32) |= 2u;
        if ( *(__int64 *)(v81 + 32) < 0 )
          KiAbEntryRemoveFromTree(v81, v83, v82);
        v86 = *(_DWORD *)(v81 + 88);
        v163 = v86 & 0x1FFFF;
        *(_DWORD *)(v81 + 88) = v86 & 0xFFFE0000;
        *(_BYTE *)(v81 + 25) &= ~1u;
        *(_QWORD *)(v81 + 32) = 0LL;
        v87 = 1 << ((signed __int64)(v81 - (unsigned __int64)v78->LockEntries) / 96);
        if ( v80 == 1 )
          v78->AbEntrySummary |= v87;
        else
          _InterlockedOr8((volatile signed __int8 *)&v78->AbOrphanedEntrySummary, v87);
      }
      else if ( (*((_DWORD *)&v78->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v78, (ULONG_PTR)&ExpWakeTimerLock, v79, 0LL);
      }
      --v78->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v78);
      v73 = v78->SpecialApcDisable++ == -1;
      if ( v73 && ($C459BD0D405E8E46662177FB3D0A143F *)v78->ApcState.ApcListHead[0].Flink != &v78->152 )
        KiCheckForKernelApcDelivery();
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v42 )
        PoDestroyReasonContext(v42);
      goto LABEL_51;
    }
    if ( !v41 )
      goto LABEL_112;
    v75 = (_QWORD *)(BugCheckParameter2 + 264);
    v76 = (_QWORD *)qword_140C16AE8;
    if ( *(__int64 **)qword_140C16AE8 == &ExpWakeTimerList )
    {
      *v75 = &ExpWakeTimerList;
      *(_QWORD *)(BugCheckParameter2 + 272) = v76;
      *v76 = v75;
      qword_140C16AE8 = BugCheckParameter2 + 264;
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
      ObpDeferObjectDeletion(BugCheckParameter2 - 48);
    }
  }
  v46 = v188;
  if ( !v188 )
    return v153;
  if ( !a2 )
  {
    *v188 = v154;
    return v153;
  }
  v148 = (__int64)v188;
  if ( (unsigned __int64)v188 >= 0x7FFFFFFF0000LL )
    v148 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v148 = *(_BYTE *)v148;
  *v46 = v154;
  return v153;
}
