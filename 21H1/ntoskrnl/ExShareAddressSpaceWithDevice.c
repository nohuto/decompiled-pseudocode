/*
 * XREFs of ExShareAddressSpaceWithDevice @ 0x1405B15D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14022C0A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MmEnableProcessSvm @ 0x140527170 (MmEnableProcessSvm.c)
 *     ExpAllocateAsid @ 0x1405B2A5C (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x1405B2E88 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x1405B31C4 (ExpSvmDereferenceDevice.c)
 *     IoQueryInterface @ 0x14074F050 (IoQueryInterface.c)
 *     ExpAssignPasid @ 0x140952274 (ExpAssignPasid.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExShareAddressSpaceWithDevice(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // r12d
  struct _LIST_ENTRY *v6; // r15
  struct _LIST_ENTRY *v7; // r14
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r13
  struct _KTHREAD *v11; // rbx
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v13; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v15; // dl
  int SessionId; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  bool v20; // zf
  unsigned int Blink; // r12d
  int v22; // ebx
  unsigned __int8 v23; // bl
  _DWORD *v24; // r9
  struct _LIST_ENTRY *v25; // rcx
  struct _LIST_ENTRY *v26; // rax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v33; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v35; // r9
  int v36; // eax
  struct _KTHREAD *v37; // rbx
  __int64 v38; // rcx
  unsigned __int8 v39; // al
  char v40; // dl
  __int64 v41; // rsi
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  _DWORD *v46; // r9
  __int64 *v48; // rax
  __int64 *v49; // rdx
  __int64 *v50; // rcx
  struct _KTHREAD *v51; // rbx
  unsigned int v52; // edx
  unsigned __int8 v53; // r14
  unsigned int v54; // r8d
  __int64 v55; // rcx
  __int64 v56; // rsi
  int v57; // eax
  unsigned int v58; // ecx
  unsigned __int8 v59; // al
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  _DWORD *v63; // r9
  struct _LIST_ENTRY *PoolWithTag; // rax
  char v65; // di
  unsigned __int8 v66; // bl
  _DWORD *v67; // r9
  _LIST_ENTRY *p_ThreadListHead; // rcx
  _LIST_ENTRY *v69; // rdx
  struct _LIST_ENTRY *v70; // rax
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  struct _KTHREAD *v75; // rbx
  unsigned __int8 v76; // r14
  unsigned int v77; // edx
  __int64 v78; // rdi
  __int64 v79; // rcx
  int v80; // ecx
  unsigned int v81; // edx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // r8
  _DWORD *v85; // r9
  struct _LIST_ENTRY *Flink; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  _DWORD v88[2]; // [rsp+50h] [rbp-79h] BYREF
  int v89; // [rsp+58h] [rbp-71h] BYREF
  int v90; // [rsp+5Ch] [rbp-6Dh]
  int v91; // [rsp+60h] [rbp-69h] BYREF
  int v92; // [rsp+64h] [rbp-65h]
  int v93; // [rsp+68h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-59h] BYREF
  struct _KTHREAD *v95; // [rsp+88h] [rbp-41h]
  _QWORD v96[18]; // [rsp+90h] [rbp-39h] BYREF
  int Interface; // [rsp+140h] [rbp+77h]

  v2 = 0LL;
  Flink = 0LL;
  memset(v96, 0, 0x48uLL);
  v5 = -1;
  P = 0LL;
  *a2 = -1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v7 = 0LL;
  if ( !ExpSvmIommuSystemContext )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v95 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    return 3221225738LL;
  Interface = IoQueryInterface(a1, 0, (unsigned int)&GUID_IOMMU_BUS_INTERFACE, 72, 1, a1, v96);
  if ( Interface >= 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = KeGetCurrentThread();
    p_Blink = &Process[2].ProfileListHead.Blink;
    v91 = 0;
    --v11->SpecialApcDisable;
    if ( ++v11->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v11, (ULONG_PTR)&Process[2].ProfileListHead.Blink, KeGetCurrentIrql(), 0LL);
    LOBYTE(v13) = v11->AbEntrySummary;
    v90 = 0;
    if ( !(_BYTE)v13 )
    {
      if ( !v11->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion((__int64)v11, (__int64)&Process[2].ProfileListHead.Blink);
        goto LABEL_14;
      }
      AbOrphanedEntrySummary = v11->AbOrphanedEntrySummary;
      v11->AbOrphanedEntrySummary = 0;
      LOBYTE(v13) = AbOrphanedEntrySummary | v11->AbEntrySummary;
    }
    v15 = v13;
    _BitScanForward((unsigned int *)&v13, (unsigned __int8)v13);
    v90 = v13;
    v11->AbEntrySummary = v15 & ~(1 << v13);
    v2 = (__int64)&v11->LockEntries[v13];
    if ( v2 )
    {
      if ( (unsigned __int64)p_Blink >= 0xFFFF800000000000uLL
        && *((_BYTE *)&MiState[1537] + (((unsigned __int64)p_Blink >> 39) & 0x1FF)) == 1 )
      {
        SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v2 + 40) = SessionId;
      *(_QWORD *)(v2 + 32) = (unsigned __int64)p_Blink & 0x7FFFFFFFFFFFFFFCLL;
LABEL_22:
      --v11->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v11, (__int64)&Process[2].ProfileListHead.Blink, &v91);
      v20 = v11->SpecialApcDisable++ == -1;
      if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
        KiCheckForKernelApcDelivery(1LL, v17, v18, v19);
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&Process[2].ProfileListHead.Blink,
          v2,
          (ULONG_PTR)&Process[2].ProfileListHead.Blink);
      if ( v2 )
        *(_BYTE *)(v2 + 26) |= 1u;
      Blink = (unsigned int)Process[2].Header.WaitListHead.Blink;
      if ( !Blink )
      {
        Blink = ExpAllocateAsid();
        if ( !Blink )
        {
          v22 = -1073741709;
          Interface = -1073741709;
          goto LABEL_32;
        }
        if ( !(unsigned int)ExpAssignPasid((PADAPTER_OBJECT)Process) )
          Blink = (unsigned int)Process[2].Header.WaitListHead.Blink;
      }
      --Blink;
      Flink = Process[2].ProfileListHead.Flink;
      if ( !Flink )
      {
        Interface = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _LIST_ENTRY **))(HalIommuDispatch + 16))(
                      Blink,
                      0LL,
                      &Flink);
        v22 = Interface;
        if ( Interface < 0 )
          goto LABEL_32;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
        KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].DirectoryTableBase, &LockHandle);
        if ( Process[2].ProfileListHead.Flink )
        {
          v7 = Flink;
          Flink = Process[2].ProfileListHead.Flink;
        }
        else
        {
          Process[2].ProfileListHead.Flink = Flink;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v33 = KeGetCurrentIrql();
            if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v35 = CurrentPrcb->SchedulerAssist;
              v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v20 = (v36 & v35[5]) == 0;
              v35[5] &= v36;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( v7 )
          (*(void (__fastcall **)(struct _LIST_ENTRY *))(HalIommuDispatch + 64))(v7);
      }
      v37 = KeGetCurrentThread();
      v93 = 0;
      --v37->SpecialApcDisable;
      if ( ++v37->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v37, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
      v92 = 0;
      LOBYTE(v38) = v37->AbEntrySummary;
      if ( !(_BYTE)v38 )
      {
        if ( !v37->AbOrphanedEntrySummary )
        {
          v41 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion((__int64)v37, (__int64)&ExpSvmDeviceListLock);
          goto LABEL_81;
        }
        v39 = v37->AbOrphanedEntrySummary;
        v37->AbOrphanedEntrySummary = 0;
        LOBYTE(v38) = v39 | v37->AbEntrySummary;
      }
      v40 = v38;
      _BitScanForward((unsigned int *)&v38, (unsigned __int8)v38);
      v92 = v38;
      v37->AbEntrySummary = v40 & ~(1 << v38);
      v41 = (__int64)&v37->LockEntries[v38];
      if ( v41 )
      {
        if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[1537] + (((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF)) == 1 )
        {
          v42 = MmGetSessionIdEx((__int64)v37->ApcState.Process);
        }
        else
        {
          v42 = -1;
        }
        *(_DWORD *)(v41 + 40) = v42;
        *(_QWORD *)(v41 + 32) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_84;
      }
LABEL_81:
      _interlockedbittestandset((volatile signed __int32 *)&v37->116 + 1, 0x10u);
LABEL_84:
      --v37->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v37, (__int64)&ExpSvmDeviceListLock, &v93);
      v20 = v37->SpecialApcDisable++ == -1;
      if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
        KiCheckForKernelApcDelivery(v44, v43, v45, v46);
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v41, (ULONG_PTR)&ExpSvmDeviceListLock);
      if ( v41 )
        *(_BYTE *)(v41 + 26) |= 1u;
      v48 = (__int64 *)ExpSvmDevices;
      if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
        goto LABEL_98;
      do
      {
        v49 = v48;
        v50 = v48;
        P = v48;
        if ( v48[2] == a1 )
          break;
        v48 = (__int64 *)*v48;
      }
      while ( v48 != &ExpSvmDevices );
      if ( v50[2] != a1 )
      {
        v50 = 0LL;
        P = 0LL;
        v49 = 0LL;
      }
      if ( !v49 )
LABEL_98:
        Interface = ExpPrepareNewSvmDevice(a1, Flink, v96, &P);
      else
        ++*((_DWORD *)v50 + 6);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&ExpSvmDeviceListLock);
      v88[0] = 0;
      v51 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
        v52 = MmGetSessionIdEx((__int64)v51->ApcState.Process);
      else
        v52 = -1;
      --v51->SpecialApcDisable;
      v53 = ++v51->AbAllocationRegionCount;
      v54 = ((char)v51->AbEntrySummary | (char)v51->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v20 = !_BitScanReverse((unsigned int *)&v55, v54);
        if ( v20 )
          break;
        v56 = (__int64)&v51->LockEntries[v55];
        v54 &= ~(1 << v55);
        if ( (*(_BYTE *)(v56 + 26) & 1) != 0
          && (*(_DWORD *)(v56 + 32) & 1) == 0
          && (*(_QWORD *)(v56 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v56 + 40) == v52 )
        {
          *(_BYTE *)(v56 + 26) &= ~1u;
          if ( *(_QWORD *)(v56 + 32) )
          {
            if ( v56 )
            {
              *(_BYTE *)(v56 + 32) |= 2u;
              if ( *(__int64 *)(v56 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v56);
              v57 = *(_DWORD *)(v56 + 88) & 0x1FFFF;
              v58 = *(_DWORD *)(v56 + 88) & 0xFFFE0000;
              *(_BYTE *)(v56 + 25) &= ~1u;
              v88[0] = v57;
              *(_DWORD *)(v56 + 88) = v58;
              *(_QWORD *)(v56 + 32) = 0LL;
              v59 = 1 << ((char)(v56 - LOBYTE(v51->LockEntries)) / 96);
              if ( v53 == 1 )
                v51->AbEntrySummary |= v59;
              else
                _InterlockedOr8((volatile signed __int8 *)&v51->AbOrphanedEntrySummary, v59);
              goto LABEL_117;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v51->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v51, (ULONG_PTR)&ExpSvmDeviceListLock, v52, 0LL);
LABEL_117:
      --v51->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v51, (__int64)&ExpSvmDeviceListLock, v88);
      v20 = v51->SpecialApcDisable++ == -1;
      if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v51->ApcState.ApcListHead[0].Flink != &v51->152 )
        KiCheckForKernelApcDelivery(v61, v60, v62, v63);
      v22 = Interface;
      if ( Interface >= 0 )
      {
        PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64507845u);
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          v65 = 0;
          PoolWithTag[1].Flink = (struct _LIST_ENTRY *)P;
          v66 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v66 <= 0xFu )
          {
            v67 = KeGetCurrentPrcb()->SchedulerAssist;
            v67[5] |= (-1 << (v66 + 1)) & 0xFFFC;
          }
          KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].DirectoryTableBase, &LockHandle);
          p_ThreadListHead = &Process[2].ThreadListHead;
          v69 = Process[2].ThreadListHead.Flink;
          if ( v69 == &Process[2].ThreadListHead )
          {
LABEL_133:
            v70 = p_ThreadListHead->Flink;
            if ( p_ThreadListHead->Flink->Blink != p_ThreadListHead )
              goto LABEL_147;
            v6->Flink = v70;
            v6->Blink = p_ThreadListHead;
            v70->Blink = v6;
            p_ThreadListHead->Flink = v6;
          }
          else
          {
            while ( v69[1].Flink[1].Flink != (struct _LIST_ENTRY *)a1 )
            {
              v69 = v69->Flink;
              if ( v69 == p_ThreadListHead )
                goto LABEL_133;
            }
            v65 = 1;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v71 = KeGetCurrentIrql();
              if ( v71 <= 0xFu && v66 <= 0xFu && v71 >= 2u )
              {
                v72 = KeGetCurrentPrcb();
                v73 = v72->SchedulerAssist;
                v74 = ~(unsigned __int16)(-1LL << (v66 + 1));
                v20 = (v74 & v73[5]) == 0;
                v73[5] &= v74;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick((__int64)v72);
              }
            }
          }
          __writecr8(v66);
          if ( v65 )
          {
            ExFreePoolWithTag(v6, 0);
            v22 = Interface;
            v6 = 0LL;
          }
          else
          {
            MmEnableProcessSvm();
            Interface = (*(__int64 (__fastcall **)(struct _LIST_ENTRY *, _QWORD))(HalIommuDispatch + 32))(
                          Flink,
                          *((_QWORD *)P + 14));
            v22 = Interface;
            if ( Interface >= 0 )
            {
              v22 = (*(__int64 (__fastcall **)(struct _LIST_ENTRY *, unsigned __int64))(HalIommuDispatch + 40))(
                      Flink,
                      Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL);
              Interface = v22;
            }
          }
        }
        else
        {
          v22 = -1073741670;
          Interface = -1073741670;
        }
      }
LABEL_32:
      ((void (__fastcall *)(_QWORD))v96[3])(v96[1]);
      if ( v22 >= 0 )
      {
        *a2 = Blink;
LABEL_149:
        v5 = -1;
        goto LABEL_150;
      }
      if ( P )
        ExpSvmDereferenceDevice(P);
      if ( !v6 )
        goto LABEL_149;
      v23 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v23 <= 0xFu )
      {
        v24 = KeGetCurrentPrcb()->SchedulerAssist;
        v24[5] |= (-1 << (v23 + 1)) & 0xFFFC;
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].DirectoryTableBase, &LockHandle);
      v25 = v6->Flink;
      v26 = v6->Blink;
      if ( v6->Flink->Blink == v6 && v26->Flink == v6 )
      {
        v26->Flink = v25;
        v25->Blink = v26;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v27 = KeGetCurrentIrql();
            if ( v27 <= 0xFu && v23 <= 0xFu && v27 >= 2u )
            {
              v28 = KeGetCurrentPrcb();
              v29 = v28->SchedulerAssist;
              v30 = ~(unsigned __int16)(-1LL << (v23 + 1));
              v20 = (v30 & v29[5]) == 0;
              v29[5] &= v30;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick((__int64)v28);
            }
          }
        }
        __writecr8(v23);
        ExFreePoolWithTag(v6, 0);
        goto LABEL_149;
      }
LABEL_147:
      __fastfail(3u);
    }
LABEL_14:
    _interlockedbittestandset((volatile signed __int32 *)&v11->116 + 1, 0x10u);
    goto LABEL_22;
  }
LABEL_150:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[2].ProfileListHead.Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[2].ProfileListHead.Blink);
  v75 = KeGetCurrentThread();
  v89 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&Process[2].ProfileListHead.Blink) == 1 )
    v5 = MmGetSessionIdEx((__int64)v75->ApcState.Process);
  --v75->SpecialApcDisable;
  v76 = ++v75->AbAllocationRegionCount;
  v77 = ((char)v75->AbEntrySummary | (char)v75->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v20 = !_BitScanReverse((unsigned int *)&v79, v77);
    v88[1] = v79;
    if ( v20 )
      goto LABEL_161;
    v78 = (__int64)&v75->LockEntries[v79];
    v77 &= ~(1 << v79);
    if ( (*(_BYTE *)(v78 + 26) & 1) != 0
      && (*(_DWORD *)(v78 + 32) & 1) == 0
      && (*(_QWORD *)(v78 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&Process[2].ProfileListHead.Blink & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v78 + 40) == v5 )
    {
      *(_BYTE *)(v78 + 26) &= ~1u;
      if ( *(_QWORD *)(v78 + 32) )
        break;
    }
  }
  if ( !v78 )
  {
LABEL_161:
    if ( (*((_DWORD *)&v75->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v75, (ULONG_PTR)&Process[2].ProfileListHead.Blink, v5, 0LL);
    goto LABEL_168;
  }
  *(_BYTE *)(v78 + 32) |= 2u;
  if ( *(__int64 *)(v78 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v78);
  v80 = *(_DWORD *)(v78 + 88) & 0x1FFFF;
  v81 = *(_DWORD *)(v78 + 88) & 0xFFFE0000;
  *(_BYTE *)(v78 + 25) &= ~1u;
  v89 = v80;
  *(_DWORD *)(v78 + 88) = v81;
  *(_QWORD *)(v78 + 32) = 0LL;
  v82 = (signed __int64)(v78 - (unsigned __int64)v75->LockEntries) / 96;
  if ( v76 == 1 )
    v75->AbEntrySummary |= 1 << v82;
  else
    _InterlockedOr8((volatile signed __int8 *)&v75->AbOrphanedEntrySummary, 1 << v82);
LABEL_168:
  --v75->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v75, (__int64)&Process[2].ProfileListHead.Blink, &v89);
  v20 = v75->SpecialApcDisable++ == -1;
  if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v75->ApcState.ApcListHead[0].Flink != &v75->152 )
    KiCheckForKernelApcDelivery(1LL, v83, v84, v85);
  KiLeaveGuardedRegionUnsafe((__int64)v95, v83, v84, (__int64)v85);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  return (unsigned int)Interface;
}
