/*
 * XREFs of ExDeleteResourceLite @ 0x140231040
 * Callers:
 *     CcDeallocateBcb @ 0x140231000 (CcDeallocateBcb.c)
 *     PspJobDelete @ 0x1402D96F0 (PspJobDelete.c)
 *     SepTokenDeleteMethod @ 0x1405EE0D0 (SepTokenDeleteMethod.c)
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 *     PnpDereferenceNotify @ 0x140685008 (PnpDereferenceNotify.c)
 *     CmpDelayFreeRMWorker @ 0x1406E91B0 (CmpDelayFreeRMWorker.c)
 *     RtlCreateHeap @ 0x140752DF0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x14075E030 (RtlDestroyHeap.c)
 *     DrvDbOpenContext @ 0x14078B4DC (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14078B738 (DrvDbCreateDatabaseNode.c)
 *     MUIInitializeResourceLock @ 0x1407B9EAC (MUIInitializeResourceLock.c)
 *     PiDrvDbDestroyNode @ 0x1408B18D4 (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x140901210 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x14096FCAC (_PnpCtxCloseMachine.c)
 *     DrvDbDestroyDatabaseNode @ 0x140979FDC (DrvDbDestroyDatabaseNode.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14023C7F0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14024CFC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140263210 (ExpResourceEnforcesOwnershipTransfer.c)
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x1402DB77C (PsBoostThreadIoQoS.c)
 *     ExpOwnerEntryToThread @ 0x1402DCDC8 (ExpOwnerEntryToThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v4; // rcx
  signed __int32 v5; // edx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _KPRCB *v8; // rcx
  _DWORD *v9; // rdx
  ERESOURCE_THREAD OwnerThread; // rdi
  POWNER_ENTRY OwnerTable; // rcx
  __int64 v13; // rdx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  unsigned int v15; // edi
  ULONG *i; // rsi
  struct _KTHREAD *v17; // rbp
  _DWORD *v18; // rcx
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  int v21; // eax
  bool v22; // zf
  signed __int32 v23; // eax
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  __int64 v29; // rdx
  ULONG v30; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v32; // [rsp+58h] [rbp+10h] BYREF

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  __incgsdword(0x8660u);
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
    v32 = 0;
    v4 = CurrentPrcb->SchedulerAssist;
    if ( v4 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v4[6];
        v4[6] = v20 + 1;
        if ( v20 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
    {
      v18 = CurrentPrcb->SchedulerAssist;
      if ( v18 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v21 = v18[6] - 1;
          v18[6] = v21;
          if ( !v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v32 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql);
    }
    v5 = ExpResourceSpinLock;
    while ( (v5 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v23 = _InterlockedCompareExchange(&ExpResourceSpinLock, v5 | 0x40000000, v5);
        v22 = v5 == v23;
        v5 = v23;
        if ( !v22 )
          continue;
      }
      KeYieldProcessorEx(&v32);
      v5 = ExpResourceSpinLock;
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
  v8 = KeGetCurrentPrcb();
  v9 = v8->SchedulerAssist;
  if ( v9 )
  {
    if ( v8->NestingLevel <= 1u )
    {
      v24 = v9[6] - 1;
      v9[6] = v24;
      if ( !v24 )
        KiRemoveSystemWorkPriorityKick(v8);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v25 = KeGetCurrentIrql();
      if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v26);
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
    goto LABEL_16;
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
      LOBYTE(v13) = 1;
      PsBoostThreadIoEx(OwnerThread, v13, 0LL, 0LL);
      TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&TableSize & 4) != 0 )
    {
      PsBoostThreadIoQoS(OwnerThread, 1LL);
      TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_16:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    v15 = 1;
    for ( i = &OwnerTable->TableSize; v15 < OwnerTable->TableSize; ++v15 )
    {
      i += 4;
      v17 = (struct _KTHREAD *)ExpOwnerEntryToThread(i - 2);
      if ( v17 )
      {
        if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
          && (*i & 2) == 0
          && v17 != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v17, 2uLL);
        }
        v30 = *i;
        if ( (*i & 1) != 0 )
        {
          LOBYTE(v29) = 1;
          PsBoostThreadIoEx(v17, v29, 0LL, 0LL);
          v30 = *i;
        }
        if ( (v30 & 4) != 0 )
        {
          PsBoostThreadIoQoS(v17, 1LL);
          v30 = *i;
        }
        if ( (v30 & 2) != 0 )
          ObDereferenceObjectDeferDeleteWithTag(v17, 0x746C6644u);
      }
      OwnerTable = Resource->OwnerTable;
    }
    ExFreeHeapPool((ULONG_PTR)OwnerTable);
  }
  return 0;
}
