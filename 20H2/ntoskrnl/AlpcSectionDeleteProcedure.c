/*
 * XREFs of AlpcSectionDeleteProcedure @ 0x1406CC760
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1405E7A94 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1405EEEC0 (AlpcpUnlockBlob.c)
 *     AlpcpRemoveResourcePort @ 0x140685C50 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x140685E3C (AlpcDeleteBlobByHandle.c)
 */

void __fastcall AlpcSectionDeleteProcedure(_QWORD *BugCheckParameter2)
{
  _QWORD *v2; // rcx
  struct _DMA_ADAPTER *v3; // rdi

  v2 = (_QWORD *)BugCheckParameter2[2];
  if ( v2 )
  {
    AlpcDeleteBlobByHandle(v2, BugCheckParameter2[3], (__int64)BugCheckParameter2);
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
