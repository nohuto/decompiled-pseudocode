/*
 * XREFs of MiEmptyAccessLogs @ 0x140375ED0
 * Callers:
 *     <none>
 * Callees:
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiDrainSystemAccessLog @ 0x1402829D0 (MiDrainSystemAccessLog.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetNextSession @ 0x1402A1788 (MiGetNextSession.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403760B4 (MiCheckAndProcessCcAccessLog.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PsGetNextProcess @ 0x1407B6B90 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  _QWORD *j; // rcx
  void *NextSession; // rax
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
  KeAcquireInStackQueuedSpinLock(&qword_140C52B80, &LockHandle);
  if ( dword_140C52B68 )
  {
    stru_140C52B48.Parameter = 0LL;
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
      stru_140C52B48.Parameter = (void *)2;
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
      for ( i = 0LL; ; i = v4 )
      {
        NextProcess = PsGetNextProcess(i);
        v4 = (_KPROCESS *)NextProcess;
        if ( !NextProcess )
          break;
        v5 = NextProcess + 1664;
        if ( *((_QWORD *)MiGetSharedVm(NextProcess + 1664) + 5) )
        {
          KiStackAttachProcess(v4, 0LL, (__int64)v29, v6);
          MiDrainSystemAccessLog(v5);
          KiUnstackDetachProcess((__int64)v29, 0LL);
        }
      }
      for ( j = 0LL; ; j = (_QWORD *)v9 )
      {
        NextSession = MiGetNextSession(j);
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
      v11 = &unk_140C53580;
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
      KeAcquireInStackQueuedSpinLock(&qword_140C52B80, &LockHandle);
    }
    while ( stru_140C52B48.Parameter != (void *)2 );
    if ( !dword_140C52B68 )
    {
      v0 = ListEntry;
      ListEntry = 0LL;
    }
    stru_140C52B48.Parameter = 0LL;
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
