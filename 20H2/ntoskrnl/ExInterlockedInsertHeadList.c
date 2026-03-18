/*
 * XREFs of ExInterlockedInsertHeadList @ 0x140303940
 * Callers:
 *     CcCanIWrite @ 0x14029A7B0 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1404E84B0 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x1409D05D4 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x1409D1E9C (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x1409D26A0 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1409D273C (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x140303A34 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x140303B04 (ExpAcquireSpinLockDisabled.c)
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
