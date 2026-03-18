/*
 * XREFs of VfIrpLogUnlockDatabase @ 0x1409E0D6C
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x1409C505C (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VfIrpLogUnlockDatabase(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rsi
  _QWORD **v3; // r14
  _QWORD *v4; // rbx
  PADAPTER_OBJECT *v5; // rdi
  PADAPTER_OBJECT v6; // rdx
  PADAPTER_OBJECT **v7; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v1 = 3LL * a1;
  *(_DWORD *)(ViIrpLogDatabase + 24LL * a1) = 0;
  v2 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  v3 = (_QWORD **)(ViIrpLogDatabase + 8 * (v1 + 1));
  v4 = *v3;
  while ( v4 != v3 )
  {
    v5 = (PADAPTER_OBJECT *)(v4 - 1);
    v4 = (_QWORD *)*v4;
    if ( ((_DWORD)v5[3] & 4) != 0 )
    {
      HalPutDmaAdapter(*v5);
      v6 = v5[1];
      v7 = (PADAPTER_OBJECT **)v5[2];
      if ( (PADAPTER_OBJECT *)v6->DmaOperations != v5 + 1 || *v7 != v5 + 1 )
        __fastfail(3u);
      *v7 = (PADAPTER_OBJECT *)v6;
      v6->DmaOperations = (_DMA_OPERATIONS *)v7;
      ExFreePoolWithTag(v5, 0);
    }
  }
  KxReleaseSpinLock(&ViIrpLogDatabaseLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
