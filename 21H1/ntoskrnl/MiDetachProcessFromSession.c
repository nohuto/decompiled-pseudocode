/*
 * XREFs of MiDetachProcessFromSession @ 0x140307618
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14025CC40 (MiTrimOrAgeWorkingSet.c)
 *     MiDereferenceSessionFinal @ 0x140763920 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDetachProcessFromSession(int a1)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 v3; // rbx
  int v4; // esi
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  bool v9; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (unsigned __int64 *)(8 * (((unsigned __int64)qword_140C4DD20 >> 39) & 0x1FF) - 0x90482413000LL);
  KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
  v3 = ZeroPte;
  v4 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v4 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_2;
      v9 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_2;
      v9 = (ZeroPte & 1) == 0;
    }
    if ( !v9 )
      v3 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_2:
  *v2 = v3;
  if ( v4 )
    MiWritePteShadow((__int64)v2, v3);
  v5 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
  if ( a1 == 1 )
  {
    v6 = *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(v5 + 430));
    _InterlockedOr(v12, 0);
    *(_DWORD *)(v6 + 6872) = KiTbFlushTimeStamp;
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
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
