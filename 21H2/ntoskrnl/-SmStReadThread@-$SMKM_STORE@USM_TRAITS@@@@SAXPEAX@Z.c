/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140237720
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1402378F8 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140237E3C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     SmFpFree @ 0x14037AE58 (SmFpFree.c)
 *     SmFpAllocate @ 0x14037DA00 (SmFpAllocate.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140391B70 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x140391B9C (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  __int64 v3; // rbp
  __int64 Context; // r14
  LONG result; // eax
  unsigned __int64 *v6; // rdi
  KIRQL v7; // al
  __int64 *v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 *v10; // rsi
  __int64 v11; // rbx
  unsigned int Issue; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(KSPIN_LOCK **)a1;
  v3 = *(_QWORD *)a1 + 6488LL;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread());
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(v1);
  *(_DWORD *)(a1 + 32) = Context == 0 ? 0xC000009A : 0;
  result = KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( Context )
  {
    Object[0] = v1 + 815;
    Object[1] = v1 + 812;
    do
    {
      while ( 1 )
      {
        result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( result )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v6 = v1 + 818;
        while ( 1 )
        {
          v7 = KeAcquireSpinLockRaiseToDpc(v1 + 820);
          v8 = *(__int64 **)(v3 + 64);
          v9 = v7;
          if ( v8 == (__int64 *)v6 )
          {
            v10 = 0LL;
          }
          else
          {
            v10 = (__int64 *)*v6;
            *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
            if ( v10 == v8 )
            {
              *v6 = 0LL;
              *(_QWORD *)(v3 + 64) = v3 + 56;
            }
            else
            {
              *v8 = *v8 & 7 | (8 * (((unsigned __int64)*v8 >> 3) - 1));
            }
          }
          KxReleaseSpinLock(v1 + 820);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
                v17 = (v16 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v16;
                if ( v17 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v9);
          if ( !v10 )
            break;
          v11 = SmFpAllocate(&dword_140D324C0, 1);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(v1, v10, Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(v1, v10, Issue);
          SmFpFree(&dword_140D324C0, 3LL, v1 + 811, v11);
        }
      }
    }
    while ( result != 1 );
  }
  if ( Context )
    return ST_STORE<SM_TRAITS>::StReleaseReadContext(v1, Context);
  return result;
}
