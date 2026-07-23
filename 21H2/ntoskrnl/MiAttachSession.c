/*
 * XREFs of MiAttachSession @ 0x14022E650
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCompareTbFlushTimeStamp @ 0x14022E74C (MiCompareTbFlushTimeStamp.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAttachSession(unsigned __int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 OldIrql; // rbx
  __int64 result; // rax
  bool v9; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] = a1;
  v2 = *(_QWORD *)(a1 + 816);
  v3 = (_QWORD *)(8 * (((unsigned __int64)qword_140C4DE20 >> 39) & 0x1FF) - 0x90482413000LL);
  v4 = 0;
  if ( (unsigned int)MiPteInShadowRange(v3) )
  {
    if ( (unsigned int)MiPteHasShadow(v6, v5) )
    {
      v4 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_2;
      v9 = (v2 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_2;
      v9 = (v2 & 1) == 0;
    }
    if ( !v9 )
      v2 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *v3 = v2;
  if ( v4 )
    MiWritePteShadow(v3);
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
        v9 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = MiCompareTbFlushTimeStamp(
             *(unsigned int *)(*(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 430)) + 6872LL),
             0xFFFFFFFFLL);
  if ( (_BYTE)result )
    return KeFlushTb(1LL);
  return result;
}
