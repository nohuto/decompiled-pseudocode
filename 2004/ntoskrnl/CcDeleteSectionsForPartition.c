/*
 * XREFs of CcDeleteSectionsForPartition @ 0x1404E6D64
 * Callers:
 *     CcExitPartition @ 0x1404E7034 (CcExitPartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     MmGetControlAreaPartition @ 0x140223AD0 (MmGetControlAreaPartition.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x1402C46BC (CcScheduleLazyWriteScan.c)
 *     CcDeleteSharedCacheMap @ 0x1402C655C (CcDeleteSharedCacheMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDeleteSectionsForPartition(_QWORD **a1, __int64 a2)
{
  _QWORD *i; // rcx
  _QWORD *v5; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  __int64 result; // rax
  unsigned __int64 v19; // rbx
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  __int128 Object; // [rsp+48h] [rbp-28h] BYREF
  __int128 v24; // [rsp+58h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v24 = 0LL;
LABEL_2:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 128), &LockHandle);
  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v5 = i - 17;
    if ( (i[2] & 0x800) == 0 )
    {
      if ( MmGetControlAreaPartition(*(_QWORD *)((v5[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28)) != *(_QWORD *)(a2 + 8) )
        KeBugCheckEx(0x34u, 0x320uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( (_QWORD *)v5[28] != v5 + 28 )
        goto LABEL_8;
      v12 = *((_DWORD *)v5 + 38);
      if ( (v12 & 0x8000) != 0 )
      {
        *((_DWORD *)v5 + 38) = v12 & 0xFFFF7FFF;
LABEL_8:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v11 = (v10 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v10;
              if ( v11 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        goto LABEL_2;
      }
      if ( (v12 & 0x20) != 0 || *((_DWORD *)v5 + 1) || *((_DWORD *)v5 + 28) )
      {
        *((_DWORD *)v5 + 38) = v12 | 0x10000;
        WORD4(Object) = 0;
        HIDWORD(Object) = 0;
        *((_QWORD *)&v24 + 1) = &v24;
        *(_QWORD *)&v24 = &v24;
        BYTE10(Object) = 6;
        *(_QWORD *)&Object = v5[34];
        v5[34] = (char *)&Object + 1;
        CcScheduleLazyWriteScan(a2, 1, 1);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v13 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v14 = KeGetCurrentIrql();
            if ( v14 <= 0xFu && LockHandle.OldIrql <= 0xFu && v14 >= 2u )
            {
              v15 = KeGetCurrentPrcb();
              v16 = v15->SchedulerAssist;
              v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v11 = (v17 & v16[5]) == 0;
              v16[5] &= v17;
              if ( v11 )
                KiRemoveSystemWorkPriorityKick((__int64)v15);
            }
          }
        }
        __writecr8(v13);
        KeWaitForSingleObject((char *)&Object + 8, Executive, 0, 0, 0LL);
      }
      else
      {
        CcDeleteSharedCacheMap((char *)v5, 0LL, &LockHandle, 0LL, 0LL);
      }
      goto LABEL_2;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  v19 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = ((unsigned int)result & v21[5]) == 0;
        v21[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v20);
      }
    }
  }
  __writecr8(v19);
  return result;
}
