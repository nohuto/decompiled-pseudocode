/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x1404CC4C4
 * Callers:
 *     HaliSetSystemInformation @ 0x140862DF4 (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x1404CBA70 (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x14086209C (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
