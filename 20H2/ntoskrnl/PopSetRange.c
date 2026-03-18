/*
 * XREFs of PopSetRange @ 0x140387AA0
 * Callers:
 *     PoSetHiberRange @ 0x140387900 (PoSetHiberRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140563474 (PopInternalAddToDumpFile.c)
 *     PopSetBootPhaseRange @ 0x140999868 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x1409998AC (PopDiscardRange.c)
 *     PopCloneRange @ 0x1409998C8 (PopCloneRange.c)
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
