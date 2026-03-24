/*
 * XREFs of MiThreadIdealNode @ 0x140547BCC
 * Callers:
 *     MiGetLargePagesForSystemMapping @ 0x1408C8A44 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

__int64 MiThreadIdealNode()
{
  return *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 32532);
}
