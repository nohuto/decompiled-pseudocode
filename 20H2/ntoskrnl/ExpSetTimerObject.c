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
  unsigned __int64 v86; // r8
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rcx
  int v90; // ecx
  unsigned __int8 v91; // r13
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  struct _KPRCB *v96; // rcx
  _DWORD *v97; // rdx
  unsigned int v98; // ebx
  unsigned __int8 AbOrphanedEntrySummary; // al
  _DWORD *SchedulerAssist; // r9
  int v101; // eax
  int v102; // eax
  unsigned __int8 v103; // al
  struct _KPRCB *v104; // r10
  _DWORD *v105; // r9
  int v106; // eax
  struct _KTHREAD *v107; // rbx
  __int64 v108; // rcx
  unsigned __int8 v109; // al
  char v110; // dl
  __int64 v111; // r14
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  unsigned __int8 v117; // r10
  _DWORD *v118; // r9
  __int64 v119; // rbx
  __int64 v120; // r8
  _QWORD *v121; // rdx
  _DWORD *v122; // r9
  int v123; // eax
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  unsigned __int8 v128; // al
  struct _KPRCB *v129; // r10
  _DWORD *v130; // r9
  int v131; // eax
  unsigned int v132; // edx
  int v133; // eax
  unsigned int v134; // eax
  _DWORD *v135; // r9
  __int64 v136; // r8
  struct _KPRCB *v137; // rcx
  _DWORD *v138; // rdx
  int v139; // eax
  __int64 v140; // rsi
  volatile signed __int64 *v141; // r12
  __int64 v142; // rcx
  int v143; // eax
  __int64 v144; // rcx
  int v145; // eax
  struct _KPRCB *v146; // rcx
  _DWORD *v147; // rdx
  int v148; // eax
  struct _KPRCB *v149; // rcx
  _DWORD *v150; // rdx
  int v151; // eax
  int v152; // eax
  unsigned __int8 v153; // al
  struct _KPRCB *v154; // r10
  _DWORD *v155; // r9
  int v156; // eax
  _QWORD *v157; // rax
  __int64 v158; // rdx
  _QWORD *v159; // rcx
  __int64 v160; // rcx
  char v162; // [rsp+41h] [rbp-167h]
  char v163; // [rsp+42h] [rbp-166h]
  int v164; // [rsp+44h] [rbp-164h]
  unsigned int v165; // [rsp+48h] [rbp-160h]
  int v166; // [rsp+4Ch] [rbp-15Ch]
  KSPIN_LOCK *Object; // [rsp+50h] [rbp-158h]
  unsigned __int8 v168; // [rsp+58h] [rbp-150h]
  __int64 v169; // [rsp+60h] [rbp-148h]
  struct _KPRCB *v170; // [rsp+60h] [rbp-148h]
  __int64 v171; // [rsp+60h] [rbp-148h]
  int v172; // [rsp+68h] [rbp-140h] BYREF
  int v173; // [rsp+6Ch] [rbp-13Ch] BYREF
  int v174; // [rsp+70h] [rbp-138h]
  int v175; // [rsp+74h] [rbp-134h] BYREF
  volatile signed __int32 *v176; // [rsp+78h] [rbp-130h]
  __int64 v177; // [rsp+80h] [rbp-128h]
  __int64 v178; // [rsp+88h] [rbp-120h]
  int v179; // [rsp+90h] [rbp-118h]
  int v180; // [rsp+94h] [rbp-114h] BYREF
  int v181; // [rsp+98h] [rbp-110h] BYREF
  __int64 *v182; // [rsp+A0h] [rbp-108h]
  int v183; // [rsp+A8h] [rbp-100h]
  int v184; // [rsp+ACh] [rbp-FCh] BYREF
  int v185; // [rsp+B0h] [rbp-F8h]
  volatile signed __int32 *v186; // [rsp+B8h] [rbp-F0h] BYREF
  int v187; // [rsp+C0h] [rbp-E8h] BYREF
  volatile signed __int64 *v188; // [rsp+C8h] [rbp-E0h] BYREF
  __int64 v189; // [rsp+D0h] [rbp-D8h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-D0h]
  int v191; // [rsp+E0h] [rbp-C8h] BYREF
  int v192; // [rsp+E4h] [rbp-C4h] BYREF
  __int128 v193; // [rsp+E8h] [rbp-C0h]
  __int64 v194; // [rsp+F8h] [rbp-B0h]
  ULONG_PTR v195; // [rsp+100h] [rbp-A8h] BYREF
  ULONG_PTR v196; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v197; // [rsp+110h] [rbp-98h]
  struct _KPRCB *v198; // [rsp+118h] [rbp-90h]
  __int64 v199; // [rsp+120h] [rbp-88h]
  _BYTE *v200; // [rsp+128h] [rbp-80h]
  __int128 v201; // [rsp+138h] [rbp-70h]
  __int64 v202; // [rsp+148h] [rbp-60h]
  _QWORD v203[2]; // [rsp+150h] [rbp-58h] BYREF
  _QWORD v204[2]; // [rsp+160h] [rbp-48h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v176 = a4;
  v182 = a3;
  v10 = a2;
  v200 = a10;
  v165 = 0;
  v12 = 0;
  v163 = 0;
  CurrentThread = 0LL;
  v177 = a6;
  if ( !a6 )
    goto LABEL_2;
  if ( a7 )
  {
    if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
    {
      v98 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10]);
      v165 = v98;
      if ( v98 )
      {
        ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
        return v98;
      }
    }
    v10 = a2;
  }
  if ( (int)qword_140C23F20 < 2 && !byte_140C23EF3 )
  {
    v165 = 1073741861;
    v177 = 0LL;
    goto LABEL_2;
  }
  v12 = 1;
  v163 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v184 = 0;
  v68 = KeGetCurrentThread();
  --v68->SpecialApcDisable;
  if ( ++v68->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v68, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  v183 = 0;
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
  v183 = v69;
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v68, (__int64)&ExpWakeTimerLock, &v184);
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
  v189 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = (KSPIN_LOCK *)Process;
  v14 = 0;
  v162 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v168 = CurrentIrql;
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
    v162 = 1;
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
        v101 = v17[6];
        v17[6] = v101 + 1;
        if ( v101 == -1 )
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
          v102 = v65[6] - 1;
          v65[6] = v102;
          if ( !v102 )
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
        v103 = KeGetCurrentIrql();
        if ( v103 <= 0xFu && v168 <= 0xFu && v103 >= 2u )
        {
          v104 = KeGetCurrentPrcb();
          v105 = v104->SchedulerAssist;
          v106 = ~(unsigned __int16)(-1LL << (v168 + 1));
          v77 = (v106 & v105[5]) == 0;
          v105[5] &= v106;
          if ( v77 )
            KiRemoveSystemWorkPriorityKick(v104);
        }
      }
    }
    __writecr8(v168);
    v163 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v187 = 0;
    v107 = KeGetCurrentThread();
    --v107->SpecialApcDisable;
    if ( ++v107->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v107, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
    v185 = 0;
    LOBYTE(v108) = v107->AbEntrySummary;
    if ( !(_BYTE)v108 )
    {
      if ( !v107->AbOrphanedEntrySummary )
      {
        v111 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v107, &ExpWakeTimerLock);
        goto LABEL_183;
      }
      v109 = v107->AbOrphanedEntrySummary;
      v107->AbOrphanedEntrySummary = 0;
      LOBYTE(v108) = v109 | v107->AbEntrySummary;
    }
    v110 = v108;
    _BitScanForward((unsigned int *)&v108, (unsigned __int8)v108);
    v185 = v108;
    v107->AbEntrySummary = v110 & ~(1 << v108);
    v111 = (__int64)&v107->LockEntries[v108];
LABEL_183:
    if ( v111 )
    {
      if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
        && byte_140C4F848[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
      {
        v112 = MmGetSessionIdEx((__int64)v107->ApcState.Process);
      }
      else
      {
        v112 = -1;
      }
      *(_DWORD *)(v111 + 40) = v112;
      *(_QWORD *)(v111 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v107->116 + 1, 0x10u);
    }
    --v107->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v107, (__int64)&ExpWakeTimerLock, &v187);
    v77 = v107->SpecialApcDisable++ == -1;
    if ( v77 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v107->ApcState.ApcListHead[0].Flink != &v107->152 )
      KiCheckForKernelApcDelivery(v114, v113, v115, v116);
    v78 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    if ( v78 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v111, (ULONG_PTR)&ExpWakeTimerLock);
    if ( v111 )
      *(_BYTE *)(v111 + 26) |= 1u;
    v117 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v117 <= 0xFu )
    {
      v118 = KeGetCurrentPrcb()->SchedulerAssist;
      v118[5] |= (-1 << (v117 + 1)) & 4;
    }
    v168 = v117;
    if ( v162 )
      KxAcquireSpinLock(Object + 305);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v18 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v119 = *(_QWORD *)(BugCheckParameter2 + 80);
    KxAcquireSpinLock((PKSPIN_LOCK)(v119 + 1120));
    v120 = *(_QWORD *)(BugCheckParameter2 + 224);
    v121 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v120 + 8) != BugCheckParameter2 + 224 || *v121 != BugCheckParameter2 + 224 )
      goto LABEL_322;
    *v121 = v120;
    *(_QWORD *)(v120 + 8) = v121;
    KxReleaseSpinLock((PKSPIN_LOCK)(v119 + 1120));
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
      v122 = KeGetCurrentPrcb()->SchedulerAssist;
      v122[5] |= (-1 << (v19 + 1)) & 4;
    }
    v195 = 0LL;
    v186 = 0LL;
    v172 = 0;
    v20 = 0;
    while ( 1 )
    {
      v191 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
      {
        do
          KeYieldProcessorEx(&v191);
        while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      {
        v21 = -129;
        goto LABEL_18;
      }
      v48 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
      v178 = KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 14656;
      v49 = (volatile signed __int32 *)(v178
                                      + 32
                                      * (v48
                                       + ((unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8)
                                       + 16));
      v50 = KeGetCurrentPrcb();
      v170 = v50;
      v192 = 0;
      v51 = v50->SchedulerAssist;
      if ( v51 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          v123 = v51[6];
          v51[6] = v123 + 1;
          if ( v123 == -1 )
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
      while ( _interlockedbittestandset64(v49, 0LL) )
      {
        v66 = v170->SchedulerAssist;
        if ( v66 )
        {
          if ( v170->NestingLevel <= 1u )
          {
            v124 = v66[6] - 1;
            v66[6] = v124;
            if ( !v124 )
              KiRemoveSystemWorkPriorityKick(v170);
          }
        }
        do
          KeYieldProcessorEx(&v192);
        while ( *(_QWORD *)v49 );
        v67 = v170->SchedulerAssist;
        if ( v67 )
        {
          if ( v170->NestingLevel <= 1u )
          {
            v125 = v67[6];
            v67[6] = v125 + 1;
            if ( v125 == -1 )
              KiRemoveSystemWorkPriorityKick(v170);
          }
        }
      }
      v186 = v49;
      v52 = v178;
      if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v49, 0LL);
      v96 = KeGetCurrentPrcb();
      v97 = v96->SchedulerAssist;
      if ( v97 )
      {
        if ( v96->NestingLevel <= 1u )
        {
          v126 = v97[6] - 1;
          v97[6] = v126;
          if ( !v126 )
            KiRemoveSystemWorkPriorityKick(v96);
        }
      }
      if ( _InterlockedExchange64((volatile __int64 *)(v52 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
      {
        v21 = 16777087;
        v20 = 1;
        goto LABEL_18;
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      v172 = 0;
      while ( *(char *)(BugCheckParameter2 + 3) < 0 )
        KeYieldProcessorEx(&v172);
    }
    KiRemoveEntryTimer(v178, BugCheckParameter2, (unsigned int)v48, &v186);
    _InterlockedAnd64((volatile signed __int64 *)v186, 0LL);
    v53 = KeGetCurrentPrcb();
    v54 = v53->SchedulerAssist;
    if ( v54 )
    {
      if ( v53->NestingLevel <= 1u )
      {
        v127 = v54[6] - 1;
        v54[6] = v127;
        if ( !v127 )
          KiRemoveSystemWorkPriorityKick(v53);
      }
    }
    v21 = -1073741953;
    v20 = 1;
LABEL_18:
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, v21);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v20 )
    {
      v195 = BugCheckParameter2;
      v204[0] = &v195;
      v204[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v204, 1, 1073872896, 3925, 1538);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v128 = KeGetCurrentIrql();
        if ( v128 <= 0xFu && v19 <= 0xFu && v128 >= 2u )
        {
          v129 = KeGetCurrentPrcb();
          v130 = v129->SchedulerAssist;
          v131 = ~(unsigned __int16)(-1LL << (v19 + 1));
          v77 = (v131 & v130[5]) == 0;
          v130[5] &= v131;
          if ( v77 )
            KiRemoveSystemWorkPriorityKick(v129);
        }
      }
    }
    __writecr8(v19);
    v22 = BugCheckParameter2 + 72;
    v18 = 0;
  }
  *(_BYTE *)(BugCheckParameter2 + 248) = 0;
  v23 = v18 + 1;
  v166 = *(_DWORD *)(BugCheckParameter2 + 4);
  v24 = a8;
  v164 = a8;
  *(_DWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 244) = 0;
  *(_DWORD *)(BugCheckParameter2 + 320) = a9;
  if ( v176 )
  {
    v59 = KeGetCurrentThread();
    KeInitializeApc(v22, (_DWORD)v59, 2, (unsigned int)ExpTimerApcRoutine, 0LL, (__int64)v176, a2, a5);
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
    v189 = BugCheckParameter2 + 160;
    v23 = v18;
    v24 = 0;
    v164 = 0;
  }
  v25 = v182;
  v26 = *v182;
  v169 = *v182;
  v27 = Object;
  v28 = v162;
  if ( v162 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
    {
      PsInsertVirtualizedTimer(Object, BugCheckParameter2 + 280);
      v24 = v164;
      v27 = Object;
    }
    _InterlockedIncrement((volatile signed __int32 *)v27 + 606);
    if ( (v27[79] & 0x10) != 0 )
    {
      v58 = *((unsigned int *)v27 + 17);
      if ( (_DWORD)v58 )
      {
        v179 = *((_DWORD *)v27 + 17);
        v26 = *v25;
        if ( *v25 >= 0 )
        {
          if ( (unsigned __int64)v26 <= MEMORY[0xFFFFF78000000014] )
            v26 = MEMORY[0xFFFFF78000000014];
          v26 += v58;
          if ( v26 < *v25 )
            v26 = *v25;
          LODWORD(v58) = v179;
        }
        else if ( v26 - v58 <= v26 )
        {
          v26 -= v58;
        }
        HIDWORD(v169) = HIDWORD(v26);
        v132 = (unsigned int)v58 / 0x2710;
        if ( v24 )
        {
          v133 = v132 + v24;
          if ( v132 + v24 > v24 )
          {
            v24 += v132;
            v164 = v133;
            *(_DWORD *)(BugCheckParameter2 + 240) += v132;
LABEL_261:
            *(_DWORD *)(BugCheckParameter2 + 244) = v132;
            goto LABEL_23;
          }
        }
        v134 = *(_DWORD *)(BugCheckParameter2 + 240);
        if ( v134 && v134 + v132 > v134 )
        {
          *(_DWORD *)(BugCheckParameter2 + 240) = v134 + v132;
          goto LABEL_261;
        }
      }
    }
  }
LABEL_23:
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 312) = v26;
    v41 = v177;
    if ( v169 < 0 )
      *(_BYTE *)(BugCheckParameter2 + 248) = (v177 != 0) + 2;
    else
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    goto LABEL_44;
  }
  v29 = v26;
  v201 = 0LL;
  v202 = 0LL;
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
          v164 = -1;
        else
          v164 = v24 + v64 + (v64 >> 63);
      }
      LODWORD(v55) = 16515072;
    }
    v57 = (unsigned int)v55 >> 18;
    if ( v57 > 0x3F )
      LOBYTE(v57) = 63;
    BYTE1(v201) = 4 * v57;
  }
  v30 = KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v189 ^ KiWaitAlways), KiWaitNever);
  v197 = v30;
  v31 = KeGetCurrentIrql();
  v199 = v31;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v31 <= 0xFu )
  {
    v135 = KeGetCurrentPrcb()->SchedulerAssist;
    v135[5] |= (-1 << (v31 + 1)) & 4;
  }
  v32 = KeGetCurrentPrcb();
  v198 = v32;
  v196 = 0LL;
  v188 = 0LL;
  v173 = 0;
  v33 = 0;
  while ( 1 )
  {
    v180 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
    {
      do
        KeYieldProcessorEx(&v180);
      while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      break;
    v136 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    LODWORD(v182) = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v171 = KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 14656;
    v176 = (volatile signed __int32 *)(v171
                                     + 32
                                     * (v136
                                      + ((unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8)
                                      + 16));
    v137 = KeGetCurrentPrcb();
    v178 = (__int64)v137;
    v181 = 0;
    v138 = v137->SchedulerAssist;
    if ( v138 )
    {
      if ( v137->NestingLevel <= 1u )
      {
        v139 = v138[6];
        v138[6] = v139 + 1;
        if ( v139 == -1 )
          KiRemoveSystemWorkPriorityKick(v137);
      }
    }
    v140 = v178;
    while ( 1 )
    {
      v141 = (volatile signed __int64 *)v176;
      if ( !_interlockedbittestandset64(v176, 0LL) )
        break;
      v142 = *(_QWORD *)(v140 + 33976);
      if ( v142 )
      {
        if ( *(_BYTE *)(v140 + 32) <= 1u )
        {
          v143 = *(_DWORD *)(v142 + 24) - 1;
          *(_DWORD *)(v142 + 24) = v143;
          if ( !v143 )
            KiRemoveSystemWorkPriorityKick(v140);
        }
      }
      do
        KeYieldProcessorEx(&v181);
      while ( *v141 );
      v140 = v178;
      v144 = *(_QWORD *)(v178 + 33976);
      if ( v144 )
      {
        if ( *(_BYTE *)(v178 + 32) <= 1u )
        {
          v145 = *(_DWORD *)(v144 + 24);
          *(_DWORD *)(v144 + 24) = v145 + 1;
          if ( v145 == -1 )
            KiRemoveSystemWorkPriorityKick(v140);
        }
      }
    }
    v188 = v141;
    v30 = v197;
    v32 = v198;
    if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
    {
      KiRemoveEntryTimer(v171, BugCheckParameter2, (unsigned int)v182, &v188);
      _InterlockedAnd64(v188, 0LL);
      v149 = KeGetCurrentPrcb();
      v150 = v149->SchedulerAssist;
      if ( v150 )
      {
        if ( v149->NestingLevel <= 1u )
        {
          v151 = v150[6] - 1;
          v150[6] = v151;
          if ( !v151 )
            KiRemoveSystemWorkPriorityKick(v149);
        }
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFFFF);
      goto LABEL_303;
    }
    _InterlockedAnd64((volatile signed __int64 *)v176, 0LL);
    v146 = KeGetCurrentPrcb();
    v147 = v146->SchedulerAssist;
    if ( v147 )
    {
      if ( v146->NestingLevel <= 1u )
      {
        v148 = v147[6] - 1;
        v147[6] = v148;
        if ( !v148 )
          KiRemoveSystemWorkPriorityKick(v146);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v171 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
    {
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFFu);
LABEL_303:
      v33 = 1;
      break;
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    v173 = 0;
    while ( *(char *)(BugCheckParameter2 + 3) < 0 )
      KeYieldProcessorEx(&v173);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v33 )
  {
    v196 = BugCheckParameter2;
    v203[0] = &v196;
    v203[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v203, 1, 1073872896, 3925, 1538);
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
  *(_DWORD *)(BugCheckParameter2 + 60) = v164;
  v193 = 0LL;
  v194 = 0LL;
  LODWORD(v193) = *(_DWORD *)BugCheckParameter2;
  v37 = BYTE1(v201);
  BYTE1(v193) = BYTE1(v201);
  if ( v26 >= 0 )
  {
    BYTE1(v193) = BYTE1(v201) | 1;
    v26 = MEMORY[0xFFFFF78000000014] - v26;
    if ( v26 >= 0 )
    {
      *(_DWORD *)BugCheckParameter2 = v193;
      *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
LABEL_71:
      KiTimerWaitTest(v32, BugCheckParameter2, 0LL);
      goto LABEL_42;
    }
    v37 = BYTE1(v193);
  }
  v38 = 0LL;
  if ( (v37 & 0xFC) != 0 )
    v38 = (unsigned __int8)(v37 & 0xFC) << 16;
  v39 = MEMORY[0xFFFFF78000000008] - v26;
  *(_QWORD *)(BugCheckParameter2 + 24) = MEMORY[0xFFFFF78000000008] - v26;
  BYTE3(v193) |= 0x40u;
  BYTE2(v193) = (unsigned __int64)(v38 + v39) >> 18;
  *(_DWORD *)BugCheckParameter2 = v193;
  *(_DWORD *)(BugCheckParameter2 + 4) = 0;
  v40 = v189;
  if ( !KiInsertTimerTable(
          (__int64)v32,
          BugCheckParameter2,
          v189,
          (unsigned __int8)((unsigned __int64)(v38 + v39) >> 18),
          0LL) )
    goto LABEL_71;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(BugCheckParameter2, v40, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
LABEL_42:
  KiExitDispatcher((__int64)v32, 0LL, 1u, 0, v199);
  v41 = v177;
  v28 = v162;
  v27 = Object;
  if ( v177 )
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
      v152 = v44[6] - 1;
      v44[6] = v152;
      if ( !v152 )
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
      v153 = KeGetCurrentIrql();
      if ( v153 <= 0xFu && v168 <= 0xFu && v153 >= 2u )
      {
        v154 = KeGetCurrentPrcb();
        v155 = v154->SchedulerAssist;
        v156 = ~(unsigned __int16)(-1LL << (v168 + 1));
        v77 = (v156 & v155[5]) == 0;
        v155[5] &= v156;
        if ( v77 )
          KiRemoveSystemWorkPriorityKick(v154);
      }
    }
  }
  __writecr8(v168);
  if ( v163 )
  {
    if ( v42 )
    {
      if ( !v41 )
      {
        v157 = (_QWORD *)(BugCheckParameter2 + 264);
        v158 = *(_QWORD *)(BugCheckParameter2 + 264);
        v159 = *(_QWORD **)(BugCheckParameter2 + 272);
        if ( *(_QWORD *)(v158 + 8) != BugCheckParameter2 + 264 || (_QWORD *)*v159 != v157 )
          goto LABEL_322;
        *v159 = v158;
        *(_QWORD *)(v158 + 8) = v159;
        *v157 = 0LL;
      }
LABEL_112:
      v81 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v81 & 2) != 0 && (v81 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
      v175 = 0;
      v82 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
        v83 = (unsigned int)MmGetSessionIdEx((__int64)v82->ApcState.Process);
      else
        v83 = 0xFFFFFFFFLL;
      --v82->SpecialApcDisable;
      v84 = ++v82->AbAllocationRegionCount;
      v174 = 0;
      v85 = 0LL;
      v86 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
      v87 = ((char)v82->AbEntrySummary | (char)v82->AbOrphanedEntrySummary) ^ 0x3Fu;
      v77 = !_BitScanReverse((unsigned int *)&v88, v87);
      v174 = v88;
      if ( !v77 )
      {
        while ( 1 )
        {
          v87 = ~(1 << v88) & (unsigned int)v87;
          v89 = (__int64)&v82->LockEntries[v88];
          if ( (*(_BYTE *)(v89 + 26) & 1) != 0
            && (*(_DWORD *)(v89 + 32) & 1) == 0
            && (*(_QWORD *)(v89 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v86
            && *(_DWORD *)(v89 + 40) == (_DWORD)v83 )
          {
            *(_BYTE *)(v89 + 26) &= ~1u;
            if ( *(_QWORD *)(v89 + 32) )
              break;
          }
          v77 = !_BitScanReverse((unsigned int *)&v88, v87);
          v174 = v88;
          if ( v77 )
            goto LABEL_122;
        }
        v85 = v89;
      }
LABEL_122:
      if ( v85 )
      {
        *(_BYTE *)(v85 + 32) |= 2u;
        if ( *(__int64 *)(v85 + 32) < 0 )
          KiAbEntryRemoveFromTree(v85, v87, v86);
        v90 = *(_DWORD *)(v85 + 88);
        v175 = v90 & 0x1FFFF;
        *(_DWORD *)(v85 + 88) = v90 & 0xFFFE0000;
        *(_BYTE *)(v85 + 25) &= ~1u;
        *(_QWORD *)(v85 + 32) = 0LL;
        v91 = 1 << ((signed __int64)(v85 - (unsigned __int64)v82->LockEntries) / 96);
        if ( v84 == 1 )
          v82->AbEntrySummary |= v91;
        else
          _InterlockedOr8((volatile signed __int8 *)&v82->AbOrphanedEntrySummary, v91);
      }
      else if ( (*((_DWORD *)&v82->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v82, (ULONG_PTR)&ExpWakeTimerLock, v83, 0LL);
      }
      --v82->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v82, (__int64)&ExpWakeTimerLock, &v175);
      v77 = v82->SpecialApcDisable++ == -1;
      if ( v77 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v82->ApcState.ApcListHead[0].Flink != &v82->152 )
        KiCheckForKernelApcDelivery(v93, v92, v94, v95);
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
  v46 = v200;
  if ( !v200 )
    return v165;
  if ( !a2 )
  {
    *v200 = v166;
    return v165;
  }
  v160 = (__int64)v200;
  if ( (unsigned __int64)v200 >= 0x7FFFFFFF0000LL )
    v160 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v160 = *(_BYTE *)v160;
  *v46 = v166;
  return v165;
}
