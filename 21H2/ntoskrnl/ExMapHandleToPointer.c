/*
 * XREFs of ExMapHandleToPointer @ 0x140685770
 * Callers:
 *     PspJobDelete @ 0x1402046D0 (PspJobDelete.c)
 *     ObQueryObjectAuditingByHandle @ 0x1405E2BC0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1405F1710 (ObSetHandleAttributes.c)
 *     RtlpFreeHandleForAtom @ 0x140600D2C (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x14060B34C (RtlpInsertStringAtom.c)
 *     PspClearProcessThreadCidRefs @ 0x1406419A0 (PspClearProcessThreadCidRefs.c)
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 *     ExMapHandleToPointerEx @ 0x1406802E0 (ExMapHandleToPointerEx.c)
 *     PspThreadDelete @ 0x140683580 (PspThreadDelete.c)
 *     ObpCloseHandle @ 0x140684820 (ObpCloseHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1406856D0 (RtlpAtomMapAtomToHandleEntry.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x1405E2998 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1407085D0 (ExpLookupHandleTableEntry.c)
 */

__int64 *__fastcall ExMapHandleToPointer(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // r8

  if ( (a2 & 0x3FC) == 0 )
    return 0LL;
  v3 = (__int64 *)ExpLookupHandleTableEntry(a1, a2);
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
      ExpBlockOnLockedHandleEntry(a1, v3, v4);
    }
  }
  while ( v4 != _InterlockedCompareExchange64(v3, v4 - 1, v4) );
  return v3;
}
