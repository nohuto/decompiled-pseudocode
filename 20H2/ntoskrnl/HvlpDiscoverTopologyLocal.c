/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x1408912B0
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403A70D8 (HvlEnlightenProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B38F0 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x1408912C8 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
