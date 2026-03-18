/*
 * XREFs of PsQuitNextPartition @ 0x14057E850
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x140951420 (ExpNodeHotAddProcessorWorker.c)
 *     MiMirrorBrownPhase @ 0x14098CAFC (MiMirrorBrownPhase.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1402D4730 (PsDereferencePartition.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
