/*
 * XREFs of KiInitializeNXSupport @ 0x1409986CC
 * Callers:
 *     KiInitializeBootStructures @ 0x140998800 (KiInitializeBootStructures.c)
 * Callees:
 *     KiInitializeNxSupportDiscard @ 0x140A36E54 (KiInitializeNxSupportDiscard.c)
 */

unsigned int KiInitializeNXSupport()
{
  unsigned int result; // eax

  result = KeGetPcr()->Prcb.Number;
  if ( !result )
    return KiInitializeNxSupportDiscard();
  return result;
}
