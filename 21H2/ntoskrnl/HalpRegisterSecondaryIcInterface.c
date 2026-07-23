/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x1404D1634
 * Callers:
 *     HaliSetSystemInformation @ 0x140866584 (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x1404D0BE0 (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x14086582C (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
