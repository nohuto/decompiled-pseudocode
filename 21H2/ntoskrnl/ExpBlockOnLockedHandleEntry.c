/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x1407ED9FC
 * Callers:
 *     ExLockHandleTableEntry @ 0x1402F344C (ExLockHandleTableEntry.c)
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     ObReferenceFileObjectForWrite @ 0x14071E230 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407A2680 (ObpReferenceProcessObjectByHandle.c)
 *     ExSweepHandleTable @ 0x1407A2CB0 (ExSweepHandleTable.c)
 *     PspReferenceCidTableEntry @ 0x1407A8900 (PspReferenceCidTableEntry.c)
 *     AlpcpLookupMessage @ 0x1407ABD80 (AlpcpLookupMessage.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
