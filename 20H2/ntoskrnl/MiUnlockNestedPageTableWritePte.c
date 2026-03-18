/*
 * XREFs of MiUnlockNestedPageTableWritePte @ 0x1402CC62C
 * Callers:
 *     MiWsleFlush @ 0x1402AAC40 (MiWsleFlush.c)
 *     MiClearPteAccessed @ 0x1402BD2E0 (MiClearPteAccessed.c)
 *     MiEvictPageTableLock @ 0x1402CC400 (MiEvictPageTableLock.c)
 *     MiRewritePteWithLockBit @ 0x1403B54A8 (MiRewritePteWithLockBit.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MiShouldLockPteDirectly @ 0x1402CC800 (MiShouldLockPteDirectly.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140318E28 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockNestedPageTableWritePte(__int64 a1, volatile __int64 *a2, __int64 a3, int a4)
{
  volatile __int64 *v6; // rdi
  int v8; // ebp
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  BOOL v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v19; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a2;
  if ( (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    v8 = 1;
    if ( !a4 )
      KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
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
  result = 0xFFFFF6FB7DBEDF68uLL;
  if ( v6 == (volatile __int64 *)0xFFFFF6FB7DBEDF68LL )
  {
    result = MI_INTERLOCKED_EXCHANGE_PTE(0xFFFFF6FB7DBEDF68uLL, a3);
    goto LABEL_11;
  }
  if ( v9 )
  {
    if ( (a3 & 1) != 0 )
      goto LABEL_11;
  }
  else
  {
    if ( (unsigned int)MiShouldLockPteDirectly(a1, v6) )
    {
      _InterlockedExchange64(v6, a3);
      result = MiPteInShadowRange((unsigned __int64)v6);
      if ( (_DWORD)result )
        result = MiWritePteShadow(v6, a3);
      v6 = 0LL;
      goto LABEL_11;
    }
    if ( (a3 & 1) != 0 )
    {
      result = (__int64)MiWriteValidPteNewProtection((unsigned __int64)v6, a3);
      goto LABEL_11;
    }
  }
  v12 = 0;
  result = MiPteInShadowRange((unsigned __int64)v6);
  if ( (_DWORD)result )
  {
    result = MiPteHasShadow(v14, v13, v15, v16);
    v12 = result != 0;
  }
  *v6 = a3;
  if ( v12 )
    result = MiWritePteShadow(v6, a3);
LABEL_11:
  if ( v8 && !a4 )
  {
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
          v19 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v19 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( v6 )
    return MiUnlockPageTableInternal(a1);
  return result;
}
