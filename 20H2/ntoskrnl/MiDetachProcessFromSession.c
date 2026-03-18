/*
 * XREFs of MiDetachProcessFromSession @ 0x140316258
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140269570 (MiTrimOrAgeWorkingSet.c)
 *     MiDereferenceSessionFinal @ 0x140774370 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDetachProcessFromSession(int a1)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 v3; // rbx
  int v4; // esi
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  bool v10; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (unsigned __int64 *)(8 * (((unsigned __int64)qword_140C4DC60 >> 39) & 0x1FF) - 0x90482413000LL);
  KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
  v3 = ZeroPte;
  v4 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v4 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_2;
      v10 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_2;
      v10 = (ZeroPte & 1) == 0;
    }
    if ( !v10 )
      v3 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_2:
  *v2 = v3;
  if ( v4 )
    MiWritePteShadow((__int64)v2, v3, v5);
  v6 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
  if ( a1 == 1 )
  {
    v7 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v6 + 430));
    _InterlockedOr(v13, 0);
    *(_DWORD *)(v7 + 6872) = KiTbFlushTimeStamp;
    KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] = 0LL;
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
        v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v10 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
