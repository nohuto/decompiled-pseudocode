/*
 * XREFs of ExLockHandleTableEntry @ 0x14021E890
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x1405F8E90 (ObReferenceFileObjectForWrite.c)
 *     NtClose @ 0x140611680 (NtClose.c)
 *     PspReferenceCidTableEntry @ 0x14063B300 (PspReferenceCidTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x140688460 (ObWaitForMultipleObjects.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1406A5D30 (ObpReferenceProcessObjectByHandle.c)
 *     ExDupHandleTable @ 0x1406F5040 (ExDupHandleTable.c)
 *     ObpAuditObjectAccess @ 0x1408DF304 (ObpAuditObjectAccess.c)
 *     ExQueryProcessHandleInformation @ 0x14094F0D4 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x14094F460 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x1406A5EF8 (ExpBlockOnLockedHandleEntry.c)
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
