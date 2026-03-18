/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x1404CFA24
 * Callers:
 *     HaliSetSystemInformation @ 0x140868814 (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x1404CEFD0 (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x140867ABC (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
