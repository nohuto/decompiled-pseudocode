/*
 * XREFs of MiUnlockNestedPageTableWritePte @ 0x14032EA88
 * Callers:
 *     MiClearPteAccessed @ 0x140244F10 (MiClearPteAccessed.c)
 *     MiWsleFlush @ 0x1402B30D0 (MiWsleFlush.c)
 *     MiEvictPageTableLock @ 0x14032E85C (MiEvictPageTableLock.c)
 *     MiRewritePteWithLockBit @ 0x1403B2B38 (MiRewritePteWithLockBit.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiShouldLockPteDirectly @ 0x14032EC5C (MiShouldLockPteDirectly.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140330A4C (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockNestedPageTableWritePte(__int64 a1, volatile __int64 *a2, __int64 a3, int a4)
{
  volatile __int64 *v6; // rdi
  int v8; // ebp
  __int64 v9; // rcx
  unsigned __int64 OldIrql; // rbx
  BOOL v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
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
    MI_INTERLOCKED_EXCHANGE_PTE(0xFFFFF6FB7DBEDF68uLL, a3);
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
      if ( MiPteInShadowRange((unsigned __int64)v6) )
        MiWritePteShadow(v6, a3);
      v6 = 0LL;
      goto LABEL_11;
    }
    if ( (a3 & 1) != 0 )
    {
      MiWriteValidPteNewProtection((unsigned __int64)v6, a3);
      goto LABEL_11;
    }
  }
  v11 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v6) )
    v11 = MiPteHasShadow(v13, v12, v14, v15) != 0;
  *v6 = a3;
  if ( v11 )
    MiWritePteShadow(v6, a3);
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
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( v6 )
    MiUnlockPageTableInternal(a1, (unsigned __int64)v6);
}
