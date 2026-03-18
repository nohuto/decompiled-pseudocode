/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x1406A5EF8
 * Callers:
 *     ExLockHandleTableEntry @ 0x14021E890 (ExLockHandleTableEntry.c)
 *     AlpcpLookupMessage @ 0x1405EDE10 (AlpcpLookupMessage.c)
 *     ObReferenceFileObjectForWrite @ 0x1405F8E90 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
 *     ExMapHandleToPointer @ 0x140628CB0 (ExMapHandleToPointer.c)
 *     ExSweepHandleTable @ 0x140631740 (ExSweepHandleTable.c)
 *     PspReferenceCidTableEntry @ 0x14063B300 (PspReferenceCidTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x140688460 (ObWaitForMultipleObjects.c)
 *     ExEnumHandleTable @ 0x1406B11E0 (ExEnumHandleTable.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1402F3810 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
