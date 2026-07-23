/*
 * XREFs of MiDeleteProcessShadow @ 0x1403104B8
 * Callers:
 *     MiDeleteFinalPageTables @ 0x14027404C (MiDeleteFinalPageTables.c)
 *     PspDisablePrimaryTokenExchange @ 0x14063C6BC (PspDisablePrimaryTokenExchange.c)
 *     MmCreateProcessAddressSpace @ 0x1406A77C4 (MmCreateProcessAddressSpace.c)
 *     MmSynchronizeAddressPolicy @ 0x1407C69A0 (MmSynchronizeAddressPolicy.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiDeleteTopLevelPage @ 0x1402741C8 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x140274364 (KeFlushProcessTb.c)
 *     KeMakeUserDirectoryTableBase @ 0x1402959F4 (KeMakeUserDirectoryTableBase.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  unsigned __int64 v6; // rdi
  __int64 v7; // r14
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  unsigned __int8 v10; // r12
  unsigned __int64 v11; // rsi
  __int64 v12; // r15
  signed __int64 v13; // rbx
  _QWORD *v14; // r15
  unsigned __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v22; // zf
  signed __int32 v23; // eax
  signed __int64 v24; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  struct _LIST_ENTRY *v28; // r8
  __int64 v29; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v31; // [rsp+98h] [rbp+20h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( (MiFlags & 0xC00000) == 0 || !*(_QWORD *)(a1 + 1928) )
    return;
  v5 = a1 + 1664;
  v6 = 1LL;
  v7 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  if ( a2 )
  {
    SharedVm = MiGetSharedVm(v5);
    v9 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v10 = v9;
    if ( *(_QWORD *)(a1 + 1928) )
    {
      v11 = 0xFFFFF6FB7DBED000uLL;
      v12 = 256LL;
      while ( 1 )
      {
        v13 = *(_QWORD *)v11;
        if ( !(unsigned int)MiPteInShadowRange(v11)
          || (MiFlags & 0xC00000) == 0
          || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
        {
          goto LABEL_9;
        }
        if ( (v13 & 1) != 0 )
          break;
LABEL_10:
        v11 += 8LL;
        if ( !--v12 )
          goto LABEL_11;
      }
      if ( (v13 & 0x20) == 0 || (v13 & 0x42) == 0 )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v26 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
          v27 = v13 | 0x20;
          if ( (v26 & 0x20) == 0 )
            v27 = v13;
          v13 = v27;
          if ( (v26 & 0x42) != 0 )
            v13 = v27 | 0x42;
        }
      }
LABEL_9:
      if ( (v13 & 1) != 0 )
      {
        do
        {
          if ( v13 >= 0 )
            break;
          v24 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v13 & 0x7FFFFFFFFFFFFFFFLL, v13);
          v22 = v13 == v24;
          v13 = v24;
          if ( v22 )
            break;
        }
        while ( (v24 & 1) != 0 );
      }
      goto LABEL_10;
    }
    MiUnlockWorkingSetExclusive(v5, v9);
  }
  else
  {
    v10 = 17;
LABEL_11:
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &SpinLock;
    KxAcquireQueuedSpinLock(&LockHandle, &SpinLock, a3, a4);
    v14 = (_QWORD *)(((*(_QWORD *)(a1 + 1928) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v31 = MI_READ_PTE_LOCK_FREE(v14);
    v15 = v31;
    if ( (unsigned int)MiPteInShadowRange(&v31)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      v28 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v28 )
      {
        v29 = *((_QWORD *)&v28->Flink + (((unsigned __int64)&v31 >> 3) & 0x1FF));
        if ( (v29 & 0x20) != 0 )
          v15 |= 0x20uLL;
        if ( (v29 & 0x42) != 0 )
          v15 |= 0x42uLL;
      }
      else
      {
        v15 = v31;
      }
    }
    *(_QWORD *)(a1 + 1928) = 0LL;
    v16 = (v15 >> 12) & 0xFFFFFFFFFLL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    *(_QWORD *)(a1 + 904) = KeMakeUserDirectoryTableBase(0LL);
    if ( v10 != 17 )
      MiUnlockWorkingSetExclusive(v5, v10);
    MiReleasePtes((__int64)&qword_140C4EF80, v14, 1u);
    KeFlushProcessTb(v16 << 12);
    if ( (unsigned int)MiDeleteTopLevelPage(v17, v16) != 3 )
    {
      MiReturnCommit(v7, 1LL, v18, v19);
      if ( (ULONG_PTR *)v7 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v23 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v22 = (_DWORD)CachedResidentAvailable == v23;
              LODWORD(CachedResidentAvailable) = v23;
              if ( v22 )
                return;
            }
            while ( v23 != -1 && (unsigned __int64)(v23 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v6 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( !v6 )
            return;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 7168), v6);
    }
  }
}
