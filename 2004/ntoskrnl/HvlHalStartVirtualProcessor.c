/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x1404F0060
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x1404EEEC8 (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x14088D1D8 (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(int a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
