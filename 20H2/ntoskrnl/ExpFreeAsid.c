/*
 * XREFs of ExpFreeAsid @ 0x1405B7000
 * Callers:
 *     ExFreeSvmAsid @ 0x14032761C (ExFreeSvmAsid.c)
 *     ExpAssignPasid @ 0x1409593D4 (ExpAssignPasid.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpFreeAsid(unsigned int a1)
{
  _KPROCESS *Process; // rbp
  _QWORD *v3; // rax
  bool v4; // zf
  int v5; // edi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_140C16798, &LockHandle);
  v3 = (char *)qword_140C16790 + 16 * a1;
  v4 = v3[1]-- == 1LL;
  if ( v4 )
  {
    *v3 = 0LL;
    v5 = 1;
    --dword_140C16788;
  }
  else
  {
    v3[1] |= 0x8000000000000000uLL;
    v5 = 0;
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
        v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v4 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v5 == 1 )
    HalPutDmaAdapter((PADAPTER_OBJECT)Process);
}
