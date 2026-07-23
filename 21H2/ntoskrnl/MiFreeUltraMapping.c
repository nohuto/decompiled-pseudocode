/*
 * XREFs of MiFreeUltraMapping @ 0x14039AB4C
 * Callers:
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 *     MiReleaseLargeZeroingVa @ 0x1405500B8 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeUltraMapping(unsigned __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v2; // rbx
  int v3; // esi
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  bool v7; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v1 = (unsigned __int64 *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  v2 = (a1 - qword_140C4EC38) >> 30;
  KeAcquireInStackQueuedSpinLock(&qword_140C4EC30, &LockHandle);
  v3 = 0;
  _bittestandset64((signed __int64 *)qword_140C4EC60, v2);
  v4 = ZeroPte;
  if ( MiPteInShadowRange((unsigned __int64)v1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v3 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_2;
      v7 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_2;
      v7 = (ZeroPte & 1) == 0;
    }
    if ( !v7 )
      v4 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_2:
  *v1 = v4;
  if ( v3 )
    MiWritePteShadow((__int64)v1, v4);
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
        v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
