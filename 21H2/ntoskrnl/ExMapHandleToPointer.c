/*
 * XREFs of ExMapHandleToPointer @ 0x14061BB00
 * Callers:
 *     PspJobDelete @ 0x140287530 (PspJobDelete.c)
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 *     ExMapHandleToPointerEx @ 0x140616680 (ExMapHandleToPointerEx.c)
 *     PspThreadDelete @ 0x140619920 (PspThreadDelete.c)
 *     ObpCloseHandle @ 0x14061ABC0 (ObpCloseHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14061BA60 (RtlpAtomMapAtomToHandleEntry.c)
 *     PspClearProcessThreadCidRefs @ 0x14064CB80 (PspClearProcessThreadCidRefs.c)
 *     ObQueryObjectAuditingByHandle @ 0x140684FE0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1406918A0 (ObSetHandleAttributes.c)
 *     RtlpFreeHandleForAtom @ 0x1406A159C (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1406ACC5C (RtlpInsertStringAtom.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x140685788 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1406F11F0 (ExpLookupHandleTableEntry.c)
 */

signed __int64 *__fastcall ExMapHandleToPointer(__int64 a1, __int64 a2)
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
