/*
 * XREFs of ExMapHandleToPointer @ 0x140638490
 * Callers:
 *     PspJobDelete @ 0x1402D96F0 (PspJobDelete.c)
 *     RtlpFreeHandleForAtom @ 0x1405D5D8C (RtlpFreeHandleForAtom.c)
 *     PspThreadDelete @ 0x1405F1620 (PspThreadDelete.c)
 *     ExMapHandleToPointerEx @ 0x1405F2038 (ExMapHandleToPointerEx.c)
 *     ObpCloseHandle @ 0x140637590 (ObpCloseHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1406383F0 (RtlpAtomMapAtomToHandleEntry.c)
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     ObQueryObjectAuditingByHandle @ 0x1406B60A0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1406C1510 (ObSetHandleAttributes.c)
 *     RtlpInsertStringAtom @ 0x1406D883C (RtlpInsertStringAtom.c)
 *     PspClearProcessThreadCidRefs @ 0x1407070E0 (PspClearProcessThreadCidRefs.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x14062B830 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406B626C (ExpBlockOnLockedHandleEntry.c)
 */

signed __int64 *__fastcall ExMapHandleToPointer(unsigned int *a1, __int64 a2)
{
  signed __int64 *v3; // rbx
  signed __int64 v4; // r8

  if ( (a2 & 0x3FC) == 0 )
    return 0LL;
  v3 = (signed __int64 *)ExpLookupHandleTableEntry(a1, a2);
  if ( !v3 )
    return 0LL;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v3);
      v4 = *v3;
      if ( (*v3 & 1) != 0 )
        break;
      if ( !v4 )
        return 0LL;
      ExpBlockOnLockedHandleEntry(a1, v3);
    }
  }
  while ( v4 != _InterlockedCompareExchange64(v3, v4 - 1, v4) );
  return v3;
}
