/*
 * XREFs of HalpInterruptGetPriority @ 0x1403A12EC
 * Callers:
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A0C10 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetLineState @ 0x1403A0D68 (HalpInterruptSetLineState.c)
 *     HalpInitializeDeferredErrorVector @ 0x1403A11B8 (HalpInitializeDeferredErrorVector.c)
 *     HalpInitializeCmciVector @ 0x1403A1228 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403C81A4 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpConnectThermalInterrupt @ 0x1404CC680 (HalpConnectThermalInterrupt.c)
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
