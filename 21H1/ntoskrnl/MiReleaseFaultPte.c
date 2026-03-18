/*
 * XREFs of MiReleaseFaultPte @ 0x140534E4C
 * Callers:
 *     MiValidateImagePfn @ 0x1406CA7E4 (MiValidateImagePfn.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseFaultPte(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  int v3; // esi
  bool v4; // zf
  __int64 v5; // rdi
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
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_9;
      v4 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v4 = (ZeroPte & 1) == 0;
    }
    if ( !v4 )
      v1 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_9:
  *(_QWORD *)a1 = v1;
  if ( v3 )
    MiWritePteShadow(a1, v1);
  KeFlushSingleTb((__int64)(a1 << 25) >> 16, 0, 1u);
  v5 = (__int64)(a1 - qword_140C4EC78) >> 3;
  KeAcquireInStackQueuedSpinLock(&qword_140C4EC80, &LockHandle);
  _bittestandreset(&dword_140C4EC88, v5);
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
  return result;
}
