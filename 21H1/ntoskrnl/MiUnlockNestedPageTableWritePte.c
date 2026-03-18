/*
 * XREFs of MiUnlockNestedPageTableWritePte @ 0x1402F2CE8
 * Callers:
 *     MiWsleFlush @ 0x140220450 (MiWsleFlush.c)
 *     MiClearPteAccessed @ 0x14029DF40 (MiClearPteAccessed.c)
 *     MiEvictPageTableLock @ 0x1402F2ABC (MiEvictPageTableLock.c)
 *     MiRewritePteWithLockBit @ 0x1403ACEB8 (MiRewritePteWithLockBit.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiShouldLockPteDirectly @ 0x1402F2EBC (MiShouldLockPteDirectly.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402F3E4C (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockNestedPageTableWritePte(__int64 a1, volatile __int64 *a2, __int64 a3, int a4)
{
  volatile __int64 *v6; // rdi
  __int64 v8; // r8
  int v9; // ebp
  __int64 v10; // rcx
  unsigned __int64 OldIrql; // rbx
  BOOL v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a2;
  v8 = (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    v9 = 1;
    if ( !a4 )
      KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
  }
  else
  {
    v9 = 0;
  }
  v10 = 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0
    && (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v6 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v10 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608);
  }
  if ( v6 == (volatile __int64 *)0xFFFFF6FB7DBEDF68LL )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(0xFFFFF6FB7DBEDF68uLL, a3);
    goto LABEL_11;
  }
  if ( v10 )
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
  v12 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v6) )
    v12 = MiPteHasShadow(v14, v13) != 0;
  *v6 = a3;
  if ( v12 )
    MiWritePteShadow(v6, a3);
LABEL_11:
  if ( v9 && !a4 )
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
          v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = (v18 & SchedulerAssist[5]) == 0;
          v8 = (unsigned int)v18 & SchedulerAssist[5];
          SchedulerAssist[5] = v8;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( v6 )
    MiUnlockPageTableInternal(a1, (unsigned __int64)v6, v8);
}
