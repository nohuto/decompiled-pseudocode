/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x1404CC014
 * Callers:
 *     HaliSetSystemInformation @ 0x140861AD4 (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x1404CB5C0 (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x140860D9C (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
