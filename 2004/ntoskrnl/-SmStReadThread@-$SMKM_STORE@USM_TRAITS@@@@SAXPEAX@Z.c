/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403031C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     SmFpFree @ 0x1402D03CC (SmFpFree.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1403030A0 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     SmFpAllocate @ 0x140304118 (SmFpAllocate.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140305500 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14030552C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x140305584 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  KSPIN_LOCK *v4; // r15
  __int64 v6; // rbp
  PSLIST_ENTRY Context; // r14
  LONG result; // eax
  unsigned __int64 *v9; // rdi
  KIRQL v10; // al
  __int64 *v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 *v13; // rsi
  struct _MDL *v14; // rbx
  unsigned int Issue; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(KSPIN_LOCK **)a1;
  v6 = *(_QWORD *)a1 + 6488LL;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 12LL, a3, a4);
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext((__int64)v4);
  *(_DWORD *)(a1 + 32) = Context == 0LL ? 0xC000009A : 0;
  result = KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( Context )
  {
    Object[0] = v4 + 815;
    Object[1] = v4 + 812;
    do
    {
      while ( 1 )
      {
        result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( result )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v9 = v4 + 818;
        while ( 1 )
        {
          v10 = KeAcquireSpinLockRaiseToDpc(v4 + 820);
          v11 = *(__int64 **)(v6 + 64);
          v12 = v10;
          if ( v11 == (__int64 *)v9 )
          {
            v13 = 0LL;
          }
          else
          {
            v13 = (__int64 *)*v9;
            *v9 = *(_QWORD *)*v9 & 0xFFFFFFFFFFFFFFF8uLL;
            if ( v13 == v11 )
            {
              *v9 = 0LL;
              *(_QWORD *)(v6 + 64) = v6 + 56;
            }
            else
            {
              *v11 = *v11 & 7 | (8 * (((unsigned __int64)*v11 >> 3) - 1));
            }
          }
          KxReleaseSpinLock(v4 + 820);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
                v20 = (v19 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v19;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v12);
          if ( !v13 )
            break;
          v14 = (struct _MDL *)SmFpAllocate(&dword_140D24480, 1);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(v4, v13, Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(v4, v13, Issue);
          SmFpFree((__int64)&dword_140D24480, 3, (__int64)(v4 + 811), v14);
        }
      }
    }
    while ( result != 1 );
  }
  if ( Context )
    return ST_STORE<SM_TRAITS>::StReleaseReadContext(v4, Context);
  return result;
}
