/*
 * XREFs of MiDeleteSystemPageTable @ 0x1402B6DC0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInsertLargeTbFlushEntry @ 0x14029A7DC (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiAddSystemPageTableToList @ 0x1402B6FA0 (MiAddSystemPageTableToList.c)
 *     MiEvictPageTableLock @ 0x14030C620 (MiEvictPageTableLock.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiReplicatePteChange @ 0x1403A4544 (MiReplicatePteChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCompareMemoryUlong @ 0x140408230 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiDeleteSystemPageTable(__int64 a1, __int64 a2, signed int a3)
{
  __int64 v3; // r13
  __int64 v5; // r14
  __int64 v8; // rbp
  int v9; // r12d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 LeafVa; // rax
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v25; // eax
  bool v26; // zf
  unsigned __int64 v27; // rax
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
  v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v29) >> 12) & 0xFFFFFFFFFLL;
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
        || RtlCompareMemoryUlong((PVOID)(a2 << 25 >> 16), 0x1000uLL, 0) != 4096 )
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
    MiInsertLargeTbFlushEntry(v5, a3, a2);
  }
  else
  {
    MiInsertTbFlushEntry(v5, a2 << 25 >> 16, 1LL, 0LL);
    if ( a3 == 1 )
    {
      LeafVa = MiGetLeafVa(a2, v15, v16, SchedulerAssist);
      MiInsertTbFlushEntry(v5, LeafVa, 512LL, 0LL);
    }
  }
  if ( !v9 )
  {
    v19 = MiPteInShadowRange(a2, v15);
    if ( a3 == 3 )
    {
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      v20 = ZeroPte;
      v21 = 0LL;
      if ( v19 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v21 = 1LL;
          if ( HIBYTE(word_140C4E008) )
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
      if ( (_DWORD)v21 )
        MiWritePteShadow(a2, v20, v21);
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
            v15 = -1LL << (LockHandle.OldIrql + 1);
            v25 = ~(unsigned __int16)v15;
            v26 = (v25 & SchedulerAssist[5]) == 0;
            v16 = (unsigned int)v25 & SchedulerAssist[5];
            SchedulerAssist[5] = v16;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      goto LABEL_40;
    }
    v15 = ZeroPte;
    v16 = 0LL;
    if ( v19 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v16 = 1LL;
        if ( HIBYTE(word_140C4E008) )
          goto LABEL_48;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_48;
      }
      if ( (v15 & 1) != 0 )
        v15 |= 0x8000000000000000uLL;
    }
LABEL_48:
    *(_QWORD *)a2 = v15;
    if ( (_DWORD)v16 )
      MiWritePteShadow(a2, v15, v16);
  }
  if ( a3 == 3 )
  {
LABEL_40:
    v27 = MiGetLeafVa(a2, v15, v16, SchedulerAssist);
    MiReplicatePteChange(
      ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
      ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  return 0LL;
}
