/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x140685788
 * Callers:
 *     ExLockHandleTableEntry @ 0x140348860 (ExLockHandleTableEntry.c)
 *     AlpcpLookupMessage @ 0x1405E6870 (AlpcpLookupMessage.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     ExSweepHandleTable @ 0x1406045D0 (ExSweepHandleTable.c)
 *     ExMapHandleToPointer @ 0x14061BB00 (ExMapHandleToPointer.c)
 *     PspReferenceCidTableEntry @ 0x140625A50 (PspReferenceCidTableEntry.c)
 *     ObReferenceFileObjectForWrite @ 0x140650510 (ObReferenceFileObjectForWrite.c)
 *     ExEnumHandleTable @ 0x140685A70 (ExEnumHandleTable.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406F0C00 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x14029CC60 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
