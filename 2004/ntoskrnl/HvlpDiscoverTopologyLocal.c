/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x14088B760
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403A4CD8 (HvlEnlightenProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B0F84 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x14088B778 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
