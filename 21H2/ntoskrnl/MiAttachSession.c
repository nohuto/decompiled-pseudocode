/*
 * XREFs of MiAttachSession @ 0x1402B02F0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140208250 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeFlushTb @ 0x140230120 (KeFlushTb.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCompareTbFlushTimeStamp @ 0x1402B03EC (MiCompareTbFlushTimeStamp.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAttachSession(unsigned __int64 a1)
{
  _KPROCESS *Process; // rdx
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 OldIrql; // rbx
  __int64 result; // rax
  bool v12; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  Process = KeGetCurrentThread()->ApcState.Process;
  Process[1].AffinityPadding[5] = a1;
  v3 = *(_QWORD *)(a1 + 816);
  v4 = (_QWORD *)(8 * (((unsigned __int64)qword_140C4DDE0 >> 39) & 0x1FF) - 0x90482413000LL);
  v5 = 0;
  if ( (unsigned int)MiPteInShadowRange(v4, Process) )
  {
    if ( (unsigned int)MiPteHasShadow(v7, v6, v8, v9) )
    {
      v5 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_2;
      v12 = (v3 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_2;
      v12 = (v3 & 1) == 0;
    }
    if ( !v12 )
      v3 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *v4 = v3;
  if ( v5 )
    MiWritePteShadow(v4, v3);
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
        v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = MiCompareTbFlushTimeStamp(
             *(unsigned int *)(*(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 430)) + 6872LL),
             0xFFFFFFFFLL);
  if ( (_BYTE)result )
    return KeFlushTb(1u, 0);
  return result;
}
