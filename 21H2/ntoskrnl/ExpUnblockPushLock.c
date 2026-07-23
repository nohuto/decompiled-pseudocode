/*
 * XREFs of ExpUnblockPushLock @ 0x140214048
 * Callers:
 *     CmpTryToRundownHive @ 0x140213B70 (CmpTryToRundownHive.c)
 *     ExUnblockPushLockEx @ 0x140213D40 (ExUnblockPushLockEx.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x140213D74 (CmpDecrementAppHiveUnloadCount.c)
 *     ExBlockOnAddressPushLock @ 0x140213E80 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140213F60 (ExTimedWaitForUnblockPushLock.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140220E60 (RtlpCSparseBitmapPageDecommit.c)
 *     ExSweepSingleHandle @ 0x140275C04 (ExSweepSingleHandle.c)
 *     MiUnlockImageSection @ 0x140325780 (MiUnlockImageSection.c)
 *     RtlReleaseSwapReference @ 0x1403A6ED8 (RtlReleaseSwapReference.c)
 *     ExUnblockOnAddressPushLockEx @ 0x1403F9690 (ExUnblockOnAddressPushLockEx.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     IopCheckHandleForRevocation @ 0x140507540 (IopCheckHandleForRevocation.c)
 *     PspHandleTableWalker @ 0x140581B30 (PspHandleTableWalker.c)
 * Callees:
 *     ExTimedWaitForUnblockPushLock @ 0x140213F60 (ExTimedWaitForUnblockPushLock.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall ExpUnblockPushLock(volatile __int64 *a1, void *a2, char a3)
{
  char v3; // si
  __int64 v4; // r10
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // rbp
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *SchedulerAssist; // r8
  int v14; // eax
  bool v15; // zf

  v3 = 0;
  v4 = _InterlockedExchange64(a1, 0LL);
  LODWORD(CurrentPrcb) = 2;
  CurrentIrql = 2;
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 24) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LODWORD(CurrentPrcb) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          *((_DWORD *)CurrentPrcb->SchedulerAssist + 5) |= (-1 << (CurrentIrql + 1)) & 4;
        }
      }
    }
    do
    {
      v10 = *(_QWORD *)(v4 + 24);
      if ( (void *)v4 == a2 )
        v3 = 1;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 52), 1u) )
        LODWORD(CurrentPrcb) = KeSetEvent((PRKEVENT)v4, 1, 0);
      v4 = v10;
    }
    while ( v10 );
    if ( CurrentIrql != 2 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v11 = KeGetCurrentIrql();
          if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
          {
            v12 = KeGetCurrentPrcb();
            SchedulerAssist = v12->SchedulerAssist;
            v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v15 = (v14 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v14;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(v12);
          }
        }
      }
      LODWORD(CurrentPrcb) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( a2 && !v3 )
  {
    if ( a3 )
      LODWORD(CurrentPrcb) = KeWaitForSingleObject(a2, WrPushLock, 0, 0, 0LL);
    else
      LODWORD(CurrentPrcb) = ExTimedWaitForUnblockPushLock((__int64)a1, (char *)a2, 0LL);
  }
  return (int)CurrentPrcb;
}
