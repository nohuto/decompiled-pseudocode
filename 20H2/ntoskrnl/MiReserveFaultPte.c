/*
 * XREFs of MiReserveFaultPte @ 0x140538FDC
 * Callers:
 *     MiValidateImagePfn @ 0x1406BEE74 (MiValidateImagePfn.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlFindClearBitsAndSet @ 0x1402E3170 (RtlFindClearBitsAndSet.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiReserveFaultPte()
{
  __int64 ClearBitsAndSet; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  BitMapHeader.SizeOfBitMap = 16;
  memset(&LockHandle, 0, sizeof(LockHandle));
  BitMapHeader.Buffer = (unsigned int *)&dword_140C4EBC8;
  KeAcquireInStackQueuedSpinLock(&qword_140C4EBC0, &LockHandle);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
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
        v5 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v6 = (v5 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v5;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( (_DWORD)ClearBitsAndSet == -1 )
    return 0LL;
  else
    return qword_140C4EBB8 + 8 * ClearBitsAndSet;
}
