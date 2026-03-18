/*
 * XREFs of MiDeleteSystemPageTable @ 0x1402F2740
 * Callers:
 *     <none>
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiAddSystemPageTableToList @ 0x1402F2920 (MiAddSystemPageTableToList.c)
 *     MiEvictPageTableLock @ 0x1402F2ABC (MiEvictPageTableLock.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402FB584 (MiInsertLargeTbFlushEntry.c)
 *     MiReplicatePteChange @ 0x1403A1024 (MiReplicatePteChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCompareMemoryUlong @ 0x1403FE660 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiDeleteSystemPageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r13
  __int64 v5; // r14
  __int64 v8; // rbp
  int v9; // r12d
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v15; // r9
  unsigned __int64 LeafVa; // rax
  __int64 v17; // rcx
  BOOL v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r8d
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = *(_QWORD *)(v3 + 16);
  v8 = MI_READ_PTE_LOCK_FREE(a2);
  v32 = v8;
  if ( (v8 & 1) == 0 )
    return 0LL;
  v9 = 0;
  v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFLL;
  v12 = 0xFFFFF68000000000uLL;
  if ( (v8 & 0x80u) == 0LL )
  {
    v13 = 48 * v10 - 0x58000000000LL;
    if ( a3 <= ((*(unsigned __int8 *)(a1 + 2) >> 2) & 7) )
    {
      v15 = 0LL;
    }
    else
    {
      if ( (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || *(_WORD *)(v13 + 32) != 1
        || RtlCompareMemoryUlong((PVOID)((__int64)(a2 << 25) >> 16), 0x1000uLL, 0) != 4096 )
      {
        return 0LL;
      }
      v15 = 1LL;
    }
    if ( a3 >= 1 )
    {
      if ( !(unsigned int)MiEvictPageTableLock(*(_QWORD *)(a1 + 24), a2, ZeroPte, v15) )
        return 0LL;
      v9 = 1;
    }
    MiAddSystemPageTableToList(v3 + 8, v13, v12, v15, LockHandle.LockQueue.Next, LockHandle.LockQueue.Lock);
  }
  if ( a3 >= 1 && (v8 & 0x80u) != 0LL )
  {
    MiInsertLargeTbFlushEntry(v5, (unsigned int)a3, a2, v11);
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
    v18 = MiPteInShadowRange(a2);
    if ( a3 == 3 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
      v20 = ZeroPte;
      v21 = 0;
      if ( v18 )
      {
        if ( (unsigned int)MiPteHasShadow(v19, ZeroPte) )
        {
          v21 = 1;
          if ( HIBYTE(word_140C4DF48) )
            goto LABEL_30;
LABEL_28:
          if ( (v20 & 1) != 0 )
            v20 |= 0x8000000000000000uLL;
          goto LABEL_30;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          goto LABEL_28;
      }
LABEL_30:
      *(_QWORD *)a2 = v20;
      if ( v21 )
        MiWritePteShadow(a2, v20);
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
            v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v27 = (v26 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v26;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      goto LABEL_40;
    }
    v29 = ZeroPte;
    v30 = 0;
    if ( v18 )
    {
      if ( (unsigned int)MiPteHasShadow(v17, ZeroPte) )
      {
        v30 = 1;
        if ( HIBYTE(word_140C4DF48) )
          goto LABEL_48;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_48;
      }
      if ( (v29 & 1) != 0 )
        v29 |= 0x8000000000000000uLL;
    }
LABEL_48:
    *(_QWORD *)a2 = v29;
    if ( v30 )
      MiWritePteShadow(a2, v29);
  }
  if ( a3 == 3 )
  {
LABEL_40:
    v28 = MiGetLeafVa(a2);
    MiReplicatePteChange(
      ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
      ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  return 0LL;
}
