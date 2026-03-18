/*
 * XREFs of MiThreadIdealNode @ 0x14057F538
 * Callers:
 *     MiGetLargePagesForSystemMapping @ 0x14096DAE0 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

__int64 MiThreadIdealNode()
{
  return *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
}
