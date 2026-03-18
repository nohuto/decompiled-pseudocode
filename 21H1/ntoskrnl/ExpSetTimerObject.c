/*
 * XREFs of ExpSetTimerObject @ 0x14026A470
 * Callers:
 *     NtSetTimerEx @ 0x14026A1F0 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x140375FB0 (ExpSetTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiTimerWaitTest @ 0x1402450F0 (KiTimerWaitTest.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KiInsertTimerTable @ 0x140266C80 (KiInsertTimerTable.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14026B1C0 (ObpTraceObjectDereferenceIfActive.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402E47D0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveEntryTimer @ 0x1402EDC60 (KiRemoveEntryTimer.c)
 *     PsInsertVirtualizedTimer @ 0x140304690 (PsInsertVirtualizedTimer.c)
 *     ObpDeferObjectDeletion @ 0x14030B7E0 (ObpDeferObjectDeletion.c)
 *     PoDestroyReasonContext @ 0x14033D208 (PoDestroyReasonContext.c)
 *     KeRemoveQueueApc @ 0x14033EBA0 (KeRemoveQueueApc.c)
 *     KeRemoveQueueDpcEx @ 0x140340050 (KeRemoveQueueDpcEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KeInitializeApc @ 0x140355490 (KeInitializeApc.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140510DCC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140510ED8 (KiReleaseSpinLockInstrumented.c)
 *     KiTraceSetTimer @ 0x14051E05C (KiTraceSetTimer.c)
 *     ExpCheckWakeTimerAccess @ 0x140779DF8 (ExpCheckWakeTimerAccess.c)
 *     ExpCheckTestsigningEnabled @ 0x14094AC3C (ExpCheckTestsigningEnabled.c)
 */

__int64 __fastcall ExpSetTimerObject(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
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
  unsigned __int64 v40; // rbx
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
  unsigned __int64 v54; // rdx
  signed __int64 v55; // rdx
  __int64 v56; // rcx
  struct _KTHREAD *v57; // rbx
  KSPIN_LOCK *p_StackLimit; // r14
  char *v59; // rax
  void **p_StackBase; // rbx
  char **v61; // rdx
  unsigned __int64 v62; // rdx
  _DWORD *v63; // rcx
  _DWORD *v64; // rcx
  _DWORD *v65; // rcx
  struct _KTHREAD *v66; // rbx
  __int64 v67; // rcx
  char v68; // dl
  __int64 v69; // r14
  int SessionId; // eax
  __int64 v71; // rcx
  bool v72; // zf
  signed __int8 v73; // cf
  _QWORD *v74; // rax
  _QWORD *v75; // rcx
  char v76; // r11
  struct _KTHREAD *v77; // rsi
  ULONG_PTR v78; // r9
  unsigned __int8 v79; // r12
  __int64 v80; // r15
  unsigned __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rcx
  int v85; // ecx
  unsigned __int8 v86; // r13
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  struct _KPRCB *v91; // rcx
  unsigned int v92; // ebx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v94; // eax
  int v95; // eax
  unsigned __int8 v96; // al
  struct _KPRCB *v97; // r10
  _DWORD *v98; // r9
  int v99; // eax
  struct _KTHREAD *v100; // rbx
  __int64 v101; // rcx
  unsigned __int8 v102; // al
  char v103; // dl
  __int64 v104; // r14
  int v105; // eax
  __int64 v106; // rcx
  unsigned __int8 v107; // r10
  _DWORD *v108; // r9
  __int64 v109; // rbx
  __int64 v110; // r8
  _QWORD *v111; // rdx
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  unsigned __int8 v117; // al
  struct _KPRCB *v118; // r10
  int v119; // eax
  int v120; // eax
  unsigned int v121; // eax
  struct _KPRCB *v122; // rcx
  __int64 v123; // rdx
  int v124; // eax
  __int64 v125; // rsi
  volatile signed __int64 *v126; // r12
  __int64 v127; // rcx
  int v128; // eax
  __int64 v129; // rcx
  int v130; // eax
  struct _KPRCB *v131; // rcx
  int v132; // eax
  struct _KPRCB *v133; // rcx
  _DWORD *v134; // rdx
  int v135; // eax
  int v136; // eax
  unsigned __int8 v137; // al
  struct _KPRCB *v138; // r10
  _DWORD *v139; // r9
  int v140; // eax
  _QWORD *v141; // rax
  __int64 v142; // rdx
  _QWORD *v143; // rcx
  __int64 v144; // rcx
  char v145; // [rsp+40h] [rbp-168h]
  char v146; // [rsp+41h] [rbp-167h]
  char v147; // [rsp+42h] [rbp-166h]
  int v148; // [rsp+44h] [rbp-164h]
  unsigned int v149; // [rsp+48h] [rbp-160h]
  int v150; // [rsp+4Ch] [rbp-15Ch]
  KSPIN_LOCK *Object; // [rsp+50h] [rbp-158h]
  unsigned __int8 v152; // [rsp+58h] [rbp-150h]
  __int64 v153; // [rsp+60h] [rbp-148h]
  struct _KPRCB *v154; // [rsp+60h] [rbp-148h]
  __int64 v155; // [rsp+60h] [rbp-148h]
  int v156; // [rsp+68h] [rbp-140h] BYREF
  int v157; // [rsp+6Ch] [rbp-13Ch] BYREF
  int v158; // [rsp+70h] [rbp-138h]
  int v159; // [rsp+74h] [rbp-134h] BYREF
  volatile signed __int64 *v160; // [rsp+78h] [rbp-130h]
  __int64 v161; // [rsp+80h] [rbp-128h]
  __int64 v162; // [rsp+88h] [rbp-120h]
  int v163; // [rsp+90h] [rbp-118h]
  int v164; // [rsp+94h] [rbp-114h] BYREF
  int v165; // [rsp+98h] [rbp-110h] BYREF
  __int64 *v166; // [rsp+A0h] [rbp-108h]
  int v167; // [rsp+A8h] [rbp-100h]
  int v168; // [rsp+ACh] [rbp-FCh] BYREF
  int v169; // [rsp+B0h] [rbp-F8h]
  volatile signed __int32 *v170; // [rsp+B8h] [rbp-F0h] BYREF
  int v171; // [rsp+C0h] [rbp-E8h] BYREF
  volatile signed __int64 *v172; // [rsp+C8h] [rbp-E0h] BYREF
  unsigned __int64 v173; // [rsp+D0h] [rbp-D8h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-D0h]
  int v175; // [rsp+E0h] [rbp-C8h] BYREF
  int v176; // [rsp+E4h] [rbp-C4h] BYREF
  __int128 v177; // [rsp+E8h] [rbp-C0h]
  __int64 v178; // [rsp+F8h] [rbp-B0h]
  ULONG_PTR v179; // [rsp+100h] [rbp-A8h] BYREF
  ULONG_PTR v180; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v181; // [rsp+110h] [rbp-98h]
  struct _KPRCB *v182; // [rsp+118h] [rbp-90h]
  __int64 v183; // [rsp+120h] [rbp-88h]
  _BYTE *v184; // [rsp+128h] [rbp-80h]
  __int128 v185; // [rsp+138h] [rbp-70h]
  __int64 v186; // [rsp+148h] [rbp-60h]
  _QWORD v187[2]; // [rsp+150h] [rbp-58h] BYREF
  _QWORD v188[2]; // [rsp+160h] [rbp-48h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v160 = (volatile signed __int64 *)SchedulerAssist;
  v166 = (__int64 *)a3;
  v10 = a2;
  v145 = a2;
  v184 = a10;
  v149 = 0;
  v12 = 0;
  v147 = 0;
  CurrentThread = 0LL;
  v161 = a6;
  if ( !a6 )
    goto LABEL_2;
  if ( a7 )
  {
    if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
    {
      v92 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10]);
      v149 = v92;
      if ( v92 )
      {
        ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
        return v92;
      }
    }
    v10 = v145;
  }
  if ( (int)qword_140C24040 < 2 && !byte_140C24013 )
  {
    v149 = 1073741861;
    v161 = 0LL;
    goto LABEL_2;
  }
  v12 = 1;
  v147 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v168 = 0;
  v66 = KeGetCurrentThread();
  --v66->SpecialApcDisable;
  if ( ++v66->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v66, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  v167 = 0;
  LOBYTE(v67) = v66->AbEntrySummary;
  if ( !(_BYTE)v67 )
  {
    if ( !v66->AbOrphanedEntrySummary )
    {
      v69 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v66, &ExpWakeTimerLock);
      goto LABEL_96;
    }
    AbOrphanedEntrySummary = v66->AbOrphanedEntrySummary;
    v66->AbOrphanedEntrySummary = 0;
    LOBYTE(v67) = AbOrphanedEntrySummary | v66->AbEntrySummary;
  }
  v68 = v67;
  _BitScanForward((unsigned int *)&v67, (unsigned __int8)v67);
  v167 = v67;
  v66->AbEntrySummary = v68 & ~(1 << v67);
  v69 = (__int64)&v66->LockEntries[v67];
LABEL_96:
  if ( v69 )
  {
    if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
      && byte_140C4F908[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v66->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v69 + 40) = SessionId;
    *(_QWORD *)(v69 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v66->116 + 1, 0x10u);
  }
  --v66->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v66, (__int64)&ExpWakeTimerLock, &v168);
  v72 = v66->SpecialApcDisable++ == -1;
  if ( v72 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v66->ApcState.ApcListHead[0].Flink != &v66->152 )
    KiCheckForKernelApcDelivery(v71);
  v73 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
  if ( v73 )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v69, &ExpWakeTimerLock);
  v10 = v145;
  if ( v69 )
    *(_BYTE *)(v69 + 26) |= 1u;
LABEL_2:
  v173 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = (KSPIN_LOCK *)Process;
  v14 = 0;
  v146 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v152 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *((_DWORD *)SchedulerAssist + 5);
    *((_DWORD *)SchedulerAssist + 5) = a3;
  }
  if ( v10 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    KxAcquireSpinLock(&Process[2].AffinityPadding[4]);
    v14 = 1;
    v146 = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(BugCheckParameter2 + 64, a2, a3);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v94 = v17[6];
        v17[6] = v94 + 1;
        if ( v94 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 64), 0LL) )
    {
      v63 = CurrentPrcb->SchedulerAssist;
      if ( v63 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v95 = v63[6] - 1;
          v63[6] = v95;
          if ( !v95 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(BugCheckParameter2 + 64, a2, a3);
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
        v96 = KeGetCurrentIrql();
        if ( v96 <= 0xFu && v152 <= 0xFu && v96 >= 2u )
        {
          v97 = KeGetCurrentPrcb();
          v98 = v97->SchedulerAssist;
          v99 = ~(unsigned __int16)(-1LL << (v152 + 1));
          v72 = (v99 & v98[5]) == 0;
          v98[5] &= v99;
          if ( v72 )
            KiRemoveSystemWorkPriorityKick(v97);
        }
      }
    }
    __writecr8(v152);
    v147 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v171 = 0;
    v100 = KeGetCurrentThread();
    --v100->SpecialApcDisable;
    if ( ++v100->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v100, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
    v169 = 0;
    LOBYTE(v101) = v100->AbEntrySummary;
    if ( !(_BYTE)v101 )
    {
      if ( !v100->AbOrphanedEntrySummary )
      {
        v104 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v100, &ExpWakeTimerLock);
        goto LABEL_183;
      }
      v102 = v100->AbOrphanedEntrySummary;
      v100->AbOrphanedEntrySummary = 0;
      LOBYTE(v101) = v102 | v100->AbEntrySummary;
    }
    v103 = v101;
    _BitScanForward((unsigned int *)&v101, (unsigned __int8)v101);
    v169 = v101;
    v100->AbEntrySummary = v103 & ~(1 << v101);
    v104 = (__int64)&v100->LockEntries[v101];
LABEL_183:
    if ( v104 )
    {
      if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
        && byte_140C4F908[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
      {
        v105 = MmGetSessionIdEx((__int64)v100->ApcState.Process);
      }
      else
      {
        v105 = -1;
      }
      *(_DWORD *)(v104 + 40) = v105;
      *(_QWORD *)(v104 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v100->116 + 1, 0x10u);
    }
    --v100->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v100, (__int64)&ExpWakeTimerLock, &v171);
    v72 = v100->SpecialApcDisable++ == -1;
    if ( v72 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v100->ApcState.ApcListHead[0].Flink != &v100->152 )
      KiCheckForKernelApcDelivery(v106);
    v73 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    if ( v73 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v104, &ExpWakeTimerLock);
    if ( v104 )
      *(_BYTE *)(v104 + 26) |= 1u;
    v107 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v107 <= 0xFu )
    {
      v108 = KeGetCurrentPrcb()->SchedulerAssist;
      v108[5] |= (-1 << (v107 + 1)) & 4;
    }
    v152 = v107;
    if ( v146 )
      KxAcquireSpinLock(Object + 305);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v18 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v109 = *(_QWORD *)(BugCheckParameter2 + 80);
    KxAcquireSpinLock((PKSPIN_LOCK)(v109 + 1120));
    v110 = *(_QWORD *)(BugCheckParameter2 + 224);
    v111 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v110 + 8) != BugCheckParameter2 + 224 || *v111 != BugCheckParameter2 + 224 )
      goto LABEL_322;
    *v111 = v110;
    *(_QWORD *)(v110 + 8) = v111;
    KxReleaseSpinLock((PKSPIN_LOCK)(v109 + 1120));
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
      SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (v19 + 1)) & 4;
      a3 = (unsigned int)a2 | *((_DWORD *)SchedulerAssist + 5);
      *((_DWORD *)SchedulerAssist + 5) = a3;
    }
    v179 = 0LL;
    v170 = 0LL;
    v156 = 0;
    v20 = 0;
    while ( 1 )
    {
      v175 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
      {
        do
          KeYieldProcessorEx(&v175, a2, a3, (__int64)SchedulerAssist);
        while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      {
        v21 = -129;
        goto LABEL_18;
      }
      v48 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
      v162 = KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 14656;
      v49 = (volatile signed __int32 *)(v162
                                      + 32
                                      * (v48
                                       + ((unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8)
                                       + 16));
      v50 = KeGetCurrentPrcb();
      v154 = v50;
      v176 = 0;
      v51 = v50->SchedulerAssist;
      if ( v51 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          v112 = v51[6];
          v51[6] = v112 + 1;
          if ( v112 == -1 )
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
      while ( _interlockedbittestandset64(v49, 0LL) )
      {
        v64 = v154->SchedulerAssist;
        if ( v64 )
        {
          if ( v154->NestingLevel <= 1u )
          {
            v113 = v64[6] - 1;
            v64[6] = v113;
            if ( !v113 )
              KiRemoveSystemWorkPriorityKick(v154);
          }
        }
        do
          KeYieldProcessorEx(&v176, (__int64)v50, a3, (__int64)SchedulerAssist);
        while ( *(_QWORD *)v49 );
        v65 = v154->SchedulerAssist;
        if ( v65 )
        {
          if ( v154->NestingLevel <= 1u )
          {
            v114 = v65[6];
            v65[6] = v114 + 1;
            if ( v114 == -1 )
              KiRemoveSystemWorkPriorityKick(v154);
          }
        }
      }
      v170 = v49;
      v52 = v162;
      if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v49, 0LL);
      v91 = KeGetCurrentPrcb();
      a2 = (__int64)v91->SchedulerAssist;
      if ( a2 )
      {
        if ( v91->NestingLevel <= 1u )
        {
          v115 = *(_DWORD *)(a2 + 24) - 1;
          *(_DWORD *)(a2 + 24) = v115;
          if ( !v115 )
            KiRemoveSystemWorkPriorityKick(v91);
        }
      }
      if ( _InterlockedExchange64((volatile __int64 *)(v52 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
      {
        v21 = 16777087;
        v20 = 1;
        goto LABEL_18;
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      v156 = 0;
      while ( *(char *)(BugCheckParameter2 + 3) < 0 )
        KeYieldProcessorEx(&v156, a2, a3, (__int64)SchedulerAssist);
    }
    KiRemoveEntryTimer(v162, BugCheckParameter2, (unsigned int)v48, &v170);
    _InterlockedAnd64((volatile signed __int64 *)v170, 0LL);
    v53 = KeGetCurrentPrcb();
    a2 = (__int64)v53->SchedulerAssist;
    if ( a2 )
    {
      if ( v53->NestingLevel <= 1u )
      {
        v116 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v116;
        if ( !v116 )
          KiRemoveSystemWorkPriorityKick(v53);
      }
    }
    v21 = -1073741953;
    v20 = 1;
LABEL_18:
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, v21);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v20 )
    {
      v179 = BugCheckParameter2;
      v188[0] = &v179;
      v188[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v188, 1, 1073872896, 3925, 1538);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v117 = KeGetCurrentIrql();
        if ( v117 <= 0xFu && v19 <= 0xFu && v117 >= 2u )
        {
          v118 = KeGetCurrentPrcb();
          SchedulerAssist = (volatile signed __int32 *)v118->SchedulerAssist;
          a2 = -1LL << (v19 + 1);
          v119 = ~(unsigned __int16)a2;
          v72 = (v119 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v119 & SchedulerAssist[5];
          *((_DWORD *)SchedulerAssist + 5) = a3;
          if ( v72 )
            KiRemoveSystemWorkPriorityKick(v118);
        }
      }
    }
    __writecr8(v19);
    v22 = BugCheckParameter2 + 72;
    v18 = 0;
  }
  *(_BYTE *)(BugCheckParameter2 + 248) = 0;
  v23 = v18 + 1;
  v150 = *(_DWORD *)(BugCheckParameter2 + 4);
  v24 = a8;
  v148 = a8;
  *(_DWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 244) = 0;
  *(_DWORD *)(BugCheckParameter2 + 320) = a9;
  if ( v160 )
  {
    v57 = KeGetCurrentThread();
    KeInitializeApc(v22, (_DWORD)v57, 2, (unsigned int)ExpTimerApcRoutine, 0LL, (__int64)v160, v145, a5);
    p_StackLimit = (KSPIN_LOCK *)&v57[1].StackLimit;
    KxAcquireSpinLock((PKSPIN_LOCK)&v57[1].StackLimit);
    v59 = (char *)(BugCheckParameter2 + 224);
    p_StackBase = &v57[1].StackBase;
    v61 = (char **)p_StackBase[1];
    if ( *v61 != (char *)p_StackBase )
      goto LABEL_322;
    *(_QWORD *)v59 = p_StackBase;
    *(_QWORD *)(BugCheckParameter2 + 232) = v61;
    *v61 = v59;
    p_StackBase[1] = v59;
    *(_BYTE *)(BugCheckParameter2 + 304) |= 1u;
    KxReleaseSpinLock(p_StackLimit);
    v173 = BugCheckParameter2 + 160;
    v23 = v18;
    v24 = 0;
    v148 = 0;
  }
  LOBYTE(SchedulerAssist) = 0;
  v25 = v166;
  v26 = *v166;
  v153 = *v166;
  v27 = Object;
  v28 = v146;
  if ( v146 )
  {
    a3 = BugCheckParameter2 + 280;
    if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
    {
      PsInsertVirtualizedTimer(Object, BugCheckParameter2 + 280);
      v24 = v148;
      v27 = Object;
    }
    _InterlockedIncrement((volatile signed __int32 *)v27 + 606);
    if ( (v27[79] & 0x10) != 0 )
    {
      v56 = *((unsigned int *)v27 + 17);
      if ( (_DWORD)v56 )
      {
        v163 = *((_DWORD *)v27 + 17);
        v26 = *v25;
        if ( *v25 >= 0 )
        {
          if ( (unsigned __int64)v26 <= MEMORY[0xFFFFF78000000014] )
            v26 = MEMORY[0xFFFFF78000000014];
          v26 += v56;
          if ( v26 < *v25 )
            v26 = *v25;
          LODWORD(v56) = v163;
        }
        else if ( v26 - v56 <= v26 )
        {
          v26 -= v56;
        }
        HIDWORD(v153) = HIDWORD(v26);
        a2 = (unsigned int)v56 / 0x2710;
        if ( v24 )
        {
          v120 = a2 + v24;
          if ( (unsigned int)a2 + v24 > v24 )
          {
            v24 += a2;
            v148 = v120;
            *(_DWORD *)(BugCheckParameter2 + 240) += a2;
LABEL_261:
            *(_DWORD *)(BugCheckParameter2 + 244) = a2;
            goto LABEL_23;
          }
        }
        v121 = *(_DWORD *)(BugCheckParameter2 + 240);
        if ( v121 && v121 + (unsigned int)a2 > v121 )
        {
          *(_DWORD *)(BugCheckParameter2 + 240) = v121 + a2;
          goto LABEL_261;
        }
      }
    }
  }
LABEL_23:
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 312) = v26;
    v41 = v161;
    if ( v153 < 0 )
      *(_BYTE *)(BugCheckParameter2 + 248) = (v161 != 0) + 2;
    else
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    goto LABEL_44;
  }
  v29 = v26;
  v185 = 0LL;
  v186 = 0LL;
  if ( a9 )
  {
    v54 = 10000LL * a9;
    if ( v54 > 0xFC0000 )
    {
      v55 = v54 - 16515072;
      if ( v26 >= 0 )
      {
        v26 += v55;
        if ( v26 < v29 )
          v26 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v26 -= v55;
        if ( v26 > v29 )
          v26 = 0x8000000000000000uLL;
      }
      if ( v24 )
      {
        v62 = (__int64)((unsigned __int128)(v55 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
        if ( v24 + (unsigned int)v62 + (v62 >> 63) < v24 )
          v148 = -1;
        else
          v148 = v24 + v62 + (v62 >> 63);
      }
      LODWORD(v54) = 16515072;
    }
    a2 = (unsigned int)v54 >> 18;
    if ( (unsigned int)a2 > 0x3F )
      a2 = 63LL;
    LOBYTE(a2) = 4 * a2;
    BYTE1(v185) = a2;
  }
  v30 = KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v173 ^ KiWaitAlways), KiWaitNever);
  v181 = v30;
  v31 = KeGetCurrentIrql();
  v183 = v31;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v31 <= 0xFu )
  {
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << ((unsigned __int8)v31 + 1)) & 4;
    a3 = (unsigned int)a2 | *((_DWORD *)SchedulerAssist + 5);
    *((_DWORD *)SchedulerAssist + 5) = a3;
  }
  v32 = KeGetCurrentPrcb();
  v182 = v32;
  v180 = 0LL;
  v172 = 0LL;
  v157 = 0;
  v33 = 0;
  while ( 1 )
  {
    v164 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
    {
      do
        KeYieldProcessorEx(&v164, a2, a3, (__int64)SchedulerAssist);
      while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      break;
    a3 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    LODWORD(v166) = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v155 = KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 14656;
    v160 = (volatile signed __int64 *)(v155
                                     + 32
                                     * (a3 + ((unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8)
                                           + 16));
    v122 = KeGetCurrentPrcb();
    v162 = (__int64)v122;
    v165 = 0;
    v123 = (__int64)v122->SchedulerAssist;
    if ( v123 )
    {
      if ( v122->NestingLevel <= 1u )
      {
        v124 = *(_DWORD *)(v123 + 24);
        *(_DWORD *)(v123 + 24) = v124 + 1;
        if ( v124 == -1 )
          KiRemoveSystemWorkPriorityKick(v122);
      }
    }
    v125 = v162;
    while ( 1 )
    {
      v126 = v160;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)v160, 0LL) )
        break;
      v127 = *(_QWORD *)(v125 + 33976);
      if ( v127 )
      {
        if ( *(_BYTE *)(v125 + 32) <= 1u )
        {
          v128 = *(_DWORD *)(v127 + 24) - 1;
          *(_DWORD *)(v127 + 24) = v128;
          if ( !v128 )
            KiRemoveSystemWorkPriorityKick(v125);
        }
      }
      do
        KeYieldProcessorEx(&v165, v123, a3, (__int64)SchedulerAssist);
      while ( *v126 );
      v125 = v162;
      v129 = *(_QWORD *)(v162 + 33976);
      if ( v129 )
      {
        if ( *(_BYTE *)(v162 + 32) <= 1u )
        {
          v130 = *(_DWORD *)(v129 + 24);
          *(_DWORD *)(v129 + 24) = v130 + 1;
          if ( v130 == -1 )
            KiRemoveSystemWorkPriorityKick(v125);
        }
      }
    }
    v172 = v126;
    v30 = v181;
    v32 = v182;
    if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
    {
      KiRemoveEntryTimer(v155, BugCheckParameter2, (unsigned int)v166, &v172);
      _InterlockedAnd64(v172, 0LL);
      v133 = KeGetCurrentPrcb();
      v134 = v133->SchedulerAssist;
      if ( v134 )
      {
        if ( v133->NestingLevel <= 1u )
        {
          v135 = v134[6] - 1;
          v134[6] = v135;
          if ( !v135 )
            KiRemoveSystemWorkPriorityKick(v133);
        }
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFFFF);
      goto LABEL_303;
    }
    _InterlockedAnd64(v160, 0LL);
    v131 = KeGetCurrentPrcb();
    a2 = (__int64)v131->SchedulerAssist;
    if ( a2 )
    {
      if ( v131->NestingLevel <= 1u )
      {
        v132 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v132;
        if ( !v132 )
          KiRemoveSystemWorkPriorityKick(v131);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v155 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
    {
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFFu);
LABEL_303:
      v33 = 1;
      break;
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    v157 = 0;
    while ( *(char *)(BugCheckParameter2 + 3) < 0 )
      KeYieldProcessorEx(&v157, a2, a3, (__int64)SchedulerAssist);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v33 )
  {
    v180 = BugCheckParameter2;
    v187[0] = &v180;
    v187[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v187, 1, 1073872896, 3925, 1538);
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
  *(_DWORD *)(BugCheckParameter2 + 60) = v148;
  v177 = 0LL;
  v178 = 0LL;
  LODWORD(v177) = *(_DWORD *)BugCheckParameter2;
  v37 = BYTE1(v185);
  BYTE1(v177) = BYTE1(v185);
  if ( v26 >= 0 )
  {
    BYTE1(v177) = BYTE1(v185) | 1;
    v26 = MEMORY[0xFFFFF78000000014] - v26;
    if ( v26 >= 0 )
    {
      *(_DWORD *)BugCheckParameter2 = v177;
      *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
LABEL_71:
      KiTimerWaitTest((__int64)v32, BugCheckParameter2, 0LL);
      goto LABEL_42;
    }
    v37 = BYTE1(v177);
  }
  v38 = 0LL;
  if ( (v37 & 0xFC) != 0 )
    v38 = (unsigned __int8)(v37 & 0xFC) << 16;
  v39 = MEMORY[0xFFFFF78000000008] - v26;
  *(_QWORD *)(BugCheckParameter2 + 24) = MEMORY[0xFFFFF78000000008] - v26;
  BYTE3(v177) |= 0x40u;
  BYTE2(v177) = (unsigned __int64)(v38 + v39) >> 18;
  *(_DWORD *)BugCheckParameter2 = v177;
  *(_DWORD *)(BugCheckParameter2 + 4) = 0;
  v40 = v173;
  if ( !KiInsertTimerTable(
          (__int64)v32,
          BugCheckParameter2,
          v173,
          (unsigned __int8)((unsigned __int64)(v38 + v39) >> 18),
          0LL) )
    goto LABEL_71;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(BugCheckParameter2, v40, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
LABEL_42:
  KiExitDispatcher((__int64)v32, 0LL, 1LL, 0LL, v183);
  v41 = v161;
  v28 = v146;
  v27 = Object;
  if ( v161 )
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
      v136 = v44[6] - 1;
      v44[6] = v136;
      if ( !v136 )
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
      v137 = KeGetCurrentIrql();
      if ( v137 <= 0xFu && v152 <= 0xFu && v137 >= 2u )
      {
        v138 = KeGetCurrentPrcb();
        v139 = v138->SchedulerAssist;
        v140 = ~(unsigned __int16)(-1LL << (v152 + 1));
        v72 = (v140 & v139[5]) == 0;
        v139[5] &= v140;
        if ( v72 )
          KiRemoveSystemWorkPriorityKick(v138);
      }
    }
  }
  __writecr8(v152);
  if ( v147 )
  {
    if ( v42 )
    {
      if ( !v41 )
      {
        v141 = (_QWORD *)(BugCheckParameter2 + 264);
        v142 = *(_QWORD *)(BugCheckParameter2 + 264);
        v143 = *(_QWORD **)(BugCheckParameter2 + 272);
        if ( *(_QWORD *)(v142 + 8) != BugCheckParameter2 + 264 || (_QWORD *)*v143 != v141 )
          goto LABEL_322;
        *v143 = v142;
        *(_QWORD *)(v142 + 8) = v143;
        *v141 = 0LL;
      }
LABEL_112:
      v76 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v76 & 2) != 0 && (v76 & 4) == 0 )
        ExfTryToWakePushLock(&ExpWakeTimerLock);
      v159 = 0;
      v77 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
        v78 = (unsigned int)MmGetSessionIdEx((__int64)v77->ApcState.Process);
      else
        v78 = 0xFFFFFFFFLL;
      --v77->SpecialApcDisable;
      v79 = ++v77->AbAllocationRegionCount;
      v158 = 0;
      v80 = 0LL;
      v81 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
      v82 = ((char)v77->AbEntrySummary | (char)v77->AbOrphanedEntrySummary) ^ 0x3Fu;
      v72 = !_BitScanReverse((unsigned int *)&v83, v82);
      v158 = v83;
      if ( !v72 )
      {
        while ( 1 )
        {
          v82 = ~(1 << v83) & (unsigned int)v82;
          v84 = (__int64)&v77->LockEntries[v83];
          if ( (*(_BYTE *)(v84 + 26) & 1) != 0
            && (*(_DWORD *)(v84 + 32) & 1) == 0
            && (*(_QWORD *)(v84 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v81
            && *(_DWORD *)(v84 + 40) == (_DWORD)v78 )
          {
            *(_BYTE *)(v84 + 26) &= ~1u;
            if ( *(_QWORD *)(v84 + 32) )
              break;
          }
          v72 = !_BitScanReverse((unsigned int *)&v83, v82);
          v158 = v83;
          if ( v72 )
            goto LABEL_122;
        }
        v80 = v84;
      }
LABEL_122:
      if ( v80 )
      {
        *(_BYTE *)(v80 + 32) |= 2u;
        if ( *(__int64 *)(v80 + 32) < 0 )
          KiAbEntryRemoveFromTree(v80, v82, v81);
        v85 = *(_DWORD *)(v80 + 88);
        v159 = v85 & 0x1FFFF;
        *(_DWORD *)(v80 + 88) = v85 & 0xFFFE0000;
        *(_BYTE *)(v80 + 25) &= ~1u;
        *(_QWORD *)(v80 + 32) = 0LL;
        v86 = 1 << ((signed __int64)(v80 - (unsigned __int64)v77->LockEntries) / 96);
        if ( v79 == 1 )
          v77->AbEntrySummary |= v86;
        else
          _InterlockedOr8((volatile signed __int8 *)&v77->AbOrphanedEntrySummary, v86);
      }
      else if ( (*((_DWORD *)&v77->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v77, (ULONG_PTR)&ExpWakeTimerLock, v78, 0LL);
      }
      --v77->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v77, (__int64)&ExpWakeTimerLock, &v159);
      v72 = v77->SpecialApcDisable++ == -1;
      if ( v72 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v77->ApcState.ApcListHead[0].Flink != &v77->152 )
        KiCheckForKernelApcDelivery(v88);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v87, v89, v90);
      if ( v42 )
        PoDestroyReasonContext(v42);
      goto LABEL_51;
    }
    if ( !v41 )
      goto LABEL_112;
    v74 = (_QWORD *)(BugCheckParameter2 + 264);
    v75 = (_QWORD *)qword_140C168C8;
    if ( *(__int64 **)qword_140C168C8 == &ExpWakeTimerList )
    {
      *v74 = &ExpWakeTimerList;
      *(_QWORD *)(BugCheckParameter2 + 272) = v75;
      *v75 = v74;
      qword_140C168C8 = BugCheckParameter2 + 264;
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
  v46 = v184;
  if ( !v184 )
    return v149;
  if ( !v145 )
  {
    *v184 = v150;
    return v149;
  }
  v144 = (__int64)v184;
  if ( (unsigned __int64)v184 >= 0x7FFFFFFF0000LL )
    v144 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v144 = *(_BYTE *)v144;
  *v46 = v150;
  return v149;
}
