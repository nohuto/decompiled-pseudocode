/*
 * XREFs of ExpFreeAsid @ 0x140640EE8
 * Callers:
 *     ExFreeSvmAsid @ 0x140251BDC (ExFreeSvmAsid.c)
 *     ExpAssignPasid @ 0x140A02994 (ExpAssignPasid.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall ExpFreeAsid(unsigned int a1)
{
  _KPROCESS *Process; // rbp
  _QWORD *v3; // rax
  bool v4; // zf
  int v5; // edi
  LONG_PTR result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_140C11498, &LockHandle);
  v3 = (char *)qword_140C11490 + 16 * a1;
  v4 = v3[1]-- == 1LL;
  if ( v4 )
  {
    *v3 = 0LL;
    v5 = 1;
    --dword_140C11488;
  }
  else
  {
    v3[1] |= 0x8000000000000000uLL;
    v5 = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v4 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v4 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v5 == 1 )
    return ObfDereferenceObject(Process);
  return result;
}
