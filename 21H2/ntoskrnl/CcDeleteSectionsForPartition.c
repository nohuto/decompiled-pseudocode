/*
 * XREFs of CcDeleteSectionsForPartition @ 0x1404EC0C4
 * Callers:
 *     CcExitPartition @ 0x1404EC394 (CcExitPartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDeleteSharedCacheMap @ 0x1402FEB2C (CcDeleteSharedCacheMap.c)
 *     CcScheduleLazyWriteScan @ 0x140301AAC (CcScheduleLazyWriteScan.c)
 *     MmGetControlAreaPartition @ 0x14033D860 (MmGetControlAreaPartition.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDeleteSectionsForPartition(_QWORD **a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  _QWORD *i; // rcx
  _QWORD *v8; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  unsigned __int64 v16; // rbx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  __int64 result; // rax
  unsigned __int64 v22; // rbx
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  __int128 Object; // [rsp+48h] [rbp-28h] BYREF
  __int128 v27; // [rsp+58h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v27 = 0LL;
LABEL_2:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 128), &LockHandle);
  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v8 = i - 17;
    if ( (i[2] & 0x800) == 0 )
    {
      if ( MmGetControlAreaPartition(*(_QWORD *)((v8[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28), v4, v5, v6) != *(_QWORD *)(a2 + 8) )
        KeBugCheckEx(0x34u, 0x320uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( (_QWORD *)v8[28] != v8 + 28 )
        goto LABEL_8;
      v15 = *((_DWORD *)v8 + 38);
      if ( (v15 & 0x8000) != 0 )
      {
        *((_DWORD *)v8 + 38) = v15 & 0xFFFF7FFF;
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
              v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v14 = (v13 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v13;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        goto LABEL_2;
      }
      if ( (v15 & 0x20) != 0 || *((_DWORD *)v8 + 1) || *((_DWORD *)v8 + 28) )
      {
        *((_DWORD *)v8 + 38) = v15 | 0x10000;
        WORD4(Object) = 0;
        HIDWORD(Object) = 0;
        *((_QWORD *)&v27 + 1) = &v27;
        *(_QWORD *)&v27 = &v27;
        BYTE10(Object) = 6;
        *(_QWORD *)&Object = v8[34];
        v8[34] = (char *)&Object + 1;
        CcScheduleLazyWriteScan(a2, 1, 1);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v16 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v17 = KeGetCurrentIrql();
            if ( v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
            {
              v18 = KeGetCurrentPrcb();
              v19 = v18->SchedulerAssist;
              v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v14 = (v20 & v19[5]) == 0;
              v19[5] &= v20;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick((__int64)v18);
            }
          }
        }
        __writecr8(v16);
        KeWaitForSingleObject((char *)&Object + 8, Executive, 0, 0, 0LL);
      }
      else
      {
        CcDeleteSharedCacheMap((char *)v8, 0LL, &LockHandle, 0, 0LL);
      }
      goto LABEL_2;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  v22 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = ((unsigned int)result & v24[5]) == 0;
        v24[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v23);
      }
    }
  }
  __writecr8(v22);
  return result;
}
