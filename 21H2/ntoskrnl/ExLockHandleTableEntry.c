/*
 * XREFs of ExLockHandleTableEntry @ 0x140348860
 * Callers:
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     ExDupHandleTable @ 0x140606160 (ExDupHandleTable.c)
 *     PspReferenceCidTableEntry @ 0x140625A50 (PspReferenceCidTableEntry.c)
 *     ObReferenceFileObjectForWrite @ 0x140650510 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1406855C0 (ObpReferenceProcessObjectByHandle.c)
 *     NtClose @ 0x1406F0980 (NtClose.c)
 *     ObpAuditObjectAccess @ 0x1408DCAC4 (ObpAuditObjectAccess.c)
 *     ExQueryProcessHandleInformation @ 0x14094C8A4 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x14094CC30 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x140685788 (ExpBlockOnLockedHandleEntry.c)
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
