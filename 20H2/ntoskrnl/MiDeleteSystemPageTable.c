/*
 * XREFs of MiDeleteSystemPageTable @ 0x140314340
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiEvictPageTableLock @ 0x1402CC400 (MiEvictPageTableLock.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiAddSystemPageTableToList @ 0x140314520 (MiAddSystemPageTableToList.c)
 *     MiInsertLargeTbFlushEntry @ 0x140319B24 (MiInsertLargeTbFlushEntry.c)
 *     MiReplicatePteChange @ 0x1403A3C84 (MiReplicatePteChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCompareMemoryUlong @ 0x140405BC0 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiDeleteSystemPageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r13
  __int64 v5; // r14
  __int64 v8; // rbp
  int v9; // r12d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v14; // r9
  unsigned __int64 LeafVa; // rax
  BOOL v16; // esi
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = *(_QWORD *)(v3 + 16);
  v8 = MI_READ_PTE_LOCK_FREE(a2);
  v29 = v8;
  if ( (v8 & 1) == 0 )
    return 0LL;
  v9 = 0;
  v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29) >> 12) & 0xFFFFFFFFFLL;
  v11 = 0xFFFFF68000000000uLL;
  if ( (v8 & 0x80u) == 0LL )
  {
    v12 = 48 * v10 - 0x58000000000LL;
    if ( a3 <= ((*(unsigned __int8 *)(a1 + 2) >> 2) & 7) )
    {
      v14 = 0LL;
    }
    else
    {
      if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || *(_WORD *)(v12 + 32) != 1
        || RtlCompareMemoryUlong((PVOID)((__int64)(a2 << 25) >> 16), 0x1000uLL, 0) != 4096 )
      {
        return 0LL;
      }
      v14 = 1LL;
    }
    if ( a3 >= 1 )
    {
      if ( !(unsigned int)MiEvictPageTableLock(*(_QWORD *)(a1 + 24), a2, ZeroPte, v14) )
        return 0LL;
      v9 = 1;
    }
    MiAddSystemPageTableToList(v3 + 8, v12, v11, v14, LockHandle.LockQueue.Next, LockHandle.LockQueue.Lock);
  }
  if ( a3 >= 1 && (v8 & 0x80u) != 0LL )
  {
    MiInsertLargeTbFlushEntry(v5, (unsigned int)a3, a2);
  }
  else
  {
    MiInsertTbFlushEntry(v5, (__int64)(a2 << 25) >> 16, 1LL, 0);
    if ( a3 == 1 )
    {
      LeafVa = MiGetLeafVa(a2);
      MiInsertTbFlushEntry(v5, LeafVa, 512LL, 0);
    }
  }
  if ( !v9 )
  {
    v16 = MiPteInShadowRange(a2);
    if ( a3 == 3 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
      v17 = ZeroPte;
      v18 = 0LL;
      if ( v16 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v18 = 1LL;
          if ( HIBYTE(word_140C4DE88) )
            goto LABEL_30;
LABEL_28:
          if ( (v17 & 1) != 0 )
            v17 |= 0x8000000000000000uLL;
          goto LABEL_30;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          goto LABEL_28;
      }
LABEL_30:
      *(_QWORD *)a2 = v17;
      if ( (_DWORD)v18 )
        MiWritePteShadow(a2, v17, v18);
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
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      goto LABEL_40;
    }
    v26 = ZeroPte;
    v27 = 0LL;
    if ( v16 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v27 = 1LL;
        if ( HIBYTE(word_140C4DE88) )
          goto LABEL_48;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_48;
      }
      if ( (v26 & 1) != 0 )
        v26 |= 0x8000000000000000uLL;
    }
LABEL_48:
    *(_QWORD *)a2 = v26;
    if ( (_DWORD)v27 )
      MiWritePteShadow(a2, v26, v27);
  }
  if ( a3 == 3 )
  {
LABEL_40:
    v25 = MiGetLeafVa(a2);
    MiReplicatePteChange(
      ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
      ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  return 0LL;
}
