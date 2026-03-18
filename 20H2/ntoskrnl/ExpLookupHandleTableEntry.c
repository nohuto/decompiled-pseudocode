/*
 * XREFs of ExpLookupHandleTableEntry @ 0x140611EF0
 * Callers:
 *     AlpcpLookupMessage @ 0x1405EDE10 (AlpcpLookupMessage.c)
 *     ObReferenceFileObjectForWrite @ 0x1405F8E90 (ObReferenceFileObjectForWrite.c)
 *     NtClose @ 0x140611680 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
 *     ExMapHandleToPointer @ 0x140628CB0 (ExMapHandleToPointer.c)
 *     ExSweepHandleTable @ 0x140631740 (ExSweepHandleTable.c)
 *     PspReferenceCidTableEntry @ 0x14063B300 (PspReferenceCidTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x140688460 (ObWaitForMultipleObjects.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1406A5D30 (ObpReferenceProcessObjectByHandle.c)
 *     ExEnumHandleTable @ 0x1406B11E0 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x1406B1300 (ExpGetNextHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1406F5040 (ExDupHandleTable.c)
 *     ExpGetHandleExtraInfo @ 0x14094F360 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x14094F3A8 (ExpSetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x14094F460 (ExpSnapShotHandleTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLookupHandleTableEntry(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8

  v2 = a2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 >= *a1 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 1);
  if ( (v3 & 3) == 1 )
    return *(_QWORD *)(v3 + 8 * (v2 >> 10) - 1) + 4 * (v2 & 0x3FF);
  if ( (v3 & 3) != 0 )
    return *(_QWORD *)(*(_QWORD *)(v3 + 8 * (v2 >> 19) - 2) + 8 * ((v2 >> 10) & 0x1FF)) + 4 * (v2 & 0x3FF);
  return v3 + 4 * v2;
}
