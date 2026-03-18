/*
 * XREFs of ExInterlockedInsertHeadList @ 0x1402430F0
 * Callers:
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x140539E20 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x140A872C8 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x140A88B74 (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x140A89390 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140A8942C (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x140243164 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14024319C (ExpAcquireSpinLockDisabled.c)
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
