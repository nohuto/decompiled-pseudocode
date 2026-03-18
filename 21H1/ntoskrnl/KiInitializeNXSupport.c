/*
 * XREFs of KiInitializeNXSupport @ 0x140997668
 * Callers:
 *     KiInitializeBootStructures @ 0x1409977A0 (KiInitializeBootStructures.c)
 * Callees:
 *     KiInitializeNxSupportDiscard @ 0x140A37964 (KiInitializeNxSupportDiscard.c)
 */

unsigned int KiInitializeNXSupport()
{
  unsigned int result; // eax

  result = KeGetPcr()->Prcb.Number;
  if ( !result )
    return KiInitializeNxSupportDiscard();
  return result;
}
