/*
 * XREFs of HalpInterruptGetPriority @ 0x1403A0B5C
 * Callers:
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A0480 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetLineState @ 0x1403A05D8 (HalpInterruptSetLineState.c)
 *     HalpInitializeDeferredErrorVector @ 0x1403A0A28 (HalpInitializeDeferredErrorVector.c)
 *     HalpInitializeCmciVector @ 0x1403A0A98 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403C7394 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpConnectThermalInterrupt @ 0x1404CC1D0 (HalpConnectThermalInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptGetPriority(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // dl
  unsigned int v3; // ecx

  v2 = a2 >> 4;
  if ( v2 <= 2u )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 228);
  if ( 15 - (unsigned int)v2 > v3 )
    return 0LL;
  else
    return v2 + v3 - 15;
}
