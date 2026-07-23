/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x1405E2998
 * Callers:
 *     ExLockHandleTableEntry @ 0x1403535B0 (ExLockHandleTableEntry.c)
 *     ExEnumHandleTable @ 0x1405E3DF0 (ExEnumHandleTable.c)
 *     ObReferenceFileObjectForWrite @ 0x140645330 (ObReferenceFileObjectForWrite.c)
 *     ExMapHandleToPointer @ 0x140685770 (ExMapHandleToPointer.c)
 *     PspReferenceCidTableEntry @ 0x14068F6C0 (PspReferenceCidTableEntry.c)
 *     AlpcpLookupMessage @ 0x1406D5FD0 (AlpcpLookupMessage.c)
 *     ObWaitForMultipleObjects @ 0x1406EC520 (ObWaitForMultipleObjects.c)
 *     ExSweepHandleTable @ 0x1406F3D00 (ExSweepHandleTable.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140213E80 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
