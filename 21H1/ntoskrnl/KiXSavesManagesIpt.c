/*
 * XREFs of KiXSavesManagesIpt @ 0x140514B44
 * Callers:
 *     KiGetSavedIptState @ 0x140514710 (KiGetSavedIptState.c)
 *     KiQueryIptSupport @ 0x1409AB9D0 (KiQueryIptSupport.c)
 * Callees:
 *     <none>
 */

bool KiXSavesManagesIpt()
{
  return (KeFeatureBits & 0x800000) != 0 && (MEMORY[0xFFFFF780000005F0] & 0x100) != 0;
}
