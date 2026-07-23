/*
 * XREFs of SmIoRequestComplete @ 0x140258004
 * Callers:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140255D74 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140256910 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     MiStoreFreeWriteSupport @ 0x1402582B8 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x1402582F0 (MiStoreModifiedWriteDereference.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiStoreLogWriteCompleteFailure @ 0x140552BB8 (MiStoreLogWriteCompleteFailure.c)
 */

LONG __fastcall SmIoRequestComplete(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _SLIST_ENTRY *v4; // rdi
  int v5; // eax
  __int64 v6; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  if ( (*a2 & 7) != 0 )
  {
    if ( (*a2 & 7) == 2 )
      *(_QWORD *)(a4 + 8) = (unsigned __int16)*(_QWORD *)(a4 + 8);
  }
  else
  {
    *(_QWORD *)(a4 + 8) &= 1uLL;
  }
  if ( a3 < 0 )
    return KeSetEvent((PRKEVENT)a3, 1, 0);
  v4 = (_SLIST_ENTRY *)(a3 | 0x8000000000000000uLL);
  v5 = *(_DWORD *)((a3 | 0x8000000000000000uLL) + 0x10);
  v6 = *(_QWORD *)(*(_QWORD *)((a3 | 0x8000000000000000uLL) + 0x38) + 192LL);
  if ( v5 < 0 )
  {
    MiStoreLogWriteCompleteFailure((unsigned int)v5);
    v8 = 48 * (__int64)v4[7].Next - 0x58000000000LL;
    v9 = (unsigned __int8)MiLockPageInline(v8);
    *(_BYTE *)(v8 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    *(_DWORD *)(v6 + 1172) = 32;
  }
  MiStoreModifiedWriteDereference();
  return MiStoreFreeWriteSupport(v4);
}
