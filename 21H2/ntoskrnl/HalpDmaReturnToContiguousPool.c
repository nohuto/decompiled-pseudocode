/*
 * XREFs of HalpDmaReturnToContiguousPool @ 0x140457862
 * Callers:
 *     HalpDmaReturnPageToOwner @ 0x140457800 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnPageToSource @ 0x140513BCC (HalpDmaReturnPageToSource.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     HalpDmaTranslationEntryToIndex @ 0x1403CE020 (HalpDmaTranslationEntryToIndex.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall HalpDmaReturnToContiguousPool(__int64 a1, unsigned __int64 a2, char a3)
{
  ULONG v5; // ebp
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = HalpDmaTranslationEntryToIndex(a1, a2, &v14);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 120), &LockHandle);
  RtlClearBits(*(PRTL_BITMAP *)(a1 + 16), v5, 1u);
  if ( a3 )
    ++*(_DWORD *)(a1 + 200);
  if ( CurrentIrql != 15 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && LockHandle.OldIrql <= 0xFu && v8 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
}
