/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x1406D649C
 * Callers:
 *     AlpcMessageCleanupProcedure @ 0x1405E2E50 (AlpcMessageCleanupProcedure.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1405EA530 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x1405EAF90 (AlpcpReleaseAttributes.c)
 *     AlpcpSendMessage @ 0x1405EBDA0 (AlpcpSendMessage.c)
 * Callees:
 *     AlpcpLockForCachedReferenceBlob @ 0x1405E7A94 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1405EEEC0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1405F1600 (AlpcpDereferenceBlobEx.c)
 */

void __fastcall AlpcpReleaseViewAttribute(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rcx

  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(BugCheckParameter2 + 16));
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  --*(_DWORD *)(BugCheckParameter2 + 76);
  AlpcpUnlockBlob(v2);
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
}
