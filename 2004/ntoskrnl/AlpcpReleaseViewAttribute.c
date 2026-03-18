/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x14062E9D0
 * Callers:
 *     AlpcpReleaseAttributes @ 0x14062B010 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x14062DA1C (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcMessageCleanupProcedure @ 0x14062E160 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x1406851E0 (AlpcpSendMessage.c)
 * Callees:
 *     AlpcpLockForCachedReferenceBlob @ 0x14062B87C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140685070 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140688570 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpReleaseViewAttribute(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rcx

  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(BugCheckParameter2 + 16));
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  --*(_DWORD *)(BugCheckParameter2 + 76);
  AlpcpUnlockBlob(v2);
  return AlpcpDereferenceBlobEx(BugCheckParameter2);
}
