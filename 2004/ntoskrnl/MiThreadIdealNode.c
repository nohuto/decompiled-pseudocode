/*
 * XREFs of MiThreadIdealNode @ 0x1405426FC
 * Callers:
 *     MiGetLargePagesForSystemMapping @ 0x1408C5444 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

__int64 MiThreadIdealNode()
{
  return *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 32532);
}
