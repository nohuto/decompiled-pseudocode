/*
 * XREFs of ExLockHandleTableEntry @ 0x1402F344C
 * Callers:
 *     ExDupHandleTable @ 0x1406A6520 (ExDupHandleTable.c)
 *     ObReferenceFileObjectForWrite @ 0x14071E230 (ObReferenceFileObjectForWrite.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     ExMapHandleToPointer @ 0x1407A1AC0 (ExMapHandleToPointer.c)
 *     PspReferenceCidTableEntry @ 0x1407A8900 (PspReferenceCidTableEntry.c)
 *     ExpSnapShotHandleTables @ 0x140883F24 (ExpSnapShotHandleTables.c)
 *     ObpAuditObjectAccess @ 0x1409851A4 (ObpAuditObjectAccess.c)
 *     ExQueryProcessHandleInformation @ 0x1409F8FB8 (ExQueryProcessHandleInformation.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x1407ED9FC (ExpBlockOnLockedHandleEntry.c)
 */

char __fastcall ExLockHandleTableEntry(__int64 a1, _QWORD *a2)
{
  signed __int64 v4; // rax
  __int64 v5; // rtt

  do
  {
    while ( 1 )
    {
      _m_prefetchw(a2);
      v4 = *a2;
      if ( (*a2 & 1) != 0 )
        break;
      if ( !v4 )
        return v4;
      ExpBlockOnLockedHandleEntry(a1, a2, *a2);
    }
    v5 = *a2;
  }
  while ( v5 != _InterlockedCompareExchange64(a2, v4 - 1, v4) );
  LOBYTE(v4) = 1;
  return v4;
}
