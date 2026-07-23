/*
 * XREFs of MmIsSessionInCurrentServerSilo @ 0x1403A6B58
 * Callers:
 *     PopGetSettingNotificationName @ 0x14066CF64 (PopGetSettingNotificationName.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsGetThreadServerSilo @ 0x1402AAE70 (PsGetThreadServerSilo.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D74 (KeIsExecutingInArbitraryThreadContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmIsSessionInCurrentServerSilo(unsigned int a1)
{
  int SessionId; // eax
  int v3; // edx
  bool v5; // di
  __int64 ThreadServerSilo; // rsi
  _QWORD *v7; // rcx
  unsigned int v8; // eax
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
  v5 = 0;
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext() )
    ThreadServerSilo = 0LL;
  else
    ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v7 = (_QWORD *)qword_140C4DE28;
  while ( v7 )
  {
    v8 = *((_DWORD *)v7 - 34);
    if ( a1 > v8 )
    {
      v7 = (_QWORD *)v7[1];
    }
    else
    {
      if ( a1 >= v8 )
      {
        if ( v7[113] == ThreadServerSilo && v8 == a1 && (*((_DWORD *)v7 - 35) & 2) == 0 )
          v5 = *(v7 - 16) != (_QWORD)(v7 - 16);
        break;
      }
      v7 = (_QWORD *)*v7;
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
  return v5;
}
