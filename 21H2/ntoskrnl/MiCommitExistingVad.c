/*
 * XREFs of MiCommitExistingVad @ 0x14032C1B0
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x140709A08 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 *     MiLoadDataIntoVsmEnclave @ 0x14097A358 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14097A714 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MiIsPteDecommittedPage @ 0x14023AF98 (MiIsPteDecommittedPage.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MiComputePageCommitment @ 0x14028EDD0 (MiComputePageCommitment.c)
 *     MiIncreaseUsedPtesCount @ 0x14028FB74 (MiIncreaseUsedPtesCount.c)
 *     MmIsAddressValidEx @ 0x14028FBF0 (MmIsAddressValidEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiLocateLockedVadEvent @ 0x1402EE0E0 (MiLocateLockedVadEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x140319160 (MiGetPageProtection.c)
 *     MiVadPureReserve @ 0x140319990 (MiVadPureReserve.c)
 *     MiMakeProtectionMask @ 0x14032BCC0 (MiMakeProtectionMask.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiSanitizePfnProtection @ 0x14032E680 (MiSanitizePfnProtection.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140461B20 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiComputePreferredNode @ 0x14057F4C8 (MiComputePreferredNode.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1405B06E0 (MiLockWorkingSetForLargeMapping.c)
 *     MiGetVadLargePageMinimumIndex @ 0x1405B2004 (MiGetVadLargePageMinimumIndex.c)
 *     MiCreateLargePfnList @ 0x1405C14D4 (MiCreateLargePfnList.c)
 *     MiInitializeLargeUserBasePfn @ 0x1405C27C8 (MiInitializeLargeUserBasePfn.c)
 *     MiInsertLargeUserMapping @ 0x1405C2898 (MiInsertLargeUserMapping.c)
 *     MiPopLargePfnList @ 0x1405C3044 (MiPopLargePfnList.c)
 *     MiReturnFullProcessCommitment @ 0x1406FEC50 (MiReturnFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1407BDB60 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x1407BE280 (MiChargeFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x14097F200 (MiChargeProcessPhysicalPages.c)
 *     MiReturnProcessPhysicalPages @ 0x14097F588 (MiReturnProcessPhysicalPages.c)
 */

__int64 __fastcall MiCommitExistingVad(
        ULONG_PTR a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        char a8,
        _WORD **a9,
        _DWORD *a10,
        _WORD *a11)
{
  int v14; // r10d
  unsigned int ProtectionMask; // eax
  unsigned int v16; // r9d
  int v17; // eax
  unsigned __int64 v18; // r10
  char v19; // r11
  char v20; // r9
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r13
  _KPROCESS *v29; // rbx
  int v30; // edx
  __int64 v31; // r8
  _DWORD *SchedulerAssist; // r9
  struct _KTHREAD *v33; // r12
  ULONG_PTR v34; // rbx
  __int64 v35; // r13
  __int64 v36; // rbx
  unsigned __int16 v37; // r12
  unsigned __int64 v38; // r15
  __int64 v39; // r14
  int v40; // ecx
  unsigned __int8 v41; // al
  volatile __int32 *v42; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v45; // rcx
  signed __int32 v46; // ett
  unsigned __int64 v47; // rdx
  __int64 v48; // r14
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r8
  __int64 v51; // rax
  unsigned __int64 v52; // rsi
  struct _KTHREAD *v53; // rdi
  __int64 v54; // r8
  char *v55; // rbx
  unsigned int j; // r9d
  int v57; // r8d
  struct _KTHREAD *v58; // rcx
  bool v59; // zf
  unsigned int v60; // ecx
  __int64 v61; // rdx
  unsigned __int64 v62; // rdx
  __int64 result; // rax
  int PageProtection; // eax
  unsigned __int64 v65; // rbx
  _DWORD *v66; // rcx
  char v67; // al
  __int64 *v68; // rdx
  unsigned __int8 v69; // di
  __int64 v70; // rbx
  __int64 v71; // r9
  __int64 v72; // r10
  __int64 v73; // rcx
  unsigned int v74; // r10d
  __int64 v75; // rax
  __int64 v76; // r11
  __int64 v77; // rcx
  unsigned __int64 LockedVadEvent; // rax
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // r9
  int VadLargePageMinimumIndex; // eax
  __int64 v86; // rdx
  int LargePfnList; // ebx
  __int64 v88; // r8
  struct _KTHREAD *v89; // rsi
  __int64 SessionId; // r8
  char *p_Process; // rdi
  unsigned int i; // ecx
  int v93; // r8d
  unsigned int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // rax
  int v97; // eax
  int v98; // eax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rbx
  int v103; // [rsp+50h] [rbp-B0h]
  __int64 v104; // [rsp+58h] [rbp-A8h]
  _KPROCESS *Process; // [rsp+60h] [rbp-A0h]
  _WORD **v106; // [rsp+68h] [rbp-98h]
  __int64 v107; // [rsp+68h] [rbp-98h]
  unsigned int v108; // [rsp+70h] [rbp-90h]
  int v109; // [rsp+74h] [rbp-8Ch]
  __int64 v111; // [rsp+80h] [rbp-80h]
  __int64 v112; // [rsp+88h] [rbp-78h]
  __int64 v113; // [rsp+90h] [rbp-70h]
  unsigned __int64 v114; // [rsp+90h] [rbp-70h]
  __int64 v115; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v116; // [rsp+A0h] [rbp-60h]
  int v117; // [rsp+A8h] [rbp-58h] BYREF
  int v118; // [rsp+ACh] [rbp-54h]
  int v119; // [rsp+B0h] [rbp-50h]
  int v120; // [rsp+B4h] [rbp-4Ch]
  unsigned __int64 v121; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v122; // [rsp+C0h] [rbp-40h]
  int v123; // [rsp+C8h] [rbp-38h]
  int v124; // [rsp+CCh] [rbp-34h] BYREF
  __int64 v125; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v126; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v127; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v128; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD *v129; // [rsp+F0h] [rbp-10h]
  __int64 v130; // [rsp+F8h] [rbp-8h]
  __int64 v131; // [rsp+100h] [rbp+0h]
  unsigned __int64 v132; // [rsp+108h] [rbp+8h]
  __int64 *v133; // [rsp+110h] [rbp+10h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp+18h]
  __int64 v135; // [rsp+120h] [rbp+20h]
  __int64 v136; // [rsp+128h] [rbp+28h] BYREF
  __int64 v137; // [rsp+130h] [rbp+30h]
  _QWORD v138[3]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v139[3]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v140[3]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v141[3]; // [rsp+188h] [rbp+88h] BYREF

  v14 = *(_DWORD *)(a1 + 48);
  v129 = a10;
  v118 = v14 & 0x2200000;
  v133 = 0LL;
  v117 = 0;
  ProtectionMask = MiMakeProtectionMask(a4);
  v17 = MiSanitizePfnProtection(a1, v16, ProtectionMask);
  v20 = v17;
  v123 = v17;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( *(int *)(a1 + 52) < 0 )
    v21 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
  else
    v21 = 0LL;
  v127 = v21;
  v22 = 32LL * (v17 & 0x1F);
  v137 = 32LL * (v20 & 0x1F);
  if ( qword_140C50780 )
  {
    if ( (v22 & qword_140C50780) != 0 )
      v22 |= 0x10uLL;
    else
      v22 |= qword_140C50780;
  }
  v23 = v22 | 0x4000000;
  if ( (v18 & 0xA200000) != 0x8200000 )
    v23 = v22;
  v135 = v23;
  v130 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = (a2 + a3 - 1) | 0xFFF;
  v25 = v130;
  v26 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = 0LL;
  v132 = v26;
  v138[2] = 0LL;
  v139[2] = 0LL;
  v131 = ((__int64)(v26 - v130) >> 3) + 1;
  v140[2] = 0LL;
  v104 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v138[1] = v138;
  v138[0] = v138;
  v139[1] = v139;
  v139[0] = v139;
  v140[1] = v140;
  v140[0] = v140;
  v141[1] = v141;
  v141[0] = v141;
  v141[2] = 0LL;
  v106 = 0LL;
  v125 = 0LL;
  if ( (v18 & 0xA00000) == 0xA00000 )
  {
    v72 = (v18 >> 19) & 3;
    v73 = MiVadPageSizes[v72];
    v74 = MiVadPageIndices[v72];
    v75 = 16LL;
    v113 = v73;
    v108 = v74;
    if ( v73 != 16 )
      v75 = 1LL;
    v76 = v19 & 0x1A;
    v126 = v75;
    if ( v74 > 1 )
    {
      if ( v76 != 2 )
        return 3221225485LL;
    }
    else
    {
      if ( v74 == 1 )
      {
        if ( v76 != 8 )
          return 3221225485LL;
      }
      else if ( v76 != 16 )
      {
        return 3221225485LL;
      }
      v77 = 2 - v74;
      do
      {
        v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v26 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v77;
      }
      while ( v77 );
      v127 = v21;
      v132 = v26;
    }
    if ( a9 == (_WORD **)1 )
    {
      LockedVadEvent = MiLocateLockedVadEvent(a1, 16);
      if ( !LockedVadEvent )
      {
        v106 = 0LL;
LABEL_129:
        v79 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
        v27 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * Process[1].IdealProcessor[25]) + 176LL);
LABEL_130:
        v125 = v27;
        goto LABEL_106;
      }
      v106 = *(_WORD ***)(LockedVadEvent + 24);
      v27 = (__int64)v106;
      if ( !v106 )
        goto LABEL_129;
    }
    else
    {
      if ( !a9 )
        goto LABEL_129;
      v106 = a9;
      v27 = (__int64)a9;
    }
    v79 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
    goto LABEL_130;
  }
  if ( (v19 & 0x1A) != 0 )
    return 3221225485LL;
  v108 = 3;
  v113 = 1LL;
  v126 = 1LL;
  if ( (int)MiChargeFullProcessCommitment(Process, ((__int64)(v26 - v130) >> 3) + 1) >= 0 )
  {
    v120 = 1;
    v28 = v131;
    v112 = v131;
LABEL_12:
    v29 = Process;
    goto LABEL_13;
  }
  v79 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
LABEL_106:
  v120 = 0;
  v67 = MiLockWorkingSetShared(v79);
  v68 = &v125;
  v69 = v67;
  if ( !v27 )
    v68 = 0LL;
  v70 = MiComputePageCommitment(a2 & 0xFFFFFFFFFFFFF000uLL, v24, a1, v67, 0, 0LL, v68);
  MiUnlockWorkingSetShared(v104, v69);
  v71 = v131 - v70;
  v112 = v131 - v70;
  if ( !v125 && v113 != 1 )
    return 3221225496LL;
  v29 = Process;
  if ( v71 )
  {
    if ( v113 != 1 )
    {
      if ( !(unsigned int)MiChargeProcessPhysicalPages(Process, v71) )
        return 3221225773LL;
      if ( v106 )
      {
        if ( v106 != a9 && !(unsigned __int8)PsReferencePartitionSafe(v106, v80, v82) )
        {
          MiReturnProcessPhysicalPages(Process, v84);
          return 3221226656LL;
        }
        *a11 = **v106;
      }
      else if ( (int)MiChargeFullProcessCommitment(v81, v83) < 0 )
      {
        return MiReturnProcessPhysicalPages(Process, v112);
      }
      VadLargePageMinimumIndex = MiGetVadLargePageMinimumIndex(a1);
      v28 = v112;
      LargePfnList = MiCreateLargePfnList(
                       a1,
                       a2,
                       v112,
                       MiLargePageSizes[VadLargePageMinimumIndex],
                       a7,
                       a8,
                       (__int64)v106,
                       0,
                       (__int64)v138);
      if ( v106 && v106 != a9 )
        PsDereferencePartition(v106, v86, v88);
      if ( LargePfnList < 0 )
      {
        if ( !v106 )
          MiReturnFullProcessCommitment(Process, v112);
        MiReturnProcessPhysicalPages(Process, v112);
        return (unsigned int)LargePfnList;
      }
      goto LABEL_12;
    }
    result = MiChargeFullProcessCommitment(Process, v71);
    if ( (int)result < 0 )
      return result;
    v28 = v112;
  }
  else
  {
    v28 = 0LL;
  }
LABEL_13:
  v119 = 0;
  if ( !(unsigned int)MiVadPureReserve(a1) )
    goto LABEL_16;
  v33 = CurrentThread;
  v119 = v30;
  --CurrentThread->SpecialApcDisable;
  v34 = (ULONG_PTR)&v29[1].Affinity.StaticBitmap[8];
  ExAcquirePushLockExclusiveEx(v34, 0LL);
  if ( (int)MiCommitPageTablesForVad(a1, a2) < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v34, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v34);
    v89 = KeGetCurrentThread();
    if ( v34 - qword_140C50630 >= 0x8000000000LL )
      SessionId = 0xFFFFFFFFLL;
    else
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v89->ApcState.Process);
    _disable();
    p_Process = (char *)&v89[1].Process;
    for ( i = 0; i < 6; ++i )
    {
      if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == (v34 & 0x7FFFFFFFFFFFFFFCLL)
        && p_Process[18]
        && (*(_DWORD *)p_Process & 1) == 0
        && *((_DWORD *)p_Process + 2) == (_DWORD)SessionId )
      {
        p_Process[18] = 0;
        if ( *(__int64 *)p_Process < 0 )
        {
          *p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process, 0x7FFFFFFFFFFFFFFCLL, SessionId);
          _disable();
        }
        v93 = *((_DWORD *)p_Process + 22);
        *((_DWORD *)p_Process + 22) = 0;
        p_Process[17] = 0;
        *(_QWORD *)p_Process = 0LL;
        v89->AbEntrySummary |= 1 << p_Process[16];
        _enable();
        if ( v93 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v89, v34, v93);
        goto LABEL_172;
      }
      p_Process += 96;
    }
    if ( (*((_DWORD *)&v89->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v89, v34, (unsigned int)SessionId, 0LL);
    _enable();
LABEL_172:
    v59 = v33->SpecialApcDisable++ == -1;
    if ( v59 && ($CEA84C04E3712D858E5667A507841A2A *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
      KiCheckForKernelApcDelivery();
    if ( v28 )
      MiReturnFullProcessCommitment(Process, v28);
    return 3221225773LL;
  }
  v31 = 0LL;
LABEL_16:
  v35 = v113;
  v36 = v31;
  v122 = v31;
  v37 = v31;
  v107 = v31;
  v38 = v31;
  v121 = v31;
  v39 = v31;
  v111 = v31;
LABEL_17:
  v40 = v31;
  v103 = v31;
  v114 = v31;
  v109 = v31;
  if ( !v108 )
  {
    v94 = MiComputePreferredNode(a1);
    v109 = 1;
    v96 = MiLockWorkingSetForLargeMapping(v104, v95, v94);
    v40 = v103;
    v31 = 0LL;
    v116 = v96;
    if ( (_BYTE)v96 != 17 )
      goto LABEL_31;
  }
  v41 = Process[1].IdealProcessor[30] & 7;
  if ( v41 <= 4u )
  {
    if ( v41 == 2 )
      v42 = (volatile __int32 *)&unk_140C53D00;
    else
LABEL_20:
      v42 = (volatile __int32 *)&Process[1].IdealNode[2];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      v31 = 0LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v42, CurrentIrql);
      v31 = 0LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v45 = CurrentPrcb->SchedulerAssist;
      if ( v45 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v97 = v45[6];
          v45[6] = v97 + 1;
          if ( v97 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v31 = 0LL;
          }
        }
      }
      _m_prefetchw((const void *)v42);
      v46 = *v42 & 0x7FFFFFFF;
      if ( v46 != _InterlockedCompareExchange(v42, v46 + 1, v46) )
      {
        v66 = CurrentPrcb->SchedulerAssist;
        if ( v66 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v98 = v66[6] - 1;
            v66[6] = v98;
            if ( !v98 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v42, CurrentIrql);
        v31 = 0LL;
      }
      v39 = v111;
    }
    if ( *((_DWORD *)v42 + 1) )
      _InterlockedExchange(v42 + 1, v31);
    v47 = CurrentIrql;
    v38 = v121;
    v116 = v47;
    goto LABEL_29;
  }
  if ( v41 == 5 )
    goto LABEL_20;
  v47 = KeGetCurrentIrql();
  v116 = v47;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v47 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v47 = (-1LL << ((unsigned __int8)v47 + 1)) & 4;
    SchedulerAssist[5] |= v47;
    v31 = 0LL;
    goto LABEL_30;
  }
LABEL_31:
  while ( v25 <= v132 )
  {
    if ( !v40 || (v25 & 0xFFF) == 0 )
    {
      if ( v37 )
      {
        MiIncreaseUsedPtesCount(v36, v37);
        v31 = 0LL;
        v37 = 0;
      }
      if ( v118 == 35651584 )
      {
        if ( v39 )
          v38 = v31;
        v121 = v38;
      }
      if ( v114 )
        MiUnlockPageTableInternal(v104, v114);
      v114 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v25, 0, (*(_DWORD *)(a1 + 48) >> 12) & 0x7F, (unsigned __int8)v116, v109);
      v47 = 0xFFFFF6FB7DBED000uLL;
      if ( v25 < 0xFFFFF6FB7DBED000uLL || v25 > 0xFFFFF6FB7DBEDFFFuLL )
      {
        v50 = ((((__int64)(v25 << 25) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
        v51 = *(_QWORD *)v50;
        if ( v50 >= 0xFFFFF6FB7DBED000uLL
          && v50 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v51 & 1) != 0
          && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v100 = *((_QWORD *)&Flink->Flink + ((v50 >> 3) & 0x1FF));
            if ( (v100 & 0x20) != 0 )
              v51 |= 0x20uLL;
            if ( (v100 & 0x42) != 0 )
              v51 |= 0x42uLL;
          }
        }
        v136 = v51;
        v122 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v136) >> 12) & 0xFFFFFFFFFFLL)
             - 0x220000000000LL;
      }
      v103 = 1;
    }
    v48 = v126;
    if ( v38 )
    {
      v111 += v126;
    }
    else
    {
      v38 = v25;
      v121 = v25;
      v111 = v126;
    }
    v49 = *(_QWORD *)v25;
    if ( v25 >= 0xFFFFF6FB7DBED000uLL
      && v25 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v49 & 1) != 0
      && ((v49 & 0x20) == 0 || (v49 & 0x42) == 0) )
    {
      v47 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v47 )
      {
        v101 = *(_QWORD *)(v47 + 8 * ((v25 >> 3) & 0x1FF));
        if ( (v101 & 0x20) != 0 )
          v49 |= 0x20uLL;
        if ( (v101 & 0x42) != 0 )
          v49 |= 0x42uLL;
      }
    }
    v128 = v49;
    if ( v49 )
    {
      if ( MiIsPteDecommittedPage((__int64)&v128) )
      {
        if ( v35 != 1 )
          goto LABEL_226;
        v65 = v137 | v49 & 0xFFFFFFFFFFFFFC1FuLL;
        v128 = v65;
        if ( (*(_DWORD *)(a1 + 48) & 0xA200000) == 0x8200000 )
        {
          v65 |= 0x4000000uLL;
          v128 = v65;
        }
        *(_QWORD *)v25 = v65;
      }
      else
      {
        v107 += v35;
        if ( !*v129 )
        {
          LOWORD(v115) = 0;
          PageProtection = MiGetPageProtection(a1, v25, &v133, &v117, &v115);
          if ( v133 )
          {
            if ( v37 )
            {
              MiIncreaseUsedPtesCount(v122, v37);
              v37 = 0;
            }
            v39 = v111;
            if ( v118 == 35651584 )
            {
              if ( v111 )
                v38 = 0LL;
              v121 = v38;
            }
            if ( v109 == 1 )
            {
              MiUnlockWorkingSetExclusive(v104, v116);
            }
            else
            {
              MiUnlockPageTableInternal(v104, v114);
              MiUnlockWorkingSetShared(v104, v116);
            }
            v31 = 0LL;
            v36 = v122;
            goto LABEL_17;
          }
          if ( v123 != PageProtection || v117 != a5 )
            *v129 = 1;
        }
      }
    }
    else
    {
      if ( v25 <= v127 )
        v107 += v35;
      if ( v35 != 1 )
      {
LABEL_226:
        v102 = MiPopLargePfnList(v138, v108, v31);
        MiInitializeLargeUserBasePfn(48 * v102 - 0x220000000000LL, v130, Process);
        MiInsertLargeUserMapping(a1, v130, v102, v108, v123);
        v38 = v121;
        goto LABEL_44;
      }
      if ( v25 < 0xFFFFF6FB7DBED000uLL || v25 > 0xFFFFF6FB7DBEDFFFuLL )
        v37 += v126;
      *(_QWORD *)v25 = v135;
    }
LABEL_44:
    v25 += 8 * v48;
    v39 = v111;
    v31 = 0LL;
    v130 += 8 * v35;
LABEL_29:
    v36 = v122;
LABEL_30:
    v40 = v103;
  }
  if ( v37 )
  {
    v124 = v31;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v124, v47, v31, (__int64)SchedulerAssist);
      while ( *(__int64 *)(v36 + 24) < 0 );
    }
    *(_QWORD *)(v36 + 16) ^= ((unsigned int)*(_QWORD *)(v36 + 16) ^ ((unsigned int)*(_QWORD *)(v36 + 16) + (v37 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v37 <= 1u )
      MmIsAddressValidEx(*(_QWORD *)(v36 + 8) | 0x8000000000000000uLL);
  }
  if ( v109 == 1 )
  {
    MiUnlockWorkingSetExclusive(v104, v116);
  }
  else
  {
    if ( v114 )
      MiUnlockPageTableInternal(v104, v114);
    MiUnlockWorkingSetShared(v104, v116);
  }
  if ( v119 )
  {
    v52 = (unsigned __int64)&Process[1].Affinity.StaticBitmap[8];
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[8],
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&Process[1].Affinity.StaticBitmap[8]);
    v53 = KeGetCurrentThread();
    if ( v52 - qword_140C50630 < 0x8000000000LL )
      v54 = (unsigned int)MmGetSessionIdEx((__int64)v53->ApcState.Process);
    else
      v54 = 0xFFFFFFFFLL;
    _disable();
    v55 = (char *)&v53[1].Process;
    for ( j = 0; j < 6; ++j )
    {
      if ( (*(_QWORD *)v55 & 0x7FFFFFFFFFFFFFFCLL) == (v52 & 0x7FFFFFFFFFFFFFFCLL)
        && v55[18]
        && (*(_DWORD *)v55 & 1) == 0
        && *((_DWORD *)v55 + 2) == (_DWORD)v54 )
      {
        v55[18] = 0;
        if ( *(__int64 *)v55 < 0 )
        {
          *v55 |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(v55, 0x7FFFFFFFFFFFFFFCLL, v54);
          _disable();
        }
        v57 = *((_DWORD *)v55 + 22);
        *((_DWORD *)v55 + 22) = 0;
        v55[17] = 0;
        *(_QWORD *)v55 = 0LL;
        v53->AbEntrySummary |= 1 << v55[16];
        _enable();
        if ( v57 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v53, (__int64)&Process[1].Affinity.StaticBitmap[8], v57);
        goto LABEL_76;
      }
      v55 += 96;
    }
    if ( (*((_DWORD *)&v53->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v53, (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8], (unsigned int)v54, 0LL);
    _enable();
LABEL_76:
    v58 = CurrentThread;
    v59 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v59 && ($CEA84C04E3712D858E5667A507841A2A *)v58->ApcState.ApcListHead[0].Flink != &v58->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v120 )
  {
    if ( v107 )
      MiReturnFullProcessCommitment(Process, v107);
    v112 = v131 - v107;
  }
  v60 = *(_DWORD *)(a1 + 52);
  v61 = v60;
  LODWORD(v61) = v60 & 0x7FFFFFFF;
  v62 = v112 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v61);
  *(_BYTE *)(a1 + 34) = v62 >> 31;
  *(_DWORD *)(a1 + 52) = v60 ^ (v62 ^ v60) & 0x7FFFFFFF;
  return 0LL;
}
