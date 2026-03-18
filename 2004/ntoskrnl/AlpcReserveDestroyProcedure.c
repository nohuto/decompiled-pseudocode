/*
 * XREFs of AlpcReserveDestroyProcedure @ 0x1406DB790
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     AlpcpRemoveResourcePort @ 0x1406011F0 (AlpcpRemoveResourcePort.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14062B87C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140682914 (AlpcpUnlockMessage.c)
 *     AlpcDeleteBlobByHandle @ 0x1406DB93C (AlpcDeleteBlobByHandle.c)
 */

__int64 __fastcall AlpcReserveDestroyProcedure(__int64 *a1)
{
  ULONG_PTR v1; // rdi
  __int64 v3; // rcx

  v1 = a1[3];
  if ( v1 )
  {
    AlpcpLockForCachedReferenceBlob(a1[3]);
    *(_QWORD *)(v1 + 96) = 0LL;
    a1[3] = 0LL;
    AlpcpUnlockMessage(v1);
  }
  v3 = a1[1];
  if ( v3 )
    AlpcDeleteBlobByHandle(v3, a1[2], a1);
  if ( *a1 )
  {
    AlpcpRemoveResourcePort(*a1, (__int64)a1);
    HalPutDmaAdapter((PADAPTER_OBJECT)*a1);
  }
  return 0LL;
}
