/*
 * XREFs of MiDeleteProcessShadow @ 0x140236418
 * Callers:
 *     MiDeleteFinalPageTables @ 0x14026314C (MiDeleteFinalPageTables.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406933A0 (PspDisablePrimaryTokenExchange.c)
 *     MmCreateProcessAddressSpace @ 0x1406ED8E8 (MmCreateProcessAddressSpace.c)
 *     MmSynchronizeAddressPolicy @ 0x1407C2380 (MmSynchronizeAddressPolicy.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiDeleteTopLevelPage @ 0x1402632C8 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x140263464 (KeFlushProcessTb.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KeMakeUserDirectoryTableBase @ 0x140335584 (KeMakeUserDirectoryTableBase.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  unsigned __int64 v4; // rdi
  __int64 v5; // r14
  __int64 SharedVm; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  char v9; // r12
  unsigned __int64 v10; // rsi
  __int64 v11; // r15
  signed __int64 v12; // rbx
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v20; // zf
  signed __int32 v21; // eax
  signed __int64 v22; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  struct _LIST_ENTRY *v26; // r8
  __int64 v27; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+98h] [rbp+20h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( (MiFlags & 0xC00000) == 0 || !*(_QWORD *)(a1 + 1928) )
    return;
  v3 = a1 + 1664;
  v4 = 1LL;
  v5 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  if ( (_DWORD)a2 )
  {
    SharedVm = MiGetSharedVm(v3, a2);
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v9 = v7;
    if ( *(_QWORD *)(a1 + 1928) )
    {
      v10 = 0xFFFFF6FB7DBED000uLL;
      v11 = 256LL;
      while ( 1 )
      {
        v12 = *(_QWORD *)v10;
        if ( !MiPteInShadowRange(v10)
          || (MiFlags & 0xC00000) == 0
          || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
        {
          goto LABEL_9;
        }
        if ( (v12 & 1) != 0 )
          break;
LABEL_10:
        v10 += 8LL;
        if ( !--v11 )
          goto LABEL_11;
      }
      if ( (v12 & 0x20) == 0 || (v12 & 0x42) == 0 )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v24 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
          v25 = v12 | 0x20;
          if ( (v24 & 0x20) == 0 )
            v25 = v12;
          v12 = v25;
          if ( (v24 & 0x42) != 0 )
            v12 = v25 | 0x42;
        }
      }
LABEL_9:
      if ( (v12 & 1) != 0 )
      {
        do
        {
          if ( v12 >= 0 )
            break;
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v12 & 0x7FFFFFFFFFFFFFFFLL, v12);
          v20 = v12 == v22;
          v12 = v22;
          if ( v20 )
            break;
        }
        while ( (v22 & 1) != 0 );
      }
      goto LABEL_10;
    }
    LOBYTE(v8) = v7;
    MiUnlockWorkingSetExclusive(v3, v8);
  }
  else
  {
    v9 = 17;
LABEL_11:
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &qword_140C4ECC0;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_140C4ECC0);
    v13 = ((*(_QWORD *)(a1 + 1928) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v29 = MI_READ_PTE_LOCK_FREE(v13);
    v14 = v29;
    if ( MiPteInShadowRange((unsigned __int64)&v29)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      v26 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v26 )
      {
        v27 = *((_QWORD *)&v26->Flink + (((unsigned __int64)&v29 >> 3) & 0x1FF));
        if ( (v27 & 0x20) != 0 )
          v14 |= 0x20uLL;
        if ( (v27 & 0x42) != 0 )
          v14 |= 0x42uLL;
      }
      else
      {
        v14 = v29;
      }
    }
    *(_QWORD *)(a1 + 1928) = 0LL;
    v15 = (v14 >> 12) & 0xFFFFFFFFFLL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    *(_QWORD *)(a1 + 904) = KeMakeUserDirectoryTableBase(0LL);
    if ( v9 != 17 )
    {
      LOBYTE(v16) = v9;
      MiUnlockWorkingSetExclusive(v3, v16);
    }
    MiReleasePtes(&qword_140C4EDC0, v13, 1LL);
    KeFlushProcessTb(v15 << 12);
    if ( (unsigned int)MiDeleteTopLevelPage(v17, v15) != 3 )
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
              v21 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v20 = (_DWORD)CachedResidentAvailable == v21;
              LODWORD(CachedResidentAvailable) = v21;
              if ( v20 )
                return;
            }
            while ( v21 != -1 && (unsigned __int64)(v21 + 1LL) <= 0x100 );
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
