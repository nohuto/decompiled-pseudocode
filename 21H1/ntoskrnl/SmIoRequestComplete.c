/*
 * XREFs of SmIoRequestComplete @ 0x14023D648
 * Callers:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14023BD00 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14023D888 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     MiStoreModifiedWriteDereference @ 0x14023AC4C (MiStoreModifiedWriteDereference.c)
 *     MiStoreFreeWriteSupport @ 0x14023ACD0 (MiStoreFreeWriteSupport.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14054EB98 (MiStoreLogWriteCompleteFailure.c)
 */

void __fastcall SmIoRequestComplete(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

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
  {
    KeSetEvent((PRKEVENT)a3, 1, 0);
  }
  else
  {
    v4 = a3 | 0x8000000000000000uLL;
    v5 = *(_QWORD *)((a3 | 0x8000000000000000uLL) + 0x38);
    v6 = *(_DWORD *)((a3 | 0x8000000000000000uLL) + 0x10);
    v7 = *(_QWORD *)(v5 + 192);
    if ( v6 < 0 )
    {
      MiStoreLogWriteCompleteFailure((unsigned int)v6);
      v8 = 48LL * *(_QWORD *)(v4 + 112) - 0x58000000000LL;
      v11 = (unsigned __int8)MiLockPageInline(v8, v9, v10);
      *(_BYTE *)(v8 + 34) |= 0x10u;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v16 = (v15 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v15;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
      *(_DWORD *)(v7 + 1172) = 32;
      v5 = *(_QWORD *)(v4 + 56);
    }
    MiStoreModifiedWriteDereference(v5);
    MiStoreFreeWriteSupport((PSLIST_ENTRY)v4, (_SLIST_HEADER *)&MiSystemPartition);
  }
}
