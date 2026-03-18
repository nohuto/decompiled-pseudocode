/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x1406D45FC
 * Callers:
 *     ExLockHandleTableEntry @ 0x14020B270 (ExLockHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExMapHandleToPointer @ 0x140603450 (ExMapHandleToPointer.c)
 *     ExSweepHandleTable @ 0x14065C780 (ExSweepHandleTable.c)
 *     PspReferenceCidTableEntry @ 0x140666510 (PspReferenceCidTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x14066F900 (ObWaitForMultipleObjects.c)
 *     AlpcpLookupMessage @ 0x1406871E0 (AlpcpLookupMessage.c)
 *     ObReferenceFileObjectForWrite @ 0x14068BE80 (ObReferenceFileObjectForWrite.c)
 *     ExEnumHandleTable @ 0x1406D7420 (ExEnumHandleTable.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140325580 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
