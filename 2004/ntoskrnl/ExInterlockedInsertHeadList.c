/*
 * XREFs of ExInterlockedInsertHeadList @ 0x140330A90
 * Callers:
 *     CcCanIWrite @ 0x1402C0F70 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1404E4F20 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x1409CA5B4 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x1409CBE7C (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x1409CC680 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1409CC71C (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x140330B84 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x140330C54 (ExpAcquireSpinLockDisabled.c)
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
