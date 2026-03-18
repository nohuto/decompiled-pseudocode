/*
 * XREFs of KiIsKvaLeakSimulated @ 0x1403C25A4
 * Callers:
 *     KiEnableKvaShadowing @ 0x140A59FA4 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}
