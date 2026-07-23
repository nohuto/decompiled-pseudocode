/*
 * XREFs of AlpcSectionDeleteProcedure @ 0x140607530
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     AlpcpRemoveResourcePort @ 0x140688180 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x1406897EC (AlpcDeleteBlobByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1406D0224 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1406D6FE0 (AlpcpUnlockBlob.c)
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
    AlpcpRemoveResourcePort(v3, BugCheckParameter2);
    BugCheckParameter2[5] = 0LL;
    AlpcpUnlockBlob((ULONG_PTR)BugCheckParameter2);
    HalPutDmaAdapter(v3);
  }
}
