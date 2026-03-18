/*
 * XREFs of ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140397F20
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14037CFB8 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140398000 (ExQueueWorkItemToPrivatePool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  KSPIN_LOCK *v3; // r15
  __int128 *v5; // rdi
  unsigned __int64 v6; // rsi
  ULONG_PTR *v7; // rdx
  ULONG_PTR *result; // rax
  unsigned __int64 v9; // rbx
  __int128 v10; // xmm0
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  _QWORD *v16; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+20h] [rbp-10h] BYREF

  BugCheckParameter2[0] = 0LL;
  BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
  v3 = (KSPIN_LOCK *)(a1 + 768);
  *(_DWORD *)(a2 + 32) ^= (*(_DWORD *)(a2 + 32) ^ a3) & 7;
  v5 = (__int128 *)(a1 + 24LL * a3);
  *(_DWORD *)(a2 + 40) ^= (*(_DWORD *)(a2 + 40) ^ (a3 >> 3)) & 3;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 768));
  if ( *((_DWORD *)v5 + 4) || *((_DWORD *)v5 + 5) )
  {
    *(_QWORD *)a2 = **((_QWORD **)v5 + 1) + 1LL;
    **((_QWORD **)v5 + 1) = a2;
    *((_QWORD *)v5 + 1) = a2;
    v9 = *(_QWORD *)a2;
    if ( v9 >= KeQueryActiveProcessorCountEx(0xFFFFu) && *((__int128 **)v5 + 1) != v5 )
    {
      v10 = *v5;
      *((_QWORD *)v5 + 1) = v5;
      *(_OWORD *)BugCheckParameter2 = v10;
      *(_QWORD *)v5 = 0LL;
    }
  }
  else
  {
    v7 = (ULONG_PTR *)BugCheckParameter2[1];
    *(_QWORD *)a2 = *(_QWORD *)BugCheckParameter2[1] + 1LL;
    *v7 = a2;
    BugCheckParameter2[1] = a2;
  }
  *((_DWORD *)v5 + 4) += *(_DWORD *)BugCheckParameter2[1];
  KxReleaseSpinLock(v3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  while ( 1 )
  {
    result = BugCheckParameter2;
    if ( (ULONG_PTR *)BugCheckParameter2[1] == BugCheckParameter2 )
      break;
    v16 = (_QWORD *)BugCheckParameter2[0];
    BugCheckParameter2[0] = *(_QWORD *)BugCheckParameter2[0];
    if ( v16 == (_QWORD *)BugCheckParameter2[1] )
    {
      BugCheckParameter2[0] = 0LL;
      BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
    }
    else
    {
      --*(_QWORD *)BugCheckParameter2[1];
    }
    *v16 = 0LL;
    v16[2] = SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker;
    v16[3] = v16;
    ExQueueWorkItemToPrivatePool((ULONG_PTR)v16);
  }
  return result;
}
