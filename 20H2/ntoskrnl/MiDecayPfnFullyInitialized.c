/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x140351A08
 * Callers:
 *     MiDeleteVaTail @ 0x1402BF6B0 (MiDeleteVaTail.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiRemoveDecayClusterTimer @ 0x14030FA40 (MiRemoveDecayClusterTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiDecayPfnFullyInitialized(ULONG_PTR BugCheckParameter2)
{
  int v2; // esi
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
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
  v3 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  KeAcquireInStackQueuedSpinLock(
    (PKSPIN_LOCK)(*(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL)) + 2664LL),
    &LockHandle);
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( qword_140C4DDC0 && (v4 & 0x10) == 0 )
    v4 &= ~qword_140C4DDC0;
  v5 = (v4 >> 12) & 0xFFFFFFFFFLL;
  v6 = *(_BYTE *)(BugCheckParameter2 + 35);
  if ( (v6 & 8) == 0 )
    goto LABEL_10;
  if ( v5 == v3 )
  {
    MiUnlinkPageFromList(BugCheckParameter2, 1);
    MiRemoveDecayClusterTimer(BugCheckParameter2);
    v6 = *(_BYTE *)(BugCheckParameter2 + 35);
LABEL_10:
    v2 = 1;
  }
  *(_BYTE *)(BugCheckParameter2 + 35) = v6 & 0xF7;
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
    return (__int64)RtlpInterlockedPushEntrySList(&stru_140C4E830, (PSLIST_ENTRY)BugCheckParameter2);
  return result;
}
