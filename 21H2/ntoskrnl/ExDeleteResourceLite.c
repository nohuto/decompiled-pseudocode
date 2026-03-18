/*
 * XREFs of ExDeleteResourceLite @ 0x14028A7C0
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 *     CcDeallocateBcb @ 0x14028A78C (CcDeallocateBcb.c)
 *     DifExDeleteResourceLiteWrapper @ 0x140607F60 (DifExDeleteResourceLiteWrapper.c)
 *     CmpDelayFreeRMWorker @ 0x1406E5950 (CmpDelayFreeRMWorker.c)
 *     RtlDestroyHeap @ 0x1406E9E30 (RtlDestroyHeap.c)
 *     SepTokenDeleteMethod @ 0x1406FE720 (SepTokenDeleteMethod.c)
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
 *     PnpDereferenceNotify @ 0x14078D340 (PnpDereferenceNotify.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 *     DrvDbOpenContext @ 0x140827238 (DrvDbOpenContext.c)
 *     MUIInitializeResourceLock @ 0x14085F65C (MUIInitializeResourceLock.c)
 *     PiDrvDbDestroyNode @ 0x14095BDAC (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x1409AB5A0 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x140A2296C (_PnpCtxCloseMachine.c)
 *     DrvDbDestroyDatabaseNode @ 0x140A30510 (DrvDbDestroyDatabaseNode.c)
 * Callees:
 *     ExpOwnerEntryToThread @ 0x14021A758 (ExpOwnerEntryToThread.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140220C30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1402AF060 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14063D8B0 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v5; // rcx
  int v6; // eax
  _DWORD *v7; // rcx
  int v8; // eax
  LONG i; // ecx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  int v14; // eax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  ERESOURCE_THREAD OwnerThread; // rbx
  __int64 v21; // rdx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  POWNER_ENTRY OwnerTable; // rcx
  unsigned int v24; // ebp
  __int64 *j; // rdi
  ULONG_PTR v26; // rbx
  __int64 v27; // rdx
  int v28; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v31; // [rsp+50h] [rbp+8h] BYREF

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  __incgsdword(0x8A60u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v31 = 0;
    v5 = CurrentPrcb->SchedulerAssist;
    if ( v5 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v6 = v5[6];
        v5[6] = v6 + 1;
        if ( v6 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
    {
      v7 = CurrentPrcb->SchedulerAssist;
      if ( v7 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v8 = v7[6] - 1;
          v7[6] = v8;
          if ( !v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v31 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql);
    }
    for ( i = ExpResourceSpinLock; (ExpResourceSpinLock & 0xBFFFFFFF) != 0x80000000; i = ExpResourceSpinLock )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(&ExpResourceSpinLock, 0x40000000u);
      KeYieldProcessorEx(&v31);
    }
  }
  Flink = Resource->SystemResourcesList.Flink;
  Blink = Resource->SystemResourcesList.Blink;
  if ( (PERESOURCE)Resource->SystemResourcesList.Flink->Blink != Resource || (PERESOURCE)Blink->Flink != Resource )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  v12 = KeGetCurrentPrcb();
  v13 = v12->SchedulerAssist;
  if ( v13 )
  {
    if ( v12->NestingLevel <= 1u )
    {
      v14 = v13[6] - 1;
      v13[6] = v14;
      if ( !v14 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
  }
  __writecr8(CurrentIrql);
  Resource->SystemResourcesList.Flink = 0LL;
  Resource->SystemResourcesList.Blink = 0LL;
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_51;
  }
  if ( OwnerThread )
  {
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
      && (Resource->OwnerEntry.TableSize & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 1uLL);
    }
    TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    if ( (*(_BYTE *)&TableSize & 1) != 0 )
    {
      LOBYTE(v21) = 1;
      PsBoostThreadIoEx(OwnerThread, v21, 0LL, 0LL);
      TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&TableSize & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1444));
      TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&TableSize & 2) != 0 )
      ObDereferenceObjectDeferDelete((PVOID)OwnerThread);
  }
LABEL_51:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    v24 = 1;
    for ( j = (__int64 *)&OwnerTable->0; v24 < OwnerTable->TableSize; ++v24 )
    {
      j += 2;
      v26 = ExpOwnerEntryToThread(j - 1);
      if ( v26 )
      {
        if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
          && (*(_DWORD *)j & 2) == 0
          && (struct _KTHREAD *)v26 != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), v26, 2uLL);
        }
        v28 = *(_DWORD *)j;
        if ( (*(_DWORD *)j & 1) != 0 )
        {
          LOBYTE(v27) = 1;
          PsBoostThreadIoEx(v26, v27, 0LL, 0LL);
          v28 = *(_DWORD *)j;
        }
        if ( (v28 & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v26 + 1444));
          v28 = *(_DWORD *)j;
        }
        if ( (v28 & 2) != 0 )
          ObDereferenceObjectDeferDelete((PVOID)v26);
      }
      OwnerTable = Resource->OwnerTable;
    }
    ExFreePoolWithTag(OwnerTable, 0);
  }
  return 0;
}
