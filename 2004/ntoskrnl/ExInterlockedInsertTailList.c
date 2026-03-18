/*
 * XREFs of ExInterlockedInsertTailList @ 0x140330B10
 * Callers:
 *     CcCanIWrite @ 0x1402C0F70 (CcCanIWrite.c)
 *     IoWMIWriteEvent @ 0x14037C580 (IoWMIWriteEvent.c)
 *     PopFxQueueWorkOrder @ 0x14037F228 (PopFxQueueWorkOrder.c)
 *     CcDeferWrite @ 0x1404E4F20 (CcDeferWrite.c)
 *     WheapWorkQueueAddItem @ 0x1405B81F8 (WheapWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x1407C1200 (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x1409C75B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409C7800 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x140330B84 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x140330C54 (ExpAcquireSpinLockDisabled.c)
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
