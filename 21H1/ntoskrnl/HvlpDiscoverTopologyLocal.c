/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x14088A440
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403A4558 (HvlEnlightenProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x1403AB304 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x14088A458 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
