/*
 * XREFs of CcIsThereDirtyDataHelper @ 0x1404EADA0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcIsThereDirtyDataHelper(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // r13
  _QWORD *v4; // r15
  int v5; // esi
  __int64 i; // rbx
  int v7; // edx
  unsigned __int64 v8; // rsi
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // edx
  unsigned __int64 v20; // rbx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v2 = (KSPIN_LOCK *)(a1 + 128);
  v4 = (_QWORD *)(a1 + 48);
  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  for ( i = *v4 - 136LL; ; i = *(_QWORD *)(i + 136) - 136LL )
  {
    if ( (_QWORD *)(i + 136) == v4 )
    {
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
            v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v13 = (v18 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v18;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      return 1;
    }
    v7 = *(_DWORD *)(i + 152);
    if ( (v7 & 0x800) == 0
      && *(_QWORD *)((*(_QWORD *)(i + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x10) == *(_QWORD *)a2
      && *(_DWORD *)(i + 112)
      && (*(_DWORD *)((*(_QWORD *)(i + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) == 0 )
    {
      break;
    }
    if ( (unsigned int)++v5 >= 0x14 && (v7 & 0x820) == 0 )
    {
      *(_DWORD *)(i + 152) |= 0x20u;
      ++*(_DWORD *)(i + 112);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v8 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v9 = KeGetCurrentIrql();
          if ( v9 <= 0xFu && LockHandle.OldIrql <= 0xFu && v9 >= 2u )
          {
            v10 = KeGetCurrentPrcb();
            v11 = v10->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v13 = (v12 & v11[5]) == 0;
            v11[5] &= v12;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick((__int64)v10);
          }
        }
      }
      __writecr8(v8);
      v5 = 0;
      KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
      *(_DWORD *)(i + 152) &= ~0x20u;
      --*(_DWORD *)(i + 112);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v20 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)v22);
      }
    }
  }
  __writecr8(v20);
  *(_BYTE *)(a2 + 8) = 1;
  return 0;
}
