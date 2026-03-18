/*
 * XREFs of ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1402D0D38
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402D0858 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140301CF8 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14030569C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140310A6C (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140385430 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14059A4A0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14059A580 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeQueryPriorityThread @ 0x1402D1A50 (KeQueryPriorityThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140302F58 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(__int64 a1, unsigned __int64 a2, char a3)
{
  int v4; // r15d
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v14; // rax
  KPRIORITY v15; // ebx
  KPRIORITY PriorityThread; // eax
  __int64 v17; // rsi
  __int64 v18; // r8
  _DWORD *v19; // r9
  unsigned __int64 v20; // r15
  unsigned __int64 *v21; // r8
  unsigned __int64 v22; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v26; // eax
  bool v27; // zf
  __int64 i; // rax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax

  v4 = *(_DWORD *)a2 & 7;
  if ( v4 == 2 && (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStDirectRead() )
    {
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6560));
      *(_QWORD *)a2 = ((**(_QWORD **)(a1 + 6552) & 0xFFFFFFFFFFFFFFF8uLL) + 8) | *(_DWORD *)a2 & 7;
      **(_QWORD **)(a1 + 6552) = a2 | **(_DWORD **)(a1 + 6552) & 7;
      *(_QWORD *)(a1 + 6552) = a2;
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 6560));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
            v27 = (v26 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v26;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v20);
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
  }
  else
  {
    if ( v4 == 2 && (*(_DWORD *)(a2 + 8) & 0x1000000) == 0 )
    {
      v8 = 6096LL;
      v7 = 6048LL;
      goto LABEL_9;
    }
    v7 = 6064LL;
  }
  v8 = 6100LL;
LABEL_9:
  v9 = a1 + v7;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6040));
  v11 = **(_QWORD **)(v9 + 8);
  v12 = *(_QWORD *)a2 & 7LL;
  if ( (a3 & 2) != 0 )
  {
    *(_QWORD *)a2 = *(_QWORD *)v9 | v12;
    v21 = *(unsigned __int64 **)(v9 + 8);
    v22 = v11 >> 3;
    *(_QWORD *)v9 = a2;
    if ( v21 == (unsigned __int64 *)v9 )
    {
      *(_QWORD *)(v9 + 8) = a2;
      v21 = (unsigned __int64 *)a2;
    }
    *v21 = *(_DWORD *)v21 & 7 | (8 * (v22 + 1));
  }
  else
  {
    *(_QWORD *)a2 = ((v11 & 0xFFFFFFFFFFFFFFF8uLL) + 8) | v12;
    **(_QWORD **)(v9 + 8) = a2 | **(_DWORD **)(v9 + 8) & 7;
    *(_QWORD *)(v9 + 8) = a2;
  }
  if ( !*(_DWORD *)(a1 + 6100) && !*(_DWORD *)(a1 + 6096) )
    *(_QWORD *)(a1 + 6112) = MEMORY[0xFFFFF78000000320];
  ++*(_DWORD *)(v8 + a1);
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
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v27 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
  }
  __writecr8(v10);
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
    else if ( v4 != 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    {
      PriorityThread = v15;
    }
    else
    {
      PriorityThread = KeQueryPriorityThread(CurrentThread);
    }
    v17 = *(_QWORD *)(a1 + 6200);
    if ( PriorityThread > v15 )
      v15 = PriorityThread;
    if ( v15 > KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6200)) )
      KeSetActualBasePriorityThread(v17, (unsigned int)v15, v18, v19);
    KeSetEvent((PRKEVENT)(a1 + 6128), 0, 0);
    _InterlockedAdd((volatile signed __int32 *)(a1 + 6732), 0xFFFFFFFF);
  }
}
