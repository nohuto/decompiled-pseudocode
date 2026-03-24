/*
 * XREFs of ExInterlockedInsertHeadList @ 0x1402A0300
 * Callers:
 *     CcCanIWrite @ 0x1403131D0 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1404EA040 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x1409CD5C4 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x1409CEE8C (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x1409CF690 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1409CF72C (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x1402A03F4 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x1402A04C4 (ExpAcquireSpinLockDisabled.c)
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
