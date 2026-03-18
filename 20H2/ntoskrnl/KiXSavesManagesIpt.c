/*
 * XREFs of KiXSavesManagesIpt @ 0x140518AC4
 * Callers:
 *     KiGetSavedIptState @ 0x140518690 (KiGetSavedIptState.c)
 *     KiQueryIptSupport @ 0x1409B27A0 (KiQueryIptSupport.c)
 * Callees:
 *     <none>
 */

bool KiXSavesManagesIpt()
{
  return (KeFeatureBits & 0x800000) != 0 && (MEMORY[0xFFFFF780000005F0] & 0x100) != 0;
}
