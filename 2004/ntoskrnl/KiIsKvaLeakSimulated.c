/*
 * XREFs of KiIsKvaLeakSimulated @ 0x1403B1C18
 * Callers:
 *     KiEnableKvaShadowing @ 0x14099BE8C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}
