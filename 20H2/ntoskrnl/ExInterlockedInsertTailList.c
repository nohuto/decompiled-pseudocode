/*
 * XREFs of ExInterlockedInsertTailList @ 0x1403039C0
 * Callers:
 *     CcCanIWrite @ 0x14029A7B0 (CcCanIWrite.c)
 *     IoWMIWriteEvent @ 0x14037E2B0 (IoWMIWriteEvent.c)
 *     PopFxQueueWorkOrder @ 0x140380F58 (PopFxQueueWorkOrder.c)
 *     CcDeferWrite @ 0x1404E84B0 (CcDeferWrite.c)
 *     WheapWorkQueueAddItem @ 0x1405BBD58 (WheapWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x1407CFA90 (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x1409CD5D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CD820 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x140303A34 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x140303B04 (ExpAcquireSpinLockDisabled.c)
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
