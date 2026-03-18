/*
 * XREFs of KiIsKvaLeakSimulated @ 0x1403B4588
 * Callers:
 *     KiEnableKvaShadowing @ 0x1409A1F8C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}
