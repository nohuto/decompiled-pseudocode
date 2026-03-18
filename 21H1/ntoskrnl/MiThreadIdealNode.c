/*
 * XREFs of MiThreadIdealNode @ 0x1405420AC
 * Callers:
 *     MiGetLargePagesForSystemMapping @ 0x1408C40F4 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

__int64 MiThreadIdealNode()
{
  return *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 32532);
}
