/*
 * XREFs of IovUtilUninitialize @ 0x140A92410
 * Callers:
 *     ViIovPluginUnload @ 0x140601C50 (ViIovPluginUnload.c)
 * Callees:
 *     <none>
 */

void IovUtilUninitialize()
{
  IovUtilVerifierEnabled = 0;
}
