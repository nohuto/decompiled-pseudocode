/*
 * XREFs of MiReleaseFaultPte @ 0x140538E6C
 * Callers:
 *     MiValidateImagePfn @ 0x1406BEE74 (MiValidateImagePfn.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x140353AC8 (KeFlushSingleTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseFaultPte(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  int v3; // esi
  __int64 v4; // r8
  bool v5; // zf
  __int64 v6; // rdi
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = ZeroPte;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  if ( MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v3 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_9;
      v5 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v5 = (ZeroPte & 1) == 0;
    }
    if ( !v5 )
      v1 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_9:
  *(_QWORD *)a1 = v1;
  if ( v3 )
    MiWritePteShadow(a1, v1, v4);
  KeFlushSingleTb((__int64)(a1 << 25) >> 16, 0, 1u);
  v6 = (__int64)(a1 - qword_140C4EBB8) >> 3;
  KeAcquireInStackQueuedSpinLock(&qword_140C4EBC0, &LockHandle);
  _bittestandreset(&dword_140C4EBC8, v6);
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
        v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v5 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
