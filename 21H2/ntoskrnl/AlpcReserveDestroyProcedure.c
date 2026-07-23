/*
 * XREFs of AlpcReserveDestroyProcedure @ 0x14061CE80
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     AlpcpRemoveResourcePort @ 0x140688180 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x1406897EC (AlpcDeleteBlobByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1406D0224 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcReserveDestroyProcedure(PADAPTER_OBJECT *a1)
{
  ULONG_PTR v1; // rdi
  PADAPTER_OBJECT v3; // rcx

  v1 = (ULONG_PTR)a1[3];
  if ( v1 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)a1[3]);
    *(_QWORD *)(v1 + 96) = 0LL;
    a1[3] = 0LL;
    AlpcpUnlockMessage(v1);
  }
  v3 = a1[1];
  if ( v3 )
    AlpcDeleteBlobByHandle(v3, a1[2], a1);
  if ( *a1 )
  {
    AlpcpRemoveResourcePort(*a1, a1);
    HalPutDmaAdapter(*a1);
  }
  return 0LL;
}
