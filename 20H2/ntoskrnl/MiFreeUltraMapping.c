/*
 * XREFs of MiFreeUltraMapping @ 0x14039A58C
 * Callers:
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     MiReleaseLargeZeroingVa @ 0x14054E3A8 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeUltraMapping(unsigned __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v2; // rbx
  int v3; // esi
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  bool v8; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v1 = (unsigned __int64 *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  v2 = (a1 - qword_140C4EA78) >> 30;
  KeAcquireInStackQueuedSpinLock(&qword_140C4EA70, &LockHandle);
  v3 = 0;
  _bittestandset64((signed __int64 *)qword_140C4EAA0, v2);
  v4 = ZeroPte;
  if ( MiPteInShadowRange((unsigned __int64)v1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v3 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_2;
      v8 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_2;
      v8 = (ZeroPte & 1) == 0;
    }
    if ( !v8 )
      v4 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_2:
  *v1 = v4;
  if ( v3 )
    MiWritePteShadow((__int64)v1, v4, v5);
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
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
