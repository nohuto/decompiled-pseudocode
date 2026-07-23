/*
 * XREFs of MiCheckZeroFreeRebalance @ 0x140323AA0
 * Callers:
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsReferencePartitionSafe @ 0x1402745B0 (PsReferencePartitionSafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
 *     MiNodeLargeFreeZeroPages @ 0x140323B90 (MiNodeLargeFreeZeroPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetNodeStandbyPageCount @ 0x140550998 (MiGetNodeStandbyPageCount.c)
 */

unsigned __int64 __fastcall MiCheckZeroFreeRebalance(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  __int64 v3; // r13
  __int64 *v4; // rdi
  unsigned __int64 result; // rax
  unsigned int v6; // r15d
  __int64 i; // r14
  unsigned __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // ebx
  unsigned __int64 OldIrql; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+10h]
  unsigned int v19; // [rsp+90h] [rbp+18h]

  v2 = MmNumberOfChannels;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v19 = a2 >> byte_140C4DECC;
  v3 = *(_QWORD *)(a1 + 16) + 4544LL * (a2 >> byte_140C4DECC);
  v18 = 0;
  if ( (unsigned int)MmNumberOfChannels > 1 )
    v18 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(a2 >> byte_140C4DECD);
  v4 = (__int64 *)(v3 + 4128);
  result = 0LL;
  v6 = 0;
  for ( i = 0LL; i <= 1; ++i )
  {
    v8 = result;
    if ( v2 > 1 )
      v9 = *(_QWORD *)(v3 + 8 * (i + 2LL * v18) + 4216);
    else
      v9 = *v4;
    v10 = MiNodeLargeFreeZeroPages(v3, v18, v6++);
    result = v9 + v8 + v10;
    ++v4;
  }
  if ( result < 0x200 )
  {
    result = MiGetNodeStandbyPageCount(a1, v19, v18);
    if ( result >= 0x1000 && !*(_QWORD *)(a1 + 6320) )
    {
      result = *(unsigned int *)(a1 + 4);
      if ( (result & 1) == 0 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_140C4E640, &LockHandle);
        if ( *(_QWORD *)(a1 + 6320) || (*(_DWORD *)(a1 + 4) & 1) != 0 )
        {
          v11 = 0;
        }
        else
        {
          v11 = 0;
          if ( PsReferencePartitionSafe(*(_QWORD *)(a1 + 176)) )
          {
            *(_QWORD *)(a1 + 6304) = 0LL;
            *(_QWORD *)(a1 + 6320) = MiRebalanceZeroFreeLists;
            v11 = 1;
            *(_QWORD *)(a1 + 6328) = a1;
          }
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        result = (unsigned int)KiIrqlFlags;
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= result;
              if ( v15 )
                result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        if ( v11 == 1 )
          return ExQueueWorkItemToPartition((_QWORD *)(a1 + 6304), 1, 0xFFFFFFFF, *(_QWORD *)(a1 + 176));
      }
    }
  }
  return result;
}
