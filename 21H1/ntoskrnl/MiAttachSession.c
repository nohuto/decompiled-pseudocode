/*
 * XREFs of MiAttachSession @ 0x1403001B8
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14025CC40 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeFlushTb @ 0x1402775A0 (KeFlushTb.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCompareTbFlushTimeStamp @ 0x1403002B4 (MiCompareTbFlushTimeStamp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAttachSession(unsigned __int64 a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi
  int v4; // esi
  unsigned __int64 OldIrql; // rbx
  __int64 result; // rax
  bool v7; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
  KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] = a1;
  v2 = *(_QWORD *)(a1 + 816);
  v3 = (__int64 *)(8 * (((unsigned __int64)qword_140C4DD20 >> 39) & 0x1FF) - 0x90482413000LL);
  v4 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v3) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v4 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_2;
      v7 = (v2 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_2;
      v7 = (v2 & 1) == 0;
    }
    if ( !v7 )
      v2 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *v3 = v2;
  if ( v4 )
    MiWritePteShadow((__int64)v3, v2);
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
        v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v7 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = MiCompareTbFlushTimeStamp(
             *(unsigned int *)(*(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(a1 + 430)) + 6872LL),
             0xFFFFFFFFLL);
  if ( (_BYTE)result )
    return KeFlushTb(1u, 0);
  return result;
}
