/*
 * XREFs of MiDeleteSystemPageTable @ 0x14032E4E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiAddSystemPageTableToList @ 0x14032E6C0 (MiAddSystemPageTableToList.c)
 *     MiEvictPageTableLock @ 0x14032E85C (MiEvictPageTableLock.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     MiReplicatePteChange @ 0x1403A17B4 (MiReplicatePteChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCompareMemoryUlong @ 0x1403FF8F0 (RtlCompareMemoryUlong.c)
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
  __int64 v16; // rcx
  BOOL v17; // esi
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // r8d
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = *(_QWORD *)(v3 + 16);
  v8 = MI_READ_PTE_LOCK_FREE(a2);
  v33 = v8;
  if ( (v8 & 1) == 0 )
    return 0LL;
  v9 = 0;
  v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v33) >> 12) & 0xFFFFFFFFFLL;
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
    v17 = MiPteInShadowRange(a2);
    if ( a3 == 3 )
    {
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      v21 = ZeroPte;
      v22 = 0;
      if ( v17 )
      {
        if ( (unsigned int)MiPteHasShadow(v19, ZeroPte, 0LL, v20) )
        {
          v22 = 1;
          if ( HIBYTE(word_140C4DE08) )
            goto LABEL_30;
LABEL_28:
          if ( (v21 & 1) != 0 )
            v21 |= 0x8000000000000000uLL;
          goto LABEL_30;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          goto LABEL_28;
      }
LABEL_30:
      *(_QWORD *)a2 = v21;
      if ( v22 )
        MiWritePteShadow(a2, v21);
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
            v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v28 = (v27 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v27;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      goto LABEL_40;
    }
    v30 = ZeroPte;
    v31 = 0;
    if ( v17 )
    {
      if ( (unsigned int)MiPteHasShadow(v16, ZeroPte, 0LL, v18) )
      {
        v31 = 1;
        if ( HIBYTE(word_140C4DE08) )
          goto LABEL_48;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_48;
      }
      if ( (v30 & 1) != 0 )
        v30 |= 0x8000000000000000uLL;
    }
LABEL_48:
    *(_QWORD *)a2 = v30;
    if ( v31 )
      MiWritePteShadow(a2, v30);
  }
  if ( a3 == 3 )
  {
LABEL_40:
    v29 = MiGetLeafVa(a2);
    MiReplicatePteChange(
      ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
      ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  return 0LL;
}
