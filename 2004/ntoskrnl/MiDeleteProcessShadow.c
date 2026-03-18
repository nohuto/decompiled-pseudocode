/*
 * XREFs of MiDeleteProcessShadow @ 0x140254168
 * Callers:
 *     MiDeleteFinalPageTables @ 0x14026B62C (MiDeleteFinalPageTables.c)
 *     MmCreateProcessAddressSpace @ 0x1406ABD7C (MmCreateProcessAddressSpace.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406B57DC (PspDisablePrimaryTokenExchange.c)
 *     MmSynchronizeAddressPolicy @ 0x140781E68 (MmSynchronizeAddressPolicy.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiDeleteTopLevelPage @ 0x14026B7A8 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x14026B944 (KeFlushProcessTb.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KeMakeUserDirectoryTableBase @ 0x1402E2FD8 (KeMakeUserDirectoryTableBase.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  unsigned __int64 v4; // rdi
  __int64 v5; // r14
  __int64 SharedVm; // rbx
  KIRQL v7; // al
  unsigned __int8 v8; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  signed __int64 v11; // rbx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v18; // zf
  signed __int32 v19; // eax
  signed __int64 v20; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  struct _LIST_ENTRY *v24; // r8
  __int64 v25; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+98h] [rbp+20h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( (MiFlags & 0xC00000) == 0 || !*(_QWORD *)(a1 + 1928) )
    return;
  v3 = a1 + 1664;
  v4 = 1LL;
  v5 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  if ( (_DWORD)a2 )
  {
    SharedVm = MiGetSharedVm(v3, a2);
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v8 = v7;
    if ( *(_QWORD *)(a1 + 1928) )
    {
      v9 = 0xFFFFF6FB7DBED000uLL;
      v10 = 256LL;
      while ( 1 )
      {
        v11 = *(_QWORD *)v9;
        if ( !MiPteInShadowRange(v9)
          || (MiFlags & 0xC00000) == 0
          || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
        {
          goto LABEL_9;
        }
        if ( (v11 & 1) != 0 )
          break;
LABEL_10:
        v9 += 8LL;
        if ( !--v10 )
          goto LABEL_11;
      }
      if ( (v11 & 0x20) == 0 || (v11 & 0x42) == 0 )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v22 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
          v23 = v11 | 0x20;
          if ( (v22 & 0x20) == 0 )
            v23 = v11;
          v11 = v23;
          if ( (v22 & 0x42) != 0 )
            v11 = v23 | 0x42;
        }
      }
LABEL_9:
      if ( (v11 & 1) != 0 )
      {
        do
        {
          if ( v11 >= 0 )
            break;
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v11 & 0x7FFFFFFFFFFFFFFFLL, v11);
          v18 = v11 == v20;
          v11 = v20;
          if ( v18 )
            break;
        }
        while ( (v20 & 1) != 0 );
      }
      goto LABEL_10;
    }
    MiUnlockWorkingSetExclusive(v3, v7);
  }
  else
  {
    v8 = 17;
LABEL_11:
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &SpinLock;
    KxAcquireQueuedSpinLock(&LockHandle);
    v12 = ((*(_QWORD *)(a1 + 1928) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v27 = MI_READ_PTE_LOCK_FREE(v12);
    v13 = v27;
    if ( MiPteInShadowRange((unsigned __int64)&v27)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      v24 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v24 )
      {
        v25 = *((_QWORD *)&v24->Flink + (((unsigned __int64)&v27 >> 3) & 0x1FF));
        if ( (v25 & 0x20) != 0 )
          v13 |= 0x20uLL;
        if ( (v25 & 0x42) != 0 )
          v13 |= 0x42uLL;
      }
      else
      {
        v13 = v27;
      }
    }
    *(_QWORD *)(a1 + 1928) = 0LL;
    v14 = (v13 >> 12) & 0xFFFFFFFFFLL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    *(_QWORD *)(a1 + 904) = KeMakeUserDirectoryTableBase(0LL);
    if ( v8 != 17 )
      MiUnlockWorkingSetExclusive(v3, v8);
    MiReleasePtes(&qword_140C4ED40, v12, 1LL);
    KeFlushProcessTb(v14 << 12);
    if ( (unsigned int)MiDeleteTopLevelPage(v15, v14) != 3 )
    {
      MiReturnCommit(v5, 1LL);
      if ( (ULONG_PTR *)v5 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v19 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v18 = (_DWORD)CachedResidentAvailable == v19;
              LODWORD(CachedResidentAvailable) = v19;
              if ( v18 )
                return;
            }
            while ( v19 != -1 && (unsigned __int64)(v19 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v4 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( !v4 )
            return;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 7168), v4);
    }
  }
}
