/*
 * XREFs of ExShareAddressSpaceWithDevice @ 0x1405B74B0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D1370 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmEnableProcessSvm @ 0x14052CED0 (MmEnableProcessSvm.c)
 *     ExpAllocateAsid @ 0x1405B893C (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x1405B8D68 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x1405B90A4 (ExpSvmDereferenceDevice.c)
 *     IoQueryInterface @ 0x140765750 (IoQueryInterface.c)
 *     ExpAssignPasid @ 0x140956E24 (ExpAssignPasid.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  bool v17; // zf
  unsigned int Blink; // r12d
  int v19; // ebx
  unsigned __int8 v20; // bl
  _DWORD *v21; // r9
  struct _LIST_ENTRY *v22; // rcx
  struct _LIST_ENTRY *v23; // rax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v32; // r9
  int v33; // eax
  struct _KTHREAD *v34; // rbx
  __int64 v35; // rcx
  unsigned __int8 v36; // al
  char v37; // dl
  __int64 v38; // rsi
  int v39; // eax
  __int64 *v41; // rax
  __int64 *v42; // rdx
  __int64 *v43; // rcx
  struct _KTHREAD *v44; // rbx
  unsigned int v45; // edx
  unsigned __int8 v46; // r14
  unsigned int v47; // r8d
  __int64 v48; // rcx
  __int64 v49; // rsi
  int v50; // eax
  unsigned int v51; // ecx
  unsigned __int8 v52; // al
  struct _LIST_ENTRY *PoolWithTag; // rax
  char v54; // di
  unsigned __int8 v55; // bl
  _DWORD *v56; // r9
  _LIST_ENTRY *p_ThreadListHead; // rcx
  _LIST_ENTRY *v58; // rdx
  struct _LIST_ENTRY *v59; // rax
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // eax
  struct _KTHREAD *v64; // rbx
  unsigned __int8 v65; // r14
  unsigned int v66; // edx
  __int64 v67; // rdi
  __int64 v68; // rcx
  int v69; // ecx
  unsigned int v70; // edx
  __int64 v71; // rdx
  struct _LIST_ENTRY *Flink; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v74[2]; // [rsp+50h] [rbp-79h] BYREF
  int v75; // [rsp+58h] [rbp-71h] BYREF
  int v76; // [rsp+5Ch] [rbp-6Dh]
  unsigned int v77; // [rsp+60h] [rbp-69h] BYREF
  int v78; // [rsp+64h] [rbp-65h]
  unsigned int v79; // [rsp+68h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-59h] BYREF
  struct _KTHREAD *v81; // [rsp+88h] [rbp-41h]
  _QWORD v82[18]; // [rsp+90h] [rbp-39h] BYREF
  int Interface; // [rsp+140h] [rbp+77h]

  v2 = 0LL;
  Flink = 0LL;
  memset(v82, 0, 0x50uLL);
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
  v81 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    return 3221225738LL;
  Interface = IoQueryInterface(a1, 0, (unsigned int)&GUID_IOMMU_BUS_INTERFACE, 80, 1, a1, v82);
  if ( Interface >= 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = KeGetCurrentThread();
    p_Blink = &Process[2].ProfileListHead.Blink;
    v77 = 0;
    --v11->SpecialApcDisable;
    if ( ++v11->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v11, (ULONG_PTR)&Process[2].ProfileListHead.Blink, KeGetCurrentIrql(), 0LL);
    LOBYTE(v13) = v11->AbEntrySummary;
    v76 = 0;
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
    v76 = v13;
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
      KiAbThreadRemoveBoosts((ULONG_PTR)v11, (__int64)&Process[2].ProfileListHead.Blink, &v77);
      v17 = v11->SpecialApcDisable++ == -1;
      if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
        KiCheckForKernelApcDelivery();
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&Process[2].ProfileListHead.Blink,
          (_RTL_BALANCED_NODE *)v2,
          (ULONG_PTR)&Process[2].ProfileListHead.Blink);
      if ( v2 )
        *(_BYTE *)(v2 + 26) |= 1u;
      Blink = (unsigned int)Process[2].Header.WaitListHead.Blink;
      if ( !Blink )
      {
        Blink = ExpAllocateAsid();
        if ( !Blink )
        {
          v19 = -1073741709;
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
        v19 = Interface;
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
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v32 = CurrentPrcb->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v17 = (v33 & v32[5]) == 0;
              v32[5] &= v33;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( v7 )
          (*(void (__fastcall **)(struct _LIST_ENTRY *))(HalIommuDispatch + 64))(v7);
      }
      v34 = KeGetCurrentThread();
      v79 = 0;
      --v34->SpecialApcDisable;
      if ( ++v34->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v34, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
      v78 = 0;
      LOBYTE(v35) = v34->AbEntrySummary;
      if ( !(_BYTE)v35 )
      {
        if ( !v34->AbOrphanedEntrySummary )
        {
          v38 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion((__int64)v34, (__int64)&ExpSvmDeviceListLock);
          goto LABEL_81;
        }
        v36 = v34->AbOrphanedEntrySummary;
        v34->AbOrphanedEntrySummary = 0;
        LOBYTE(v35) = v36 | v34->AbEntrySummary;
      }
      v37 = v35;
      _BitScanForward((unsigned int *)&v35, (unsigned __int8)v35);
      v78 = v35;
      v34->AbEntrySummary = v37 & ~(1 << v35);
      v38 = (__int64)&v34->LockEntries[v35];
      if ( v38 )
      {
        if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[1537] + (((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF)) == 1 )
        {
          v39 = MmGetSessionIdEx((__int64)v34->ApcState.Process);
        }
        else
        {
          v39 = -1;
        }
        *(_DWORD *)(v38 + 40) = v39;
        *(_QWORD *)(v38 + 32) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_84;
      }
LABEL_81:
      _interlockedbittestandset((volatile signed __int32 *)&v34->116 + 1, 0x10u);
LABEL_84:
      --v34->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v34, (__int64)&ExpSvmDeviceListLock, &v79);
      v17 = v34->SpecialApcDisable++ == -1;
      if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
        KiCheckForKernelApcDelivery();
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          &ExpSvmDeviceListLock,
          (_RTL_BALANCED_NODE *)v38,
          (ULONG_PTR)&ExpSvmDeviceListLock);
      if ( v38 )
        *(_BYTE *)(v38 + 26) |= 1u;
      v41 = (__int64 *)ExpSvmDevices;
      if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
        goto LABEL_98;
      do
      {
        v42 = v41;
        v43 = v41;
        P = v41;
        if ( v41[2] == a1 )
          break;
        v41 = (__int64 *)*v41;
      }
      while ( v41 != &ExpSvmDevices );
      if ( v43[2] != a1 )
      {
        v43 = 0LL;
        P = 0LL;
        v42 = 0LL;
      }
      if ( !v42 )
LABEL_98:
        Interface = ExpPrepareNewSvmDevice(a1, Flink, v82, &P);
      else
        ++*((_DWORD *)v43 + 6);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&ExpSvmDeviceListLock);
      v74[0] = 0;
      v44 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
        v45 = MmGetSessionIdEx((__int64)v44->ApcState.Process);
      else
        v45 = -1;
      --v44->SpecialApcDisable;
      v46 = ++v44->AbAllocationRegionCount;
      v47 = ((char)v44->AbEntrySummary | (char)v44->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v17 = !_BitScanReverse((unsigned int *)&v48, v47);
        if ( v17 )
          break;
        v49 = (__int64)&v44->LockEntries[v48];
        v47 &= ~(1 << v48);
        if ( (*(_BYTE *)(v49 + 26) & 1) != 0
          && (*(_DWORD *)(v49 + 32) & 1) == 0
          && (*(_QWORD *)(v49 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v49 + 40) == v45 )
        {
          *(_BYTE *)(v49 + 26) &= ~1u;
          if ( *(_QWORD *)(v49 + 32) )
          {
            if ( v49 )
            {
              *(_BYTE *)(v49 + 32) |= 2u;
              if ( *(__int64 *)(v49 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v49);
              v50 = *(_DWORD *)(v49 + 88) & 0x1FFFF;
              v51 = *(_DWORD *)(v49 + 88) & 0xFFFE0000;
              *(_BYTE *)(v49 + 25) &= ~1u;
              v74[0] = v50;
              *(_DWORD *)(v49 + 88) = v51;
              *(_QWORD *)(v49 + 32) = 0LL;
              v52 = 1 << ((char)(v49 - LOBYTE(v44->LockEntries)) / 96);
              if ( v46 == 1 )
                v44->AbEntrySummary |= v52;
              else
                _InterlockedOr8((volatile signed __int8 *)&v44->AbOrphanedEntrySummary, v52);
              goto LABEL_117;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v44->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v44, (ULONG_PTR)&ExpSvmDeviceListLock, v45, 0LL);
LABEL_117:
      --v44->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v44, (__int64)&ExpSvmDeviceListLock, v74);
      v17 = v44->SpecialApcDisable++ == -1;
      if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
        KiCheckForKernelApcDelivery();
      v19 = Interface;
      if ( Interface >= 0 )
      {
        PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64507845u);
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          v54 = 0;
          PoolWithTag[1].Flink = (struct _LIST_ENTRY *)P;
          v55 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v55 <= 0xFu )
          {
            v56 = KeGetCurrentPrcb()->SchedulerAssist;
            v56[5] |= (-1 << (v55 + 1)) & 0xFFFC;
          }
          KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].DirectoryTableBase, &LockHandle);
          p_ThreadListHead = &Process[2].ThreadListHead;
          v58 = Process[2].ThreadListHead.Flink;
          if ( v58 == &Process[2].ThreadListHead )
          {
LABEL_133:
            v59 = p_ThreadListHead->Flink;
            if ( p_ThreadListHead->Flink->Blink != p_ThreadListHead )
              goto LABEL_147;
            v6->Flink = v59;
            v6->Blink = p_ThreadListHead;
            v59->Blink = v6;
            p_ThreadListHead->Flink = v6;
          }
          else
          {
            while ( v58[1].Flink[1].Flink != (struct _LIST_ENTRY *)a1 )
            {
              v58 = v58->Flink;
              if ( v58 == p_ThreadListHead )
                goto LABEL_133;
            }
            v54 = 1;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v60 = KeGetCurrentIrql();
              if ( v60 <= 0xFu && v55 <= 0xFu && v60 >= 2u )
              {
                v61 = KeGetCurrentPrcb();
                v62 = v61->SchedulerAssist;
                v63 = ~(unsigned __int16)(-1LL << (v55 + 1));
                v17 = (v63 & v62[5]) == 0;
                v62[5] &= v63;
                if ( v17 )
                  KiRemoveSystemWorkPriorityKick((__int64)v61);
              }
            }
          }
          __writecr8(v55);
          if ( v54 )
          {
            ExFreePoolWithTag(v6, 0);
            v19 = Interface;
            v6 = 0LL;
          }
          else
          {
            MmEnableProcessSvm();
            Interface = (*(__int64 (__fastcall **)(struct _LIST_ENTRY *, _QWORD))(HalIommuDispatch + 32))(
                          Flink,
                          *((_QWORD *)P + 15));
            v19 = Interface;
            if ( Interface >= 0 )
            {
              v19 = (*(__int64 (__fastcall **)(struct _LIST_ENTRY *, unsigned __int64))(HalIommuDispatch + 40))(
                      Flink,
                      Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL);
              Interface = v19;
            }
          }
        }
        else
        {
          v19 = -1073741670;
          Interface = -1073741670;
        }
      }
LABEL_32:
      ((void (__fastcall *)(_QWORD))v82[3])(v82[1]);
      if ( v19 >= 0 )
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
      v20 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 <= 0xFu )
      {
        v21 = KeGetCurrentPrcb()->SchedulerAssist;
        v21[5] |= (-1 << (v20 + 1)) & 0xFFFC;
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].DirectoryTableBase, &LockHandle);
      v22 = v6->Flink;
      v23 = v6->Blink;
      if ( v6->Flink->Blink == v6 && v23->Flink == v6 )
      {
        v23->Flink = v22;
        v22->Blink = v23;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && v20 <= 0xFu && v24 >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              v26 = v25->SchedulerAssist;
              v27 = ~(unsigned __int16)(-1LL << (v20 + 1));
              v17 = (v27 & v26[5]) == 0;
              v26[5] &= v27;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick((__int64)v25);
            }
          }
        }
        __writecr8(v20);
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
  v64 = KeGetCurrentThread();
  v75 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&Process[2].ProfileListHead.Blink) == 1 )
    v5 = MmGetSessionIdEx((__int64)v64->ApcState.Process);
  --v64->SpecialApcDisable;
  v65 = ++v64->AbAllocationRegionCount;
  v66 = ((char)v64->AbEntrySummary | (char)v64->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v68, v66);
    v74[1] = v68;
    if ( v17 )
      goto LABEL_161;
    v67 = (__int64)&v64->LockEntries[v68];
    v66 &= ~(1 << v68);
    if ( (*(_BYTE *)(v67 + 26) & 1) != 0
      && (*(_DWORD *)(v67 + 32) & 1) == 0
      && (*(_QWORD *)(v67 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&Process[2].ProfileListHead.Blink & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v67 + 40) == v5 )
    {
      *(_BYTE *)(v67 + 26) &= ~1u;
      if ( *(_QWORD *)(v67 + 32) )
        break;
    }
  }
  if ( !v67 )
  {
LABEL_161:
    if ( (*((_DWORD *)&v64->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v64, (ULONG_PTR)&Process[2].ProfileListHead.Blink, v5, 0LL);
    goto LABEL_168;
  }
  *(_BYTE *)(v67 + 32) |= 2u;
  if ( *(__int64 *)(v67 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v67);
  v69 = *(_DWORD *)(v67 + 88) & 0x1FFFF;
  v70 = *(_DWORD *)(v67 + 88) & 0xFFFE0000;
  *(_BYTE *)(v67 + 25) &= ~1u;
  v75 = v69;
  *(_DWORD *)(v67 + 88) = v70;
  *(_QWORD *)(v67 + 32) = 0LL;
  v71 = (signed __int64)(v67 - (unsigned __int64)v64->LockEntries) / 96;
  if ( v65 == 1 )
    v64->AbEntrySummary |= 1 << v71;
  else
    _InterlockedOr8((volatile signed __int8 *)&v64->AbOrphanedEntrySummary, 1 << v71);
LABEL_168:
  --v64->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v64, (__int64)&Process[2].ProfileListHead.Blink, (unsigned int *)&v75);
  v17 = v64->SpecialApcDisable++ == -1;
  if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)v64->ApcState.ApcListHead[0].Flink != &v64->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe((__int64)v81);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  return (unsigned int)Interface;
}
