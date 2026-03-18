/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x1404EFA10
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x1404EE878 (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x14088BEB8 (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(int a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
