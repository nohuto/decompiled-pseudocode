/*
 * XREFs of KeIsBugCheckActive @ 0x1403981CC
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x140389E10 (RtlQueryFeatureConfiguration.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x14057FF60 (RtlRegisterFeatureConfigurationChangeNotification.c)
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
