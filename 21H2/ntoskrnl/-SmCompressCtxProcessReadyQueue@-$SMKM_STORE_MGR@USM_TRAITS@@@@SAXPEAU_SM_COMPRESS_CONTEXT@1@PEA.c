/*
 * XREFs of ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140289874
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140288840 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140288B10 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140289A38 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14028A928 (SmKmStoreRefFromStoreIndex.c)
 *     SmIoRequestComplete @ 0x14028BB04 (SmIoRequestComplete.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(__int64 a1, __int64 a2, KIRQL a3, int a4)
{
  __int64 **v4; // rbx
  volatile LONG *v6; // rsi
  KIRQL v7; // bp
  int v9; // r14d
  __int64 *v10; // rdx
  __int64 *v11; // rdi
  __int64 result; // rax
  int v13; // ebp
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  unsigned __int64 *v16; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  __int64 *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r9
  struct _EX_RUNDOWN_REF *v26; // rax
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8

  v4 = (__int64 **)(a1 + 96);
  v6 = (volatile LONG *)(a1 + 112);
  v7 = a3;
  if ( a3 == 0xFF )
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
  while ( 1 )
  {
    v9 = 0;
    if ( !a4 && (*v4[1] & 0xFFFFFFFFFFFFFFF8uLL) < 0x80 )
      v9 = 4;
    v10 = v4[1];
    if ( v10 == (__int64 *)v4 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = *v4;
      *v4 = (__int64 *)(**v4 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v11 == v10 )
      {
        *v4 = 0LL;
        v4[1] = (__int64 *)v4;
      }
      else
      {
        *v10 = *v10 & 7 | (8 * (((unsigned __int64)*v10 >> 3) - 1));
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (v7 + 1));
          v21 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = v7;
    __writecr8(v7);
    if ( !v11 )
      break;
    v13 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(
            a2,
            (int)v11 + 24,
            1,
            *(_DWORD *)(v11[13] + 6016) & 0x3FF,
            (__int64)v11,
            v11[4],
            v9);
    if ( v13 < 0 )
    {
      if ( v13 == -1073741739 )
      {
        v14 = ExAcquireSpinLockExclusive(v6);
        v15 = ((unsigned __int64)*v4[1] >> 3) + 1;
        *v11 = (unsigned __int64)*v4 | *(_DWORD *)v11 & 7;
        v16 = (unsigned __int64 *)v4[1];
        *v4 = v11;
        if ( v16 == (unsigned __int64 *)v4 )
        {
          v4[1] = v11;
          v16 = (unsigned __int64 *)v11;
        }
        *v16 = *(_DWORD *)v16 & 7 | (unsigned __int64)(8 * v15);
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v14 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              v27 = KeGetCurrentPrcb();
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
              v28 = v27->SchedulerAssist;
              v21 = ((unsigned int)result & v28[5]) == 0;
              v28[5] &= result;
              if ( v21 )
                result = KiRemoveSystemWorkPriorityKick(v27);
            }
          }
        }
        __writecr8(v14);
        return result;
      }
      MmUnmapLockedPages(*(PVOID *)(*(_QWORD *)v11[2] + 24LL), *(PMDL *)v11[2]);
      v22 = (__int64 *)v11[4];
      v23 = *v22;
      *(_DWORD *)v22 = v13;
      *(_QWORD *)(v11[4] + 8) = 0LL;
      SmIoRequestComplete(v22, v11, v23, v11[4]);
      v26 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, *(_DWORD *)(v11[13] + 6016) & 0x3FF, v24, v25);
      ExReleaseRundownProtection(v26 + 1);
      ExFreePoolWithTag(v11, 0);
    }
    v7 = ExAcquireSpinLockExclusive(v6);
  }
  return result;
}
