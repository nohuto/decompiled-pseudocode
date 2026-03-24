/*
 * XREFs of ExInterlockedInsertTailList @ 0x1402A0380
 * Callers:
 *     CcCanIWrite @ 0x1403131D0 (CcCanIWrite.c)
 *     IoWMIWriteEvent @ 0x14037E730 (IoWMIWriteEvent.c)
 *     PopFxQueueWorkOrder @ 0x140381658 (PopFxQueueWorkOrder.c)
 *     CcDeferWrite @ 0x1404EA040 (CcDeferWrite.c)
 *     WheapWorkQueueAddItem @ 0x1405BD7A8 (WheapWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x1407D3E80 (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x1409CA5C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CA810 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x1402A03F4 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x1402A04C4 (ExpAcquireSpinLockDisabled.c)
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
