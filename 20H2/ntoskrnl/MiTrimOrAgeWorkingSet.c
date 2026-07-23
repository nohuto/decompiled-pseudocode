/*
 * XREFs of MiTrimOrAgeWorkingSet @ 0x140269570
 * Callers:
 *     MiProcessWorkingSets @ 0x140268EC0 (MiProcessWorkingSets.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x140221660 (KiSetVpThreadSpinLockCount.c)
 *     MiEmptyPageAccessLog @ 0x1402331B0 (MiEmptyPageAccessLog.c)
 *     MiQueuePageAccessLog @ 0x14023356C (MiQueuePageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x1402440A8 (MmFreeAccessPfnBuffer.c)
 *     PfLogForegroundProcess @ 0x140244800 (PfLogForegroundProcess.c)
 *     KiAttachProcess @ 0x140268660 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x140268920 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x140268CF0 (KiSetAddressPolicy.c)
 *     MiAgeWorkingSet @ 0x140269E60 (MiAgeWorkingSet.c)
 *     MiCheckProcessShadow @ 0x140270BA0 (MiCheckProcessShadow.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiAttachSession @ 0x1402E9E38 (MiAttachSession.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FFF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiDetachProcessFromSession @ 0x140316258 (MiDetachProcessFromSession.c)
 *     MiEmptyWorkingSetInitiate @ 0x14031AA80 (MiEmptyWorkingSetInitiate.c)
 *     MiPreUnlockWorkingSetShared @ 0x14031ACE0 (MiPreUnlockWorkingSetShared.c)
 *     MiTrimWorkingSet @ 0x14031AEF4 (MiTrimWorkingSet.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403A007C (MiCaptureAndResetWorkingSetAccessBits.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404F91C0 (HvlSwitchVirtualAddressSpace.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiComputeTrimAmount @ 0x1405394E0 (MiComputeTrimAmount.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B4254 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B43A4 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTrimOrAgeWorkingSet(__int64 a1, __int64 a2, struct _KTHREAD *CurrentThread)
{
  unsigned int v3; // r14d
  __int64 v5; // r9
  char v6; // al
  __int64 v7; // r13
  char v8; // al
  _KPROCESS *v9; // rbp
  ULONG_PTR ApcStateIndex; // rax
  struct _KTHREAD *v11; // rdi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v14; // rcx
  $2D5B062263E2BEE97A34A67201DBDB9B *v15; // rsi
  struct _KTHREAD *Flink; // rcx
  struct _LIST_ENTRY *v17; // rax
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  struct _KPRCB *v20; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 GroupIndex; // r13
  __int64 v23; // r12
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // r10
  volatile signed __int32 *v27; // rsi
  unsigned __int8 v28; // al
  LONG *v29; // rdi
  unsigned __int8 v30; // r12
  struct _KPRCB *v31; // rbp
  _DWORD *v32; // rcx
  signed __int32 v33; // ett
  unsigned int v34; // r13d
  int v35; // ebp
  unsigned int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // r12
  char v39; // cl
  unsigned __int8 v40; // r13
  char v41; // cl
  LONG *v42; // rax
  LONG *v43; // rbp
  volatile __int64 *v44; // rcx
  struct _KPRCB *v45; // rdx
  _DWORD *v46; // r8
  PVOID *v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  __int64 v50; // rax
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  int v53; // ecx
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  char v56; // al
  _SLIST_ENTRY *v57; // r15
  __int64 v59; // r8
  unsigned int v60; // eax
  unsigned int v61; // eax
  _SLIST_ENTRY *v62; // rcx
  unsigned __int8 v63; // al
  _DWORD *v64; // rcx
  _DWORD *v65; // rcx
  _DWORD *SchedulerAssist; // r9
  int v67; // eax
  int v68; // eax
  int v69; // eax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v71; // rcx
  int v72; // eax
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rax
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r11
  _DWORD *v77; // r9
  int v78; // eax
  bool v79; // zf
  _DWORD *v80; // r9
  _DWORD *v81; // r9
  int v82; // eax
  __int64 v83; // rax
  __int64 v84; // rax
  int v85; // eax
  int v86; // eax
  struct _KPRCB *v87; // r9
  _DWORD *v88; // r8
  int v89; // eax
  int v90; // eax
  unsigned __int8 v91; // al
  _DWORD *v92; // r8
  int v93; // eax
  unsigned __int8 v95; // [rsp+38h] [rbp-B0h]
  unsigned __int8 v96; // [rsp+38h] [rbp-B0h]
  _KPROCESS *v97; // [rsp+40h] [rbp-A8h]
  volatile __int64 *v98; // [rsp+40h] [rbp-A8h]
  __int128 v99; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v100; // [rsp+58h] [rbp-90h]
  int v101; // [rsp+60h] [rbp-88h] BYREF
  __int64 v102; // [rsp+68h] [rbp-80h]
  _OWORD v103[2]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v104; // [rsp+90h] [rbp-58h]
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v3 = (unsigned int)CurrentThread;
  if ( *(_BYTE *)(a1 + 186) == 2 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
    PfLogForegroundProcess(a1);
  v5 = 2LL;
  v6 = *(_BYTE *)(a1 + 184);
  v7 = *(_QWORD *)(*(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 6848LL);
  v102 = v7;
  v8 = v6 & 7;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      MiAttachSession(a1 - 256, 1LL, CurrentThread, 2LL);
LABEL_26:
      v5 = 2LL;
    }
  }
  else
  {
    v9 = (_KPROCESS *)(a1 - 1664);
    if ( KeGetCurrentThread()->Process == (_KPROCESS *)(a1 - 1664) )
      goto LABEL_27;
    memset(v103, 0, sizeof(v103));
    v104 = 0LL;
    CurrentThread = KeGetCurrentThread();
    ApcStateIndex = CurrentThread->ApcStateIndex;
    if ( (_BYTE)ApcStateIndex )
      KeBugCheckEx(5u, a1 - 1664, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
    v11 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 || (*(_DWORD *)&v9->0 & 0x400) != 0 )
      KeBugCheckEx(
        5u,
        a1 - 1664,
        (ULONG_PTR)v11->ApcState.Process,
        v11->ApcStateIndex,
        KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
    if ( v11->ApcState.Process != v9 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v95 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v101 = 0;
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v67 = v14[6];
          v14[6] = v67 + 1;
          if ( v67 == -1 )
LABEL_136:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v11->ThreadLock, 0LL) )
      {
        v64 = CurrentPrcb->SchedulerAssist;
        if ( v64 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v68 = v64[6] - 1;
            v64[6] = v68;
            if ( !v68 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v101);
        while ( v11->ThreadLock );
        v65 = CurrentPrcb->SchedulerAssist;
        if ( v65 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v69 = v65[6];
            v65[6] = v69 + 1;
            if ( v69 == -1 )
              goto LABEL_136;
          }
        }
      }
      if ( v11->ApcStateIndex )
      {
        KiAttachProcess((__int64)v11, a1 - 1664, v95, 1, (__int64)v103);
      }
      else
      {
        v15 = &v11->600;
        v11->SavedApcState.Process = v11->ApcState.Process;
        v11->SavedApcState.InProgressFlags = v11->ApcState.InProgressFlags;
        v11->SavedApcState.KernelApcPending = v11->ApcState.KernelApcPending;
        v11->SavedApcState.UserApcPendingAll = v11->ApcState.UserApcPendingAll;
        Flink = (struct _KTHREAD *)v11->ApcState.ApcListHead[0].Flink;
        if ( Flink == (struct _KTHREAD *)&v11->152 )
        {
          v11->SavedApcState.ApcListHead[0].Blink = v11->SavedApcState.ApcListHead;
          v15->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v15;
          v11->SavedApcState.KernelApcPending = 0;
        }
        else
        {
          Blink = v11->ApcState.ApcListHead[0].Blink;
          v15->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
          v11->SavedApcState.ApcListHead[0].Blink = Blink;
          Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v15;
          Blink->Flink = (struct _LIST_ENTRY *)v15;
        }
        CurrentThread = (struct _KTHREAD *)v11->ApcState.ApcListHead[1].Flink;
        v17 = &v11->SavedApcState.ApcListHead[1];
        if ( CurrentThread == (struct _KTHREAD *)&v11->ApcStateFill[16] )
        {
          v11->SavedApcState.ApcListHead[1].Blink = &v11->SavedApcState.ApcListHead[1];
          v17->Flink = v17;
          v11->SavedApcState.UserApcPendingAll = 0;
        }
        else
        {
          v71 = v11->ApcState.ApcListHead[1].Blink;
          v17->Flink = (struct _LIST_ENTRY *)CurrentThread;
          v11->SavedApcState.ApcListHead[1].Blink = v71;
          CurrentThread->Header.WaitListHead.Flink = v17;
          v71->Flink = v17;
        }
        v11->ApcState.ApcListHead[0].Blink = v11->ApcState.ApcListHead;
        v11->ApcState.ApcListHead[1].Blink = &v11->ApcState.ApcListHead[1];
        v11->ApcState.ApcListHead[1].Flink = &v11->ApcState.ApcListHead[1];
        v11->ApcState.ApcListHead[0].Flink = v11->ApcState.ApcListHead;
        v11->MiscFlags |= 0x800u;
        v11->ApcStateIndex = 1;
        *(_WORD *)&v11->ApcStateFill[40] = 0;
        v11->ApcState.UserApcPendingAll = 0;
        v11->ApcState.Process = v9;
        v11->ThreadLock = 0LL;
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        if ( v19 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v72 = v19[6] - 1;
            v19[6] = v72;
            if ( !v72 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        v20 = KeGetCurrentPrcb();
        Process = v11->SavedApcState.Process;
        v97 = Process;
        GroupIndex = v20->GroupIndex;
        v23 = 8LL * v20->Group + 376;
        _interlockedbittestandset64((volatile signed __int32 *)((char *)&v9->Header.Lock + v23), GroupIndex);
        DirectoryTableBase = v9->DirectoryTableBase;
        if ( KiKvaShadow )
        {
          v25 = v9->DirectoryTableBase;
          if ( (DirectoryTableBase & 2) != 0 )
            v25 = DirectoryTableBase | 0x8000000000000000uLL;
          __writegsqword(0x9000u, v25);
          KiSetAddressPolicy();
          Process = v97;
        }
        if ( (HvlEnlightenments & 1) != 0 )
        {
          HvlSwitchVirtualAddressSpace(DirectoryTableBase);
          Process = v97;
        }
        else
        {
          __writecr3(DirectoryTableBase);
        }
        if ( !KiFlushPcid && KiKvaShadow )
        {
          v73 = __readcr4();
          if ( (v73 & 0x20080) != 0 )
          {
            __writecr4(v73 ^ 0x80);
            __writecr4(v73);
          }
          else
          {
            v74 = __readcr3();
            __writecr3(v74);
          }
        }
        _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v23), GroupIndex);
        v11->MiscFlags &= ~0x800u;
        v26 = v95;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v75 = KeGetCurrentIrql();
            if ( v75 <= 0xFu && v95 <= 0xFu && v75 >= 2u )
            {
              v76 = KeGetCurrentPrcb();
              v77 = v76->SchedulerAssist;
              v78 = ~(unsigned __int16)(-1LL << (v95 + 1));
              v79 = (v78 & v77[5]) == 0;
              CurrentThread = (struct _KTHREAD *)((unsigned int)v78 & v77[5]);
              v77[5] = (_DWORD)CurrentThread;
              if ( v79 )
              {
                KiRemoveSystemWorkPriorityKick(v76);
                v26 = v95;
              }
            }
          }
        }
        __writecr8(v26);
        v7 = v102;
      }
      goto LABEL_26;
    }
    *(_QWORD *)&v104 = 1LL;
  }
LABEL_27:
  if ( (v3 & 4) != 0 )
  {
    MiEmptyWorkingSetInitiate(a1, 0LL, 0LL, -1LL);
    v5 = 2LL;
  }
  v27 = &dword_140C4F600;
  v28 = *(_BYTE *)(a1 + 184) & 7;
  if ( v28 < 6u )
  {
    if ( v28 == 2 )
      v29 = &dword_140C4F600;
    else
      v29 = (LONG *)(a1 + 192);
    v30 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v30 <= 0xFu )
    {
      v81 = KeGetCurrentPrcb()->SchedulerAssist;
      CurrentThread = (struct _KTHREAD *)((-1 << (v30 + 1)) & 4u | v81[5]);
      v81[5] = (_DWORD)CurrentThread;
      v5 = 2LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v29, v30);
    }
    else
    {
      v31 = KeGetCurrentPrcb();
      v32 = v31->SchedulerAssist;
      if ( v32 )
      {
        if ( v31->NestingLevel <= 1u )
        {
          v82 = v32[6];
          v32[6] = v82 + 1;
          if ( v82 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(v31);
            v5 = 2LL;
          }
        }
      }
      _m_prefetchw(v29);
      v33 = *v29 & 0x7FFFFFFF;
      if ( v33 == _InterlockedCompareExchange(v29, v33 + 1, v33) )
        goto LABEL_36;
      KiSetVpThreadSpinLockCount((__int64)v31, 0);
      ExpWaitForSpinLockSharedAndAcquire(v29, v30);
    }
    v5 = 2LL;
LABEL_36:
    if ( v29[1] )
      _InterlockedExchange(v29 + 1, 0);
    v96 = v30;
    goto LABEL_39;
  }
  v30 = KeGetCurrentIrql();
  v96 = v30;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v30 <= 0xFu )
  {
    v80 = KeGetCurrentPrcb()->SchedulerAssist;
    CurrentThread = (struct _KTHREAD *)((-1 << (v30 + 1)) & 4u | v80[5]);
    v80[5] = (_DWORD)CurrentThread;
    v5 = 2LL;
  }
LABEL_39:
  if ( (v3 & 0x20) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 136), v30, 0, 2);
  if ( (v3 & 0x100) != 0 )
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 136), v30, 0, 4);
  v34 = *(unsigned __int16 *)(v7 + 2346);
  v35 = 0;
  v36 = 0;
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      v35 = 1;
      v36 = MiAgeWorkingSet(a1, v30, 1LL, v34);
      if ( !v36 && *(_BYTE *)(v102 + 55) == 1 && v34 - 1 <= 8 )
        v36 = MiAgeWorkingSet(a1, v30, 2LL, 10LL);
      v37 = a2;
      goto LABEL_49;
    }
    if ( (v3 & 0x40) != 0 )
    {
      v61 = MiAgeWorkingSet(a1, v30, 1LL, v34);
      v37 = a2;
      v36 = v61;
      v35 = 1;
      goto LABEL_49;
    }
    if ( (v3 & 0x80u) == 0 )
    {
      v37 = a2;
      goto LABEL_49;
    }
    v59 = 2LL;
LABEL_98:
    v60 = MiAgeWorkingSet(a1, v30, v59, v34);
    v37 = a2;
    v35 = 1;
    v36 = v60;
    goto LABEL_49;
  }
  *(_BYTE *)(a2 + 1) = *((_BYTE *)MiTrimPassToAge + (*(_BYTE *)a2 & 0x7F));
  v83 = MiComputeTrimAmount(a2, a1, CurrentThread, v5);
  if ( v83 )
  {
    v84 = MiTrimWorkingSet(a1, v83, v30, *(unsigned __int8 *)(a2 + 1), 17);
    v37 = a2;
    *(_QWORD *)(a2 + 96) += v84;
  }
  else
  {
    v37 = a2;
  }
  v59 = 0LL;
  if ( ((*(_BYTE *)v37 & 0x7F) == 0 && *(char *)v37 >= 0 || (*(_BYTE *)v37 & 0x7F) == 4) && *(_WORD *)(v102 + 2346) )
    v59 = 1LL;
  if ( *(_BYTE *)(v37 + 4) == 1 )
    goto LABEL_98;
LABEL_49:
  v38 = 0LL;
  if ( v36 == 1 )
  {
    v40 = v96;
    goto LABEL_74;
  }
  if ( v35 == 1 )
  {
    v39 = 3;
    if ( *(_BYTE *)(a1 + 186) != 2 )
      v39 = 1;
    *(_QWORD *)(v37 + 8) += *(_QWORD *)(a1 + 40) >> v39;
    *(_QWORD *)(v37 + 16) += *(_QWORD *)(a1 + 48) >> v39;
    *(_QWORD *)(v37 + 24) += *(_QWORD *)(a1 + 56) >> v39;
    *(_QWORD *)(v37 + 32) += *(_QWORD *)(a1 + 64) >> v39;
    *(_QWORD *)(v37 + 40) += *(_QWORD *)(a1 + 72) >> v39;
    *(_QWORD *)(v37 + 48) += *(_QWORD *)(a1 + 80) >> v39;
    *(_QWORD *)(v37 + 56) += *(_QWORD *)(a1 + 88) >> v39;
    *(_QWORD *)(v37 + 64) += *(_QWORD *)(a1 + 96) >> v39;
  }
  if ( (v3 & 0x10) != 0 || (v3 & 8) != 0 )
  {
    v40 = v96;
    MiCaptureAndResetWorkingSetAccessBits(a1, v96, v3);
  }
  else
  {
    v40 = v96;
  }
  v38 = MEMORY[0xFFFFF78000000320];
  v41 = *(_BYTE *)(a1 + 184) & 7;
  v100 = 0LL;
  v42 = (LONG *)(a1 + 192);
  v99 = 0LL;
  if ( v41 == 2 )
    v43 = &dword_140C4F600;
  else
    v43 = (LONG *)(a1 + 192);
  if ( *((_QWORD *)v43 + 5) )
  {
    *(_QWORD *)&v99 = 0LL;
    if ( v41 == 2 )
      v42 = &dword_140C4F600;
    v44 = (volatile __int64 *)(v42 + 16);
    *((_QWORD *)&v99 + 1) = v42 + 16;
    v45 = KeGetCurrentPrcb();
    v98 = (volatile __int64 *)(v42 + 16);
    v46 = v45->SchedulerAssist;
    if ( v46 )
    {
      if ( v45->NestingLevel <= 1u )
      {
        v85 = v46[6];
        v46[6] = v85 + 1;
        if ( v85 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(v45);
          v44 = v98;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v99, v44);
    }
    else if ( _InterlockedExchange64(v44, (__int64)&v99) )
    {
      KxWaitForLockOwnerShip(&v99);
    }
    v47 = (PVOID *)*((_QWORD *)v43 + 5);
    if ( v47 )
    {
      v48 = *v47;
      v49 = (_QWORD *)*((_QWORD *)v43 + 5);
      if ( *v47 )
      {
        do
        {
          v49 = v48;
          v48 = (_QWORD *)*v48;
        }
        while ( v48 );
      }
      if ( v38 - v49[2] > (unsigned __int64)PfKernelGlobals )
      {
        MiEmptyPageAccessLog(v47);
        *((_QWORD *)v43 + 5) = 0LL;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v99, retaddr);
      goto LABEL_73;
    }
    _m_prefetchw(&v99);
    v50 = v99;
    if ( !(_QWORD)v99 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v99 + 1), 0LL, (signed __int64)&v99) == &v99 )
      {
LABEL_73:
        v51 = KeGetCurrentPrcb();
        v52 = v51->SchedulerAssist;
        if ( v52 )
        {
          if ( v51->NestingLevel <= 1u )
          {
            v86 = v52[6] - 1;
            v52[6] = v86;
            if ( !v86 )
              KiRemoveSystemWorkPriorityKick(v51);
          }
        }
        goto LABEL_74;
      }
      v50 = KxWaitForLockChainValid(&v99);
    }
    *(_QWORD *)&v99 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v50 + 8), 1uLL);
    goto LABEL_73;
  }
LABEL_74:
  if ( (*(_BYTE *)(a1 + 184) & 7u) >= 6 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v63 = KeGetCurrentIrql();
        if ( v63 <= 0xFu && v40 <= 0xFu && v63 >= 2u )
        {
          v87 = KeGetCurrentPrcb();
          v88 = v87->SchedulerAssist;
          v89 = ~(unsigned __int16)(-1LL << (v40 + 1));
          v79 = (v89 & v88[5]) == 0;
          v88[5] &= v89;
          if ( v79 )
LABEL_208:
            KiRemoveSystemWorkPriorityKick(v87);
        }
      }
    }
  }
  else
  {
    v53 = *(_DWORD *)(a1 + 184);
    if ( (v53 & 0x8000000) != 0 || (v53 & 0x4000000) != 0 || (v53 & 0x10000000) != 0 )
    {
      MiPreUnlockWorkingSetShared(a1, v40);
      LOBYTE(v53) = *(_BYTE *)(a1 + 184);
    }
    if ( (v53 & 7) != 2 )
      v27 = (volatile signed __int32 *)(a1 + 192);
    MiCheckProcessShadow(a1, 1LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v27, retaddr);
    }
    else
    {
      _InterlockedAnd(v27, 0xBFFFFFFF);
      _InterlockedDecrement(v27);
    }
    v54 = KeGetCurrentPrcb();
    v55 = v54->SchedulerAssist;
    if ( v55 )
    {
      if ( v54->NestingLevel <= 1u )
      {
        v90 = v55[6] - 1;
        v55[6] = v90;
        if ( !v90 )
          KiRemoveSystemWorkPriorityKick(v54);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v91 = KeGetCurrentIrql();
        if ( v91 <= 0xFu && v40 <= 0xFu && v91 >= 2u )
        {
          v87 = KeGetCurrentPrcb();
          v92 = v87->SchedulerAssist;
          v93 = ~(unsigned __int16)(-1LL << (v40 + 1));
          v79 = (v93 & v92[5]) == 0;
          v92[5] &= v93;
          if ( v79 )
            goto LABEL_208;
        }
      }
    }
  }
  __writecr8(v40);
  v56 = *(_BYTE *)(a1 + 184) & 7;
  if ( v56 )
  {
    if ( v56 == 1 )
      MiDetachProcessFromSession(1LL);
  }
  else if ( KeGetCurrentThread()->Process != (_KPROCESS *)(a1 - 1664) )
  {
    KiDetachProcess((struct _KTHREAD *)&KeGetCurrentThread()->600, 1);
  }
  if ( !v36 )
  {
    if ( qword_140C4E680 )
    {
      v57 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_140C4E680, 0LL);
      if ( v57 )
      {
        if ( v38 - (unsigned __int64)v57[1].Next > PfKernelGlobals || (v3 & 0x18) != 0 )
        {
          v62 = v57;
        }
        else
        {
          if ( !qword_140C4E680 && !_InterlockedCompareExchange64(&qword_140C4E680, (signed __int64)v57, 0LL) )
            return v36;
          v62 = v57;
          if ( v57[2].Next == (_SLIST_ENTRY *)(&v57[4].Next + 1) )
          {
            MmFreeAccessPfnBuffer(v57, 1);
            return v36;
          }
        }
        MiQueuePageAccessLog(v62);
      }
    }
  }
  return v36;
}
