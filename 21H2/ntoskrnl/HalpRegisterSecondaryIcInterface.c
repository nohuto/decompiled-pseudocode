/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x14051D9E4
 * Callers:
 *     HaliSetSystemInformation @ 0x14090A644 (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x14051CFB0 (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x14090985C (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
