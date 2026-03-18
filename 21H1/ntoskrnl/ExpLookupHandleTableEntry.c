/*
 * XREFs of ExpLookupHandleTableEntry @ 0x14062B830
 * Callers:
 *     ExSweepHandleTable @ 0x1405D5FF0 (ExSweepHandleTable.c)
 *     PspReferenceCidTableEntry @ 0x1405E0210 (PspReferenceCidTableEntry.c)
 *     ObReferenceFileObjectForWrite @ 0x1405E4810 (ObReferenceFileObjectForWrite.c)
 *     ObWaitForMultipleObjects @ 0x1405F7860 (ObWaitForMultipleObjects.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     ObpReferenceProcessObjectByHandle @ 0x14061DC70 (ObpReferenceProcessObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     ExMapHandleToPointer @ 0x140638490 (ExMapHandleToPointer.c)
 *     ExDupHandleTable @ 0x140671090 (ExDupHandleTable.c)
 *     ExEnumHandleTable @ 0x1406B8320 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x1406B8440 (ExpGetNextHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x140948200 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x140948248 (ExpSetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x140948300 (ExpSnapShotHandleTables.c)
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
