/*
 * XREFs of MiGetHugePageToZero @ 0x140205FD4
 * Callers:
 *     MiZeroLargePages @ 0x1402C41D0 (MiZeroLargePages.c)
 * Callees:
 *     MiGetUltraHugeAlreadyActive @ 0x140205E40 (MiGetUltraHugeAlreadyActive.c)
 *     MiInitializeNewUltraHugeContext @ 0x14025BDC8 (MiInitializeNewUltraHugeContext.c)
 *     MiGetHugeRangeFromNode @ 0x14025C1B4 (MiGetHugeRangeFromNode.c)
 *     MiDecrementHugeContext @ 0x14025E544 (MiDecrementHugeContext.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlinkNodeLargePages @ 0x1402CA5E0 (MiUnlinkNodeLargePages.c)
 *     ExAllocatePoolMm @ 0x14030B860 (ExAllocatePoolMm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall MiGetHugePageToZero(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  _QWORD *v6; // r13
  unsigned __int64 OldIrql; // rbx
  __int64 v9; // r9
  __int64 PoolMm; // rax
  __int64 v11; // rsi
  unsigned __int64 HugeRangeFromNode; // rax
  __int64 v13; // rax
  int v14; // r14d
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  int v17; // ecx
  _QWORD *i; // rax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  unsigned __int64 v28; // rbx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v36; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a2 + 260) >> byte_140C506CC;
  v5 = 24512LL * v3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  do
  {
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_BYTE *)(a2 + 70) = 0;
    v6 = (_QWORD *)(v5 + *(_QWORD *)(a1 + 16));
    if ( !*(_QWORD *)(a2 + 224) && *(_QWORD *)(*(_QWORD *)(a2 + 232) + 56LL) == *(_QWORD *)(a2 + 232) + 56LL && !v6[1] )
    {
      if ( !*(_QWORD *)(a1 + 15992) )
        return 0LL;
      v17 = 0;
      if ( !MmNumberOfChannels )
        return 0LL;
      for ( i = v6 + 2835; !*i; ++i )
      {
        if ( ++v17 >= (unsigned int)MmNumberOfChannels )
          return 0LL;
      }
    }
    KeAcquireInStackQueuedSpinLock(v6 + 2851, &LockHandle);
    if ( MiGetUltraHugeAlreadyActive(a1, a2, v3) )
    {
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
            v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v23 = (v36 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v36;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      return 1LL;
    }
    v9 = v3;
    LODWORD(v9) = v3 | 0x80000000;
    PoolMm = ExAllocatePoolMm(64LL, 336LL, 1967679821LL, v9);
    v11 = PoolMm;
    if ( !PoolMm )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v28 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v29 = KeGetCurrentIrql();
          if ( v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            v31 = v30->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v23 = (v32 & v31[5]) == 0;
            v31[5] &= v32;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(v30);
          }
        }
      }
      __writecr8(v28);
      return 0LL;
    }
    HugeRangeFromNode = MiGetHugeRangeFromNode(a1, v3, 0LL, PoolMm);
    if ( (HugeRangeFromNode & 0x3FFFFF) == 0 )
    {
      v13 = MiUnlinkNodeLargePages(a1, 0, 0, 1, v3, 4, 1, 256, v11);
      if ( !v13 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v16 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && LockHandle.OldIrql <= 0xFu && v24 >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              v26 = v25->SchedulerAssist;
              v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v23 = (v27 & v26[5]) == 0;
              v26[5] &= v27;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick(v25);
            }
          }
        }
        __writecr8(v16);
        ExFreePoolWithTag((PVOID)v11, 0);
        return 0LL;
      }
      HugeRangeFromNode = 0xAAAAAAAAAAAAAAABuLL * ((v13 + 0x220000000000LL) >> 4);
    }
    *(_QWORD *)(v11 + 176) = HugeRangeFromNode;
    *(_DWORD *)(v11 + 320) = v3;
    v14 = MiInitializeNewUltraHugeContext(a2, v11);
    if ( v14 )
      MiDecrementHugeContext(v6, v11, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v15 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && LockHandle.OldIrql <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v23 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
    }
    __writecr8(v15);
    v5 = 24512LL * v3;
  }
  while ( v14 == 1 );
  return v14 != 2;
}
