/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x140229794
 * Callers:
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiDeleteVaTail @ 0x140345880 (MiDeleteVaTail.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiRemoveDecayClusterTimer @ 0x140229950 (MiRemoveDecayClusterTimer.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiDecayPfnFullyInitialized(PSLIST_ENTRY ListEntry)
{
  int v2; // esi
  __int64 v3; // rdi
  unsigned __int64 Next; // rax
  __int64 v5; // rax
  char v6; // cl
  __int64 result; // rax
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  v3 = (__int64)&ListEntry[0x5800000000LL] / 48;
  KeAcquireInStackQueuedSpinLock(
    (PKSPIN_LOCK)(*(_QWORD *)(qword_140C4E688 + 8 * ((*((_QWORD *)&ListEntry[2].Next + 1) >> 39) & 0x3FFLL)) + 2664LL),
    &LockHandle);
  Next = (unsigned __int64)ListEntry[1].Next;
  if ( qword_140C4DF80 && (Next & 0x10) == 0 )
    Next &= ~qword_140C4DF80;
  v5 = (Next >> 12) & 0xFFFFFFFFFLL;
  v6 = BYTE3(ListEntry[2].Next);
  if ( (v6 & 8) == 0 )
    goto LABEL_10;
  if ( v5 == v3 )
  {
    MiUnlinkPageFromList((ULONG_PTR)ListEntry);
    MiRemoveDecayClusterTimer(ListEntry);
    v6 = BYTE3(ListEntry[2].Next);
LABEL_10:
    v2 = 1;
  }
  BYTE3(ListEntry[2].Next) = v6 & 0xF7;
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
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v2 == 1 )
    return (__int64)RtlpInterlockedPushEntrySList(&ListHead, ListEntry);
  return result;
}
