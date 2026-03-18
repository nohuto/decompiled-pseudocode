/*
 * XREFs of ExMapHandleToPointer @ 0x140628CB0
 * Callers:
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     ObpCloseHandle @ 0x140627DB0 (ObpCloseHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140628C10 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObSetHandleAttributes @ 0x1406295A0 (ObSetHandleAttributes.c)
 *     PspClearProcessThreadCidRefs @ 0x140629798 (PspClearProcessThreadCidRefs.c)
 *     ObQueryObjectAuditingByHandle @ 0x140629840 (ObQueryObjectAuditingByHandle.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     ExMapHandleToPointerEx @ 0x140663C00 (ExMapHandleToPointerEx.c)
 *     PspThreadDelete @ 0x140666EA0 (PspThreadDelete.c)
 *     RtlpFreeHandleForAtom @ 0x14068D0FC (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1406CEB3C (RtlpInsertStringAtom.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x140611EF0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406A5EF8 (ExpBlockOnLockedHandleEntry.c)
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
