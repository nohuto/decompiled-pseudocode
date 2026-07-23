/*
 * XREFs of KeIsBugCheckActive @ 0x14039AC4C
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x14038C950 (RtlQueryFeatureConfiguration.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x14058E390 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     <none>
 */

char __fastcall KeIsBugCheckActive(unsigned int *a1)
{
  if ( (KiBugCheckActive & 3) == 0 )
    return 0;
  if ( a1 )
    *a1 = (unsigned int)KiBugCheckActive >> 4;
  return 1;
}
