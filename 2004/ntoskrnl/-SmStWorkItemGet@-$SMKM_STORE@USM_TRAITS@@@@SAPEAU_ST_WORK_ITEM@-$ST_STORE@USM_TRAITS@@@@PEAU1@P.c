/*
 * XREFs of ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1402D1860
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D0FD4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeQueryPriorityThread @ 0x1402D1A50 (KeQueryPriorityThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v13; // r8
  _DWORD *v14; // r9
  unsigned __int64 *v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // rdi
  struct _KTHREAD *v19; // rsi
  __int64 v20; // r8
  _DWORD *v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 i; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v31; // edx
  bool v32; // zf

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
        {
          v22 = *(unsigned __int8 *)(a1 + 6022);
          if ( (_DWORD)v22 == 4 )
            v23 = *(unsigned int *)(a1 + 6728);
          else
            v23 = *((unsigned int *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition
                  + v22);
          KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 6200), v23, v13, v14);
        }
      }
      v15 = (unsigned __int64 *)(a1 + 6064);
      v16 = *(__int64 **)(a1 + 6072);
      if ( v16 == (__int64 *)(a1 + 6064) )
      {
        v17 = 0LL;
      }
      else
      {
        v17 = (__int64 *)*v15;
        *v15 = *(_QWORD *)*v15 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v17 == v16 )
        {
          *v15 = 0LL;
          *(_QWORD *)(a1 + 6072) = a1 + 6064;
        }
        else
        {
          *v16 = *v16 & 7 | (8 * (((unsigned __int64)*v16 >> 3) - 1));
        }
        if ( !--*(_DWORD *)(a1 + 6100) && (*(_BYTE *)v17 & 7) == 6 )
        {
          if ( *(_BYTE *)(a1 + 6022) )
          {
            v19 = *(struct _KTHREAD **)(a1 + 6200);
            if ( KeQueryPriorityThread(v19) > 4 )
              KeSetActualBasePriorityThread((__int64)v19, 4LL, v20, v21);
          }
        }
      }
    }
    else
    {
      v17 = (__int64 *)*v9;
      *v9 = *(_QWORD *)*v9 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v17 == v10 )
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
    v17 = (__int64 *)*v6;
    *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v17 == v8 )
    {
      *v6 = 0LL;
      *(_QWORD *)(a1 + 6088) = a1 + 6080;
    }
    else
    {
      *v8 = *v8 & 7 | (8 * (((unsigned __int64)*v8 >> 3) - 1));
    }
    v24 = *(_DWORD *)(a1 + 6100) - 1;
    *a2 = 1;
    *(_DWORD *)(a1 + 6100) = v24;
  }
  if ( !v17 )
  {
LABEL_17:
    *(_QWORD *)(a1 + 6120) = 0LL;
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 6112) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)v17 & 7) == 2 && *(_BYTE *)(a1 + 6020) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 3952) + 16LL);
          *(_DWORD *)i < (unsigned __int8)*((_DWORD *)v17 + 2) << 12;
          i += 32LL )
    {
      ;
    }
    v26 = *(_QWORD *)(i + 8);
    v27 = *(_QWORD *)(a1 + 6120);
    if ( v27 > v26 )
    {
      *(_QWORD *)(a1 + 6120) = v27 - v26;
      goto LABEL_13;
    }
    goto LABEL_17;
  }
LABEL_13:
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
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v32 = (v31 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v31;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v17;
}
