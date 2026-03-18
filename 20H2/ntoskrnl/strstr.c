/*
 * XREFs of strstr @ 0x1403D0F10
 * Callers:
 *     HalpIommuInitializeDmaGuardPolicy @ 0x1403AF470 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HalInitializeBios @ 0x1403C4350 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x1403C7D9C (InbvDetermineFunction.c)
 *     KiDetermineRetpolineEnablement @ 0x1403CC7E0 (KiDetermineRetpolineEnablement.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CF220 (HvlDebuggerSupportInitialize.c)
 *     HvlPhase0Initialize @ 0x14078C780 (HvlPhase0Initialize.c)
 *     SepIsOptionPresent @ 0x1407A91CC (SepIsOptionPresent.c)
 *     KiInitializeBootStructures @ 0x14099E840 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x1409A41F4 (KiMatchLoadOption.c)
 *     KdInitSystem @ 0x1409B8160 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x140A1E354 (CcInitializeBcbProfiler.c)
 *     KiInitializeNxSupportDiscard @ 0x140A3CE54 (KiInitializeNxSupportDiscard.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     KeInitializeClock @ 0x140A48B4C (KeInitializeClock.c)
 *     KiPerformGroupConfiguration @ 0x140A4C82C (KiPerformGroupConfiguration.c)
 *     CmpGetBiosVersion @ 0x140A5819C (CmpGetBiosVersion.c)
 *     HalpSetPlatformFlags @ 0x140A63B78 (HalpSetPlatformFlags.c)
 *     InbvDriverInitialize @ 0x140A6E608 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140A6E6C0 (BvgaDriverInitialize.c)
 *     HalpMiscGetParameters @ 0x140A70008 (HalpMiscGetParameters.c)
 *     ViInitSystemPhase0 @ 0x140A72B38 (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x140A7468C (MiInitializeBootDefaults.c)
 *     KitpInitAitSampleRate @ 0x140A7481C (KitpInitAitSampleRate.c)
 *     MiInitializeSystemDefaults @ 0x140A74F48 (MiInitializeSystemDefaults.c)
 *     VhdInitialize @ 0x140A767F8 (VhdInitialize.c)
 *     RamdiskStart @ 0x140A983D8 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

char *__cdecl strstr(const char *Str, const char *SubStr)
{
  char *v3; // r8
  char v5; // al
  signed __int64 i; // r9
  const char *v7; // rdx

  v3 = (char *)Str;
  if ( !*SubStr )
    return (char *)Str;
  v5 = *Str;
  if ( !*Str )
    return 0LL;
  for ( i = Str - SubStr; ; ++i )
  {
    v7 = SubStr;
    if ( v5 )
      break;
LABEL_9:
    if ( !*v7 )
      return v3;
    v5 = *++v3;
    if ( !*v3 )
      return 0LL;
  }
  while ( *v7 )
  {
    if ( v7[i] == *v7 )
    {
      ++v7;
      if ( v7[i] )
        continue;
    }
    goto LABEL_9;
  }
  return v3;
}
