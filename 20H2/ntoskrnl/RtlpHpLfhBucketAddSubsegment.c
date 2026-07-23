/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x140310A68
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140212CB0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1402D1660 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpAcquireLockExclusive @ 0x1402D4324 (RtlpHpAcquireLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x140310DB4 (RtlpHpLfhSubsegmentSetOwner.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x140310DDC (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentFree @ 0x140310ECC (RtlpHpLfhSubsegmentFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // rsi
  volatile signed __int64 *v9; // rbp
  unsigned __int64 v10; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v13; // zf
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v16; // r13
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // [rsp+80h] [rbp+18h] BYREF

  result = *(unsigned __int16 *)(a3 + 34);
  v6 = a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)result )
  {
    v9 = (volatile signed __int64 *)(a2 + 16);
    v10 = RtlpHpAcquireLockExclusive((volatile LONG *)(a2 + 16), *(unsigned __int8 *)(a1 + 57));
    RtlpHpLfhSubsegmentSetOwner(v6, a2);
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
      *(_QWORD *)(v6 + 16) = 0LL;
    else
      v6 = RtlpHpLfhOwnerMoveSubsegment(a2, v6, 0LL);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
            v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v13 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 16));
      v22 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a2 + 16) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v16 = ++CurrentThread->AbAllocationRegionCount;
      v17 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v13 = !_BitScanReverse((unsigned int *)&v18, v17);
        if ( v13 )
          break;
        v19 = (__int64)&CurrentThread->LockEntries[v18];
        v17 &= ~(1 << v18);
        if ( (*(_BYTE *)(v19 + 26) & 1) != 0
          && (*(_DWORD *)(v19 + 32) & 1) == 0
          && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v19 + 40) == SessionId )
        {
          *(_BYTE *)(v19 + 26) &= ~1u;
          if ( *(_QWORD *)(v19 + 32) )
          {
            if ( v19 )
            {
              *(_BYTE *)(v19 + 32) |= 2u;
              if ( *(__int64 *)(v19 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
              v22 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
              *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v19 + 25) &= ~1u;
              *(_QWORD *)(v19 + 32) = 0LL;
              v20 = (signed __int64)(v19 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( v16 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v20;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v20);
              goto LABEL_33;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a2 + 16, SessionId, 0LL);
LABEL_33:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a2 + 16, &v22);
      v13 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v13
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v21);
      }
      result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  if ( v6 )
    return RtlpHpLfhSubsegmentFree(a1, v6, a2, a4 & 1);
  return result;
}
