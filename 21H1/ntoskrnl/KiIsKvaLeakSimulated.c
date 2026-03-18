/*
 * XREFs of KiIsKvaLeakSimulated @ 0x1403ABF98
 * Callers:
 *     KiEnableKvaShadowing @ 0x14099A6F0 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}
