/*
 * XREFs of ExpUnblockPushLock @ 0x140325748
 * Callers:
 *     CmpTryToRundownHive @ 0x140272410 (CmpTryToRundownHive.c)
 *     ExUnblockPushLockEx @ 0x140272700 (ExUnblockPushLockEx.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x140272734 (CmpDecrementAppHiveUnloadCount.c)
 *     ExSweepSingleHandle @ 0x1402D22DC (ExSweepSingleHandle.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x1402D89D8 (RtlpCSparseBitmapPageDecommit.c)
 *     MiUnlockImageSection @ 0x140324F00 (MiUnlockImageSection.c)
 *     ExBlockOnAddressPushLock @ 0x140325580 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140325660 (ExTimedWaitForUnblockPushLock.c)
 *     RtlReleaseSwapReference @ 0x1403A409C (RtlReleaseSwapReference.c)
 *     ExUnblockOnAddressPushLockEx @ 0x1403F2C70 (ExUnblockOnAddressPushLockEx.c)
 *     ExfUnblockPushLock @ 0x1403F2CC0 (ExfUnblockPushLock.c)
 *     IopCheckHandleForRevocation @ 0x140502170 (IopCheckHandleForRevocation.c)
 *     PspHandleTableWalker @ 0x14057C440 (PspHandleTableWalker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140325660 (ExTimedWaitForUnblockPushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
