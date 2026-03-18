/*
 * XREFs of PopSetRange @ 0x140385900
 * Callers:
 *     PoSetHiberRange @ 0x140385760 (PoSetHiberRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x14055FAA0 (PopInternalAddToDumpFile.c)
 *     PopSetBootPhaseRange @ 0x140993708 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x14099374C (PopDiscardRange.c)
 *     PopCloneRange @ 0x140993768 (PopCloneRange.c)
 */

__int64 __fastcall PopSetRange(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  if ( *(_BYTE *)(BugCheckParameter3 + 28) )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 456LL, 0LL);
    KeBugCheckEx(0xA0u, 0x104uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  if ( (a2 & 0x8000) != 0 )
    return PopDiscardRange(BugCheckParameter3, a3, a4);
  if ( (a2 & 2) != 0 )
    return PopCloneRange(BugCheckParameter3, a3, a4, a5);
  if ( (a2 & 0x10000) == 0 )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 456LL, 0LL);
    KeBugCheckEx(0xA0u, 0x105uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  return PopSetBootPhaseRange(BugCheckParameter3, a3, a4);
}
