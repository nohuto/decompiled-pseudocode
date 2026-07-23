/*
 * XREFs of CcInitializeVolumeCacheMap @ 0x1402332F0
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1402D2E10 (CcInitializeCacheMapEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcSetupWatchForRegistryChanges @ 0x1403CCFD8 (CcSetupWatchForRegistryChanges.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcInitializeVolumeCacheMap(__int64 a1, __int64 **a2)
{
  __int64 v2; // r12
  __int64 v4; // r12
  __int64 *i; // rax
  __int64 *v6; // r14
  unsigned __int64 OldIrql; // r15
  unsigned __int64 v9; // r14
  __int64 *PoolWithTag; // rax
  __int64 *j; // rax
  __int64 *v12; // r15
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  unsigned __int64 v27; // r12
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v2 )
    v4 = *(_QWORD *)(v2 + 8);
  else
    v4 = *(_QWORD *)(a1 + 8);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( i = (__int64 *)CcVolumeCacheMapList; i != &CcVolumeCacheMapList; i = (__int64 *)*i )
  {
    v6 = i - 2;
    if ( *(i - 1) == v4 )
    {
      ++*((_DWORD *)v6 + 1);
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
            v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v22 = (v21 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v21;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      goto LABEL_9;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v9 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && LockHandle.OldIrql <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v22 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
  }
  __writecr8(v9);
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x6D566343u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xD0uLL);
  ++*((_DWORD *)v6 + 1);
  *(_DWORD *)v6 = 13632248;
  v6[1] = v4;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( j = (__int64 *)CcVolumeCacheMapList; j != &CcVolumeCacheMapList; j = (__int64 *)*j )
  {
    v12 = j - 2;
    if ( *(j - 1) == v4 )
    {
      ++*((_DWORD *)v12 + 1);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v27 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v28 = KeGetCurrentIrql();
          if ( v28 <= 0xFu && LockHandle.OldIrql <= 0xFu && v28 >= 2u )
          {
            v29 = KeGetCurrentPrcb();
            v30 = v29->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v22 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
      }
      __writecr8(v27);
      ExFreePoolWithTag(v6, 0x6D566343u);
      *a2 = v12;
      return 0LL;
    }
  }
  v13 = (_QWORD *)qword_140C48878;
  v14 = v6 + 2;
  if ( *(__int64 **)qword_140C48878 != &CcVolumeCacheMapList )
    __fastfail(3u);
  v6[3] = qword_140C48878;
  *v14 = &CcVolumeCacheMapList;
  *v13 = v14;
  qword_140C48878 = (__int64)(v6 + 2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v17 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && LockHandle.OldIrql <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v16 = (unsigned int)LockHandle.OldIrql + 1;
        v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v22 = (v35 & v34[5]) == 0;
        v15 = (unsigned int)v35 & v34[5];
        v34[5] = v15;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
  }
  __writecr8(v17);
  if ( !CcRegistryWatchInitComplete )
    CcSetupWatchForRegistryChanges(v16, v15);
LABEL_9:
  *a2 = v6;
  return 0LL;
}
