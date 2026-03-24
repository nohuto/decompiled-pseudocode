/*
 * XREFs of MiUnlockNestedPageTableWritePte @ 0x14030C84C
 * Callers:
 *     MiEvictPageTableLock @ 0x14030C620 (MiEvictPageTableLock.c)
 *     MiWsleFlush @ 0x1403274F0 (MiWsleFlush.c)
 *     MiClearPteAccessed @ 0x140339E00 (MiClearPteAccessed.c)
 *     MiRewritePteWithLockBit @ 0x1403B6C18 (MiRewritePteWithLockBit.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402BB418 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiShouldLockPteDirectly @ 0x14030CA20 (MiShouldLockPteDirectly.c)
 *     MiWriteValidPteNewProtection @ 0x14030FA00 (MiWriteValidPteNewProtection.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockNestedPageTableWritePte(__int64 a1, volatile __int64 *a2, __int64 a3, int a4)
{
  volatile __int64 *v6; // rdi
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 OldIrql; // rbx
  BOOL v12; // esi
  __int64 v13; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a2;
  if ( (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    v8 = 1;
    if ( !a4 )
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  }
  else
  {
    v8 = 0;
  }
  v9 = 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0
    && (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v6 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v9 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608);
  }
  if ( v6 == (volatile __int64 *)0xFFFFF6FB7DBEDF68LL )
  {
    MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)0xFFFFF6FB7DBEDF68LL, a3);
    goto LABEL_11;
  }
  if ( v9 )
  {
    if ( (a3 & 1) != 0 )
      goto LABEL_11;
  }
  else
  {
    if ( (unsigned int)MiShouldLockPteDirectly(a1) )
    {
      _InterlockedExchange64(v6, a3);
      if ( (unsigned int)MiPteInShadowRange(v6, a2) )
        MiWritePteShadow((__int64)v6, a3, v10);
      v6 = 0LL;
      goto LABEL_11;
    }
    if ( (a3 & 1) != 0 )
    {
      MiWriteValidPteNewProtection(v6, a3);
      goto LABEL_11;
    }
  }
  v12 = 0;
  if ( (unsigned int)MiPteInShadowRange(v6, a2) )
    v12 = MiPteHasShadow() != 0;
  *v6 = a3;
  if ( v12 )
    MiWritePteShadow((__int64)v6, a3, v13);
LABEL_11:
  if ( v8 && !a4 )
  {
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
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( v6 )
    MiUnlockPageTableInternal(a1, (unsigned __int64)v6);
}
