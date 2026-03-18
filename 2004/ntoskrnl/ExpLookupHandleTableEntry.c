/*
 * XREFs of ExpLookupHandleTableEntry @ 0x1405F62C0
 * Callers:
 *     ExDupHandleTable @ 0x1405D0570 (ExDupHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E8650 (ObpReferenceProcessObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     ExMapHandleToPointer @ 0x140603450 (ExMapHandleToPointer.c)
 *     ExSweepHandleTable @ 0x14065C780 (ExSweepHandleTable.c)
 *     PspReferenceCidTableEntry @ 0x140666510 (PspReferenceCidTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x14066F900 (ObWaitForMultipleObjects.c)
 *     AlpcpLookupMessage @ 0x1406871E0 (AlpcpLookupMessage.c)
 *     ObReferenceFileObjectForWrite @ 0x14068BE80 (ObReferenceFileObjectForWrite.c)
 *     ExEnumHandleTable @ 0x1406D7420 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x1406D7540 (ExpGetNextHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x1409495A0 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x1409495E8 (ExpSetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x1409496A0 (ExpSnapShotHandleTables.c)
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
