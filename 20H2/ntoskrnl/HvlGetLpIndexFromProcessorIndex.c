/*
 * XREFs of HvlGetLpIndexFromProcessorIndex @ 0x1404F05F0
 * Callers:
 *     PpmScaleIdleStateValues @ 0x140398BA4 (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x1403A70D8 (HvlEnlightenProcessor.c)
 *     HvlSharedIsr @ 0x1404F0360 (HvlSharedIsr.c)
 *     HvlSetPlatformIdleState @ 0x1404F672C (HvlSetPlatformIdleState.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408F91A0 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // eax
  int *v4; // rcx

  v1 = 0;
  if ( byte_140C123C0 )
    return a1;
  v4 = HvlpLogicalProcessorRegions;
  if ( !(_DWORD)HvlpLogicalProcessorCount )
    return 0xFFFFFFFFLL;
  while ( v4[6] != a1 )
  {
    ++v1;
    v4 += 30;
    if ( v1 >= (unsigned int)HvlpLogicalProcessorCount )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v4[1];
}
