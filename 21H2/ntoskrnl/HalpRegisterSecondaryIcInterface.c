/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x1404D13F4
 * Callers:
 *     HaliSetSystemInformation @ 0x140866424 (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x1404D09A0 (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x1408656CC (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
