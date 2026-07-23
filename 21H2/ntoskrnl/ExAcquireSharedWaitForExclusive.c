/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x1405B4FA0
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x140276F3C (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1405B5580 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpBoostIoAfterAcquire @ 0x140204490 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140235590 (ExpApplyPrewaitBoost.c)
 *     ExpFindEmptyEntry @ 0x1402367CC (ExpFindEmptyEntry.c)
 *     ExpPrepareToWaitForResourceShared @ 0x14024F25C (ExpPrepareToWaitForResourceShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpGetThreadResourceHint @ 0x140329250 (ExpGetThreadResourceHint.c)
 *     ExpWaitForResource @ 0x14034D120 (ExpWaitForResource.c)
 *     ExpFindCurrentThread @ 0x1403587A0 (ExpFindCurrentThread.c)
 *     ExpTryAcquireResourceShared @ 0x14038F7DC (ExpTryAcquireResourceShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405AAFBC (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405AB488 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  bool v2; // zf
  ERESOURCE_THREAD CurrentThread; // r15
  int v6; // r13d
  __int16 v7; // ax
  unsigned int ThreadResourceHint; // eax
  ERESOURCE_THREAD *v9; // rax
  ERESOURCE_THREAD *v10; // r8
  int v11; // ecx
  int v12; // eax
  __int64 v13; // r8
  unsigned int v14; // r15d
  _QWORD *EmptyEntry; // rax
  _QWORD *v16; // r12
  ULONG v17; // r15d
  ULONG v18; // r15d
  unsigned __int64 OldIrql; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  unsigned int v24; // r8d
  int v25; // ecx
  BOOLEAN v26; // r12
  unsigned int v27; // r15d
  unsigned __int64 v28; // r12
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  unsigned int v33; // eax
  int v34; // r10d
  unsigned __int8 v35; // r10
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r11
  _DWORD *v38; // r9
  int v39; // eax
  _QWORD *v40; // rax
  int v41; // ecx
  unsigned __int64 v42; // r12
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  int v47; // r8d
  unsigned __int64 v48; // rbx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  int v52; // eax
  ULONG v53; // ecx
  unsigned __int64 v54; // r15
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  _DWORD *v57; // r8
  int v58; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v61[3]; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 v62; // [rsp+B8h] [rbp+38h]

  v2 = (Resource->ReservedLowFlags & 1) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v61, 0, sizeof(v61));
  if ( !v2 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  CurrentThread = (ERESOURCE_THREAD)KeGetCurrentThread();
  v6 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  __incgsdword(0x86BCu);
  KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
  while ( Resource->ActiveEntries )
  {
    v7 = Resource->Flag & 0x80;
    if ( v7 && Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      v17 = Resource->OwnerEntry.TableSize + 8;
      Resource->OwnerEntry.TableSize = v17;
      v18 = v17 >> 3;
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
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v2 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v2 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      __incgsdword(0x86C0u);
      __incgsdword(0x8664u);
      if ( v6 )
      {
        v24 = v18;
        v25 = 65585;
        goto LABEL_25;
      }
      return 1;
    }
    if ( v7 || Resource->NumberOfExclusiveWaiters )
    {
      if ( !Wait )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v48 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v49 = KeGetCurrentIrql();
            if ( v49 <= 0xFu && LockHandle.OldIrql <= 0xFu && v49 >= 2u )
            {
              v50 = KeGetCurrentPrcb();
              v51 = v50->SchedulerAssist;
              v52 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v2 = (v52 & v51[5]) == 0;
              v51[5] &= v52;
              if ( v2 )
                KiRemoveSystemWorkPriorityKick((__int64)v50);
            }
          }
        }
        __writecr8(v48);
        __incgsdword(0x86D0u);
        return 0;
      }
      if ( !v7 )
      {
        v16 = 0LL;
        goto LABEL_40;
      }
      EmptyEntry = ExpFindEmptyEntry((__int64)Resource);
      v16 = EmptyEntry;
      if ( EmptyEntry )
      {
        *EmptyEntry = CurrentThread;
        *((_DWORD *)EmptyEntry + 2) = EmptyEntry[1] & 7 | 8;
LABEL_40:
        ExpPrepareToWaitForResourceShared((__int64)Resource, CurrentThread, (__int64)v61);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v35 = LockHandle.OldIrql;
        v62 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v36 = KeGetCurrentIrql();
            if ( v36 <= 0xFu && LockHandle.OldIrql <= 0xFu && v36 >= 2u )
            {
              v37 = KeGetCurrentPrcb();
              v38 = v37->SchedulerAssist;
              v39 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v2 = (v39 & v38[5]) == 0;
              v38[5] &= v39;
              if ( v2 )
              {
                KiRemoveSystemWorkPriorityKick((__int64)v37);
                v35 = v62;
              }
            }
          }
        }
        __writecr8(v35);
        __incgsdword(0x86CCu);
        if ( v6 )
          PerfLogExecutiveResourceWait(65604, (__int64)Resource, 0);
        ExpApplyPrewaitBoost();
        ExpWaitForResource(
          &Resource->SystemResourcesList,
          (__int64)v61,
          0x10244u,
          (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
        if ( !v16 )
        {
          KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
          do
            v40 = ExpFindCurrentThread((__int64)Resource, CurrentThread, &LockHandle, 1, 1, 0);
          while ( !v40 );
          v41 = v40[1] & 7;
          *v40 = CurrentThread;
          *((_DWORD *)v40 + 2) = v41 | 8;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v42 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v43 = KeGetCurrentIrql();
              if ( v43 <= 0xFu && LockHandle.OldIrql <= 0xFu && v43 >= 2u )
              {
                v44 = KeGetCurrentPrcb();
                v45 = v44->SchedulerAssist;
                v46 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v2 = (v46 & v45[5]) == 0;
                v45[5] &= v46;
                if ( v2 )
                  KiRemoveSystemWorkPriorityKick((__int64)v44);
              }
            }
          }
          __writecr8(v42);
        }
        v47 = 0;
        if ( (CurrentThread & 3) == 0 )
          v47 = *(unsigned __int8 *)(CurrentThread + 1032);
        ExpBoostIoAfterAcquire((__int64)Resource, CurrentThread, v47);
        __incgsdword(0x86C4u);
        __incgsdword(0x8664u);
        if ( !v6 )
          return 1;
        v24 = 1;
        v25 = 65601;
LABEL_25:
        PerfLogExecutiveResourceAcquire(v25, (__int64)Resource, v24, Resource->ContentionCount);
        return 1;
      }
    }
    else
    {
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      v9 = ExpFindCurrentThread((__int64)Resource, CurrentThread, &LockHandle, 1, 1, ThreadResourceHint);
      v10 = v9;
      if ( v9 )
      {
        v11 = *((_DWORD *)v9 + 2);
        v12 = v11 & 7;
        if ( *v10 )
        {
          v14 = v12 | (v11 + 8) & 0xFFFFFFF8;
          *((_DWORD *)v10 + 2) = v14;
        }
        else
        {
          *v10 = CurrentThread;
          *((_DWORD *)v10 + 2) = v12 | 8;
          ExpTryAcquireResourceShared((__int64)Resource);
          v14 = *(_DWORD *)(v13 + 8);
        }
        v27 = v14 >> 3;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v28 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
            {
              v30 = KeGetCurrentPrcb();
              v31 = v30->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v2 = (v32 & v31[5]) == 0;
              v31[5] &= v32;
              if ( v2 )
                KiRemoveSystemWorkPriorityKick((__int64)v30);
            }
          }
        }
        __writecr8(v28);
        v33 = 34504;
        v34 = 65617;
        if ( v27 == 1 )
        {
          v34 = 65601;
          v33 = 34500;
        }
        __incgsdword(v33);
        __incgsdword(0x86C8u);
        if ( !v6 )
          return 1;
        v24 = 1;
        v25 = v34;
        goto LABEL_25;
      }
    }
  }
  v26 = ExpTryAcquireResourceShared((__int64)Resource);
  v53 = Resource->OwnerEntry.TableSize & 7;
  Resource->OwnerEntry.OwnerThread = CurrentThread;
  Resource->OwnerEntry.TableSize = v53 | 8;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v54 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v55 = KeGetCurrentIrql();
      if ( v55 <= 0xFu && LockHandle.OldIrql <= 0xFu && v55 >= 2u )
      {
        v56 = KeGetCurrentPrcb();
        v57 = v56->SchedulerAssist;
        v58 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v2 = (v58 & v57[5]) == 0;
        v57[5] &= v58;
        if ( v2 )
          KiRemoveSystemWorkPriorityKick((__int64)v56);
      }
    }
  }
  __writecr8(v54);
  __incgsdword(0x86C4u);
  __incgsdword(0x8664u);
  if ( v6 )
    PerfLogExecutiveResourceAcquire(65601, (__int64)Resource, 1u, Resource->ContentionCount);
  return v26;
}
