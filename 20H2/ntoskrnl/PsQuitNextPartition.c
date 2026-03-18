/*
 * XREFs of PsQuitNextPartition @ 0x1405828C0
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x140958580 (ExpNodeHotAddProcessorWorker.c)
 *     MiMirrorBrownPhase @ 0x140998F4C (MiMirrorBrownPhase.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x140263688 (PsDereferencePartition.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
