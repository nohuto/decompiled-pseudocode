/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x14064C084
 * Callers:
 *     AlpcpSendMessage @ 0x14060D070 (AlpcpSendMessage.c)
 *     AlpcpReleaseAttributes @ 0x140648BC0 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x14064B5CC (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcMessageCleanupProcedure @ 0x14064BF70 (AlpcMessageCleanupProcedure.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x14060CF00 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14064942C (AlpcpLockForCachedReferenceBlob.c)
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
