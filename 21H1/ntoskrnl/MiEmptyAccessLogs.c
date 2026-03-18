/*
 * XREFs of MiEmptyAccessLogs @ 0x14039FF10
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiDrainSystemAccessLog @ 0x1402A4C10 (MiDrainSystemAccessLog.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiGetNextSession @ 0x14035D938 (MiGetNextSession.c)
 *     MmDetachSession @ 0x14035DA40 (MmDetachSession.c)
 *     MmAttachSession @ 0x14035DAE0 (MmAttachSession.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403A00F4 (MiCheckAndProcessCcAccessLog.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     PsGetNextProcess @ 0x1405EF280 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void MiEmptyAccessLogs()
{
  PSLIST_ENTRY v0; // r15
  unsigned __int64 v1; // rdi
  _KPROCESS *i; // rcx
  __int64 NextProcess; // rax
  _KPROCESS *v4; // rdi
  __int64 v5; // r14
  _DWORD *v6; // r9
  __int64 v7; // r8
  _DWORD *v8; // r9
  struct _DMA_ADAPTER *j; // rcx
  _KPROCESS *NextSession; // rax
  __int64 v11; // rdi
  unsigned __int64 SessionVm; // rax
  _QWORD *v13; // rdi
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v31[3]; // [rsp+38h] [rbp-38h] BYREF

  memset(v31, 0, sizeof(v31));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4E780, &LockHandle);
  if ( dword_140C4E768 )
  {
    stru_140C4E748.Parameter = 0LL;
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
          v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v21 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
    v0 = 0LL;
    do
    {
      stru_140C4E748.Parameter = (void *)2;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v1 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = v23->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v21 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
      }
      __writecr8(v1);
      for ( i = 0LL; ; i = v4 )
      {
        NextProcess = PsGetNextProcess(i);
        v4 = (_KPROCESS *)NextProcess;
        if ( !NextProcess )
          break;
        v5 = NextProcess + 1664;
        if ( *((_QWORD *)MiGetSharedVm(NextProcess + 1664) + 5) )
        {
          KiStackAttachProcess(v4, 0LL, (__int64)v31, v6);
          MiDrainSystemAccessLog(v5);
          KiUnstackDetachProcess((__int64)v31, 0LL, v7, v8);
        }
      }
      for ( j = 0LL; ; j = (struct _DMA_ADAPTER *)v11 )
      {
        NextSession = (_KPROCESS *)MiGetNextSession(j);
        v11 = (__int64)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession, (__int64)v31) >= 0 )
        {
          SessionVm = MiGetSessionVm();
          MiDrainSystemAccessLog(SessionVm);
          MmDetachSession(v11, (__int64)v31);
        }
      }
      v13 = &unk_140C4EF40;
      v14 = 3LL;
      do
      {
        if ( v13[14] )
          MiDrainSystemAccessLog((__int64)v13);
        v13 += 40;
        --v14;
      }
      while ( v14 );
      MiCheckAndProcessCcAccessLog(0LL, 1LL);
      KeAcquireInStackQueuedSpinLock(&qword_140C4E780, &LockHandle);
    }
    while ( stru_140C4E748.Parameter != (void *)2 );
    if ( !dword_140C4E768 )
    {
      v0 = P;
      P = 0LL;
    }
    stru_140C4E748.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v15 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && LockHandle.OldIrql <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v21 = (v29 & v28[5]) == 0;
          v28[5] &= v29;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
    }
    __writecr8(v15);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
}
