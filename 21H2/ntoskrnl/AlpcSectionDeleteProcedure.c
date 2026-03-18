/*
 * XREFs of AlpcSectionDeleteProcedure @ 0x1406C7C20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     AlpcpRemoveResourcePort @ 0x1406F6C24 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x1407A501C (AlpcDeleteBlobByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407A6A34 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407B0F40 (AlpcpUnlockBlob.c)
 */

LONG_PTR __fastcall AlpcSectionDeleteProcedure(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rcx
  LONG_PTR result; // rax
  void *v4; // rdi

  v2 = BugCheckParameter2[2];
  if ( v2 )
  {
    result = AlpcDeleteBlobByHandle(v2, BugCheckParameter2[3], BugCheckParameter2);
    BugCheckParameter2[2] = 0LL;
  }
  v4 = (void *)BugCheckParameter2[5];
  if ( v4 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)BugCheckParameter2);
    AlpcpRemoveResourcePort(v4, BugCheckParameter2);
    BugCheckParameter2[5] = 0LL;
    AlpcpUnlockBlob((ULONG_PTR)BugCheckParameter2);
    return ObfDereferenceObject(v4);
  }
  return result;
}
