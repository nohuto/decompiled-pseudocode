/*
 * XREFs of KiXSavesManagesIpt @ 0x14051A844
 * Callers:
 *     KiGetSavedIptState @ 0x14051A410 (KiGetSavedIptState.c)
 *     KiQueryIptSupport @ 0x1409B05D0 (KiQueryIptSupport.c)
 * Callees:
 *     <none>
 */

bool KiXSavesManagesIpt()
{
  return (KeFeatureBits & 0x800000) != 0 && (MEMORY[0xFFFFF780000005F0] & 0x100) != 0;
}
