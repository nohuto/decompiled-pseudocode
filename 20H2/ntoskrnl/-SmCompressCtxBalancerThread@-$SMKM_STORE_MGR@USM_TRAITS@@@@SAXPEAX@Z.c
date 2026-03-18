/*
 * XREFs of ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C7A60
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140330730 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x1403315F8 (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread(__int64 *P, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  unsigned __int64 v6; // rbx
  unsigned int v7; // ecx
  unsigned __int64 v8; // rax
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  int v20; // eax
  _DWORD *v21; // r8

  v4 = *P;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 25, a3, a4);
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(v4 + 48), WrKernel, 0, 0, 0LL);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v4);
    KeResetEvent((PRKEVENT)(v4 + 48));
    v7 = *(_DWORD *)(v4 + 88);
    if ( !v7 )
      break;
    v8 = *(unsigned int *)(v4 + 92);
    if ( v7 <= (unsigned int)v8 || **(_QWORD **)(v4 + 16) >> 1 <= v8 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v13 = (v17 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v17;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v9 = KeGetCurrentIrql();
          if ( v9 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v9 >= 2u )
          {
            v10 = KeGetCurrentPrcb();
            v11 = v10->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v13 = (v12 & v11[5]) == 0;
            v11[5] &= v12;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(v10);
          }
        }
      }
      __writecr8(v6);
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(v4, P[1], 1u);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v21 = v19->SchedulerAssist;
        v13 = (v20 & v21[5]) == 0;
        v21[5] &= v20;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
  }
  __writecr8(v6);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams((struct _EX_RUNDOWN_REF **)P);
}
