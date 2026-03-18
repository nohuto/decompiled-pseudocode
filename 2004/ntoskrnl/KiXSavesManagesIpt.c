/*
 * XREFs of KiXSavesManagesIpt @ 0x140515194
 * Callers:
 *     KiGetSavedIptState @ 0x140514D60 (KiGetSavedIptState.c)
 *     KiQueryIptSupport @ 0x1409AC830 (KiQueryIptSupport.c)
 * Callees:
 *     <none>
 */

bool KiXSavesManagesIpt()
{
  return (KeFeatureBits & 0x800000) != 0 && (MEMORY[0xFFFFF780000005F0] & 0x100) != 0;
}
