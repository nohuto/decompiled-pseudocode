/*
 * XREFs of CcScanLogHandleList @ 0x1402FE8F4
 * Callers:
 *     CcLazyWriteScan @ 0x1403005E4 (CcLazyWriteScan.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcCalculatePagesToWrite @ 0x1403021B4 (CcCalculatePagesToWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcScanLogHandleList(__int64 a1, _DWORD *a2, int a3, __int64 *a4)
{
  __int64 *v7; // r14
  KSPIN_LOCK *v8; // r13
  __int64 *v9; // rbx
  unsigned __int64 OldIrql; // rdi
  __int64 v11; // rcx
  unsigned int *v12; // rdi
  unsigned int *v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rax
  int v17; // edx
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  int v21; // eax
  int v22; // eax
  __int64 result; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  __int64 v35; // rdx
  __int64 **v36; // rcx
  void *v37; // rcx
  struct _KPRCB *v38; // r9
  _DWORD *v39; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v41; // [rsp+48h] [rbp-18h] BYREF
  int v42; // [rsp+A0h] [rbp+40h]
  unsigned __int16 v43; // [rsp+A8h] [rbp+48h] BYREF
  int v44; // [rsp+B0h] [rbp+50h]

  v44 = a3;
  v42 = a1;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  *(_QWORD *)&v41.OldIrql = 0LL;
  *a2 = 0;
  *a4 = 0x7FFFFFFFFFFFFFFFLL;
  v43 = 0;
  LockHandle.LockQueue = 0LL;
  v41.LockQueue = 0LL;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v7 = (__int64 *)CcVolumeCacheMapList;
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    v8 = (KSPIN_LOCK *)(a1 + 128);
    do
    {
      v9 = v7 - 2;
      ++*((_DWORD *)v7 - 3);
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
            v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v30 = (v29 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v29;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      v11 = v9[5];
      if ( v11 )
        ((void (__fastcall *)(__int64, unsigned __int16 *))v9[7])(v11, &v43);
      KeAcquireInStackQueuedSpinLock(v8, &v41);
      if ( !v9[5] )
        goto LABEL_13;
      v12 = (unsigned int *)(v9 + 8);
      v13 = (unsigned int *)(v9 + 14);
      if ( (unsigned __int64)v9[8] >= 0xFFFFFFFF )
      {
        ++CcDbgForcedLogPercentFull;
        v43 = 0;
      }
      else
      {
        v14 = *v12;
        *v13 = *v12;
        if ( v43 )
        {
          v15 = 100 * v14;
          *v13 = v15;
          v16 = v15 / v43;
          goto LABEL_10;
        }
      }
      v16 = *((unsigned int *)v9 + 37);
LABEL_10:
      v17 = v44;
      v9[11] = v16;
      v9[13] = v16;
      v9[12] = v16;
      *v13 = (unsigned int)(3 * v16) >> 2;
      v18 = CcCalculatePagesToWrite(v42, v17, (int)v9 + 64, (int)v9 + 88, 1);
      v19 = *(_QWORD *)v12;
      v9[9] = *(_QWORD *)v12;
      if ( v18 > v19 >> 3 )
      {
        *a2 += v18;
        ++CcDbgAdditionalPagesQueuedCount;
      }
      else
      {
        v18 = 0;
      }
      *((_DWORD *)v9 + 36) = v18;
      *((_DWORD *)v9 + 20) = v18;
      if ( v9[4] )
      {
        v25 = v9[22];
        if ( v25 < *a4 )
          *a4 = v25;
      }
LABEL_13:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v41);
      v20 = v41.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v31 = KeGetCurrentIrql();
          if ( v31 <= 0xFu && v41.OldIrql <= 0xFu && v31 >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            v33 = v32->SchedulerAssist;
            v34 = ~(unsigned __int16)(-1LL << (v41.OldIrql + 1));
            v30 = (v34 & v33[5]) == 0;
            v33[5] &= v34;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
      }
      __writecr8(v20);
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      v21 = *((_DWORD *)v9 + 1);
      v7 = (__int64 *)*v7;
      if ( !v21 )
        KeBugCheckEx(0x34u, 0x599uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v22 = v21 - 1;
      *((_DWORD *)v9 + 1) = v22;
      if ( !v22 )
      {
        v35 = v9[2];
        v36 = (__int64 **)v9[3];
        if ( *(__int64 **)(v35 + 8) != v9 + 2 || *v36 != v9 + 2 )
          __fastfail(3u);
        *v36 = (__int64 *)v35;
        *(_QWORD *)(v35 + 8) = v36;
        v37 = (void *)v9[20];
        if ( v37 )
        {
          ObfDereferenceObjectWithTag(v37, 0x746C6644u);
          v9[20] = 0LL;
        }
        ExFreePoolWithTag(v9, 0x6D566343u);
      }
    }
    while ( v7 != &CcVolumeCacheMapList );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  v24 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v38 = KeGetCurrentPrcb();
        v39 = v38->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v30 = ((unsigned int)result & v39[5]) == 0;
        v39[5] &= result;
        if ( v30 )
          result = KiRemoveSystemWorkPriorityKick(v38);
      }
    }
  }
  __writecr8(v24);
  return result;
}
