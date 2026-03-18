/*
 * XREFs of ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14037D2EC
 * Callers:
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140376BB8 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14037CFB8 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14039050C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140391CE4 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140394C30 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1405FD170 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1405FD250 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140394080 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(__int64 a1, unsigned __int64 a2, char a3)
{
  int v4; // r15d
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 *v9; // rsi
  KIRQL v10; // al
  _QWORD *v11; // rcx
  unsigned __int64 v12; // r12
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v14; // rax
  KPRIORITY v15; // r14d
  KPRIORITY PriorityThread; // ebx
  unsigned __int64 v17; // r15
  __int64 v18; // r8
  unsigned __int64 *v19; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  bool v24; // zf
  __int64 i; // rax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax

  v4 = *(_DWORD *)a2 & 7;
  if ( v4 == 2 && (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStDirectRead() )
    {
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6560));
      *(_QWORD *)a2 = ((**(_QWORD **)(a1 + 6552) & 0xFFFFFFFFFFFFFFF8uLL) + 8) | *(_DWORD *)a2 & 7;
      **(_QWORD **)(a1 + 6552) = a2 | **(_DWORD **)(a1 + 6552) & 7;
      *(_QWORD *)(a1 + 6552) = a2;
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 6560));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
            v24 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v17);
      KeSetEvent((PRKEVENT)(a1 + 6520), 0, 0);
    }
    return;
  }
  if ( (*(_BYTE *)(a1 + 6021) & 1) != 0 )
    return;
  if ( (a3 & 4) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 6732));
  if ( (a3 & 1) != 0 )
  {
    v7 = 6080LL;
    goto LABEL_8;
  }
  if ( v4 != 2 || (*(_DWORD *)(a2 + 8) & 0x1000000) != 0 )
  {
    v7 = 6064LL;
LABEL_8:
    v8 = 6100LL;
    goto LABEL_9;
  }
  v8 = 6096LL;
  v7 = 6048LL;
LABEL_9:
  v9 = (unsigned __int64 *)(a1 + v7);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6040));
  v11 = (_QWORD *)v9[1];
  v12 = v10;
  if ( (a3 & 2) != 0 )
  {
    v18 = *v11 >> 3;
    *(_QWORD *)a2 = *v9 | *(_DWORD *)a2 & 7;
    v19 = (unsigned __int64 *)v9[1];
    *v9 = a2;
    if ( v19 == v9 )
    {
      v9[1] = a2;
      v19 = (unsigned __int64 *)a2;
    }
    *v19 = *(_DWORD *)v19 & 7 | (unsigned __int64)(8 * v18 + 8);
  }
  else
  {
    *(_QWORD *)a2 = ((*v11 & 0xFFFFFFFFFFFFFFF8uLL) + 8) | *(_DWORD *)a2 & 7;
    *(_QWORD *)v9[1] = a2 | *(_DWORD *)v9[1] & 7;
    v9[1] = a2;
  }
  if ( !*(_DWORD *)(a1 + 6100) && !*(_DWORD *)(a1 + 6096) )
    *(_QWORD *)(a1 + 6112) = MEMORY[0xFFFFF78000000320];
  ++*(_DWORD *)(a1 + v8);
  if ( v4 == 2 && *(_BYTE *)(a1 + 6020) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 3952) + 16LL);
          *(_DWORD *)i < (unsigned __int8)*(_DWORD *)(a2 + 8) << 12;
          i += 32LL )
    {
      ;
    }
    *(_WORD *)(i + 4) = 0;
    *(_QWORD *)(a1 + 6120) += *(_QWORD *)(i + 8);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 6040));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v24 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
  }
  __writecr8(v12);
  CurrentThread = KeGetCurrentThread();
  if ( (a3 & 4) == 0 )
  {
    v14 = *(unsigned __int8 *)(a1 + 6022);
    if ( (_DWORD)v14 == 4 )
      v15 = *(_DWORD *)(a1 + 6728);
    else
      v15 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v14);
    if ( (a3 & 1) != 0 )
    {
      PriorityThread = 12;
    }
    else
    {
      if ( v4 != 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      {
LABEL_19:
        PriorityThread = v15;
LABEL_20:
        if ( PriorityThread > KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6200)) )
          KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 6200), PriorityThread);
        KeSetEvent((PRKEVENT)(a1 + 6128), 0, 0);
        _InterlockedAdd((volatile signed __int32 *)(a1 + 6732), 0xFFFFFFFF);
        return;
      }
      PriorityThread = KeQueryPriorityThread(CurrentThread);
    }
    if ( PriorityThread > v15 )
      goto LABEL_20;
    goto LABEL_19;
  }
}
