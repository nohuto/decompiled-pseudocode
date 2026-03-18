/*
 * XREFs of MiDetachProcessFromSession @ 0x1402180C4
 * Callers:
 *     MiDetachSessionGlobal @ 0x14021803C (MiDetachSessionGlobal.c)
 *     MiDereferenceSessionFinal @ 0x140693A28 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDetachProcessFromSession(_DWORD *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // rbx
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  bool v10; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+50h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( a1 && KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    v15 = *(_DWORD *)(v2 + 376);
    BYTE1(v15) = BYTE1(v15) & 0xF9 | 4;
    *(_WORD *)(v2 + 376) = v15;
  }
  v3 = (unsigned __int64 *)(8 * (((unsigned __int64)qword_140C50630 >> 39) & 0x1FF) - 0x90482413000LL);
  if ( MI_READ_PTE_LOCK_FREE(v3) )
  {
    v4 = ZeroPte;
    v5 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v3) )
      goto LABEL_6;
    if ( (unsigned int)MiPteHasShadow(v7, v6) )
    {
      v5 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v10 = (ZeroPte & 1) == 0;
        goto LABEL_17;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v10 = (ZeroPte & 1) == 0;
LABEL_17:
      if ( !v10 )
        v4 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_6:
    *v3 = v4;
    if ( v5 )
      MiWritePteShadow(v3, v4);
  }
  if ( a1 )
  {
    _InterlockedOr(v13, 0);
    *a1 = KiTbFlushTimeStamp;
    KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] = 0LL;
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
