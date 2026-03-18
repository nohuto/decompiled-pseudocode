/*
 * XREFs of KiDisableFgBoostDecayRegistryChangeHandler @ 0x14050C930
 * Callers:
 *     <none>
 * Callees:
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403AB400 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     KiGetDisableFgBoostDecayRegKeyHandle @ 0x1403AB484 (KiGetDisableFgBoostDecayRegKeyHandle.c)
 *     RtlQueryImageFileKeyOption @ 0x1406DA510 (RtlQueryImageFileKeyOption.c)
 */

int KiDisableFgBoostDecayRegistryChangeHandler()
{
  int result; // eax

  result = KiGetDisableFgBoostDecayRegKeyHandle();
  if ( result >= 0 )
  {
    result = RtlQueryImageFileKeyOption(KiDisableFgBoostDecayRegistryHandle, 4, 0LL);
    if ( result >= 0 )
    {
      KiForegrounBoostVelocityFlag = 0;
      return KiRegisterForDisableFgBoostDecayRegistryNotification();
    }
  }
  return result;
}
