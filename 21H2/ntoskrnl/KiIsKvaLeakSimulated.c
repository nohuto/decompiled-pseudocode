/*
 * XREFs of KiIsKvaLeakSimulated @ 0x1403B5C08
 * Callers:
 *     KiEnableKvaShadowing @ 0x14099F860 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}
