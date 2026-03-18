/*
 * XREFs of ExLockHandleTableEntry @ 0x140264150
 * Callers:
 *     PspReferenceCidTableEntry @ 0x1405E0210 (PspReferenceCidTableEntry.c)
 *     ObReferenceFileObjectForWrite @ 0x1405E4810 (ObReferenceFileObjectForWrite.c)
 *     ObWaitForMultipleObjects @ 0x1405F7860 (ObWaitForMultipleObjects.c)
 *     ObpReferenceProcessObjectByHandle @ 0x14061DC70 (ObpReferenceProcessObjectByHandle.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     ExDupHandleTable @ 0x140671090 (ExDupHandleTable.c)
 *     ObpAuditObjectAccess @ 0x1408D8154 (ObpAuditObjectAccess.c)
 *     ExQueryProcessHandleInformation @ 0x140947F74 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x140948300 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x1406B626C (ExpBlockOnLockedHandleEntry.c)
 */

char __fastcall ExLockHandleTableEntry(__int64 a1, signed __int64 *a2)
{
  signed __int64 v4; // r8

  while ( 1 )
  {
    while ( 1 )
    {
      _m_prefetchw(a2);
      v4 = *a2;
      if ( (*a2 & 1) == 0 )
        break;
      if ( v4 == _InterlockedCompareExchange64(a2, v4 - 1, v4) )
        return 1;
    }
    if ( !v4 )
      break;
    ExpBlockOnLockedHandleEntry(a1, a2);
  }
  return 0;
}
