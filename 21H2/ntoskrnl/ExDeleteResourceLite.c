/*
 * XREFs of ExDeleteResourceLite @ 0x1402FFDF0
 * Callers:
 *     PspJobDelete @ 0x1402046D0 (PspJobDelete.c)
 *     CcDeallocateBcb @ 0x1402FFDB0 (CcDeallocateBcb.c)
 *     CmpDelayFreeRMWorker @ 0x14061E450 (CmpDelayFreeRMWorker.c)
 *     CmpInitCmRM @ 0x1406C46C8 (CmpInitCmRM.c)
 *     PnpDereferenceNotify @ 0x1406FD1E8 (PnpDereferenceNotify.c)
 *     SepTokenDeleteMethod @ 0x1406FF0D0 (SepTokenDeleteMethod.c)
 *     RtlCreateHeap @ 0x140768D20 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x140772CF0 (RtlDestroyHeap.c)
 *     DrvDbOpenContext @ 0x1407A420C (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1407A4468 (DrvDbCreateDatabaseNode.c)
 *     MUIInitializeResourceLock @ 0x1407CFCDC (MUIInitializeResourceLock.c)
 *     PiDrvDbDestroyNode @ 0x1408B5E54 (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x140905A20 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x140974714 (_PnpCtxCloseMachine.c)
 *     DrvDbDestroyDatabaseNode @ 0x14097EA4C (DrvDbDestroyDatabaseNode.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x1402045F8 (PsBoostThreadIoQoS.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402D5E10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExpOwnerEntryToThread @ 0x1403027D8 (ExpOwnerEntryToThread.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14034D0C0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140357EF0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  __int64 v1; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v6; // rcx
  __int64 v7; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  ERESOURCE_THREAD OwnerThread; // rdi
  POWNER_ENTRY OwnerTable; // rcx
  __int64 v15; // rdx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  unsigned int v17; // edi
  ULONG *i; // rsi
  struct _KTHREAD *v19; // rbp
  _DWORD *v20; // rcx
  int v21; // eax
  int v22; // eax
  bool v23; // zf
  unsigned __int32 v24; // eax
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  ULONG v31; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v33; // [rsp+58h] [rbp+10h] BYREF

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  __incgsdword(0x8660u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v1 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v33 = 0;
    v6 = CurrentPrcb->SchedulerAssist;
    if ( v6 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v21 = v6[6];
        v6[6] = v21 + 1;
        if ( v21 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
    {
      v20 = CurrentPrcb->SchedulerAssist;
      if ( v20 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v22 = v20[6] - 1;
          v20[6] = v22;
          if ( !v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v33 = ExpWaitForSpinLockExclusiveAndAcquire(
              (unsigned __int64)&ExpResourceSpinLock,
              CurrentIrql,
              v1,
              SchedulerAssist);
    }
    v7 = (unsigned int)ExpResourceSpinLock;
    if ( (ExpResourceSpinLock & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v7 & 0x40000000) == 0 )
        {
          v24 = _InterlockedCompareExchange(&ExpResourceSpinLock, v7 | 0x40000000, v7);
          v23 = (_DWORD)v7 == v24;
          v7 = v24;
          if ( !v23 )
            continue;
        }
        KeYieldProcessorEx(&v33, v7, v1, (__int64)SchedulerAssist);
        v7 = (unsigned int)ExpResourceSpinLock;
      }
      while ( (v7 & 0xBFFFFFFF) != 0x80000000 );
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
  v10 = KeGetCurrentPrcb();
  v11 = v10->SchedulerAssist;
  if ( v11 )
  {
    if ( v10->NestingLevel <= 1u )
    {
      v25 = v11[6] - 1;
      v11[6] = v25;
      if ( !v25 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v27);
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
      LOBYTE(v15) = 1;
      PsBoostThreadIoEx(OwnerThread, v15, 0LL, 0LL);
      TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&TableSize & 4) != 0 )
    {
      PsBoostThreadIoQoS(OwnerThread, 1);
      TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_16:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    v17 = 1;
    for ( i = &OwnerTable->TableSize; v17 < OwnerTable->TableSize; ++v17 )
    {
      i += 4;
      v19 = (struct _KTHREAD *)ExpOwnerEntryToThread(i - 2);
      if ( v19 )
      {
        if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
          && (*i & 2) == 0
          && v19 != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v19, 2uLL);
        }
        v31 = *i;
        if ( (*i & 1) != 0 )
        {
          LOBYTE(v30) = 1;
          PsBoostThreadIoEx(v19, v30, 0LL, 0LL);
          v31 = *i;
        }
        if ( (v31 & 4) != 0 )
        {
          PsBoostThreadIoQoS((__int64)v19, 1);
          v31 = *i;
        }
        if ( (v31 & 2) != 0 )
          ObDereferenceObjectDeferDeleteWithTag(v19, 0x746C6644u);
      }
      OwnerTable = Resource->OwnerTable;
    }
    ExFreeHeapPool((ULONG_PTR)OwnerTable);
  }
  return 0;
}
