/*
 * XREFs of PsQuitNextPartition @ 0x14057EE90
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x1409527C0 (ExpNodeHotAddProcessorWorker.c)
 *     MiMirrorBrownPhase @ 0x140992EDC (MiMirrorBrownPhase.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x14026AD90 (PsDereferencePartition.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
