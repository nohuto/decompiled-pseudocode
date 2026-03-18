/*
 * XREFs of MiWriteTopLevelPxe @ 0x1405AE8FC
 * Callers:
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 *     MiLinkPoolCommitChain @ 0x140352A00 (MiLinkPoolCommitChain.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWriteTopLevelPxe(__int64 *a1, __int64 a2)
{
  BOOL v4; // eax
  BOOL v5; // edx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v4 = MiPteInShadowRange((unsigned __int64)a1);
  v5 = 0;
  if ( (a2 & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_10;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v5 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_10;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_10;
    }
    a2 |= 0x8000000000000000uLL;
  }
  else if ( v4 )
  {
    v5 = MiPteHasShadow() != 0;
  }
LABEL_10:
  *a1 = a2;
  if ( v5 )
    MiWritePteShadow((__int64)a1, a2);
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
        v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v10 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
