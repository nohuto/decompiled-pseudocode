/*
 * XREFs of MiAttachSession @ 0x1402E9E38
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140269570 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCompareTbFlushTimeStamp @ 0x1402E9F34 (MiCompareTbFlushTimeStamp.c)
 *     KeFlushTb @ 0x1402EA180 (KeFlushTb.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAttachSession(unsigned __int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 OldIrql; // rbx
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
  KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] = a1;
  v2 = *(_QWORD *)(a1 + 816);
  v3 = (_QWORD *)(8 * (((unsigned __int64)qword_140C4DC60 >> 39) & 0x1FF) - 0x90482413000LL);
  v4 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v3) )
  {
    if ( (unsigned int)MiPteHasShadow(v6, v5, v7, v8) )
    {
      v4 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_2;
      v13 = (v2 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_2;
      v13 = (v2 & 1) == 0;
    }
    if ( !v13 )
      v2 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *v3 = v2;
  if ( v4 )
    MiWritePteShadow(v3, v2);
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
        v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = MiCompareTbFlushTimeStamp(
             *(unsigned int *)(*(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a1 + 430)) + 6872LL),
             0xFFFFFFFFLL);
  if ( (_BYTE)result )
    return KeFlushTb(1LL, 0LL, v11, v12);
  return result;
}
