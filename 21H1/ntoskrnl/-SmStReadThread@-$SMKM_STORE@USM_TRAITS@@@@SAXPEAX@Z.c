/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140309030
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     SmFpFree @ 0x14023D59C (SmFpFree.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x1402C3250 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1402C327C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1402C32D4 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     SmFpAllocate @ 0x140309C68 (SmFpAllocate.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14030A418 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _SLIST_HEADER *v4; // r15
  __int64 v6; // rbp
  __int64 Context; // r14
  NTSTATUS v8; // eax
  __int128 **v9; // rdi
  KIRQL v10; // al
  __int64 *v11; // rdx
  unsigned __int64 v12; // rbx
  __int128 *v13; // rsi
  struct _MDL *v14; // rbx
  unsigned int Issue; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_SLIST_HEADER **)a1;
  v6 = *(_QWORD *)a1 + 6488LL;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 12LL, a3, a4);
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(v4);
  *(_DWORD *)(a1 + 32) = Context == 0 ? 0xC000009A : 0;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( Context )
  {
    Object[0] = (char *)&v4[407].HeaderX64 + 8;
    Object[1] = &v4[406];
    do
    {
      while ( 1 )
      {
        v8 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( v8 )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v9 = (__int128 **)&v4[409];
        while ( 1 )
        {
          v10 = KeAcquireSpinLockRaiseToDpc(&v4[410].Alignment);
          v11 = *(__int64 **)(v6 + 64);
          v12 = v10;
          if ( v11 == (__int64 *)v9 )
          {
            v13 = 0LL;
          }
          else
          {
            v13 = *v9;
            *v9 = (__int128 *)(*(_QWORD *)*v9 & 0xFFFFFFFFFFFFFFF8uLL);
            if ( v13 == (__int128 *)v11 )
            {
              *v9 = 0LL;
              *(_QWORD *)(v6 + 64) = v6 + 56;
            }
            else
            {
              *v11 = *v11 & 7 | (8 * (((unsigned __int64)*v11 >> 3) - 1));
            }
          }
          KxReleaseSpinLock(&v4[410].Alignment);
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
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue((__int64)v4, (__int64)v13, Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete((__int64)v4, v13, Issue);
          SmFpFree((__int64)&dword_140D24480, 3, (__int64)&v4[405].Region, v14);
        }
      }
    }
    while ( v8 != 1 );
  }
  if ( Context )
    ST_STORE<SM_TRAITS>::StReleaseReadContext(v4, Context);
}
