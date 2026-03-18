/*
 * XREFs of HalpInterruptGetPriority @ 0x1403B0D74
 * Callers:
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B0670 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetLineState @ 0x1403B07C8 (HalpInterruptSetLineState.c)
 *     HalpInitializeDeferredErrorVector @ 0x1403B0C40 (HalpInitializeDeferredErrorVector.c)
 *     HalpInitializeCmciVector @ 0x1403B0CB0 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403D59D4 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpConnectThermalInterrupt @ 0x14051DB60 (HalpConnectThermalInterrupt.c)
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
  v3 = *(_DWORD *)(a1 + 236);
  if ( 15 - (unsigned int)v2 > v3 )
    return 0LL;
  else
    return v2 + v3 - 15;
}
