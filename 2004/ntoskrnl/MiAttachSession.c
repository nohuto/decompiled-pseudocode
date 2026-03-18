/*
 * XREFs of MiAttachSession @ 0x14033CAB8
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeFlushTb @ 0x14021E550 (KeFlushTb.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCompareTbFlushTimeStamp @ 0x14033CBB4 (MiCompareTbFlushTimeStamp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAttachSession(unsigned __int64 a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi
  int v4; // esi
  __int64 v5; // r8
  unsigned __int64 OldIrql; // rbx
  __int64 result; // rax
  bool v8; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] = a1;
  v2 = *(_QWORD *)(a1 + 816);
  v3 = (__int64 *)(8 * (((unsigned __int64)qword_140C4DBE0 >> 39) & 0x1FF) - 0x90482413000LL);
  v4 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v3) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v4 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_2;
      v8 = (v2 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_2;
      v8 = (v2 & 1) == 0;
    }
    if ( !v8 )
      v2 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *v3 = v2;
  if ( v4 )
    MiWritePteShadow((__int64)v3, v2, v5);
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
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v8 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = MiCompareTbFlushTimeStamp(
             *(unsigned int *)(*(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(a1 + 430)) + 6872LL),
             0xFFFFFFFFLL);
  if ( (_BYTE)result )
    return KeFlushTb(1u, 0);
  return result;
}
