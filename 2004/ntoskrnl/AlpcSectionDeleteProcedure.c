/*
 * XREFs of AlpcSectionDeleteProcedure @ 0x1406DB810
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     AlpcpRemoveResourcePort @ 0x1406011F0 (AlpcpRemoveResourcePort.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14062B87C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140685070 (AlpcpUnlockBlob.c)
 *     AlpcDeleteBlobByHandle @ 0x1406DB93C (AlpcDeleteBlobByHandle.c)
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
