/*
 * XREFs of AlpcSectionDeleteProcedure @ 0x1406BA500
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     AlpcpUnlockBlob @ 0x14060CF00 (AlpcpUnlockBlob.c)
 *     AlpcpRemoveResourcePort @ 0x140636230 (AlpcpRemoveResourcePort.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14064942C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcDeleteBlobByHandle @ 0x1406BA62C (AlpcDeleteBlobByHandle.c)
 */

void __fastcall AlpcSectionDeleteProcedure(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rcx
  struct _DMA_ADAPTER *v3; // rdi

  v2 = BugCheckParameter2[2];
  if ( v2 )
  {
    AlpcDeleteBlobByHandle(v2, BugCheckParameter2[3], BugCheckParameter2);
    BugCheckParameter2[2] = 0LL;
  }
  v3 = (struct _DMA_ADAPTER *)BugCheckParameter2[5];
  if ( v3 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)BugCheckParameter2);
    AlpcpRemoveResourcePort((__int64)v3, (__int64)BugCheckParameter2);
    BugCheckParameter2[5] = 0LL;
    AlpcpUnlockBlob((ULONG_PTR)BugCheckParameter2);
    HalPutDmaAdapter(v3);
  }
}
