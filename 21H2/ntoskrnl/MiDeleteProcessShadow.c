/*
 * XREFs of MiDeleteProcessShadow @ 0x140305768
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140296F6C (MiDeleteFinalPageTables.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406478CC (PspDisablePrimaryTokenExchange.c)
 *     MmCreateProcessAddressSpace @ 0x1406D04E4 (MmCreateProcessAddressSpace.c)
 *     MmSynchronizeAddressPolicy @ 0x1407C6680 (MmSynchronizeAddressPolicy.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiDeleteTopLevelPage @ 0x1402970E8 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x140297284 (KeFlushProcessTb.c)
 *     KeMakeUserDirectoryTableBase @ 0x1402E46A4 (KeMakeUserDirectoryTableBase.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  __int64 Flink; // rdx
  unsigned __int8 v10; // r12
  unsigned __int64 v11; // rsi
  __int64 v12; // r15
  signed __int64 v13; // rbx
  _QWORD *v14; // r15
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v22; // zf
  signed __int32 v23; // eax
  signed __int64 v24; // rax
  __int64 v25; // rax
  struct _LIST_ENTRY *v26; // r8
  __int64 v27; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+98h] [rbp+20h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( (MiFlags & 0xC00000) == 0 || !*(_QWORD *)(a1 + 1928) )
    return;
  v4 = a1 + 1664;
  v5 = 1LL;
  v6 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  if ( a2 )
  {
    SharedVm = MiGetSharedVm(v4);
    v8 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v10 = v8;
    if ( *(_QWORD *)(a1 + 1928) )
    {
      v11 = 0xFFFFF6FB7DBED000uLL;
      v12 = 256LL;
      while ( 1 )
      {
        v13 = *(_QWORD *)v11;
        if ( !(unsigned int)MiPteInShadowRange(v11, Flink)
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
        Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v25 = *(_QWORD *)(Flink + 8 * ((v11 >> 3) & 0x1FF));
          Flink = v13 | 0x20;
          if ( (v25 & 0x20) == 0 )
            Flink = v13;
          v13 = Flink;
          if ( (v25 & 0x42) != 0 )
            v13 = Flink | 0x42;
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
    MiUnlockWorkingSetExclusive(v4, v8);
  }
  else
  {
    v10 = 17;
LABEL_11:
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &SpinLock;
    KxAcquireQueuedSpinLock(&LockHandle, &SpinLock, a3);
    v14 = (_QWORD *)(((*(_QWORD *)(a1 + 1928) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v29 = MI_READ_PTE_LOCK_FREE(v14);
    v15 = v29;
    if ( (unsigned int)MiPteInShadowRange(&v29, v16)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      v26 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v26 )
      {
        v27 = *((_QWORD *)&v26->Flink + (((unsigned __int64)&v29 >> 3) & 0x1FF));
        if ( (v27 & 0x20) != 0 )
          v15 |= 0x20uLL;
        if ( (v27 & 0x42) != 0 )
          v15 |= 0x42uLL;
      }
      else
      {
        v15 = v29;
      }
    }
    *(_QWORD *)(a1 + 1928) = 0LL;
    v17 = (v15 >> 12) & 0xFFFFFFFFFLL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    *(_QWORD *)(a1 + 904) = KeMakeUserDirectoryTableBase(0LL);
    if ( v10 != 17 )
      MiUnlockWorkingSetExclusive(v4, v10);
    MiReleasePtes((__int64)&qword_140C4EF40, v14, 1u);
    KeFlushProcessTb(v17 << 12);
    if ( (unsigned int)MiDeleteTopLevelPage(v18, v17, v19) != 3 )
    {
      MiReturnCommit(v6, 1LL);
      if ( (ULONG_PTR *)v6 == &MiSystemPartition )
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
            v5 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( !v5 )
            return;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 7168), v5);
    }
  }
}
