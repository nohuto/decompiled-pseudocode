/*
 * XREFs of ExInterlockedInsertHeadList @ 0x1402F3E90
 * Callers:
 *     CcCanIWrite @ 0x14022E140 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1404E4970 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x1409CA5A4 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x1409CBE6C (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x1409CC670 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1409CC70C (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x1402F3F84 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x1402F4054 (ExpAcquireSpinLockDisabled.c)
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
