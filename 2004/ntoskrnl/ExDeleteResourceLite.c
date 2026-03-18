/*
 * XREFs of ExDeleteResourceLite @ 0x1402C3E70
 * Callers:
 *     PspJobDelete @ 0x14027ABB0 (PspJobDelete.c)
 *     CcDeallocateBcb @ 0x1402C3E30 (CcDeallocateBcb.c)
 *     PnpDereferenceNotify @ 0x1406459B4 (PnpDereferenceNotify.c)
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
 *     SepTokenDeleteMethod @ 0x1406975D0 (SepTokenDeleteMethod.c)
 *     CmpDelayFreeRMWorker @ 0x14070D010 (CmpDelayFreeRMWorker.c)
 *     RtlCreateHeap @ 0x140756C80 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1407603A0 (RtlDestroyHeap.c)
 *     DrvDbOpenContext @ 0x14078D3AC (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14078D608 (DrvDbCreateDatabaseNode.c)
 *     MUIInitializeResourceLock @ 0x1407BD01C (MUIInitializeResourceLock.c)
 *     PiDrvDbDestroyNode @ 0x1408B2BF4 (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x140902500 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x14097104C (_PnpCtxCloseMachine.c)
 *     DrvDbDestroyDatabaseNode @ 0x14097B37C (DrvDbDestroyDatabaseNode.c)
 * Callees:
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14020A2F0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     PsBoostThreadIoEx @ 0x14020A940 (PsBoostThreadIoEx.c)
 *     ExpOwnerEntryToThread @ 0x1402789B8 (ExpOwnerEntryToThread.c)
 *     PsBoostThreadIoQoS @ 0x140279D74 (PsBoostThreadIoQoS.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140289860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402CF620 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  unsigned int v16; // edi
  __int64 *i; // rsi
  struct _KTHREAD *v18; // rbp
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // eax
  bool v22; // zf
  unsigned __int32 v23; // eax
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  int v29; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v31; // [rsp+58h] [rbp+10h] BYREF

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
    v31 = 0;
    v6 = CurrentPrcb->SchedulerAssist;
    if ( v6 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v6[6];
        v6[6] = v20 + 1;
        if ( v20 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
    {
      v19 = CurrentPrcb->SchedulerAssist;
      if ( v19 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v21 = v19[6] - 1;
          v19[6] = v21;
          if ( !v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v31 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql);
    }
    v7 = (unsigned int)ExpResourceSpinLock;
    if ( (ExpResourceSpinLock & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v7 & 0x40000000) == 0 )
        {
          v23 = _InterlockedCompareExchange(&ExpResourceSpinLock, v7 | 0x40000000, v7);
          v22 = (_DWORD)v7 == v23;
          v7 = v23;
          if ( !v22 )
            continue;
        }
        KeYieldProcessorEx(&v31, v7, v1, (__int64)SchedulerAssist);
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
      v24 = v11[6] - 1;
      v11[6] = v24;
      if ( !v24 )
        KiRemoveSystemWorkPriorityKick(v10);
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
    v16 = 1;
    for ( i = (__int64 *)&OwnerTable->0; v16 < OwnerTable->TableSize; ++v16 )
    {
      i += 2;
      v18 = (struct _KTHREAD *)ExpOwnerEntryToThread(i - 1);
      if ( v18 )
      {
        if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
          && (*(_DWORD *)i & 2) == 0
          && v18 != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v18, 2uLL);
        }
        v29 = *(_DWORD *)i;
        if ( (*(_DWORD *)i & 1) != 0 )
        {
          PsBoostThreadIoEx((__int64)v18, 1, 0, 0LL);
          v29 = *(_DWORD *)i;
        }
        if ( (v29 & 4) != 0 )
        {
          PsBoostThreadIoQoS((__int64)v18, 1);
          v29 = *(_DWORD *)i;
        }
        if ( (v29 & 2) != 0 )
          ObDereferenceObjectDeferDeleteWithTag(v18, 0x746C6644u);
      }
      OwnerTable = Resource->OwnerTable;
    }
    ExFreeHeapPool((ULONG_PTR)OwnerTable);
  }
  return 0;
}
