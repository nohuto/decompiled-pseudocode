/*
 * XREFs of ExpSetTimerObject @ 0x1402897E0
 * Callers:
 *     NtSetTimerEx @ 0x140289560 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x140378D50 (ExpSetTimer.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x14021DDF0 (KiInsertTimerTable.c)
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14028A530 (ObpTraceObjectDereferenceIfActive.c)
 *     KiRemoveEntryTimer @ 0x14028B750 (KiRemoveEntryTimer.c)
 *     KiTimerWaitTest @ 0x14028BDB0 (KiTimerWaitTest.c)
 *     KeInitializeApc @ 0x1402D69A0 (KeInitializeApc.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     ObpDeferObjectDeletion @ 0x14031A0E0 (ObpDeferObjectDeletion.c)
 *     KeRemoveQueueApc @ 0x1403240DC (KeRemoveQueueApc.c)
 *     PsInsertVirtualizedTimer @ 0x14033F650 (PsInsertVirtualizedTimer.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140340590 (KxWaitForSpinLockAndAcquire.c)
 *     KeRemoveQueueDpcEx @ 0x1403605E0 (KeRemoveQueueDpcEx.c)
 *     PoDestroyReasonContext @ 0x1403622D4 (PoDestroyReasonContext.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140514D4C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140514E58 (KiReleaseSpinLockInstrumented.c)
 *     KiTraceSetTimer @ 0x14052207C (KiTraceSetTimer.c)
 *     ExpCheckWakeTimerAccess @ 0x14078A808 (ExpCheckWakeTimerAccess.c)
 *     ExpCheckTestsigningEnabled @ 0x140951D9C (ExpCheckTestsigningEnabled.c)
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
  __int64 v40; // rbx
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
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
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
  _DWORD *SchedulerAssist; // r9
  int v100; // eax
  int v101; // eax
  unsigned __int8 v102; // al
  struct _KPRCB *v103; // r10
  _DWORD *v104; // r9
  int v105; // eax
  struct _KTHREAD *v106; // rbx
  __int64 v107; // rcx
  unsigned __int8 v108; // al
  char v109; // dl
  __int64 v110; // r14
  int v111; // eax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  unsigned __int8 v116; // r10
  _DWORD *v117; // r9
  __int64 v118; // rbx
  __int64 v119; // r8
  _QWORD *v120; // rdx
  _DWORD *v121; // r9
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int v125; // eax
  int v126; // eax
  unsigned __int8 v127; // al
  struct _KPRCB *v128; // r10
  _DWORD *v129; // r9
  int v130; // eax
  unsigned int v131; // edx
  int v132; // eax
  unsigned int v133; // eax
  _DWORD *v134; // r9
  __int64 v135; // r8
  struct _KPRCB *v136; // rcx
  _DWORD *v137; // rdx
  int v138; // eax
  __int64 v139; // rsi
  volatile signed __int64 *v140; // r12
  __int64 v141; // rcx
  int v142; // eax
  __int64 v143; // rcx
  int v144; // eax
  struct _KPRCB *v145; // rcx
  _DWORD *v146; // rdx
  int v147; // eax
  struct _KPRCB *v148; // rcx
  _DWORD *v149; // rdx
  int v150; // eax
  int v151; // eax
  unsigned __int8 v152; // al
  struct _KPRCB *v153; // r10
  _DWORD *v154; // r9
  int v155; // eax
  _QWORD *v156; // rax
  __int64 v157; // rdx
  _QWORD *v158; // rcx
  __int64 v159; // rcx
  char v161; // [rsp+41h] [rbp-167h]
  char v162; // [rsp+42h] [rbp-166h]
  int v163; // [rsp+44h] [rbp-164h]
  unsigned int v164; // [rsp+48h] [rbp-160h]
  int v165; // [rsp+4Ch] [rbp-15Ch]
  KSPIN_LOCK *Object; // [rsp+50h] [rbp-158h]
  unsigned __int8 v167; // [rsp+58h] [rbp-150h]
  __int64 v168; // [rsp+60h] [rbp-148h]
  struct _KPRCB *v169; // [rsp+60h] [rbp-148h]
  __int64 v170; // [rsp+60h] [rbp-148h]
  int v171; // [rsp+68h] [rbp-140h] BYREF
  int v172; // [rsp+6Ch] [rbp-13Ch] BYREF
  int v173; // [rsp+70h] [rbp-138h]
  int v174; // [rsp+74h] [rbp-134h] BYREF
  volatile signed __int32 *v175; // [rsp+78h] [rbp-130h]
  __int64 v176; // [rsp+80h] [rbp-128h]
  __int64 v177; // [rsp+88h] [rbp-120h]
  int v178; // [rsp+90h] [rbp-118h]
  int v179; // [rsp+94h] [rbp-114h] BYREF
  int v180; // [rsp+98h] [rbp-110h] BYREF
  __int64 *v181; // [rsp+A0h] [rbp-108h]
  int v182; // [rsp+A8h] [rbp-100h]
  int v183; // [rsp+ACh] [rbp-FCh] BYREF
  int v184; // [rsp+B0h] [rbp-F8h]
  volatile signed __int32 *v185; // [rsp+B8h] [rbp-F0h] BYREF
  int v186; // [rsp+C0h] [rbp-E8h] BYREF
  volatile signed __int64 *v187; // [rsp+C8h] [rbp-E0h] BYREF
  __int64 v188; // [rsp+D0h] [rbp-D8h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-D0h]
  int v190; // [rsp+E0h] [rbp-C8h] BYREF
  int v191; // [rsp+E4h] [rbp-C4h] BYREF
  __int128 v192; // [rsp+E8h] [rbp-C0h]
  __int64 v193; // [rsp+F8h] [rbp-B0h]
  ULONG_PTR v194; // [rsp+100h] [rbp-A8h] BYREF
  ULONG_PTR v195; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v196; // [rsp+110h] [rbp-98h]
  struct _KPRCB *v197; // [rsp+118h] [rbp-90h]
  __int64 v198; // [rsp+120h] [rbp-88h]
  _BYTE *v199; // [rsp+128h] [rbp-80h]
  __int128 v200; // [rsp+138h] [rbp-70h]
  __int64 v201; // [rsp+148h] [rbp-60h]
  _QWORD v202[2]; // [rsp+150h] [rbp-58h] BYREF
  _QWORD v203[2]; // [rsp+160h] [rbp-48h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v175 = a4;
  v181 = a3;
  v10 = a2;
  v199 = a10;
  v164 = 0;
  v12 = 0;
  v162 = 0;
  CurrentThread = 0LL;
  v176 = a6;
  if ( !a6 )
    goto LABEL_2;
  if ( a7 )
  {
    if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
    {
      v97 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10]);
      v164 = v97;
      if ( v97 )
      {
        ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
        return v97;
      }
    }
    v10 = a2;
  }
  if ( (int)qword_140C23F20 < 2 && !byte_140C23EF3 )
  {
    v164 = 1073741861;
    v176 = 0LL;
    goto LABEL_2;
  }
  v12 = 1;
  v162 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v183 = 0;
  v68 = KeGetCurrentThread();
  --v68->SpecialApcDisable;
  if ( ++v68->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v68, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  v182 = 0;
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
  v182 = v69;
  v68->AbEntrySummary = v70 & ~(1 << v69);
  v71 = (__int64)&v68->LockEntries[v69];
LABEL_96:
  if ( v71 )
  {
    if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
      && byte_140C4F848[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v68->ApcState.Process);
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v68, (__int64)&ExpWakeTimerLock, &v183);
  v77 = v68->SpecialApcDisable++ == -1;
  if ( v77 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v68->ApcState.ApcListHead[0].Flink != &v68->152 )
    KiCheckForKernelApcDelivery(v74, v73, v75, v76);
  v78 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
  if ( v78 )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v71, (ULONG_PTR)&ExpWakeTimerLock);
  v10 = a2;
  if ( v71 )
    *(_BYTE *)(v71 + 26) |= 1u;
LABEL_2:
  v188 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = (KSPIN_LOCK *)Process;
  v14 = 0;
  v161 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v167 = CurrentIrql;
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
    v161 = 1;
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
        v100 = v17[6];
        v17[6] = v100 + 1;
        if ( v100 == -1 )
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
          v101 = v65[6] - 1;
          v65[6] = v101;
          if ( !v101 )
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
        v102 = KeGetCurrentIrql();
        if ( v102 <= 0xFu && v167 <= 0xFu && v102 >= 2u )
        {
          v103 = KeGetCurrentPrcb();
          v104 = v103->SchedulerAssist;
          v105 = ~(unsigned __int16)(-1LL << (v167 + 1));
          v77 = (v105 & v104[5]) == 0;
          v104[5] &= v105;
          if ( v77 )
            KiRemoveSystemWorkPriorityKick(v103);
        }
      }
    }
    __writecr8(v167);
    v162 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v186 = 0;
    v106 = KeGetCurrentThread();
    --v106->SpecialApcDisable;
    if ( ++v106->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v106, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
    v184 = 0;
    LOBYTE(v107) = v106->AbEntrySummary;
    if ( !(_BYTE)v107 )
    {
      if ( !v106->AbOrphanedEntrySummary )
      {
        v110 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v106, &ExpWakeTimerLock);
        goto LABEL_183;
      }
      v108 = v106->AbOrphanedEntrySummary;
      v106->AbOrphanedEntrySummary = 0;
      LOBYTE(v107) = v108 | v106->AbEntrySummary;
    }
    v109 = v107;
    _BitScanForward((unsigned int *)&v107, (unsigned __int8)v107);
    v184 = v107;
    v106->AbEntrySummary = v109 & ~(1 << v107);
    v110 = (__int64)&v106->LockEntries[v107];
LABEL_183:
    if ( v110 )
    {
      if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
        && byte_140C4F848[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
      {
        v111 = MmGetSessionIdEx((__int64)v106->ApcState.Process);
      }
      else
      {
        v111 = -1;
      }
      *(_DWORD *)(v110 + 40) = v111;
      *(_QWORD *)(v110 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v106->116 + 1, 0x10u);
    }
    --v106->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v106, (__int64)&ExpWakeTimerLock, &v186);
    v77 = v106->SpecialApcDisable++ == -1;
    if ( v77 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v106->ApcState.ApcListHead[0].Flink != &v106->152 )
      KiCheckForKernelApcDelivery(v113, v112, v114, v115);
    v78 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    if ( v78 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v110, (ULONG_PTR)&ExpWakeTimerLock);
    if ( v110 )
      *(_BYTE *)(v110 + 26) |= 1u;
    v116 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v116 <= 0xFu )
    {
      v117 = KeGetCurrentPrcb()->SchedulerAssist;
      v117[5] |= (-1 << (v116 + 1)) & 4;
    }
    v167 = v116;
    if ( v161 )
      KxAcquireSpinLock(Object + 305);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v18 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v118 = *(_QWORD *)(BugCheckParameter2 + 80);
    KxAcquireSpinLock((PKSPIN_LOCK)(v118 + 1120));
    v119 = *(_QWORD *)(BugCheckParameter2 + 224);
    v120 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v119 + 8) != BugCheckParameter2 + 224 || *v120 != BugCheckParameter2 + 224 )
      goto LABEL_322;
    *v120 = v119;
    *(_QWORD *)(v119 + 8) = v120;
    KxReleaseSpinLock((PKSPIN_LOCK)(v118 + 1120));
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
      v121 = KeGetCurrentPrcb()->SchedulerAssist;
      v121[5] |= (-1 << (v19 + 1)) & 4;
    }
    v194 = 0LL;
    v185 = 0LL;
    v171 = 0;
    v20 = 0;
    while ( 1 )
    {
      v190 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
      {
        do
          KeYieldProcessorEx(&v190);
        while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      {
        v21 = -129;
        goto LABEL_18;
      }
      v48 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
      v177 = KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 14656;
      v49 = (volatile signed __int32 *)(v177
                                      + 32
                                      * (v48
                                       + ((unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8)
                                       + 16));
      v50 = KeGetCurrentPrcb();
      v169 = v50;
      v191 = 0;
      v51 = v50->SchedulerAssist;
      if ( v51 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          v122 = v51[6];
          v51[6] = v122 + 1;
          if ( v122 == -1 )
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
      while ( _interlockedbittestandset64(v49, 0LL) )
      {
        v66 = v169->SchedulerAssist;
        if ( v66 )
        {
          if ( v169->NestingLevel <= 1u )
          {
            v123 = v66[6] - 1;
            v66[6] = v123;
            if ( !v123 )
              KiRemoveSystemWorkPriorityKick(v169);
          }
        }
        do
          KeYieldProcessorEx(&v191);
        while ( *(_QWORD *)v49 );
        v67 = v169->SchedulerAssist;
        if ( v67 )
        {
          if ( v169->NestingLevel <= 1u )
          {
            v124 = v67[6];
            v67[6] = v124 + 1;
            if ( v124 == -1 )
              KiRemoveSystemWorkPriorityKick(v169);
          }
        }
      }
      v185 = v49;
      v52 = v177;
      if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v49, 0LL);
      v95 = KeGetCurrentPrcb();
      v96 = v95->SchedulerAssist;
      if ( v96 )
      {
        if ( v95->NestingLevel <= 1u )
        {
          v125 = v96[6] - 1;
          v96[6] = v125;
          if ( !v125 )
            KiRemoveSystemWorkPriorityKick(v95);
        }
      }
      if ( _InterlockedExchange64((volatile __int64 *)(v52 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
      {
        v21 = 16777087;
        v20 = 1;
        goto LABEL_18;
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      v171 = 0;
      while ( *(char *)(BugCheckParameter2 + 3) < 0 )
        KeYieldProcessorEx(&v171);
    }
    KiRemoveEntryTimer(v177, BugCheckParameter2, (unsigned int)v48, &v185);
    _InterlockedAnd64((volatile signed __int64 *)v185, 0LL);
    v53 = KeGetCurrentPrcb();
    v54 = v53->SchedulerAssist;
    if ( v54 )
    {
      if ( v53->NestingLevel <= 1u )
      {
        v126 = v54[6] - 1;
        v54[6] = v126;
        if ( !v126 )
          KiRemoveSystemWorkPriorityKick(v53);
      }
    }
    v21 = -1073741953;
    v20 = 1;
LABEL_18:
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, v21);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v20 )
    {
      v194 = BugCheckParameter2;
      v203[0] = &v194;
      v203[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v203, 1, 1073872896, 3925, 1538);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v127 = KeGetCurrentIrql();
        if ( v127 <= 0xFu && v19 <= 0xFu && v127 >= 2u )
        {
          v128 = KeGetCurrentPrcb();
          v129 = v128->SchedulerAssist;
          v130 = ~(unsigned __int16)(-1LL << (v19 + 1));
          v77 = (v130 & v129[5]) == 0;
          v129[5] &= v130;
          if ( v77 )
            KiRemoveSystemWorkPriorityKick(v128);
        }
      }
    }
    __writecr8(v19);
    v22 = BugCheckParameter2 + 72;
    v18 = 0;
  }
  *(_BYTE *)(BugCheckParameter2 + 248) = 0;
  v23 = v18 + 1;
  v165 = *(_DWORD *)(BugCheckParameter2 + 4);
  v24 = a8;
  v163 = a8;
  *(_DWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 244) = 0;
  *(_DWORD *)(BugCheckParameter2 + 320) = a9;
  if ( v175 )
  {
    v59 = KeGetCurrentThread();
    KeInitializeApc(v22, (_DWORD)v59, 2, (unsigned int)ExpTimerApcRoutine, 0LL, (__int64)v175, a2, a5);
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
    v188 = BugCheckParameter2 + 160;
    v23 = v18;
    v24 = 0;
    v163 = 0;
  }
  v25 = v181;
  v26 = *v181;
  v168 = *v181;
  v27 = Object;
  v28 = v161;
  if ( v161 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
    {
      PsInsertVirtualizedTimer(Object, BugCheckParameter2 + 280);
      v24 = v163;
      v27 = Object;
    }
    _InterlockedIncrement((volatile signed __int32 *)v27 + 606);
    if ( (v27[79] & 0x10) != 0 )
    {
      v58 = *((unsigned int *)v27 + 17);
      if ( (_DWORD)v58 )
      {
        v178 = *((_DWORD *)v27 + 17);
        v26 = *v25;
        if ( *v25 >= 0 )
        {
          if ( (unsigned __int64)v26 <= MEMORY[0xFFFFF78000000014] )
            v26 = MEMORY[0xFFFFF78000000014];
          v26 += v58;
          if ( v26 < *v25 )
            v26 = *v25;
          LODWORD(v58) = v178;
        }
        else if ( v26 - v58 <= v26 )
        {
          v26 -= v58;
        }
        HIDWORD(v168) = HIDWORD(v26);
        v131 = (unsigned int)v58 / 0x2710;
        if ( v24 )
        {
          v132 = v131 + v24;
          if ( v131 + v24 > v24 )
          {
            v24 += v131;
            v163 = v132;
            *(_DWORD *)(BugCheckParameter2 + 240) += v131;
LABEL_261:
            *(_DWORD *)(BugCheckParameter2 + 244) = v131;
            goto LABEL_23;
          }
        }
        v133 = *(_DWORD *)(BugCheckParameter2 + 240);
        if ( v133 && v133 + v131 > v133 )
        {
          *(_DWORD *)(BugCheckParameter2 + 240) = v133 + v131;
          goto LABEL_261;
        }
      }
    }
  }
LABEL_23:
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 312) = v26;
    v41 = v176;
    if ( v168 < 0 )
      *(_BYTE *)(BugCheckParameter2 + 248) = (v176 != 0) + 2;
    else
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    goto LABEL_44;
  }
  v29 = v26;
  v200 = 0LL;
  v201 = 0LL;
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
          v163 = -1;
        else
          v163 = v24 + v64 + (v64 >> 63);
      }
      LODWORD(v55) = 16515072;
    }
    v57 = (unsigned int)v55 >> 18;
    if ( v57 > 0x3F )
      LOBYTE(v57) = 63;
    BYTE1(v200) = 4 * v57;
  }
  v30 = KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v188 ^ KiWaitAlways), KiWaitNever);
  v196 = v30;
  v31 = KeGetCurrentIrql();
  v198 = v31;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v31 <= 0xFu )
  {
    v134 = KeGetCurrentPrcb()->SchedulerAssist;
    v134[5] |= (-1 << (v31 + 1)) & 4;
  }
  v32 = KeGetCurrentPrcb();
  v197 = v32;
  v195 = 0LL;
  v187 = 0LL;
  v172 = 0;
  v33 = 0;
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
      break;
    v135 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    LODWORD(v181) = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v170 = KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 14656;
    v175 = (volatile signed __int32 *)(v170
                                     + 32
                                     * (v135
                                      + ((unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8)
                                      + 16));
    v136 = KeGetCurrentPrcb();
    v177 = (__int64)v136;
    v180 = 0;
    v137 = v136->SchedulerAssist;
    if ( v137 )
    {
      if ( v136->NestingLevel <= 1u )
      {
        v138 = v137[6];
        v137[6] = v138 + 1;
        if ( v138 == -1 )
          KiRemoveSystemWorkPriorityKick(v136);
      }
    }
    v139 = v177;
    while ( 1 )
    {
      v140 = (volatile signed __int64 *)v175;
      if ( !_interlockedbittestandset64(v175, 0LL) )
        break;
      v141 = *(_QWORD *)(v139 + 33976);
      if ( v141 )
      {
        if ( *(_BYTE *)(v139 + 32) <= 1u )
        {
          v142 = *(_DWORD *)(v141 + 24) - 1;
          *(_DWORD *)(v141 + 24) = v142;
          if ( !v142 )
            KiRemoveSystemWorkPriorityKick(v139);
        }
      }
      do
        KeYieldProcessorEx(&v180);
      while ( *v140 );
      v139 = v177;
      v143 = *(_QWORD *)(v177 + 33976);
      if ( v143 )
      {
        if ( *(_BYTE *)(v177 + 32) <= 1u )
        {
          v144 = *(_DWORD *)(v143 + 24);
          *(_DWORD *)(v143 + 24) = v144 + 1;
          if ( v144 == -1 )
            KiRemoveSystemWorkPriorityKick(v139);
        }
      }
    }
    v187 = v140;
    v30 = v196;
    v32 = v197;
    if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
    {
      KiRemoveEntryTimer(v170, BugCheckParameter2, (unsigned int)v181, &v187);
      _InterlockedAnd64(v187, 0LL);
      v148 = KeGetCurrentPrcb();
      v149 = v148->SchedulerAssist;
      if ( v149 )
      {
        if ( v148->NestingLevel <= 1u )
        {
          v150 = v149[6] - 1;
          v149[6] = v150;
          if ( !v150 )
            KiRemoveSystemWorkPriorityKick(v148);
        }
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFFFF);
      goto LABEL_303;
    }
    _InterlockedAnd64((volatile signed __int64 *)v175, 0LL);
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
    if ( _InterlockedExchange64((volatile __int64 *)(v170 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
    {
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFFu);
LABEL_303:
      v33 = 1;
      break;
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    v172 = 0;
    while ( *(char *)(BugCheckParameter2 + 3) < 0 )
      KeYieldProcessorEx(&v172);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v33 )
  {
    v195 = BugCheckParameter2;
    v202[0] = &v195;
    v202[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v202, 1, 1073872896, 3925, 1538);
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
  *(_DWORD *)(BugCheckParameter2 + 60) = v163;
  v192 = 0LL;
  v193 = 0LL;
  LODWORD(v192) = *(_DWORD *)BugCheckParameter2;
  v37 = BYTE1(v200);
  BYTE1(v192) = BYTE1(v200);
  if ( v26 >= 0 )
  {
    BYTE1(v192) = BYTE1(v200) | 1;
    v26 = MEMORY[0xFFFFF78000000014] - v26;
    if ( v26 >= 0 )
    {
      *(_DWORD *)BugCheckParameter2 = v192;
      *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
LABEL_71:
      KiTimerWaitTest(v32, BugCheckParameter2, 0LL);
      goto LABEL_42;
    }
    v37 = BYTE1(v192);
  }
  v38 = 0LL;
  if ( (v37 & 0xFC) != 0 )
    v38 = (unsigned __int8)(v37 & 0xFC) << 16;
  v39 = MEMORY[0xFFFFF78000000008] - v26;
  *(_QWORD *)(BugCheckParameter2 + 24) = MEMORY[0xFFFFF78000000008] - v26;
  BYTE3(v192) |= 0x40u;
  BYTE2(v192) = (unsigned __int64)(v38 + v39) >> 18;
  *(_DWORD *)BugCheckParameter2 = v192;
  *(_DWORD *)(BugCheckParameter2 + 4) = 0;
  v40 = v188;
  if ( !KiInsertTimerTable(
          (__int64)v32,
          BugCheckParameter2,
          v188,
          (unsigned __int8)((unsigned __int64)(v38 + v39) >> 18),
          0LL) )
    goto LABEL_71;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(BugCheckParameter2, v40, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
LABEL_42:
  KiExitDispatcher((__int64)v32, 0LL, 1u, 0, v198);
  v41 = v176;
  v28 = v161;
  v27 = Object;
  if ( v176 )
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
      v151 = v44[6] - 1;
      v44[6] = v151;
      if ( !v151 )
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
      v152 = KeGetCurrentIrql();
      if ( v152 <= 0xFu && v167 <= 0xFu && v152 >= 2u )
      {
        v153 = KeGetCurrentPrcb();
        v154 = v153->SchedulerAssist;
        v155 = ~(unsigned __int16)(-1LL << (v167 + 1));
        v77 = (v155 & v154[5]) == 0;
        v154[5] &= v155;
        if ( v77 )
          KiRemoveSystemWorkPriorityKick(v153);
      }
    }
  }
  __writecr8(v167);
  if ( v162 )
  {
    if ( v42 )
    {
      if ( !v41 )
      {
        v156 = (_QWORD *)(BugCheckParameter2 + 264);
        v157 = *(_QWORD *)(BugCheckParameter2 + 264);
        v158 = *(_QWORD **)(BugCheckParameter2 + 272);
        if ( *(_QWORD *)(v157 + 8) != BugCheckParameter2 + 264 || (_QWORD *)*v158 != v156 )
          goto LABEL_322;
        *v158 = v157;
        *(_QWORD *)(v157 + 8) = v158;
        *v156 = 0LL;
      }
LABEL_112:
      v81 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v81 & 2) != 0 && (v81 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
      v174 = 0;
      v82 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
        v83 = (unsigned int)MmGetSessionIdEx((__int64)v82->ApcState.Process);
      else
        v83 = 0xFFFFFFFFLL;
      --v82->SpecialApcDisable;
      v84 = ++v82->AbAllocationRegionCount;
      v173 = 0;
      v85 = 0LL;
      v86 = ((char)v82->AbEntrySummary | (char)v82->AbOrphanedEntrySummary) ^ 0x3F;
      v77 = !_BitScanReverse((unsigned int *)&v87, v86);
      v173 = v87;
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
          v173 = v87;
          if ( v77 )
            goto LABEL_122;
        }
        v85 = v88;
      }
LABEL_122:
      if ( v85 )
      {
        *(_BYTE *)(v85 + 32) |= 2u;
        if ( *(__int64 *)(v85 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v85);
        v89 = *(_DWORD *)(v85 + 88);
        v174 = v89 & 0x1FFFF;
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
      KiAbThreadRemoveBoosts((ULONG_PTR)v82, (__int64)&ExpWakeTimerLock, &v174);
      v77 = v82->SpecialApcDisable++ == -1;
      if ( v77 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v82->ApcState.ApcListHead[0].Flink != &v82->152 )
        KiCheckForKernelApcDelivery(v92, v91, v93, v94);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v42 )
        PoDestroyReasonContext(v42);
      goto LABEL_51;
    }
    if ( !v41 )
      goto LABEL_112;
    v79 = (_QWORD *)(BugCheckParameter2 + 264);
    v80 = (_QWORD *)qword_140C16998;
    if ( *(__int64 **)qword_140C16998 == &ExpWakeTimerList )
    {
      *v79 = &ExpWakeTimerList;
      *(_QWORD *)(BugCheckParameter2 + 272) = v80;
      *v80 = v79;
      qword_140C16998 = BugCheckParameter2 + 264;
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
  v46 = v199;
  if ( !v199 )
    return v164;
  if ( !a2 )
  {
    *v199 = v165;
    return v164;
  }
  v159 = (__int64)v199;
  if ( (unsigned __int64)v199 >= 0x7FFFFFFF0000LL )
    v159 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v159 = *(_BYTE *)v159;
  *v46 = v165;
  return v164;
}
