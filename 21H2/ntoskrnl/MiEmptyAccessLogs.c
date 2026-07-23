/*
 * XREFs of MiEmptyAccessLogs @ 0x1403A3580
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     MiDrainSystemAccessLog @ 0x14027D0F0 (MiDrainSystemAccessLog.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     MiGetNextSession @ 0x1402872F8 (MiGetNextSession.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403A3764 (MiCheckAndProcessCcAccessLog.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  struct _DMA_ADAPTER *j; // rcx
  struct _DMA_ADAPTER *NextSession; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  __int64 v15; // rdi
  unsigned __int64 SessionVm; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  _QWORD *v20; // rdi
  __int64 v21; // r14
  unsigned __int64 v22; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v27; // eax
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v38[3]; // [rsp+38h] [rbp-38h] BYREF

  memset(v38, 0, sizeof(v38));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4E880, &LockHandle);
  if ( dword_140C4E868 )
  {
    stru_140C4E848.Parameter = 0LL;
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
          v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v28 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v28 )
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
      stru_140C4E848.Parameter = (void *)2;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v1 = LockHandle.OldIrql;
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
            v28 = (v32 & v31[5]) == 0;
            v31[5] &= v32;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(v30);
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
          KiStackAttachProcess(v5, 0, (__int64)v38);
          MiDrainSystemAccessLog(v6, v7, v8, v9);
          KiUnstackDetachProcess((__int64)v38, 0LL);
        }
      }
      for ( j = 0LL; ; j = (struct _DMA_ADAPTER *)v15 )
      {
        NextSession = MiGetNextSession(j, v4);
        v15 = (__int64)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession((ULONG_PTR)NextSession) >= 0 )
        {
          SessionVm = MiGetSessionVm();
          MiDrainSystemAccessLog(SessionVm, v17, v18, v19);
          MmDetachSession(v15, (__int64)v38);
        }
      }
      v20 = &unk_140C4F040;
      v21 = 3LL;
      do
      {
        if ( v20[14] )
          MiDrainSystemAccessLog((__int64)v20, v12, v13, v14);
        v20 += 40;
        --v21;
      }
      while ( v21 );
      MiCheckAndProcessCcAccessLog(0LL, 1LL);
      KeAcquireInStackQueuedSpinLock(&qword_140C4E880, &LockHandle);
    }
    while ( stru_140C4E848.Parameter != (void *)2 );
    if ( !dword_140C4E868 )
    {
      v0 = P;
      P = 0LL;
    }
    stru_140C4E848.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v22 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && LockHandle.OldIrql <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v28 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
    }
    __writecr8(v22);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
}
