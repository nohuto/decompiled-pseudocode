/*
 * XREFs of MiEmptyAccessLogs @ 0x1403A06A0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiDrainSystemAccessLog @ 0x14024BBE0 (MiDrainSystemAccessLog.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetNextSession @ 0x1402DC978 (MiGetNextSession.c)
 *     MmDetachSession @ 0x1402DCA80 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402DCB20 (MmAttachSession.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403A0884 (MiCheckAndProcessCcAccessLog.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     PsGetNextProcess @ 0x140698790 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void MiEmptyAccessLogs()
{
  PSLIST_ENTRY v0; // r15
  unsigned __int64 v1; // rdi
  _KPROCESS *i; // rcx
  __int64 NextProcess; // rax
  _KPROCESS *v4; // rdi
  __int64 v5; // r14
  struct _DMA_ADAPTER *j; // rcx
  _KPROCESS *NextSession; // rax
  __int64 v8; // rdi
  unsigned __int64 SessionVm; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v28[3]; // [rsp+38h] [rbp-38h] BYREF

  memset(v28, 0, sizeof(v28));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4E640, &LockHandle);
  if ( dword_140C4E628 )
  {
    stru_140C4E608.Parameter = 0LL;
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
          v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
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
      stru_140C4E608.Parameter = (void *)2;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v1 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && LockHandle.OldIrql <= 0xFu && v19 >= 2u )
          {
            v20 = KeGetCurrentPrcb();
            v21 = v20->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v18 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v20);
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
          KiStackAttachProcess(v4, 0LL, (__int64)v28);
          MiDrainSystemAccessLog(v5);
          KiUnstackDetachProcess((__int64)v28, 0LL);
        }
      }
      for ( j = 0LL; ; j = (struct _DMA_ADAPTER *)v8 )
      {
        NextSession = (_KPROCESS *)MiGetNextSession(j);
        v8 = (__int64)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession, (__int64)v28) >= 0 )
        {
          SessionVm = MiGetSessionVm();
          MiDrainSystemAccessLog(SessionVm);
          MmDetachSession(v8, (__int64)v28);
        }
      }
      v10 = &unk_140C4EE00;
      v11 = 3LL;
      do
      {
        if ( v10[14] )
          MiDrainSystemAccessLog((__int64)v10);
        v10 += 40;
        --v11;
      }
      while ( v11 );
      MiCheckAndProcessCcAccessLog(0LL, 1LL);
      KeAcquireInStackQueuedSpinLock(&qword_140C4E640, &LockHandle);
    }
    while ( stru_140C4E608.Parameter != (void *)2 );
    if ( !dword_140C4E628 )
    {
      v0 = P;
      P = 0LL;
    }
    stru_140C4E608.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v12 = LockHandle.OldIrql;
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
          v18 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    __writecr8(v12);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
}
