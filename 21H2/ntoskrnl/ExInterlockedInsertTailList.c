/*
 * XREFs of ExInterlockedInsertTailList @ 0x14021D900
 * Callers:
 *     CcCanIWrite @ 0x14031DF20 (CcCanIWrite.c)
 *     IoWMIWriteEvent @ 0x14037E280 (IoWMIWriteEvent.c)
 *     PopFxQueueWorkOrder @ 0x1403811A8 (PopFxQueueWorkOrder.c)
 *     CcDeferWrite @ 0x1404EA280 (CcDeferWrite.c)
 *     WheapWorkQueueAddItem @ 0x1405BD9D8 (WheapWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x1407D3FF0 (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x1409CB5C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CB810 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x14021D974 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14021DA44 (ExpAcquireSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  __int64 v7; // rdx
  struct _LIST_ENTRY *Blink; // rbx

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Blink = ListHead->Blink;
  if ( Blink->Flink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = ListHead;
  LOBYTE(v7) = v6;
  ListEntry->Blink = Blink;
  Blink->Flink = ListEntry;
  ListHead->Blink = ListEntry;
  ExpReleaseSpinLockDisabled(Lock, v7);
  if ( Blink == ListHead )
    return 0LL;
  return Blink;
}
