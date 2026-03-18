/*
 * XREFs of ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x14023EA30
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023E1A4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x14023EC20 (KeQueryPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 *__fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(__int64 a1, _DWORD *a2)
{
  KSPIN_LOCK *v2; // r14
  KIRQL v5; // al
  unsigned __int64 *v6; // r8
  unsigned __int64 v7; // rbp
  __int64 *v8; // r9
  unsigned __int64 *v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  KPRIORITY v12; // edi
  unsigned __int64 *v13; // rcx
  __int64 *v14; // rdx
  __int64 *v15; // rdi
  struct _KTHREAD *v17; // rsi
  int v18; // eax
  __int64 i; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v25; // edx
  bool v26; // zf

  *a2 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 6040);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6040));
  v6 = (unsigned __int64 *)(a1 + 6080);
  v7 = v5;
  v8 = *(__int64 **)(a1 + 6088);
  if ( v8 == (__int64 *)(a1 + 6080) )
  {
    v9 = (unsigned __int64 *)(a1 + 6048);
    v10 = *(__int64 **)(a1 + 6056);
    if ( v10 == (__int64 *)(a1 + 6048) )
    {
      if ( !*(_DWORD *)(a1 + 6104) )
      {
        v11 = *(unsigned __int8 *)(a1 + 6022);
        v12 = (_DWORD)v11 == 4
            ? *(_DWORD *)(a1 + 6728)
            : *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v11);
        if ( KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6200)) > v12 )
          KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 6200));
      }
      v13 = (unsigned __int64 *)(a1 + 6064);
      v14 = *(__int64 **)(a1 + 6072);
      if ( v14 == (__int64 *)(a1 + 6064) )
      {
        v15 = 0LL;
      }
      else
      {
        v15 = (__int64 *)*v13;
        *v13 = *(_QWORD *)*v13 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v15 == v14 )
        {
          *v13 = 0LL;
          *(_QWORD *)(a1 + 6072) = a1 + 6064;
        }
        else
        {
          *v14 = *v14 & 7 | (8 * (((unsigned __int64)*v14 >> 3) - 1));
        }
        if ( !--*(_DWORD *)(a1 + 6100) && (*(_BYTE *)v15 & 7) == 6 )
        {
          if ( *(_BYTE *)(a1 + 6022) )
          {
            v17 = *(struct _KTHREAD **)(a1 + 6200);
            if ( KeQueryPriorityThread(v17) > 4 )
              KeSetActualBasePriorityThread(v17);
          }
        }
      }
    }
    else
    {
      v15 = (__int64 *)*v9;
      *v9 = *(_QWORD *)*v9 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v15 == v10 )
      {
        *v9 = 0LL;
        *(_QWORD *)(a1 + 6056) = a1 + 6048;
      }
      else
      {
        *v10 = *v10 & 7 | (8 * (((unsigned __int64)*v10 >> 3) - 1));
      }
      --*(_DWORD *)(a1 + 6096);
    }
  }
  else
  {
    v15 = (__int64 *)*v6;
    *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v15 == v8 )
    {
      *v6 = 0LL;
      *(_QWORD *)(a1 + 6088) = a1 + 6080;
    }
    else
    {
      *v8 = *v8 & 7 | (8 * (((unsigned __int64)*v8 >> 3) - 1));
    }
    v18 = *(_DWORD *)(a1 + 6100) - 1;
    *a2 = 1;
    *(_DWORD *)(a1 + 6100) = v18;
  }
  if ( !v15 )
  {
LABEL_18:
    *(_QWORD *)(a1 + 6120) = 0LL;
    goto LABEL_14;
  }
  *(_QWORD *)(a1 + 6112) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)v15 & 7) == 2 && *(_BYTE *)(a1 + 6020) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 3952) + 16LL);
          *(_DWORD *)i < (unsigned __int8)*((_DWORD *)v15 + 2) << 12;
          i += 32LL )
    {
      ;
    }
    v20 = *(_QWORD *)(i + 8);
    v21 = *(_QWORD *)(a1 + 6120);
    if ( v21 > v20 )
    {
      *(_QWORD *)(a1 + 6120) = v21 - v20;
      goto LABEL_14;
    }
    goto LABEL_18;
  }
LABEL_14:
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v26 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v15;
}
