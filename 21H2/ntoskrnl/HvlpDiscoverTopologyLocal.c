/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x14088E9B0
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403A7AE8 (HvlEnlightenProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B6AB8 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x14088E9C8 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
