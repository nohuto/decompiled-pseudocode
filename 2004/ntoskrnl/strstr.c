/*
 * XREFs of strstr @ 0x1403CE280
 * Callers:
 *     HalpIommuInitializeDmaGuardPolicy @ 0x1403ACE88 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HalInitializeBios @ 0x1403C1BE0 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x1403C53AC (InbvDetermineFunction.c)
 *     KiDetermineRetpolineEnablement @ 0x1403C9BA0 (KiDetermineRetpolineEnablement.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CC584 (HvlDebuggerSupportInitialize.c)
 *     HvlPhase0Initialize @ 0x14077F23C (HvlPhase0Initialize.c)
 *     SepIsOptionPresent @ 0x140799E9C (SepIsOptionPresent.c)
 *     KiInitializeBootStructures @ 0x140998800 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x14099E0F4 (KiMatchLoadOption.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x140A18354 (CcInitializeBcbProfiler.c)
 *     KiInitializeNxSupportDiscard @ 0x140A36E54 (KiInitializeNxSupportDiscard.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     KeInitializeClock @ 0x140A428AC (KeInitializeClock.c)
 *     KiPerformGroupConfiguration @ 0x140A46590 (KiPerformGroupConfiguration.c)
 *     CmpGetBiosVersion @ 0x140A57B1C (CmpGetBiosVersion.c)
 *     HalpSetPlatformFlags @ 0x140A5C818 (HalpSetPlatformFlags.c)
 *     InbvDriverInitialize @ 0x140A67DE0 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140A67E90 (BvgaDriverInitialize.c)
 *     HalpMiscGetParameters @ 0x140A69688 (HalpMiscGetParameters.c)
 *     HalpProcIsSmtDisabled @ 0x140A69914 (HalpProcIsSmtDisabled.c)
 *     ViInitSystemPhase0 @ 0x140A6C258 (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x140A6DEE4 (MiInitializeBootDefaults.c)
 *     KitpInitAitSampleRate @ 0x140A6E03C (KitpInitAitSampleRate.c)
 *     MiInitializeSystemDefaults @ 0x140A6E768 (MiInitializeSystemDefaults.c)
 *     VhdInitialize @ 0x140A703C0 (VhdInitialize.c)
 *     RamdiskStart @ 0x140A92778 (RamdiskStart.c)
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
