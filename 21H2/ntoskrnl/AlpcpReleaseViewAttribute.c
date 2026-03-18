/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x1406D7014
 * Callers:
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1406633A8 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcMessageCleanupProcedure @ 0x1406A1CC0 (AlpcMessageCleanupProcedure.c)
 *     AlpcpReleaseAttributes @ 0x1407A6660 (AlpcpReleaseAttributes.c)
 *     AlpcpSendMessage @ 0x1407A9ED0 (AlpcpSendMessage.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407A6A34 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407B0F40 (AlpcpUnlockBlob.c)
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
