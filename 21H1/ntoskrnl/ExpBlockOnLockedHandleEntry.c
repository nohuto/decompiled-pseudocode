/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x1406B626C
 * Callers:
 *     ExLockHandleTableEntry @ 0x140264150 (ExLockHandleTableEntry.c)
 *     ExSweepHandleTable @ 0x1405D5FF0 (ExSweepHandleTable.c)
 *     PspReferenceCidTableEntry @ 0x1405E0210 (PspReferenceCidTableEntry.c)
 *     ObReferenceFileObjectForWrite @ 0x1405E4810 (ObReferenceFileObjectForWrite.c)
 *     ObWaitForMultipleObjects @ 0x1405F7860 (ObWaitForMultipleObjects.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     ExMapHandleToPointer @ 0x140638490 (ExMapHandleToPointer.c)
 *     ExEnumHandleTable @ 0x1406B8320 (ExEnumHandleTable.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1402EBC50 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
