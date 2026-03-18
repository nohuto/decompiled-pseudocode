/*
 * XREFs of MiAttachSessionGlobal @ 0x140238D0C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14030C260 (MiTrimOrAgeWorkingSet.c)
 *     MiAttachWorkingSet @ 0x140374958 (MiAttachWorkingSet.c)
 *     MiAttachToSessionForBaseImage @ 0x1405A2D30 (MiAttachToSessionForBaseImage.c)
 *     MiActOnPatchInAllSessions @ 0x140970E00 (MiActOnPatchInAllSessions.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiCompareTbFlushTimeStamp @ 0x140238E78 (MiCompareTbFlushTimeStamp.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

$CEA84C04E3712D858E5667A507841A2A *__fastcall MiAttachSessionGlobal(unsigned __int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  bool v5; // zf
  __int64 *v6; // rsi
  __int64 v7; // rbx
  int v8; // eax
  BOOL v9; // edx
  unsigned __int64 OldIrql; // rbx
  $CEA84C04E3712D858E5667A507841A2A *result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  BYTE1(CurrentThread[1].Queue) |= 0x80u;
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] = a1;
  v6 = (__int64 *)(8 * (((unsigned __int64)qword_140C50630 >> 39) & 0x1FF) - 0x90482413000LL);
  v7 = MI_READ_PTE_LOCK_FREE(a1 + 784);
  v8 = MiPteInShadowRange(v6);
  v9 = 0;
  if ( (v7 & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_6;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_6;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_6;
    }
    v7 |= 0x8000000000000000uLL;
  }
  else if ( v8 )
  {
    v9 = MiPteHasShadow() != 0;
  }
LABEL_6:
  *v6 = v7;
  if ( v9 )
    MiWritePteShadow((__int64)v6, v7);
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
        v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v5 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = ($CEA84C04E3712D858E5667A507841A2A *)MiCompareTbFlushTimeStamp(a2);
  if ( (_BYTE)result )
    result = ($CEA84C04E3712D858E5667A507841A2A *)KeFlushTb(1LL, 0LL);
  --CurrentThread->SpecialApcDisable;
  BYTE1(CurrentThread[1].Queue) &= ~0x80u;
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 )
  {
    result = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)result->ApcState.ApcListHead[0].Flink != result )
      return ($CEA84C04E3712D858E5667A507841A2A *)KiCheckForKernelApcDelivery();
  }
  return result;
}
