/*
 * XREFs of ExDeleteResourceLite @ 0x14029DAD0
 * Callers:
 *     CcDeallocateBcb @ 0x14029DA90 (CcDeallocateBcb.c)
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     PnpDereferenceNotify @ 0x140646FA4 (PnpDereferenceNotify.c)
 *     SepTokenDeleteMethod @ 0x14067DEC0 (SepTokenDeleteMethod.c)
 *     CmpDelayFreeRMWorker @ 0x1406DF440 (CmpDelayFreeRMWorker.c)
 *     CmpInitCmRM @ 0x14071037C (CmpInitCmRM.c)
 *     RtlCreateHeap @ 0x1407658C0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x14076E9B0 (RtlDestroyHeap.c)
 *     DrvDbOpenContext @ 0x140799AEC (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140799D48 (DrvDbCreateDatabaseNode.c)
 *     MUIInitializeResourceLock @ 0x1407CB8AC (MUIInitializeResourceLock.c)
 *     PiDrvDbDestroyNode @ 0x1408B8814 (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x140908110 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x140976E1C (_PnpCtxCloseMachine.c)
 *     DrvDbDestroyDatabaseNode @ 0x14098114C (DrvDbDestroyDatabaseNode.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140217F10 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140223270 (ExpResourceEnforcesOwnershipTransfer.c)
 *     PsBoostThreadIoEx @ 0x140223950 (PsBoostThreadIoEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402BF7C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     ExpOwnerEntryToThread @ 0x14035B568 (ExpOwnerEntryToThread.c)
 *     PsBoostThreadIoQoS @ 0x14035D3B8 (PsBoostThreadIoQoS.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  unsigned int v14; // edi
  ULONG *i; // rsi
  struct _KTHREAD *v16; // rbp
  _DWORD *v17; // rcx
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  int v20; // eax
  bool v21; // zf
  signed __int32 v22; // eax
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  ULONG v28; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v30; // [rsp+58h] [rbp+10h] BYREF

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
    v30 = 0;
    v4 = CurrentPrcb->SchedulerAssist;
    if ( v4 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = v4[6];
        v4[6] = v19 + 1;
        if ( v19 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
    {
      v17 = CurrentPrcb->SchedulerAssist;
      if ( v17 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v20 = v17[6] - 1;
          v17[6] = v20;
          if ( !v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v30 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql);
    }
    v5 = ExpResourceSpinLock;
    while ( (v5 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v22 = _InterlockedCompareExchange(&ExpResourceSpinLock, v5 | 0x40000000, v5);
        v21 = v5 == v22;
        v5 = v22;
        if ( !v21 )
          continue;
      }
      KeYieldProcessorEx(&v30);
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
      v23 = v9[6] - 1;
      v9[6] = v23;
      if ( !v23 )
        KiRemoveSystemWorkPriorityKick(v8);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v25);
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
    if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
      && (Resource->OwnerEntry.TableSize & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 1uLL);
    }
    TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    if ( (*(_BYTE *)&TableSize & 1) != 0 )
    {
      PsBoostThreadIoEx(OwnerThread, 1, 0, 0LL);
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
    v14 = 1;
    for ( i = &OwnerTable->TableSize; v14 < OwnerTable->TableSize; ++v14 )
    {
      i += 4;
      v16 = (struct _KTHREAD *)ExpOwnerEntryToThread(i - 2);
      if ( v16 )
      {
        if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource) && (*i & 2) == 0 && v16 != KeGetCurrentThread() )
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v16, 2uLL);
        v28 = *i;
        if ( (*i & 1) != 0 )
        {
          PsBoostThreadIoEx((__int64)v16, 1, 0, 0LL);
          v28 = *i;
        }
        if ( (v28 & 4) != 0 )
        {
          PsBoostThreadIoQoS(v16, 1LL);
          v28 = *i;
        }
        if ( (v28 & 2) != 0 )
          ObDereferenceObjectDeferDeleteWithTag(v16, 0x746C6644u);
      }
      OwnerTable = Resource->OwnerTable;
    }
    ExFreeHeapPool((ULONG_PTR)OwnerTable);
  }
  return 0;
}
