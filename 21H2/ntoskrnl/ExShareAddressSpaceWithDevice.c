/*
 * XREFs of ExShareAddressSpaceWithDevice @ 0x1405B7280
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14022CB20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     MmEnableProcessSvm @ 0x14052CC90 (MmEnableProcessSvm.c)
 *     ExpAllocateAsid @ 0x1405B870C (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x1405B8B38 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x1405B8E74 (ExpSvmDereferenceDevice.c)
 *     IoQueryInterface @ 0x140765590 (IoQueryInterface.c)
 *     ExpAssignPasid @ 0x140956C54 (ExpAssignPasid.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  _DWORD *v14; // r9
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v16; // dl
  int SessionId; // eax
  _DWORD *v18; // r9
  bool v19; // zf
  unsigned int Blink; // r12d
  int v21; // ebx
  unsigned __int8 v22; // bl
  _DWORD *v23; // r9
  struct _LIST_ENTRY *v24; // rcx
  struct _LIST_ENTRY *v25; // rax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v32; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v34; // eax
  struct _KTHREAD *v35; // rbx
  __int64 v36; // rcx
  unsigned __int8 v37; // al
  char v38; // dl
  __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // rcx
  __int64 *v43; // rax
  __int64 *v44; // rdx
  __int64 *v45; // rcx
  struct _KTHREAD *v46; // rbx
  unsigned int v47; // edx
  unsigned __int8 v48; // r14
  _DWORD *v49; // r9
  unsigned int v50; // r8d
  __int64 v51; // rcx
  __int64 v52; // rsi
  int v53; // eax
  unsigned int v54; // ecx
  unsigned __int8 v55; // al
  __int64 v56; // rcx
  struct _LIST_ENTRY *PoolWithTag; // rax
  char v58; // di
  unsigned __int8 v59; // bl
  _DWORD *v60; // r9
  _LIST_ENTRY *p_ThreadListHead; // rcx
  _LIST_ENTRY *v62; // rdx
  struct _LIST_ENTRY *v63; // rax
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r10
  _DWORD *v66; // r9
  int v67; // eax
  struct _KTHREAD *v68; // rbx
  unsigned __int8 v69; // r14
  unsigned int v70; // edx
  __int64 v71; // rdi
  __int64 v72; // rcx
  int v73; // ecx
  unsigned int v74; // edx
  __int64 v75; // rdx
  struct _LIST_ENTRY *Flink; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  _DWORD v78[2]; // [rsp+50h] [rbp-79h] BYREF
  int v79; // [rsp+58h] [rbp-71h] BYREF
  int v80; // [rsp+5Ch] [rbp-6Dh]
  int v81; // [rsp+60h] [rbp-69h] BYREF
  int v82; // [rsp+64h] [rbp-65h]
  int v83; // [rsp+68h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-59h] BYREF
  struct _KTHREAD *v85; // [rsp+88h] [rbp-41h]
  _QWORD v86[18]; // [rsp+90h] [rbp-39h] BYREF
  int Interface; // [rsp+140h] [rbp+77h]

  v2 = 0LL;
  Flink = 0LL;
  memset(v86, 0, 0x50uLL);
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
  v85 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    return 3221225738LL;
  Interface = IoQueryInterface(a1, 0, (unsigned int)&GUID_IOMMU_BUS_INTERFACE, 80, 1, a1, v86);
  if ( Interface >= 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = KeGetCurrentThread();
    p_Blink = &Process[2].ProfileListHead.Blink;
    v81 = 0;
    --v11->SpecialApcDisable;
    if ( ++v11->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v11, (ULONG_PTR)&Process[2].ProfileListHead.Blink, KeGetCurrentIrql(), 0LL);
    LOBYTE(v13) = v11->AbEntrySummary;
    v80 = 0;
    v14 = (_DWORD *)0xFFFF800000000000LL;
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
    v16 = v13;
    _BitScanForward((unsigned int *)&v13, (unsigned __int8)v13);
    v80 = v13;
    v11->AbEntrySummary = v16 & ~(1 << v13);
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
      KiAbThreadRemoveBoosts((ULONG_PTR)v11, (__int64)&Process[2].ProfileListHead.Blink, (__int64)&v81, v14);
      v19 = v11->SpecialApcDisable++ == -1;
      if ( v19 && ($C459BD0D405E8E46662177FB3D0A143F *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
        KiCheckForKernelApcDelivery(1LL);
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
          v21 = -1073741709;
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
        v21 = Interface;
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
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v18 = CurrentPrcb->SchedulerAssist;
              v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v19 = (v34 & v18[5]) == 0;
              v18[5] &= v34;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( v7 )
          (*(void (__fastcall **)(struct _LIST_ENTRY *))(HalIommuDispatch + 64))(v7);
      }
      v35 = KeGetCurrentThread();
      v83 = 0;
      --v35->SpecialApcDisable;
      if ( ++v35->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v35, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
      v82 = 0;
      LOBYTE(v36) = v35->AbEntrySummary;
      if ( !(_BYTE)v36 )
      {
        if ( !v35->AbOrphanedEntrySummary )
        {
          v39 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion((__int64)v35, (__int64)&ExpSvmDeviceListLock);
          goto LABEL_81;
        }
        v37 = v35->AbOrphanedEntrySummary;
        v35->AbOrphanedEntrySummary = 0;
        LOBYTE(v36) = v37 | v35->AbEntrySummary;
      }
      v38 = v36;
      _BitScanForward((unsigned int *)&v36, (unsigned __int8)v36);
      v82 = v36;
      v35->AbEntrySummary = v38 & ~(1 << v36);
      v39 = (__int64)&v35->LockEntries[v36];
      if ( v39 )
      {
        if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[1537] + (((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF)) == 1 )
        {
          v40 = MmGetSessionIdEx((__int64)v35->ApcState.Process);
        }
        else
        {
          v40 = -1;
        }
        *(_DWORD *)(v39 + 40) = v40;
        *(_QWORD *)(v39 + 32) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_84;
      }
LABEL_81:
      _interlockedbittestandset((volatile signed __int32 *)&v35->116 + 1, 0x10u);
LABEL_84:
      --v35->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v35, (__int64)&ExpSvmDeviceListLock, (__int64)&v83, v18);
      v19 = v35->SpecialApcDisable++ == -1;
      if ( v19 && ($C459BD0D405E8E46662177FB3D0A143F *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
        KiCheckForKernelApcDelivery(v41);
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v39, (ULONG_PTR)&ExpSvmDeviceListLock);
      if ( v39 )
        *(_BYTE *)(v39 + 26) |= 1u;
      v43 = (__int64 *)ExpSvmDevices;
      if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
        goto LABEL_98;
      do
      {
        v44 = v43;
        v45 = v43;
        P = v43;
        if ( v43[2] == a1 )
          break;
        v43 = (__int64 *)*v43;
      }
      while ( v43 != &ExpSvmDevices );
      if ( v45[2] != a1 )
      {
        v45 = 0LL;
        P = 0LL;
        v44 = 0LL;
      }
      if ( !v44 )
LABEL_98:
        Interface = ExpPrepareNewSvmDevice(a1, Flink, v86, &P);
      else
        ++*((_DWORD *)v45 + 6);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&ExpSvmDeviceListLock);
      v78[0] = 0;
      v46 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
        v47 = MmGetSessionIdEx((__int64)v46->ApcState.Process);
      else
        v47 = -1;
      --v46->SpecialApcDisable;
      v48 = ++v46->AbAllocationRegionCount;
      v49 = (_DWORD *)((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL);
      v50 = ((char)v46->AbEntrySummary | (char)v46->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v19 = !_BitScanReverse((unsigned int *)&v51, v50);
        if ( v19 )
          break;
        v52 = (__int64)&v46->LockEntries[v51];
        v50 &= ~(1 << v51);
        if ( (*(_BYTE *)(v52 + 26) & 1) != 0
          && (*(_DWORD *)(v52 + 32) & 1) == 0
          && (_DWORD *)(*(_QWORD *)(v52 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v49
          && *(_DWORD *)(v52 + 40) == v47 )
        {
          *(_BYTE *)(v52 + 26) &= ~1u;
          if ( *(_QWORD *)(v52 + 32) )
          {
            if ( v52 )
            {
              *(_BYTE *)(v52 + 32) |= 2u;
              if ( *(__int64 *)(v52 + 32) < 0 )
                KiAbEntryRemoveFromTree(v52);
              v53 = *(_DWORD *)(v52 + 88) & 0x1FFFF;
              v54 = *(_DWORD *)(v52 + 88) & 0xFFFE0000;
              *(_BYTE *)(v52 + 25) &= ~1u;
              v78[0] = v53;
              *(_DWORD *)(v52 + 88) = v54;
              *(_QWORD *)(v52 + 32) = 0LL;
              v55 = 1 << ((char)(v52 - LOBYTE(v46->LockEntries)) / 96);
              if ( v48 == 1 )
                v46->AbEntrySummary |= v55;
              else
                _InterlockedOr8((volatile signed __int8 *)&v46->AbOrphanedEntrySummary, v55);
              goto LABEL_117;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v46->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v46, (ULONG_PTR)&ExpSvmDeviceListLock, v47, 0LL);
LABEL_117:
      --v46->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v46, (__int64)&ExpSvmDeviceListLock, (__int64)v78, v49);
      v19 = v46->SpecialApcDisable++ == -1;
      if ( v19 && ($C459BD0D405E8E46662177FB3D0A143F *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
        KiCheckForKernelApcDelivery(v56);
      v21 = Interface;
      if ( Interface >= 0 )
      {
        PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64507845u);
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          v58 = 0;
          PoolWithTag[1].Flink = (struct _LIST_ENTRY *)P;
          v59 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v59 <= 0xFu )
          {
            v60 = KeGetCurrentPrcb()->SchedulerAssist;
            v60[5] |= (-1 << (v59 + 1)) & 0xFFFC;
          }
          KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].DirectoryTableBase, &LockHandle);
          p_ThreadListHead = &Process[2].ThreadListHead;
          v62 = Process[2].ThreadListHead.Flink;
          if ( v62 == &Process[2].ThreadListHead )
          {
LABEL_133:
            v63 = p_ThreadListHead->Flink;
            if ( p_ThreadListHead->Flink->Blink != p_ThreadListHead )
              goto LABEL_147;
            v6->Flink = v63;
            v6->Blink = p_ThreadListHead;
            v63->Blink = v6;
            p_ThreadListHead->Flink = v6;
          }
          else
          {
            while ( v62[1].Flink[1].Flink != (struct _LIST_ENTRY *)a1 )
            {
              v62 = v62->Flink;
              if ( v62 == p_ThreadListHead )
                goto LABEL_133;
            }
            v58 = 1;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v64 = KeGetCurrentIrql();
              if ( v64 <= 0xFu && v59 <= 0xFu && v64 >= 2u )
              {
                v65 = KeGetCurrentPrcb();
                v66 = v65->SchedulerAssist;
                v67 = ~(unsigned __int16)(-1LL << (v59 + 1));
                v19 = (v67 & v66[5]) == 0;
                v66[5] &= v67;
                if ( v19 )
                  KiRemoveSystemWorkPriorityKick((__int64)v65);
              }
            }
          }
          __writecr8(v59);
          if ( v58 )
          {
            ExFreePoolWithTag(v6, 0);
            v21 = Interface;
            v6 = 0LL;
          }
          else
          {
            MmEnableProcessSvm();
            Interface = (*(__int64 (__fastcall **)(struct _LIST_ENTRY *, _QWORD))(HalIommuDispatch + 32))(
                          Flink,
                          *((_QWORD *)P + 15));
            v21 = Interface;
            if ( Interface >= 0 )
            {
              v21 = (*(__int64 (__fastcall **)(struct _LIST_ENTRY *, unsigned __int64))(HalIommuDispatch + 40))(
                      Flink,
                      Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL);
              Interface = v21;
            }
          }
        }
        else
        {
          v21 = -1073741670;
          Interface = -1073741670;
        }
      }
LABEL_32:
      ((void (__fastcall *)(_QWORD))v86[3])(v86[1]);
      if ( v21 >= 0 )
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
      v22 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
      {
        v23 = KeGetCurrentPrcb()->SchedulerAssist;
        v23[5] |= (-1 << (v22 + 1)) & 0xFFFC;
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].DirectoryTableBase, &LockHandle);
      v24 = v6->Flink;
      v25 = v6->Blink;
      if ( v6->Flink->Blink == v6 && v25->Flink == v6 )
      {
        v25->Flink = v24;
        v24->Blink = v25;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v26 = KeGetCurrentIrql();
            if ( v26 <= 0xFu && v22 <= 0xFu && v26 >= 2u )
            {
              v27 = KeGetCurrentPrcb();
              v28 = v27->SchedulerAssist;
              v29 = ~(unsigned __int16)(-1LL << (v22 + 1));
              v19 = (v29 & v28[5]) == 0;
              v28[5] &= v29;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick((__int64)v27);
            }
          }
        }
        __writecr8(v22);
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
  v68 = KeGetCurrentThread();
  v79 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&Process[2].ProfileListHead.Blink) == 1 )
    v5 = MmGetSessionIdEx((__int64)v68->ApcState.Process);
  --v68->SpecialApcDisable;
  v69 = ++v68->AbAllocationRegionCount;
  v70 = ((char)v68->AbEntrySummary | (char)v68->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v19 = !_BitScanReverse((unsigned int *)&v72, v70);
    v78[1] = v72;
    if ( v19 )
      goto LABEL_161;
    v71 = (__int64)&v68->LockEntries[v72];
    v70 &= ~(1 << v72);
    if ( (*(_BYTE *)(v71 + 26) & 1) != 0
      && (*(_DWORD *)(v71 + 32) & 1) == 0
      && (*(_QWORD *)(v71 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&Process[2].ProfileListHead.Blink & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v71 + 40) == v5 )
    {
      *(_BYTE *)(v71 + 26) &= ~1u;
      if ( *(_QWORD *)(v71 + 32) )
        break;
    }
  }
  if ( !v71 )
  {
LABEL_161:
    if ( (*((_DWORD *)&v68->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v68, (ULONG_PTR)&Process[2].ProfileListHead.Blink, v5, 0LL);
    goto LABEL_168;
  }
  *(_BYTE *)(v71 + 32) |= 2u;
  if ( *(__int64 *)(v71 + 32) < 0 )
    KiAbEntryRemoveFromTree(v71);
  v73 = *(_DWORD *)(v71 + 88) & 0x1FFFF;
  v74 = *(_DWORD *)(v71 + 88) & 0xFFFE0000;
  *(_BYTE *)(v71 + 25) &= ~1u;
  v79 = v73;
  *(_DWORD *)(v71 + 88) = v74;
  *(_QWORD *)(v71 + 32) = 0LL;
  v75 = (signed __int64)(v71 - (unsigned __int64)v68->LockEntries) / 96;
  if ( v69 == 1 )
    v68->AbEntrySummary |= 1 << v75;
  else
    _InterlockedOr8((volatile signed __int8 *)&v68->AbOrphanedEntrySummary, 1 << v75);
LABEL_168:
  --v68->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v68, (__int64)&Process[2].ProfileListHead.Blink, (__int64)&v79, (_DWORD *)1);
  v19 = v68->SpecialApcDisable++ == -1;
  if ( v19 && ($C459BD0D405E8E46662177FB3D0A143F *)v68->ApcState.ApcListHead[0].Flink != &v68->152 )
    KiCheckForKernelApcDelivery(1LL);
  KiLeaveGuardedRegionUnsafe((__int64)v85);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  return (unsigned int)Interface;
}
