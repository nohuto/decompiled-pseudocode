/*
 * XREFs of KiInitializeNXSupport @ 0x14099D02C
 * Callers:
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 * Callees:
 *     KiInitializeNxSupportDiscard @ 0x140A3B9E4 (KiInitializeNxSupportDiscard.c)
 */

unsigned int KiInitializeNXSupport()
{
  unsigned int result; // eax

  result = KeGetPcr()->Prcb.Number;
  if ( !result )
    return KiInitializeNxSupportDiscard();
  return result;
}
