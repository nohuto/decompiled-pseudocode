/*
 * XREFs of MiEmptyAccessLogs @ 0x1403A2B70
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiDrainSystemAccessLog @ 0x1402330C0 (MiDrainSystemAccessLog.c)
 *     MmDetachSession @ 0x14023C8A0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14023C940 (MmAttachSession.c)
 *     MiGetNextSession @ 0x1402537F8 (MiGetNextSession.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403A2D54 (MiCheckAndProcessCcAccessLog.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PsGetNextProcess @ 0x140659AB0 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void MiEmptyAccessLogs()
{
  PSLIST_ENTRY v0; // r15
  unsigned __int64 v1; // rdi
  _KPROCESS *i; // rcx
  __int64 NextProcess; // rax
  __int64 v4; // rdx
  _KPROCESS *v5; // rdi
  __int64 v6; // r14
  struct _DMA_ADAPTER *j; // rcx
  struct _DMA_ADAPTER *NextSession; // rax
  __int64 v9; // rdi
  unsigned __int64 SessionVm; // rax
  _QWORD *v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v29[3]; // [rsp+38h] [rbp-38h] BYREF

  memset(v29, 0, sizeof(v29));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4E6C0, &LockHandle);
  if ( dword_140C4E6A8 )
  {
    stru_140C4E688.Parameter = 0LL;
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
          v19 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v19 )
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
      stru_140C4E688.Parameter = (void *)2;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v1 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
          {
            v21 = KeGetCurrentPrcb();
            v22 = v21->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v19 = (v23 & v22[5]) == 0;
            v22[5] &= v23;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(v21);
          }
        }
      }
      __writecr8(v1);
      for ( i = 0LL; ; i = v5 )
      {
        NextProcess = PsGetNextProcess(i);
        v5 = (_KPROCESS *)NextProcess;
        if ( !NextProcess )
          break;
        v6 = NextProcess + 1664;
        if ( *((_QWORD *)MiGetSharedVm(NextProcess + 1664) + 5) )
        {
          KiStackAttachProcess(v5, 0, (__int64)v29);
          MiDrainSystemAccessLog(v6);
          KiUnstackDetachProcess((__int64)v29, 0);
        }
      }
      for ( j = 0LL; ; j = (struct _DMA_ADAPTER *)v9 )
      {
        NextSession = MiGetNextSession(j, v4);
        v9 = (__int64)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession((ULONG_PTR)NextSession) >= 0 )
        {
          SessionVm = MiGetSessionVm();
          MiDrainSystemAccessLog(SessionVm);
          MmDetachSession(v9, (__int64)v29);
        }
      }
      v11 = &unk_140C4EE80;
      v12 = 3LL;
      do
      {
        if ( v11[14] )
          MiDrainSystemAccessLog((__int64)v11);
        v11 += 40;
        --v12;
      }
      while ( v12 );
      MiCheckAndProcessCcAccessLog(0LL, 1LL);
      KeAcquireInStackQueuedSpinLock(&qword_140C4E6C0, &LockHandle);
    }
    while ( stru_140C4E688.Parameter != (void *)2 );
    if ( !dword_140C4E6A8 )
    {
      v0 = P;
      P = 0LL;
    }
    stru_140C4E688.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v13 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && LockHandle.OldIrql <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
    }
    __writecr8(v13);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
}
