/*
 * XREFs of MiGetPoolPages @ 0x140326CB4
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x1402B1BF8 (MiInitializePoolCommitPacket.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiSetPfnTbFlushStamp @ 0x140224C10 (MiSetPfnTbFlushStamp.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSufficientAvailablePages @ 0x1402A1900 (MiSufficientAvailablePages.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiReturnPoolCharges @ 0x1402D4E10 (MiReturnPoolCharges.c)
 *     MiReturnPhysicalPoolPages @ 0x1402F2454 (MiReturnPhysicalPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x140326EE4 (MiRetryNonPagedAllocation.c)
 *     MiObtainPoolCharges @ 0x1403288B8 (MiObtainPoolCharges.c)
 *     MiFillPhysicalPages @ 0x1403511A8 (MiFillPhysicalPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiGetPoolPages(int a1, unsigned int a2, unsigned __int64 a3)
{
  _SLIST_HEADER *v4; // r14
  unsigned __int64 v5; // rsi
  signed __int32 v8; // ecx
  __int64 Page; // rax
  unsigned __int64 *v10; // rbx
  unsigned __int64 Region; // rdx
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  unsigned __int64 OldIrql; // r14
  _QWORD *v17; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  __int128 v23; // [rsp+20h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  __int128 v26; // [rsp+50h] [rbp-30h]
  unsigned __int64 v27; // [rsp+60h] [rbp-20h]
  __int128 v28; // [rsp+68h] [rbp-18h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v23 = 0LL;
  v4 = &SListHead[11 * a2];
  v5 = 0LL;
  if ( v4[8].Region )
  {
    KeAcquireInStackQueuedSpinLock(&v4[9].Alignment, &LockHandle);
    Region = v4[8].Region;
    v13 = Region;
    if ( Region > a3 )
      v13 = a3;
    if ( v13 )
    {
      v14 = (_QWORD *)v4[9].Region;
      a3 -= v13;
      v5 = (unsigned __int64)v14;
      v4[8].Region = Region - v13;
      do
      {
        v15 = v14;
        v14 = (_QWORD *)*v14;
        --v13;
      }
      while ( v13 );
      *v15 = 0LL;
      v4[9].Region = (unsigned __int64)v14;
    }
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
          v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v22 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (a1 & 0x40000000) != 0 )
    {
      v17 = (_QWORD *)v5;
      if ( v5 )
      {
        do
        {
          MiFillPhysicalPages((__int64)(v17 + 0xB000000000LL) / 48);
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
    }
    if ( !a3 )
      return v5;
  }
  if ( (unsigned int)MiObtainPoolCharges(a3, 0LL) )
  {
    MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v23);
    if ( a3 )
    {
      while ( a3 <= 1
           || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
           || (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, a3 + 160) )
      {
        MiRetryNonPagedAllocation();
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)v23, 1u);
        Page = MiGetPage(
                 (__int64)&MiSystemPartition,
                 HIDWORD(v23) | (unsigned int)v8 & DWORD2(v23),
                 (a1 & 0x40000000) != 0 ? 782 : 524);
        if ( Page == -1 )
        {
          if ( !(unsigned int)MiRetryNonPagedAllocation() )
            break;
        }
        else
        {
          v10 = (unsigned __int64 *)(48 * Page - 0x58000000000LL);
          MiSetPfnTbFlushStamp((__int64)v10, 0, 0);
          *v10 = v5;
          --a3;
          v5 = (unsigned __int64)v10;
        }
        if ( !a3 )
          break;
      }
      if ( a3 )
      {
        v26 = 0LL;
        v28 = 0LL;
        if ( v5 )
        {
          MiReturnPhysicalPoolPages(v5, 0);
          v5 = 0LL;
        }
        v25 = a3;
        v27 = a3;
        MiReturnPoolCharges(&v25, 0);
      }
    }
    return v5;
  }
  if ( v5 )
    MiReturnPhysicalPoolPages(v5, 0);
  return 0LL;
}
