/*
 * XREFs of ExMapHandleToPointer @ 0x140603450
 * Callers:
 *     PspJobDelete @ 0x14027ABB0 (PspJobDelete.c)
 *     ObpCloseHandle @ 0x140602550 (ObpCloseHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1406033B0 (RtlpAtomMapAtomToHandleEntry.c)
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x14069AB30 (PspThreadDelete.c)
 *     ExMapHandleToPointerEx @ 0x14069BB9C (ExMapHandleToPointerEx.c)
 *     PspClearProcessThreadCidRefs @ 0x1406B1220 (PspClearProcessThreadCidRefs.c)
 *     ObQueryObjectAuditingByHandle @ 0x1406D4430 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1406E1A90 (ObSetHandleAttributes.c)
 *     RtlpFreeHandleForAtom @ 0x1406F1D8C (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1406FC29C (RtlpInsertStringAtom.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1405F62C0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406D45FC (ExpBlockOnLockedHandleEntry.c)
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
