/*
 * XREFs of ExInterlockedInsertHeadList @ 0x14021D880
 * Callers:
 *     CcCanIWrite @ 0x14031DF20 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1404EA280 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x1409CE5C4 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x1409CFE8C (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x1409D0690 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1409D072C (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x14021D974 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14021DA44 (ExpAcquireSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  __int64 v7; // rdx
  struct _LIST_ENTRY *Flink; // rbx

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Flink = ListHead->Flink;
  if ( ListHead->Flink->Blink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = Flink;
  LOBYTE(v7) = v6;
  ListEntry->Blink = ListHead;
  Flink->Blink = ListEntry;
  ListHead->Flink = ListEntry;
  ExpReleaseSpinLockDisabled(Lock, v7);
  if ( Flink == ListHead )
    return 0LL;
  return Flink;
}
