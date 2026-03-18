/*
 * XREFs of KiDisableFgBoostDecayRegistryChangeHandler @ 0x1405108B0
 * Callers:
 *     <none>
 * Callees:
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403B39F0 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     KiGetDisableFgBoostDecayRegKeyHandle @ 0x1403B3A74 (KiGetDisableFgBoostDecayRegKeyHandle.c)
 *     RtlQueryImageFileKeyOption @ 0x1406D0300 (RtlQueryImageFileKeyOption.c)
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
