/*
 * XREFs of KiInitializeNXSupport @ 0x14099E70C
 * Callers:
 *     KiInitializeBootStructures @ 0x14099E840 (KiInitializeBootStructures.c)
 * Callees:
 *     KiInitializeNxSupportDiscard @ 0x140A3CE54 (KiInitializeNxSupportDiscard.c)
 */

unsigned int KiInitializeNXSupport()
{
  unsigned int result; // eax

  result = KeGetPcr()->Prcb.Number;
  if ( !result )
    return KiInitializeNxSupportDiscard();
  return result;
}
