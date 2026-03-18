/*
 * XREFs of MiThreadIdealNode @ 0x1405460CC
 * Callers:
 *     MiGetLargePagesForSystemMapping @ 0x1408CB284 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

__int64 MiThreadIdealNode()
{
  return *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 32532);
}
