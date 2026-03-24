/*
 * XREFs of ExpLookupHandleTableEntry @ 0x1406F11F0
 * Callers:
 *     AlpcpLookupMessage @ 0x1405E6870 (AlpcpLookupMessage.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     ExSweepHandleTable @ 0x1406045D0 (ExSweepHandleTable.c)
 *     ExDupHandleTable @ 0x140606160 (ExDupHandleTable.c)
 *     ExMapHandleToPointer @ 0x14061BB00 (ExMapHandleToPointer.c)
 *     PspReferenceCidTableEntry @ 0x140625A50 (PspReferenceCidTableEntry.c)
 *     ObReferenceFileObjectForWrite @ 0x140650510 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1406855C0 (ObpReferenceProcessObjectByHandle.c)
 *     ExEnumHandleTable @ 0x140685A70 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x140685B90 (ExpGetNextHandleTableEntry.c)
 *     NtClose @ 0x1406F0980 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406F0C00 (ObpReferenceObjectByHandleWithTag.c)
 *     ExpGetHandleExtraInfo @ 0x14094CB30 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x14094CB78 (ExpSetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x14094CC30 (ExpSnapShotHandleTables.c)
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
