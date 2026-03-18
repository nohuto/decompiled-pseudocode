/*
 * XREFs of MmIsSessionInCurrentServerSilo @ 0x1403A3D78
 * Callers:
 *     PopGetSettingNotificationName @ 0x14064BA50 (PopGetSettingNotificationName.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsGetThreadServerSilo @ 0x1402BE900 (PsGetThreadServerSilo.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmIsSessionInCurrentServerSilo(unsigned int a1)
{
  int SessionId; // eax
  int v3; // edx
  bool v4; // di
  __int64 ThreadServerSilo; // rbp
  _QWORD *v6; // rcx
  unsigned int v7; // edx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v3 = 0;
  if ( SessionId != -1 )
    v3 = SessionId;
  if ( v3 == a1 )
    return 1;
  v4 = 0;
  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v6 = (_QWORD *)qword_140C4DBE8;
  while ( v6 )
  {
    v7 = *((_DWORD *)v6 - 34);
    if ( a1 > v7 )
    {
      v6 = (_QWORD *)v6[1];
    }
    else
    {
      if ( a1 >= v7 )
      {
        if ( v6[113] == ThreadServerSilo && v7 == a1 && (*((_DWORD *)v6 - 35) & 2) == 0 )
          v4 = *(v6 - 16) != (_QWORD)(v6 - 16);
        break;
      }
      v6 = (_QWORD *)*v6;
    }
  }
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v4;
}
