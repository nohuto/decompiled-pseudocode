/*
 * XREFs of ExMapHandleToPointer @ 0x1407A1AC0
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 *     RtlpFreeHandleForAtom @ 0x1406AB574 (RtlpFreeHandleForAtom.c)
 *     ExMapHandleToPointerEx @ 0x1406BB808 (ExMapHandleToPointerEx.c)
 *     RtlpInsertStringAtom @ 0x1406C5878 (RtlpInsertStringAtom.c)
 *     PspClearProcessThreadCidRefs @ 0x1407A0920 (PspClearProcessThreadCidRefs.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1407A1A30 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObSetHandleAttributes @ 0x1407A1B10 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x1407A2A70 (ObQueryObjectAuditingByHandle.c)
 *     PspThreadDelete @ 0x1407A41E0 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x1402F344C (ExLockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140733340 (ExpLookupHandleTableEntry.c)
 */

_QWORD *__fastcall ExMapHandleToPointer(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r9
  _QWORD *v4; // rbx

  if ( (a2 & 0x3FC) != 0
    && (v2 = (_QWORD *)ExpLookupHandleTableEntry(a1, a2), (v4 = v2) != 0LL)
    && ExLockHandleTableEntry(v3, v2) )
  {
    return v4;
  }
  else
  {
    return 0LL;
  }
}
