/*
 * XREFs of KiDisableFgBoostDecayRegistryChangeHandler @ 0x14050CF80
 * Callers:
 *     <none>
 * Callees:
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403B1080 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     KiGetDisableFgBoostDecayRegKeyHandle @ 0x1403B1104 (KiGetDisableFgBoostDecayRegKeyHandle.c)
 *     RtlQueryImageFileKeyOption @ 0x1406FD590 (RtlQueryImageFileKeyOption.c)
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
