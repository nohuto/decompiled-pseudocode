/*
 * XREFs of MiTrimOrAgeWorkingSet @ 0x14025CC40
 * Callers:
 *     MiProcessWorkingSets @ 0x14025C5F0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiCheckProcessShadow @ 0x14020ED50 (MiCheckProcessShadow.c)
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiAgeWorkingSet @ 0x14025D530 (MiAgeWorkingSet.c)
 *     KiAttachProcess @ 0x14025E630 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x14025E8F0 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x14025ECC0 (KiSetAddressPolicy.c)
 *     KiSetVpThreadSpinLockCount @ 0x140261600 (KiSetVpThreadSpinLockCount.c)
 *     MiEmptyPageAccessLog @ 0x1402A4D00 (MiEmptyPageAccessLog.c)
 *     MiQueuePageAccessLog @ 0x1402A50BC (MiQueuePageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x1402C2DF4 (MmFreeAccessPfnBuffer.c)
 *     PfLogForegroundProcess @ 0x1402D5ADC (PfLogForegroundProcess.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402EF840 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiAttachSession @ 0x1403001B8 (MiAttachSession.c)
 *     MiDetachProcessFromSession @ 0x140307618 (MiDetachProcessFromSession.c)
 *     MiEmptyWorkingSetInitiate @ 0x14030C2FC (MiEmptyWorkingSetInitiate.c)
 *     MiPreUnlockWorkingSetShared @ 0x14030C55C (MiPreUnlockWorkingSetShared.c)
 *     MiTrimWorkingSet @ 0x14030C770 (MiTrimWorkingSet.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14039D428 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404F52E0 (HvlSwitchVirtualAddressSpace.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiComputeTrimAmount @ 0x1405354C0 (MiComputeTrimAmount.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405AFFD4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B0124 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTrimOrAgeWorkingSet(__int64 a1, __int64 a2, __int64 CurrentThread)
{
  unsigned int v3; // r14d
  __int64 v5; // rdx
  __int64 SchedulerAssist; // r9
  char v7; // al
  __int64 v8; // r13
  char v9; // al
  _KPROCESS *v10; // rbp
  ULONG_PTR v11; // rax
  struct _KTHREAD *v12; // rdi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v15; // rcx
  $2D5B062263E2BEE97A34A67201DBDB9B *v16; // rsi
  struct _KTHREAD *Flink; // rcx
  struct _LIST_ENTRY *v18; // rax
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  struct _KPRCB *v21; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 GroupIndex; // r13
  __int64 v24; // r12
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v26; // rax
  unsigned __int8 v27; // r10
  volatile signed __int32 *v28; // rsi
  unsigned __int8 v29; // al
  LONG *v30; // rdi
  unsigned __int8 v31; // r12
  struct _KPRCB *v32; // rbp
  _DWORD *v33; // rcx
  signed __int32 v34; // ett
  unsigned int v35; // r13d
  int v36; // ebp
  unsigned int v37; // edi
  __int64 v38; // rdx
  __int64 v39; // r12
  char v40; // cl
  unsigned __int8 v41; // r13
  char v42; // cl
  LONG *v43; // rax
  LONG *v44; // rbp
  volatile __int64 *v45; // rcx
  struct _KPRCB *v46; // rdx
  _DWORD *v47; // r8
  _QWORD *v48; // rdx
  _QWORD *v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rax
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  int v54; // ecx
  struct _KPRCB *v55; // rcx
  _DWORD *v56; // rdx
  char v57; // al
  _QWORD *v58; // r15
  __int64 v60; // r8
  unsigned int v61; // eax
  unsigned int v62; // eax
  void *v63; // rcx
  unsigned __int8 v64; // al
  _DWORD *v65; // rcx
  _DWORD *v66; // rcx
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

  v3 = CurrentThread;
  if ( *(_BYTE *)(a1 + 186) == 2 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
    PfLogForegroundProcess();
  v5 = 1LL;
  SchedulerAssist = 2LL;
  v7 = *(_BYTE *)(a1 + 184);
  v8 = *(_QWORD *)(*(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 6848LL);
  v102 = v8;
  v9 = v7 & 7;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      MiAttachSession(a1 - 256, 1LL, CurrentThread, 2LL);
LABEL_26:
      SchedulerAssist = 2LL;
    }
  }
  else
  {
    v10 = (_KPROCESS *)(a1 - 1664);
    if ( KeGetCurrentThread()->Process == (_KPROCESS *)(a1 - 1664) )
      goto LABEL_27;
    memset(v103, 0, sizeof(v103));
    v104 = 0LL;
    CurrentThread = (__int64)KeGetCurrentThread();
    v11 = *(unsigned __int8 *)(CurrentThread + 586);
    if ( (_BYTE)v11 )
      KeBugCheckEx(5u, a1 - 1664, *(_QWORD *)(CurrentThread + 184), v11, 0LL);
    v12 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 || (*(_DWORD *)&v10->0 & 0x400) != 0 )
      KeBugCheckEx(
        5u,
        a1 - 1664,
        (ULONG_PTR)v12->ApcState.Process,
        v12->ApcStateIndex,
        KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
    if ( v12->ApcState.Process != v10 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v95 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
        v5 = (-1LL << (CurrentIrql + 1)) & 4;
        CurrentThread = (unsigned int)v5 | *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = CurrentThread;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v101 = 0;
      v15 = CurrentPrcb->SchedulerAssist;
      if ( v15 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v67 = v15[6];
          v15[6] = v67 + 1;
          if ( v67 == -1 )
LABEL_136:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v12->ThreadLock, 0LL) )
      {
        v65 = CurrentPrcb->SchedulerAssist;
        if ( v65 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v68 = v65[6] - 1;
            v65[6] = v68;
            if ( !v68 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v101, v5, CurrentThread, SchedulerAssist);
        while ( v12->ThreadLock );
        v66 = CurrentPrcb->SchedulerAssist;
        if ( v66 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v69 = v66[6];
            v66[6] = v69 + 1;
            if ( v69 == -1 )
              goto LABEL_136;
          }
        }
      }
      if ( v12->ApcStateIndex )
      {
        KiAttachProcess((_DWORD)v12, a1 - 1664, v95, 1, (__int64)v103);
      }
      else
      {
        v16 = &v12->600;
        v12->SavedApcState.Process = v12->ApcState.Process;
        v12->SavedApcState.InProgressFlags = v12->ApcState.InProgressFlags;
        v12->SavedApcState.KernelApcPending = v12->ApcState.KernelApcPending;
        v12->SavedApcState.UserApcPendingAll = v12->ApcState.UserApcPendingAll;
        Flink = (struct _KTHREAD *)v12->ApcState.ApcListHead[0].Flink;
        if ( Flink == (struct _KTHREAD *)&v12->152 )
        {
          v12->SavedApcState.ApcListHead[0].Blink = v12->SavedApcState.ApcListHead;
          v16->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v16;
          v12->SavedApcState.KernelApcPending = 0;
        }
        else
        {
          Blink = v12->ApcState.ApcListHead[0].Blink;
          v16->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
          v12->SavedApcState.ApcListHead[0].Blink = Blink;
          Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v16;
          Blink->Flink = (struct _LIST_ENTRY *)v16;
        }
        CurrentThread = (__int64)v12->ApcState.ApcListHead[1].Flink;
        v18 = &v12->SavedApcState.ApcListHead[1];
        if ( (unsigned __int8 *)CurrentThread == &v12->ApcStateFill[16] )
        {
          v12->SavedApcState.ApcListHead[1].Blink = &v12->SavedApcState.ApcListHead[1];
          v18->Flink = v18;
          v12->SavedApcState.UserApcPendingAll = 0;
        }
        else
        {
          v71 = v12->ApcState.ApcListHead[1].Blink;
          v18->Flink = (struct _LIST_ENTRY *)CurrentThread;
          v12->SavedApcState.ApcListHead[1].Blink = v71;
          *(_QWORD *)(CurrentThread + 8) = v18;
          v71->Flink = v18;
        }
        v12->ApcState.ApcListHead[0].Blink = v12->ApcState.ApcListHead;
        v12->ApcState.ApcListHead[1].Blink = &v12->ApcState.ApcListHead[1];
        v12->ApcState.ApcListHead[1].Flink = &v12->ApcState.ApcListHead[1];
        v12->ApcState.ApcListHead[0].Flink = v12->ApcState.ApcListHead;
        v12->MiscFlags |= 0x800u;
        v12->ApcStateIndex = 1;
        *(_WORD *)&v12->ApcStateFill[40] = 0;
        v12->ApcState.UserApcPendingAll = 0;
        v12->ApcState.Process = v10;
        v12->ThreadLock = 0LL;
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        if ( v20 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v72 = v20[6] - 1;
            v20[6] = v72;
            if ( !v72 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        v21 = KeGetCurrentPrcb();
        Process = v12->SavedApcState.Process;
        v97 = Process;
        GroupIndex = v21->GroupIndex;
        v24 = 8LL * v21->Group + 376;
        _interlockedbittestandset64((volatile signed __int32 *)((char *)&v10->Header.Lock + v24), GroupIndex);
        DirectoryTableBase = v10->DirectoryTableBase;
        if ( KiKvaShadow )
        {
          v26 = v10->DirectoryTableBase;
          if ( (DirectoryTableBase & 2) != 0 )
            v26 = DirectoryTableBase | 0x8000000000000000uLL;
          __writegsqword(0x9000u, v26);
          KiSetAddressPolicy(v10->AddressPolicy);
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
        _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v24), GroupIndex);
        v12->MiscFlags &= ~0x800u;
        v27 = v95;
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
              CurrentThread = (unsigned int)v78 & v77[5];
              v77[5] = CurrentThread;
              if ( v79 )
              {
                KiRemoveSystemWorkPriorityKick(v76);
                v27 = v95;
              }
            }
          }
        }
        __writecr8(v27);
        v8 = v102;
      }
      goto LABEL_26;
    }
    *(_QWORD *)&v104 = 1LL;
  }
LABEL_27:
  if ( (v3 & 4) != 0 )
  {
    MiEmptyWorkingSetInitiate(a1, 0LL, 0LL, -1LL);
    SchedulerAssist = 2LL;
  }
  v28 = &dword_140C4F6C0;
  v29 = *(_BYTE *)(a1 + 184) & 7;
  if ( v29 < 6u )
  {
    if ( v29 == 2 )
      v30 = &dword_140C4F6C0;
    else
      v30 = (LONG *)(a1 + 192);
    v31 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 <= 0xFu )
    {
      v81 = KeGetCurrentPrcb()->SchedulerAssist;
      CurrentThread = (-1 << (v31 + 1)) & 4u | v81[5];
      v81[5] = CurrentThread;
      SchedulerAssist = 2LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v30, v31);
    }
    else
    {
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      if ( v33 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v82 = v33[6];
          v33[6] = v82 + 1;
          if ( v82 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(v32);
            SchedulerAssist = 2LL;
          }
        }
      }
      _m_prefetchw(v30);
      v34 = *v30 & 0x7FFFFFFF;
      if ( v34 == _InterlockedCompareExchange(v30, v34 + 1, v34) )
        goto LABEL_36;
      KiSetVpThreadSpinLockCount(v32, 0LL);
      ExpWaitForSpinLockSharedAndAcquire(v30, v31);
    }
    SchedulerAssist = 2LL;
LABEL_36:
    if ( v30[1] )
      _InterlockedExchange(v30 + 1, 0);
    v96 = v31;
    goto LABEL_39;
  }
  v31 = KeGetCurrentIrql();
  v96 = v31;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 <= 0xFu )
  {
    v80 = KeGetCurrentPrcb()->SchedulerAssist;
    CurrentThread = (-1 << (v31 + 1)) & 4u | v80[5];
    v80[5] = CurrentThread;
    SchedulerAssist = 2LL;
  }
LABEL_39:
  if ( (v3 & 0x20) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 136), v31, 0, 2);
  if ( (v3 & 0x100) != 0 )
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 136), v31, 0, 4);
  v35 = *(unsigned __int16 *)(v8 + 2346);
  v36 = 0;
  v37 = 0;
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      v36 = 1;
      v37 = MiAgeWorkingSet(a1, v31, 1LL, v35);
      if ( !v37 && *(_BYTE *)(v102 + 55) == 1 && v35 - 1 <= 8 )
        v37 = MiAgeWorkingSet(a1, v31, 2LL, 10LL);
      v38 = a2;
      goto LABEL_49;
    }
    if ( (v3 & 0x40) != 0 )
    {
      v62 = MiAgeWorkingSet(a1, v31, 1LL, v35);
      v38 = a2;
      v37 = v62;
      v36 = 1;
      goto LABEL_49;
    }
    if ( (v3 & 0x80u) == 0 )
    {
      v38 = a2;
      goto LABEL_49;
    }
    v60 = 2LL;
LABEL_98:
    v61 = MiAgeWorkingSet(a1, v31, v60, v35);
    v38 = a2;
    v36 = 1;
    v37 = v61;
    goto LABEL_49;
  }
  *(_BYTE *)(a2 + 1) = *((_BYTE *)MiTrimPassToAge + (*(_BYTE *)a2 & 0x7F));
  v83 = MiComputeTrimAmount(a2, a1, CurrentThread, SchedulerAssist);
  if ( v83 )
  {
    v84 = MiTrimWorkingSet(a1, v83, v31, *(unsigned __int8 *)(a2 + 1), 17);
    v38 = a2;
    *(_QWORD *)(a2 + 96) += v84;
  }
  else
  {
    v38 = a2;
  }
  v60 = 0LL;
  if ( ((*(_BYTE *)v38 & 0x7F) == 0 && *(char *)v38 >= 0 || (*(_BYTE *)v38 & 0x7F) == 4) && *(_WORD *)(v102 + 2346) )
    v60 = 1LL;
  if ( *(_BYTE *)(v38 + 4) == 1 )
    goto LABEL_98;
LABEL_49:
  v39 = 0LL;
  if ( v37 == 1 )
  {
    v41 = v96;
    goto LABEL_74;
  }
  if ( v36 == 1 )
  {
    v40 = 3;
    if ( *(_BYTE *)(a1 + 186) != 2 )
      v40 = 1;
    *(_QWORD *)(v38 + 8) += *(_QWORD *)(a1 + 40) >> v40;
    *(_QWORD *)(v38 + 16) += *(_QWORD *)(a1 + 48) >> v40;
    *(_QWORD *)(v38 + 24) += *(_QWORD *)(a1 + 56) >> v40;
    *(_QWORD *)(v38 + 32) += *(_QWORD *)(a1 + 64) >> v40;
    *(_QWORD *)(v38 + 40) += *(_QWORD *)(a1 + 72) >> v40;
    *(_QWORD *)(v38 + 48) += *(_QWORD *)(a1 + 80) >> v40;
    *(_QWORD *)(v38 + 56) += *(_QWORD *)(a1 + 88) >> v40;
    *(_QWORD *)(v38 + 64) += *(_QWORD *)(a1 + 96) >> v40;
  }
  if ( (v3 & 0x10) != 0 || (v3 & 8) != 0 )
  {
    v41 = v96;
    MiCaptureAndResetWorkingSetAccessBits(a1, v96, v3);
  }
  else
  {
    v41 = v96;
  }
  v39 = MEMORY[0xFFFFF78000000320];
  v42 = *(_BYTE *)(a1 + 184) & 7;
  v100 = 0LL;
  v43 = (LONG *)(a1 + 192);
  v99 = 0LL;
  if ( v42 == 2 )
    v44 = &dword_140C4F6C0;
  else
    v44 = (LONG *)(a1 + 192);
  if ( *((_QWORD *)v44 + 5) )
  {
    *(_QWORD *)&v99 = 0LL;
    if ( v42 == 2 )
      v43 = &dword_140C4F6C0;
    v45 = (volatile __int64 *)(v43 + 16);
    *((_QWORD *)&v99 + 1) = v43 + 16;
    v46 = KeGetCurrentPrcb();
    v98 = (volatile __int64 *)(v43 + 16);
    v47 = v46->SchedulerAssist;
    if ( v47 )
    {
      if ( v46->NestingLevel <= 1u )
      {
        v85 = v47[6];
        v47[6] = v85 + 1;
        if ( v85 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(v46);
          v45 = v98;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v99, v45);
    }
    else
    {
      v48 = (_QWORD *)_InterlockedExchange64(v45, (__int64)&v99);
      if ( v48 )
        KxWaitForLockOwnerShip((__int64)&v99, v48);
    }
    v49 = (_QWORD *)*((_QWORD *)v44 + 5);
    if ( v49 )
    {
      v50 = (_QWORD *)*v49;
      v48 = (_QWORD *)*((_QWORD *)v44 + 5);
      if ( *v49 )
      {
        do
        {
          v48 = v50;
          v50 = (_QWORD *)*v50;
        }
        while ( v50 );
      }
      if ( v39 - v48[2] > (unsigned __int64)PfKernelGlobals )
      {
        MiEmptyPageAccessLog(v49);
        *((_QWORD *)v44 + 5) = 0LL;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v99, retaddr);
      goto LABEL_73;
    }
    _m_prefetchw(&v99);
    v51 = v99;
    if ( !(_QWORD)v99 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v99 + 1), 0LL, (signed __int64)&v99) == &v99 )
      {
LABEL_73:
        v52 = KeGetCurrentPrcb();
        v53 = v52->SchedulerAssist;
        if ( v53 )
        {
          if ( v52->NestingLevel <= 1u )
          {
            v86 = v53[6] - 1;
            v53[6] = v86;
            if ( !v86 )
              KiRemoveSystemWorkPriorityKick(v52);
          }
        }
        goto LABEL_74;
      }
      v51 = KxWaitForLockChainValid(&v99, (_BYTE)v48);
    }
    *(_QWORD *)&v99 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v51 + 8), 1uLL);
    goto LABEL_73;
  }
LABEL_74:
  if ( (*(_BYTE *)(a1 + 184) & 7u) >= 6 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v64 = KeGetCurrentIrql();
        if ( v64 <= 0xFu && v41 <= 0xFu && v64 >= 2u )
        {
          v87 = KeGetCurrentPrcb();
          v88 = v87->SchedulerAssist;
          v89 = ~(unsigned __int16)(-1LL << (v41 + 1));
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
    v54 = *(_DWORD *)(a1 + 184);
    if ( (v54 & 0x8000000) != 0 || (v54 & 0x4000000) != 0 || (v54 & 0x10000000) != 0 )
    {
      MiPreUnlockWorkingSetShared(a1, v41);
      LOBYTE(v54) = *(_BYTE *)(a1 + 184);
    }
    if ( (v54 & 7) != 2 )
      v28 = (volatile signed __int32 *)(a1 + 192);
    MiCheckProcessShadow(a1, 1u);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v28, retaddr);
    }
    else
    {
      _InterlockedAnd(v28, 0xBFFFFFFF);
      _InterlockedDecrement(v28);
    }
    v55 = KeGetCurrentPrcb();
    v56 = v55->SchedulerAssist;
    if ( v56 )
    {
      if ( v55->NestingLevel <= 1u )
      {
        v90 = v56[6] - 1;
        v56[6] = v90;
        if ( !v90 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v91 = KeGetCurrentIrql();
        if ( v91 <= 0xFu && v41 <= 0xFu && v91 >= 2u )
        {
          v87 = KeGetCurrentPrcb();
          v92 = v87->SchedulerAssist;
          v93 = ~(unsigned __int16)(-1LL << (v41 + 1));
          v79 = (v93 & v92[5]) == 0;
          v92[5] &= v93;
          if ( v79 )
            goto LABEL_208;
        }
      }
    }
  }
  __writecr8(v41);
  v57 = *(_BYTE *)(a1 + 184) & 7;
  if ( v57 )
  {
    if ( v57 == 1 )
      MiDetachProcessFromSession(1LL);
  }
  else if ( KeGetCurrentThread()->Process != (_KPROCESS *)(a1 - 1664) )
  {
    KiDetachProcess(&KeGetCurrentThread()->600, 1LL);
  }
  if ( !v37 )
  {
    if ( qword_140C4E740 )
    {
      v58 = (_QWORD *)_InterlockedExchange64(&qword_140C4E740, 0LL);
      if ( v58 )
      {
        if ( v39 - v58[2] > (unsigned __int64)PfKernelGlobals || (v3 & 0x18) != 0 )
        {
          v63 = v58;
        }
        else
        {
          if ( !qword_140C4E740 && !_InterlockedCompareExchange64(&qword_140C4E740, (signed __int64)v58, 0LL) )
            return v37;
          v63 = v58;
          if ( (_QWORD *)v58[4] == v58 + 9 )
          {
            MmFreeAccessPfnBuffer(v58);
            return v37;
          }
        }
        MiQueuePageAccessLog(v63);
      }
    }
  }
  return v37;
}
