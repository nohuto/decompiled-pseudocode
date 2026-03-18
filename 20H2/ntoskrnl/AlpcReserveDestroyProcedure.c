/*
 * XREFs of AlpcReserveDestroyProcedure @ 0x1406DDC20
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1405E7A94 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1405F150C (AlpcpUnlockMessage.c)
 *     AlpcpRemoveResourcePort @ 0x140685C50 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x140685E3C (AlpcDeleteBlobByHandle.c)
 */

__int64 __fastcall AlpcReserveDestroyProcedure(__int64 *a1)
{
  ULONG_PTR v1; // rdi
  _QWORD *v3; // rcx

  v1 = a1[3];
  if ( v1 )
  {
    AlpcpLockForCachedReferenceBlob(a1[3]);
    *(_QWORD *)(v1 + 96) = 0LL;
    a1[3] = 0LL;
    AlpcpUnlockMessage(v1);
  }
  v3 = (_QWORD *)a1[1];
  if ( v3 )
    AlpcDeleteBlobByHandle(v3, a1[2], (__int64)a1);
  if ( *a1 )
  {
    AlpcpRemoveResourcePort(*a1, (__int64)a1);
    HalPutDmaAdapter((PADAPTER_OBJECT)*a1);
  }
  return 0LL;
}
