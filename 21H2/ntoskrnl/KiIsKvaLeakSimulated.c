/*
 * XREFs of KiIsKvaLeakSimulated @ 0x1403B5D78
 * Callers:
 *     KiEnableKvaShadowing @ 0x1409A0790 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}
