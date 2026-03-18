/*
 * XREFs of ExLockHandleTableEntry @ 0x14020B270
 * Callers:
 *     ExDupHandleTable @ 0x1405D0570 (ExDupHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E8650 (ObpReferenceProcessObjectByHandle.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     PspReferenceCidTableEntry @ 0x140666510 (PspReferenceCidTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x14066F900 (ObWaitForMultipleObjects.c)
 *     ObReferenceFileObjectForWrite @ 0x14068BE80 (ObReferenceFileObjectForWrite.c)
 *     ObpAuditObjectAccess @ 0x1408D94C4 (ObpAuditObjectAccess.c)
 *     ExQueryProcessHandleInformation @ 0x140949314 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x1409496A0 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x1406D45FC (ExpBlockOnLockedHandleEntry.c)
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
