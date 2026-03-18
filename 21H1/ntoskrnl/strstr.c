/*
 * XREFs of strstr @ 0x1403CD440
 * Callers:
 *     HalpIommuInitializeDmaGuardPolicy @ 0x1403A5DC8 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HalInitializeBios @ 0x1403C0D20 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x1403C443C (InbvDetermineFunction.c)
 *     KiDetermineRetpolineEnablement @ 0x1403C8D90 (KiDetermineRetpolineEnablement.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CB78C (HvlDebuggerSupportInitialize.c)
 *     HvlPhase0Initialize @ 0x14077FA4C (HvlPhase0Initialize.c)
 *     SepIsOptionPresent @ 0x1407A6E6C (SepIsOptionPresent.c)
 *     KiInitializeBootStructures @ 0x1409977A0 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x14099C954 (KiMatchLoadOption.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x140A18354 (CcInitializeBcbProfiler.c)
 *     KiInitializeNxSupportDiscard @ 0x140A37964 (KiInitializeNxSupportDiscard.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     KiPerformGroupConfiguration @ 0x140A40D34 (KiPerformGroupConfiguration.c)
 *     CmpGetBiosVersion @ 0x140A51E1C (CmpGetBiosVersion.c)
 *     HalpSetPlatformFlags @ 0x140A5D778 (HalpSetPlatformFlags.c)
 *     InbvDriverInitialize @ 0x140A67958 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140A67A10 (BvgaDriverInitialize.c)
 *     HalpMiscGetParameters @ 0x140A69208 (HalpMiscGetParameters.c)
 *     HalpProcIsSmtDisabled @ 0x140A69494 (HalpProcIsSmtDisabled.c)
 *     KeInitializeClock @ 0x140A69C98 (KeInitializeClock.c)
 *     ViInitSystemPhase0 @ 0x140A6BFC8 (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x140A6D83C (MiInitializeBootDefaults.c)
 *     KitpInitAitSampleRate @ 0x140A6D994 (KitpInitAitSampleRate.c)
 *     MiInitializeSystemDefaults @ 0x140A6E070 (MiInitializeSystemDefaults.c)
 *     VhdInitialize @ 0x140A6F7F8 (VhdInitialize.c)
 *     RamdiskStart @ 0x140A93068 (RamdiskStart.c)
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
